#include "mainwindow9.h"
#include "ui_mainwindow9.h"
#include "mainwindow2.h"
#include "QMessageBox"
#include "mainwindow.h"
#include "QMessageBox"
#include <QButtonGroup>
#include <QDebug>
#include<QFile>
#include<QFileDialog>
#include<QDir>
#include <QPlainTextEdit>
#include <QTextStream>>
#include <iostream>
#include "ui_mainwindow.h"
using namespace std;
MainWindow9::MainWindow9(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow9)
{
    ui->setupUi(this);
    p1 = new MainWindow(this);
}

MainWindow9::~MainWindow9()
{
    delete ui;
}

void MainWindow9::on_pushButton_clicked()
{
    (new MainWindow2())->show();
    this->hide();
}


void MainWindow9::on_pushButton_2_clicked()
{
    QString a1=ui->lineEdit->text();
    QString a2=ui->lineEdit_2->text();
    QString a3=ui->lineEdit_3->text();
    QString filePath = "C:/Users/12234/Documents/01/sum_info/";
    filePath=filePath+now_username+"/return_goods_info.txt";
    qDebug()<<filePath;
        QFile f(filePath);
        if(!f.open(QIODevice::WriteOnly | QIODevice::Text|QIODevice::Append))
        {
         QMessageBox::about(NULL, "提示", "文件异常");
            return;
        }
        QTextStream txtOutput(&f);
        txtOutput <<a1<<","<<a2<<","<<a3<<"\n";
        f.close();
        QMessageBox::about(NULL, "提示", "您已成功提交申请！");
        (new MainWindow2())->show();
        this->hide();

    //qDebug()<<now_username;

}

