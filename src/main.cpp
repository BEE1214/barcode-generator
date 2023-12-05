#include <QApplication>
#include <QDialog>
#include <QLabel>
#include <QLocale>
#include <QObject>
#include <QPushButton>
#include <QTranslator>
#include <QVBoxLayout>
#include <QWidget>

#include "../include/central_widget.hpp"
#include "..\include\mainwindow.hpp"

#include <zint.h>

class Kenobi : public QDialog {

Q_OBJECT

public:

explicit Kenobi(QWidget* parent = nullptr) : QDialog(parent)
  {
    setWindowTitle("Kenobi");
    auto* layout = new QVBoxLayout(this);

    // Text for Dialog
    auto* label = new QLabel("General Kenobi!", this);
    layout->addWidget(label);

    // Close button
    auto* button = new QPushButton("Close", this);
    layout->addWidget(button);


    Kenobi::connect(button, &QPushButton::clicked, this, &QDialog::accept);

    setLayout(layout);
  }

virtual ~Kenobi() {}
};


int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  auto* window = new mainwindow::MainWindow();
  auto* central_widget = new QWidget(window);
  auto* central_layout = new QVBoxLayout(central_widget);

  // QLabel* label = new QLabel("Hello there!", central_widget);
  // auto* button = new QPushButton("Hello there", central_widget);

  // central_layout->addWidget(button);
  // central_widget->setLayout(central_layout);

  // const QDialog* dialog = new Kenobi();

  // QWidget::connect(button, &QPushButton::clicked, dialog, &Kenobi::show);

  window->show();

  return QApplication::exec();
}

#include "main.moc"
