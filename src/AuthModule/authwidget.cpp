#include "authwidget.h"
#include "ui_authwidget.h"
#include "authmodule.h"

AuthWidget::AuthWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AuthWidget)
{
    ui->setupUi(this);
    initial();
    show();
}

AuthWidget::~AuthWidget()
{
    delete ui;
}

void AuthWidget::initial()
{
    m_authModule = new AuthModule();
    connect(this, &AuthWidget::sigLoginClicked, m_authModule, &AuthModule::onLogin);
    connect(m_authModule, &AuthModule::sigLogin, this, &AuthWidget::sigLogin);
    connect(ui->btnLogin, &QPushButton::clicked, [&](){
        QString strId = ui->cmbIDs->currentText();
        QString strPw = ui->lnePW->text().trimmed();
        emit sigLoginClicked(strId, strPw);
    });
}
