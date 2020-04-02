#ifndef APPLICATION_H
#define APPLICATION_H

#include <QApplication>
#include <QLocalServer>
#include <QLocalSocket>
#include <QDataStream>
#include "settings.h"

class Application : public QApplication
{
    Q_OBJECT
private:
    bool uniqueInstance = false;
    int connectionTimeout = 1000;
    QLocalServer localServer;

public:
    Application(QString const& applicationName,
                QString const& organizationDomain,
                QString const& organizationName,
                int argc, char *argv[]);

    virtual int startRunning();
    QString getUniqueLocalServerName() const;
    void newConnectionHandler();
    void readyReadHandler();
    virtual void run() = 0;
    virtual void processArguments(QStringList const& args) = 0;

    void setUniqueInstance(bool b) { this->uniqueInstance = b; }
    void setConnectionTimeout(int i) { this->connectionTimeout = i; }

signals:

};

#endif // APPLICATION_H
