#include "glebwindow.h"



#include "ui_glebwindow.h"

GlebWindow::GlebWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::GlebWindow)
{
  ui->setupUi(this);
}

GlebWindow::~GlebWindow()
{
  delete ui;
}
