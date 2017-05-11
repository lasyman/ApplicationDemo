#ifndef DEMO_H
#define DEMO_H

#include <QMainWindow>

namespace Ui {
class Demo;
}

class Demo : public QMainWindow
{
    Q_OBJECT

public:
    explicit Demo(QWidget *parent = 0);
    ~Demo();

private:
    Ui::Demo *ui;
};

#endif // DEMO_H
