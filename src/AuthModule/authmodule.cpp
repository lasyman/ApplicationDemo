#include "authmodule.h"

AuthModule::AuthModule()
{
    moveToThread(&m_thread);
    m_thread.start();
}

void AuthModule::onLogin(QString strId, QString strPw)
{
    if (!strId.isEmpty() && !strPw.isEmpty())
    {
        if (strId == "admin" && strPw == "123456")
        {
            emit sigLogin(true);
            return;
        }
    }
    emit sigLogin(false);
}
