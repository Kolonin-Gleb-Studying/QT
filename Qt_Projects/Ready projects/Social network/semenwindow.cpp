#include "semenwindow.h"
#include "ui_semenwindow.h"

SemenWindow::SemenWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::SemenWindow)
{
  ui->setupUi(this);
}

SemenWindow::~SemenWindow()
{
  delete ui;
}
