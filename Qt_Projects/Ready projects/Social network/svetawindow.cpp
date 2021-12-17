#include "svetawindow.h"
#include "ui_svetawindow.h"

SvetaWindow::SvetaWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::SvetaWindow)
{
  ui->setupUi(this);
}

SvetaWindow::~SvetaWindow()
{
  delete ui;
}
