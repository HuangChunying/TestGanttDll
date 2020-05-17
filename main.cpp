#include "mainwindow.h"
#include <QApplication>
#include "ganttchardll.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

    Ganttchardll ganttchart;
    QString htmlpath ="D:/Qt_project/QtCommDialog/demo1/a.html";
    ganttchart.setHtmlPath(htmlpath);
    ganttchart.show();

    return a.exec();
}
