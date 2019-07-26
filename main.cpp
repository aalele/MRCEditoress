#include "mainwindow.h"
#include <QApplication>
#include <QCommandLineParser>

int main(int argc, char *argv[])
{
    QCoreApplication::setOrganizationName("ZJU CAD&CG");
    QCoreApplication::setApplicationName("EMExplorer");
    QApplication a(argc, argv);

    QCommandLineParser parser;
    parser.addOptions({
        {QStringLiteral("f"), QStringLiteral("Slice data or marks data file path."), QStringLiteral("path")},
        {QStringLiteral("s"), QStringLiteral("Open a main window which only has slice view.")},
        {QStringLiteral("v"), QStringLiteral("Open a window which only has a volume view.")},
        {QStringLiteral("m"), QStringLiteral("Mark data file path"),QStringLiteral("path")},
        {QStringLiteral("l"), QStringLiteral("Open a slice window which has marking function")}
    });
    parser.process(a);

    MainWindow w;
    w.show();
    return a.exec();
}
