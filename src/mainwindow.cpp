#include "mainwindow.h"

void MainWindow::closeEvent(QCloseEvent* event)
{
    Settings::instance()->setValue("mainWindow/geometry", this->saveGeometry());
    Settings::instance()->setValue("mainWindow/state", this->saveState());
    QMainWindow::closeEvent(event);
}

void MainWindow::changeEvent(QEvent* event)
{
    if(event->type() == QEvent::LanguageChange)
    {
        this->translateWidgets();
    }
    QMainWindow::changeEvent(event);
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->restoreGeometry(Settings::instance()->value("mainWindow/geometry").toByteArray());
    this->restoreState(Settings::instance()->value("mainWindow/state").toByteArray());
}

MainWindow::~MainWindow()
{

}

