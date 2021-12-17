#ifndef GLEBWINDOW_H
#define GLEBWINDOW_H

#include <QMainWindow>

namespace Ui {
  class GlebWindow;
}

class GlebWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit GlebWindow(QWidget *parent = nullptr);
  ~GlebWindow();

private:
  Ui::GlebWindow *ui;
};

#endif // GLEBWINDOW_H
