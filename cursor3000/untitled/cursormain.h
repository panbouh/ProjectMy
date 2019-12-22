#ifndef CURSORMAIN_H
#define CURSORMAIN_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class cursorMain; }
QT_END_NAMESPACE

class cursorMain : public QDialog
{
    Q_OBJECT

public:
    cursorMain(QWidget *parent = nullptr);
    ~cursorMain();

private:
    Ui::cursorMain *ui;
};
#endif // CURSORMAIN_H
