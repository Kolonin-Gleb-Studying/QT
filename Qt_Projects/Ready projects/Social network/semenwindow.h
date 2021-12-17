#ifndef SEMENWINDOW_H
#define SEMENWINDOW_H

#include <QMainWindow>

namespace Ui {
  class SemenWindow;
}

class SemenWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit SemenWindow(QWidget *parent = nullptr);
  ~SemenWindow();

private:
  Ui::SemenWindow *ui;
};

#endif // SEMENWINDOW_H
