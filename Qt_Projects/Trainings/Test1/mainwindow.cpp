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

// Обработчик события (нажатие на кнопку)
void MainWindow::on_pushButton_2_clicked()
{
  // При нажатии на кнопку изменить текст
    ui->label->setText("Что ты наделал!");
}
