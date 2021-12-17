#include "mainwindow.h"
#include <QApplication>
#include <QLabel> // библиотека для текстовых надписей
int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  // Показ основного окна
  MainWindow w;
  w.show();

/*fdgadfgadfg
fgdsfgdfgdfdf*/
// Создание текстовой надписи

  // QLabel - тип данных, *label - переменная типа указатель, = new - выделение памяти под переменную
  // QLabel("Привет! ") - содержимое переменной
  //QLabel *label = new QLabel("Привет! ");

// Метод, задающий размер окна в пикселях
  //label->resize(400, 400);

// Отображtние переменной label
  //label->show();



  return a.exec();
}
