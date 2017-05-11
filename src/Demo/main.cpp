#include "demo.h"
#include <QApplication>
#include <QEventLoop>
#include "authwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    while (true)
    {
        QEventLoop el;
        AuthWidget auth;
        el.exec();
    }

    return a.exec();
}
