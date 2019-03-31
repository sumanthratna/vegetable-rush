#include <QApplication>
#include <QMainWindow>
#include <QSurfaceFormat>
#include <QFontDatabase>
#include "mainwindow.hpp"
#include "file_settings.hpp"

int main(int argc, char ** argv)
{
  QApplication a(argc, argv);
  Settings::programPath = a.applicationDirPath().toStdString();

  QSurfaceFormat format;
  format.setDepthBufferSize(24);
  format.setStencilBufferSize(8);
  QSurfaceFormat::setDefaultFormat(format);

  QFontDatabase::addApplicationFont(":/data/fonts/arcade.regular.ttf");

  MainWindow mw;
//  a.setApplicationName("SUMANTH RATNA, ADITYA MENACHERY, STEVEN LI (Period 5)");
  mw.show();
  return a.exec();
}
