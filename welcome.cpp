/*
 * Copyright (c) 2013        Anke Boersma <demm@kaosx.us>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */

#include <QtGui> 
#include "welcome.h"
#include <QProcess>
 
// if we include <QtGui> there is no need to include every class used: <QString>, <QFileDialog>,...
 
welcome::welcome(QWidget *parent)
{
    setupUi(this); // this sets up GUI
    
    Qt::WindowFlags flags;
    flags = Qt::Window
            | Qt::WindowMinimizeButtonHint
            | Qt::WindowCloseButtonHint;
	    setFixedSize(550,400);
    setWindowFlags( flags );
 
    // signals/slots mechanism in action
    connect( pushButton_install, SIGNAL( clicked() ), this, SLOT( InstallKaOS() ) ); 
    connect( pushButton_passw, SIGNAL( clicked() ), this, SLOT( Passwords() ) ); 
    connect( pushButton_about, SIGNAL( clicked() ), this, SLOT( About() ) ); 
    connect( pushButton_package, SIGNAL( clicked() ), this, SLOT( PackageList() ) ); 
    connect( pushButton_guide, SIGNAL( clicked() ), this, SLOT( Guide() ) ); 
    connect( pushButton_forum, SIGNAL( clicked() ), this, SLOT( Forum() ) ); 
}
 
 
void welcome::InstallKaOS() 
{
    QProcess::startDetached("/usr/bin/launch-installer.sh");
}
 
 
void welcome::Passwords() 
{
    QMessageBox::about(this,"Passwords",
                "Correct passwords for use in the live session:\n"
                "root: root / root\n"
		"user: live / live\n"
                "Hope you enjoy :)\n");
}
 
 
void welcome::About() 
{
    QDesktopServices::openUrl(QUrl("file:///home/live/Desktop/info/about.pdf"));
}
 
 
void welcome::PackageList() 
{
    QProcess::startDetached("/home/live/Desktop/info/packages.sh");
}

void welcome::Guide() 
{
    QDesktopServices::openUrl(QUrl("file:///home/live/Desktop/info/guide.pdf"));
}

void welcome::Forum() 
{
    QDesktopServices::openUrl(QUrl("http://kaosx.us/phpBB3"));
}
