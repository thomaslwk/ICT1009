#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "parent.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
     // Onload set UI elements to current window
    ui->setupUi(this);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_buildface_btn_clicked(){
    // Window popup to show OOP function
    Parent parentwindow;
    parentwindow.setModal(true);
    parentwindow.exec();
}

void MainWindow::on_clearface_btn_clicked(){
    /* ************************** */
    /* **** Close window (x) **** */
    /* ************************** */
    this->close();
}


