#ifndef LEVWINDOW_H
#define LEVWINDOW_H

#include <QMainWindow>

namespace Ui {
  class LevWindow;
}

class LevWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit LevWindow(QWidget *parent = nullptr);
  ~LevWindow();

private:
  Ui::LevWindow *ui;
};

#endif // LEVWINDOW_H
