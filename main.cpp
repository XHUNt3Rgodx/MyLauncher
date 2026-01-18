#include <QApplication>
#include "launcher.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Launcher w;
    w.show();

    return app.exec();
}
