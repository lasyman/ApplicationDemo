#ifndef AUTHWIDGET_H
#define AUTHWIDGET_H
#include "authmodule_global.h"

#include <QWidget>

namespace Ui {
class AuthWidget;
}


class AuthModule;
class AUTHMODULESHARED_EXPORT AuthWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AuthWidget(QWidget *parent = 0);
    ~AuthWidget();

private:
    void initial();

Q_SIGNALS:
    void sigLoginClicked(QString,QString);
    void sigLogin(bool);

private:
    Ui::AuthWidget *ui;
    AuthModule *m_authModule;
};

#endif // AUTHWIDGET_H
