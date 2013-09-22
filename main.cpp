#include <QApplication>
 
#include "welcome.h"
 
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    welcome *dialog = new welcome;
 
    dialog->show();
    return app.exec();
}
