#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QEvent>
#include "settings.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
protected:
    void closeEvent(QCloseEvent* event) override;
    void changeEvent(QEvent* event) override;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    virtual void translateWidgets() = 0;
};
#endif // MAINWINDOW_H
