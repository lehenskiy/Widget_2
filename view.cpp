#include "view.h"
#include "ui_view.h"
#include "Counter.h"

View::View(QWidget *parent) : QWidget(parent), ui(new Ui::Widget) {
    if (ui == nullptr) {
        throw std::bad_alloc();
       }

    ui->setupUi(this);
    Counter *edit1 = new Counter("0", ui->lineEdit);
    Counter *edit2 = new Counter("0", ui->countFive);
    if (edit1 == nullptr || edit2 == nullptr) {
        throw std::bad_alloc();
    }

    connect(ui->calcButton, SIGNAL(clicked()),
            edit1, SLOT(add_one()));
    connect(edit1, SIGNAL(tick_signal()),
            edit2, SLOT(add_one()));
    connect(ui->exitButton, SIGNAL(clicked()),
            this, SLOT(close()));
}

View::~View() {
    delete ui;
}

