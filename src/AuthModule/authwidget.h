#ifndef AUTHWIDGET_H
#define AUTHWIDGET_H
#include "authmodule_global.h"

#include <QWidget>

namespace Ui {
class AuthWidget;
}

class AUTHMODULESHARED_EXPORT AuthWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AuthWidget(QWidget *parent = 0);
    ~AuthWidget();

private:
    Ui::AuthWidget *ui;
};

#endif // AUTHWIDGET_H
