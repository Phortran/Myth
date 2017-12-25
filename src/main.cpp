#include "guibase.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GUIbase w;
    w.show();

    return a.exec();
}
