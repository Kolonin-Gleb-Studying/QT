#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "secondwindow.h" // для откр 2 окна

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

  // Указатель на 2 окно
  SecondWindow *window;



};
#endif // MAINWINDOW_H
