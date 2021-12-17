#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "QMessageBox"
#include "QDebug"
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
  // 1 Вопрос
   QMessageBox::StandardButton answer1 =
       QMessageBox::question(this, "1 Вопрос ", "Как ваше настроение?", QMessageBox::No | QMessageBox::Yes);

  // Обработка 1 вопроса
   if (answer1 == QMessageBox::Yes)
   {
     qDebug() << "Отлично!";
   }
   else
     {
       qDebug() << "Не растраивайтесь!";
     }

}

