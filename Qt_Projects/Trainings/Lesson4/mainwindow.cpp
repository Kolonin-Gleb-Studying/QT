#include "mainwindow.h"
#include "ui_mainwindow.h"

// #include "secondwindow.h" // Для перехода на 2 окно

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



void MainWindow::on_pushButton_clicked()
{
  hide(); // При открытии 2 окна спрятать 1

  // Выделяем память под указатель
  window = new SecondWindow(this); // в () указан родительский класс
  window->show();
  // При открытии 2 окна 1 становится неактивным
}
