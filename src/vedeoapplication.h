#ifndef VEDEOAPPLICATION_H
#define VEDEOAPPLICATION_H

#include "application.h"
#include "vedeomainwindow.h"

class VedeoApplication : public Application
{
    Q_OBJECT
private:
    VedeoMainWindow* mainWindow = nullptr;

public:
    VedeoApplication(QString const& applicationName,
                     QString const& organizationDomain,
                     QString const& organizationName,
                     int argc, char *argv[]);
    ~VedeoApplication();

    virtual void run() override;
    virtual void processArguments(QStringList const& args) override;
};

#endif // VEDEOAPPLICATION_H
