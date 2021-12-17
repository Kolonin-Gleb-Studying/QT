#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "QMessageBox"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  setWindowTitle("Социальная сеть");
}

MainWindow::~MainWindow()
{
  delete ui;
}


void MainWindow::on_pushButton_clicked()
{
  QString login = ui->Login->text();
  QString password = ui->Password->text();

  // Проверка введённых данных, на существование в базе данных

  if (login == "Gleb" && password == "22112004")
    {
      glebwindow = new GlebWindow(this);
      glebwindow->show();
      ui->statusbar->showMessage("Вход выполнен");

    }
  else if (login == "Lev" && password == "10082001")
    {
      levwindow = new LevWindow(this);
      levwindow->show();

    }
  else if (login == "Sveta" && password == "22111971")
    {
      svetawindow = new SvetaWindow(this);
      svetawindow->show();
    }
  else if (login == "Semen" && password == "06071973")
    {
      semenwindow = new SemenWindow(this);
      semenwindow->show();
    }
  else
    {
      QMessageBox::critical(this, "Вход не выполнен!", "Неверно введён логин или пароль! ");
      ui->statusbar->showMessage("Вход не выполнен! ");
    }

}
