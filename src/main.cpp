#include "barcode_generator.hpp"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    barcode_generator w;
    w.show();
    return a.exec();
}
