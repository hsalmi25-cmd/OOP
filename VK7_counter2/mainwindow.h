#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_plusButton_clicked();
    void on_minusButton_clicked();
    void on_mulButton_clicked();
    void on_divButton_clicked();
    void on_clearButton_clicked();
    void on_enterButton_clicked();

    void on_N0_clicked();
    void on_N1_clicked();
    void on_N2_clicked();
    void on_N3_clicked();
    void on_N4_clicked();
    void on_N5_clicked();
    void on_N6_clicked();
    void on_N7_clicked();
    void on_N8_clicked();
    void on_N9_clicked();


private:
    Ui::MainWindow *ui;

    double firstNumber;
    double secondNumber;
    QString currentOperator;
    bool writingFirst = true;
};
#endif // MAINWINDOW_H
