#ifndef MAINWINDOW5_H
#define MAINWINDOW5_H

#include <QMainWindow>
#include <mainwindow6.h>
#include "QStringListModel"
namespace Ui {
class MainWindow5;
}

class MainWindow5 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow5(QWidget *parent = nullptr);
    ~MainWindow5();
public slots:
    void ask_result();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow5 *ui;
    MainWindow6 w4;
    QStringListModel *theModel;
};

#endif // MAINWINDOW5_H
