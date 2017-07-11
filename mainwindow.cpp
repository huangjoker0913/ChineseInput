﻿#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "xyinput.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    XYInput::getInstance()->initInputBase("I:/QtProject/ChineseInput/chineseBase/chinese.txt");
    ui->textEdit->installEventFilter(XYInput::getInstance());
    ui->lineEdit->installEventFilter(XYInput::getInstance());
}

MainWindow::~MainWindow()
{
    delete ui;
}