#ifndef WELCOME_H
#define WELCOME_H
 
#include "ui_welcome.h"
 
 
class welcome : public QWidget, private Ui::welcomeDLG
{
    Q_OBJECT
 
public:
    welcome(QWidget *parent = 0);
 
 
public slots:
    void InstallKaOS();
    void Passwords();
    void About();
    void PackageList();
    void Guide();
    void Forum();
};
 
 
#endif
