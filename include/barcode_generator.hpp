#pragma once

#include <QtWidgets/QMainWindow>

class barcode_generator : public QMainWindow
{
    Q_OBJECT

public:
    barcode_generator(QWidget *parent = nullptr);
    ~barcode_generator();

private:
};
