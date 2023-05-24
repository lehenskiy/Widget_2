/********************************************************************************
** Form generated from reading UI file 'view.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_H
#define UI_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *countFive;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *calcButton;
    QPushButton *exitButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(321, 124);
        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 20, 281, 84));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(true);
        lineEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit);

        countFive = new QLineEdit(verticalLayoutWidget);
        countFive->setObjectName(QString::fromUtf8("countFive"));
        countFive->setReadOnly(true);

        horizontalLayout_2->addWidget(countFive);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        calcButton = new QPushButton(verticalLayoutWidget);
        calcButton->setObjectName(QString::fromUtf8("calcButton"));

        horizontalLayout_3->addWidget(calcButton);

        exitButton = new QPushButton(verticalLayoutWidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));

        horizontalLayout_3->addWidget(exitButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\320\241\321\207\320\265\321\202 \320\277\320\276 1", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\320\241\321\207\320\265\321\202 \320\277\320\276 5", nullptr));
        lineEdit->setText(QCoreApplication::translate("Widget", "0", nullptr));
        countFive->setText(QCoreApplication::translate("Widget", "0", nullptr));
        calcButton->setText(QCoreApplication::translate("Widget", "+1", nullptr));
        exitButton->setText(QCoreApplication::translate("Widget", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
