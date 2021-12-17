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


void MainWindow::on_radioButton_clicked() // Кнопка Глеба
{
    if(ui->radioButton->isChecked())
      {
        ui->statusbar->showMessage("Привет, Глеб!");
      }
}


void MainWindow::on_radioButton_2_clicked() // Кнопка Лёвы
{
  if(ui->radioButton_2->isChecked())
    {
      ui->statusbar->showMessage("Привет, Лев!");
    }
}


void MainWindow::on_radioButton_3_clicked()
{
  if(ui->radioButton_3->isChecked())
    {
      ui->statusbar->showMessage("Привет, Семён!");
    }
}



void MainWindow::on_radioButton_4_clicked()
{
  if(ui->radioButton_4->isChecked())
    {
      ui->statusbar->showMessage("Привет, Света!");
    }
}
