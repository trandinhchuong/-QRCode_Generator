#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QDialog>
#include <QMessageBox>
#include "QRController.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_generateButton_pressed();

    void on_saveFileButton_pressed();

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_4_clicked();

    void on_saveFileButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
