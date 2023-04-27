#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_barcode_generator.h"

class barcode_generator : public QMainWindow
{
    Q_OBJECT

public:
    barcode_generator(QWidget *parent = nullptr);
    ~barcode_generator();

private:
    Ui::barcode_generatorClass ui;
};
