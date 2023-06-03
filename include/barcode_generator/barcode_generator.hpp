#pragma once

#include <QtWidgets/QMainWindow>
#include <QPointer>
#include <qglobal.h>

QT_BEGIN_NAMESPACE
namespace Ui { class barcode_generator; } ;
QT_END_NAMESPACE

class barcode_generator : public QMainWindow
{
    Q_OBJECT
 
public:
    barcode_generator(QWidget *parent = nullptr);
    ~barcode_generator();

private:
    QPointer<Ui::barcode_generator> ui;
};
