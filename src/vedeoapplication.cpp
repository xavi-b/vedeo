#include "vedeoapplication.h"

VedeoApplication::VedeoApplication(QString const& applicationName,
                                   QString const& organizationDomain,
                                   QString const& organizationName,
                                   int& argc, char *argv[])
    : Application(applicationName,
                  organizationDomain,
                  organizationName,
                  argc, argv)
{

}

VedeoApplication::~VedeoApplication()
{
    if(this->mainWindow)
        delete this->mainWindow;
}

void VedeoApplication::run()
{
    this->processArguments(this->arguments());

    this->mainWindow = new VedeoMainWindow;
    this->mainWindow->show();
}

void VedeoApplication::processArguments(QStringList const& args)
{

}
