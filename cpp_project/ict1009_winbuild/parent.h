#ifndef PARENT_H
#define PARENT_H

#include <QDialog>

namespace Ui {
class Parent;
}

class Parent : public QDialog
{
    Q_OBJECT

public:
    explicit Parent(QWidget *parent = nullptr);
    ~Parent();

private slots:
    void on_btn_newChild_clicked();

    void on_btn_mutateChild_clicked();

    void on_btn_close_clicked();

private:
    Ui::Parent *ui;
};

#endif // PARENT_H
