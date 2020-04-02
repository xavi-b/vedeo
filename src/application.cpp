#include "application.h"

Application::Application(QString const& applicationName,
                         QString const& organizationDomain,
                         QString const& organizationName,
                         int argc, char *argv[])
    : QApplication(argc, argv)
{
    this->setApplicationName(applicationName);
    this->setOrganizationDomain(organizationDomain);
    this->setOrganizationName(organizationName);
}

int Application::startRunning()
{
    if(this->uniqueInstance)
    {
        QLocalSocket localSocket;
        localSocket.connectToServer(this->getUniqueLocalServerName());
        if(localSocket.waitForConnected(this->connectionTimeout))
        {
            QByteArray data;
            QDataStream ds(&data, QIODevice::WriteOnly);
            ds << this->arguments();
            localSocket.write(data);
            return localSocket.waitForBytesWritten(this->connectionTimeout) ? 0 : 1;
        }
        else
        {
            localServer.listen(this->getUniqueLocalServerName());
            connect(&localServer, &QLocalServer::newConnection, this, &Application::newConnectionHandler);
        }
    }

    this->run();

    return this->exec();
}

QString Application::getUniqueLocalServerName() const
{
    return QString("%1_%2_%3")
            .arg(this->applicationName())
            .arg(this->organizationDomain())
            .arg(this->organizationName());
}

void Application::newConnectionHandler()
{
    QLocalSocket* localSocket = localServer.nextPendingConnection();
    connect(localSocket, &QLocalSocket::readyRead, this, &Application::readyReadHandler);
    connect(localSocket, &QLocalSocket::disconnected, localSocket, &QLocalSocket::deleteLater);
}

void Application::readyReadHandler()
{
    QLocalSocket* localSocket = qobject_cast<QLocalSocket*>(sender());
    if(localSocket)
    {
        QStringList arguments;
        QByteArray data = localSocket->readAll();
        QDataStream ds(data);
        ds >> arguments;
        this->processArguments(arguments);
    }
}
