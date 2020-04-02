#ifndef VEDEOMAINWINDOW_H
#define VEDEOMAINWINDOW_H

#include "mainwindow.h"

class VedeoMainWindow : public MainWindow
{
    Q_OBJECT
public:
    VedeoMainWindow(QWidget *parent = nullptr);

    virtual void translateWidgets() override;

};

#endif // VEDEOMAINWINDOW_H
