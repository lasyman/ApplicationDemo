#include "demo.h"
#include <QApplication>
#include <QEventLoop>
#include "authwidget.h"
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    while (true)
    {
        QEventLoop el;
        AuthWidget auth;
        QObject::connect(&auth, &AuthWidget::sigLogin, [&](bool bSuccess){
            if (bSuccess)
            {
                auth.hide();
                el.quit();
            }
            else
                QMessageBox::warning(&auth, "warning", "login failed, Id or pw is not correct!");
        });
        el.exec();
        Demo demo;
        demo.show();
        el.exec();
    }

    return a.exec();
}
