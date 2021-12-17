#include "levwindow.h"
#include "ui_levwindow.h"

LevWindow::LevWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::LevWindow)
{
  ui->setupUi(this);
}

LevWindow::~LevWindow()
{
  delete ui;
}
