#include "barcode_generator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    barcode_generator w;
    w.show();
    return a.exec();
}
