#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->label,SIGNAL(clicked()),SLOT(sl_ClickedLabel()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::sl_ClickedLabel()
{
    QMessageBox::information(this,"Welcome","Hello ! you clicked a QLabel.");
}
