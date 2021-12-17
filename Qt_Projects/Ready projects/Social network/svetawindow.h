#ifndef SVETAWINDOW_H
#define SVETAWINDOW_H

#include <QMainWindow>

namespace Ui {
  class SvetaWindow;
}

class SvetaWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit SvetaWindow(QWidget *parent = nullptr);
  ~SvetaWindow();

private:
  Ui::SvetaWindow *ui;
};

#endif // SVETAWINDOW_H
