#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QDialog>
#include <QObject>

class Kenobi : public QDialog {

Q_OBJECT

public:

Kenobi(QWidget* parent = nullptr) : QDialog(parent)
  {
    setWindowTitle("Kenobi");
    QVBoxLayout* layout = new QVBoxLayout(this);

    // Text for Dialog
    QLabel* label = new QLabel("General Kenobi!", this);
    layout->addWidget(label);

    // Close button
    QPushButton* button = new QPushButton("Close", this);
    layout->addWidget(button);


    this->connect(button, &QPushButton::clicked, this, &QDialog::accept);

    setLayout(layout);
  }

virtual ~Kenobi() {}
};


int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  QWidget widget;
  QWidget* central_widget = new QWidget(&widget);
  QVBoxLayout* central_layout = new QVBoxLayout(central_widget);

  // QLabel* label = new QLabel("Hello there!", central_widget);
  QPushButton* button = new QPushButton("Hello there", central_widget);

  central_layout->addWidget(button);
  central_widget->setLayout(central_layout);

  QDialog* dialog = new Kenobi();

  central_widget->connect(button, &QPushButton::clicked, dialog, &Kenobi::show);

  widget.show();

  return app.exec();
    // QApplication a(argc, argv);

    // QTranslator translator;
    // const QStringList uiLanguages = QLocale::system().uiLanguages();
    // for (const QString &locale : uiLanguages) {
    //     const QString baseName = "gene_" + QLocale(locale).name();
    //     if (translator.load(":/i18n/" + baseName)) {
    //         a.installTranslator(&translator);
    //         break;
    //     }
    // }
    // Widget w;
    // w.show();
    // return a.exec();
}

#include "main.moc"
