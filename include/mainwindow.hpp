//
// Created by adamd on 12/5/23.
//

#pragma once


#include <qpointer.h>

#include <QWidget>
#include <QPushButton>

#include "not_yet.hpp"

namespace mainwindow {

class MainWindow : public QWidget {
Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);

    virtual ~MainWindow() = default;

private:
    auto connect() -> void;

    QPointer<QPushButton> select_all_;
    QPointer<QPushButton> close_;
    QPointer<NotYet> not_yet_;
};

} // mainwindow

