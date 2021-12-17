#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);
}

MainWindow::~MainWindow()
{
  delete ui;
}


void MainWindow::on_action_triggered()
{
    ui->statusbar->showMessage("Создан новый файл");
}

void MainWindow::on_action_2_triggered()
{
    ui->statusbar->showMessage("Выход из программы");

    QApplication::quit();
}
