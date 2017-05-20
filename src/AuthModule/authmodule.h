#ifndef AUTHMODULE_H
#define AUTHMODULE_H

#include "authmodule_global.h"
#include <QObject>
#include <QThread>

class AuthModule : public QObject
{
    Q_OBJECT
public:
    AuthModule();

Q_SIGNALS:
    void sigLogin(bool);//true accept, false reject

public slots:
    void onLogin(QString strId, QString strPw);

private:
    QThread m_thread;
};

#endif // AUTHMODULE_H
