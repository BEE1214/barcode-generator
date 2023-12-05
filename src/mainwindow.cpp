//
// Created by adamd on 12/5/23.
//

#include "..\include\mainwindow.hpp"
#include "../include/not_yet.h"

#include <QVBoxLayout>


namespace mainwindow {
    MainWindow::MainWindow(QWidget* parent) : QWidget(parent) {
        this->setMinimumSize(400,400);
        const QPointer<QGridLayout> basic_layout = new QGridLayout(this);
        const QPointer<QHBoxLayout> left_layout = new QHBoxLayout();
        const QPointer<QHBoxLayout> right_layout = new QHBoxLayout();
        const QPointer<QHBoxLayout> right_bottom_layout = new QHBoxLayout();
        basic_layout->addLayout(left_layout,0,0);
        basic_layout->addLayout(right_layout,0,1);
        basic_layout->addLayout(right_bottom_layout,1,1);
        basic_layout->setMargin(30);

        // remove after implementation of select all
        not_yet_ = new NotYet();
        select_all_ = new QPushButton("Select all");
        close_ = new QPushButton("Close");
        close_->setFixedSize(100,30);

        left_layout->addWidget(select_all_);
        right_bottom_layout->addWidget(close_);

        connect();
    }

    auto MainWindow::connect() -> void {
        QWidget::connect(select_all_, &QPushButton::clicked, not_yet_, &NotYet::show);
        QWidget::connect(close_, &QPushButton::clicked, this, &QWidget::close);
    }
} // mainwindow