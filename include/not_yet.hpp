//
// Created by adamd on 12/5/23.
//

#pragma once
#include <QDialog>


namespace mainwindow {
class NotYet : public QDialog {
    Q_OBJECT

public:

    explicit NotYet(QWidget* parent = nullptr);

    ~NotYet() override = default;

};

}


