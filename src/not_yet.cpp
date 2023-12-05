//
// Created by adamd on 12/5/23.
//

#include "..\include\not_yet.hpp"

#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

namespace mainwindow {
    NotYet::NotYet(QWidget* parent) : QDialog(parent) {
        setWindowTitle("Not yet");
        auto* layout = new QVBoxLayout(this);

        auto* label = new QLabel("Not yet", this);
        layout->addWidget(label);

        auto* close_dialog = new QPushButton("Close", this);
        layout->addWidget(close_dialog);

        connect(close_dialog, &QPushButton::clicked, this, &QDialog::accept);

        setLayout(layout);
    }
}
