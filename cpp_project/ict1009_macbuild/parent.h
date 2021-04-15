#ifndef PARENT_H
#define PARENT_H

#include <QDialog>

namespace Ui {
    class Parent;
}

class Parent : public QDialog {
    Q_OBJECT

    public:
        explicit Parent(QWidget *parent = nullptr);
        ~Parent();

    private slots:
        void on_Close_clicked();
        void on_New_face_clicked();
        void on_New_face_2_clicked();

    private:
        Ui::Parent *ui;
};

#endif // PARENT_H
