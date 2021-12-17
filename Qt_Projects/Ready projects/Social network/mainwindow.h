#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "glebwindow.h"
#include "levwindow.h"
#include "svetawindow.h"
#include "semenwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private slots:
  void on_pushButton_clicked();

private:
  Ui::MainWindow *ui;

  // Окна
GlebWindow *glebwindow;
LevWindow *levwindow;
SvetaWindow *svetawindow;
SemenWindow *semenwindow;


};
#endif // MAINWINDOW_H
