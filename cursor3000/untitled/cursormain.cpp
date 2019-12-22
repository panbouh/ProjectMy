#include "cursormain.h"
#include "ui_cursormain.h"

cursorMain::cursorMain(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cursorMain)
{
    ui->setupUi(this);
}

cursorMain::~cursorMain()
{
    delete ui;
}

