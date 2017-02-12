#include "mainwindow.h"
#include "ui_mainwindow.h"

MyClass::MyClass(QObject *parent)
    : QObject(parent)
{

}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWidget* wdg = new QWidget(this);
    MyClass* cls = new MyClass(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
