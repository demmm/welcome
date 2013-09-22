HEADERS     = welcome.h 
SOURCES     = welcome.cpp main.cpp
FORMS       = welcome.ui

# install
target.path = /usr/bin
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS *.pro
sources.path = .
desktop.path = /usr/share/applications
desktop.files += welcome.desktop
icon.files += welcome.png
icon.path += /usr/share/pixmaps
INSTALLS += target desktop icon
