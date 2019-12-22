/********************************************************************************
** Form generated from reading UI file 'cursormain.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURSORMAIN_H
#define UI_CURSORMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_cursorMain
{
public:

    void setupUi(QDialog *cursorMain)
    {
        if (cursorMain->objectName().isEmpty())
            cursorMain->setObjectName(QString::fromUtf8("cursorMain"));
        cursorMain->resize(800, 600);

        retranslateUi(cursorMain);

        QMetaObject::connectSlotsByName(cursorMain);
    } // setupUi

    void retranslateUi(QDialog *cursorMain)
    {
        cursorMain->setWindowTitle(QCoreApplication::translate("cursorMain", "cursorMain", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cursorMain: public Ui_cursorMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURSORMAIN_H
