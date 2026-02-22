#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_plusButton_clicked()
{
    firstNumber = ui->num1->text().toDouble();
    currentOperator = "+";
    writingFirst = false;
}


void MainWindow::on_minusButton_clicked()
{
    firstNumber = ui->num1->text().toDouble();
    currentOperator = "-";
    writingFirst = false;
}


void MainWindow::on_mulButton_clicked()
{
    firstNumber = ui->num1->text().toDouble();
    currentOperator = "*";
    writingFirst = false;
}


void MainWindow::on_divButton_clicked()
{
    firstNumber = ui->num1->text().toDouble();
    currentOperator = "/";
    writingFirst = false;
}


void MainWindow::on_clearButton_clicked()
{
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();

    writingFirst = true;
    currentOperator = "";
}


void MainWindow::on_enterButton_clicked()
{
    secondNumber = ui->num2->text().toDouble();
    double resultValue = 0;

    if(currentOperator == "+")
        resultValue = firstNumber + secondNumber;

    else if(currentOperator == "-")
        resultValue = firstNumber - secondNumber;

    else if(currentOperator == "*")
        resultValue = firstNumber * secondNumber;

    else if(currentOperator == "/")
    {
        if(secondNumber != 0)
            resultValue = firstNumber / secondNumber;

        else
        {
            ui->result->setText("Error");
            return;
        }
    }

    ui->result->setText(QString::number(resultValue));
}


void MainWindow::on_N0_clicked()
{
    if(writingFirst)
        ui->num1->setText(ui->num1->text() + "0");
    else
        ui->num2->setText(ui->num2->text() + "0");
}

void MainWindow::on_N1_clicked()
{
    if(writingFirst)
        ui->num1->setText(ui->num1->text() + "1");
    else
        ui->num2->setText(ui->num2->text() + "1");
}


void MainWindow::on_N2_clicked()
{
    if(writingFirst)
        ui->num1->setText(ui->num1->text() + "2");
    else
        ui->num2->setText(ui->num2->text() + "2");
}


void MainWindow::on_N3_clicked()
{
    if(writingFirst)
        ui->num1->setText(ui->num1->text() + "3");
    else
        ui->num2->setText(ui->num2->text() + "3");
}


void MainWindow::on_N4_clicked()
{
    if(writingFirst)
        ui->num1->setText(ui->num1->text() + "4");
    else
        ui->num2->setText(ui->num2->text() + "4");
}

void
MainWindow::on_N5_clicked()
{
    if(writingFirst)
        ui->num1->setText(ui->num1->text() + "5");
    else
        ui->num2->setText(ui->num2->text() + "5");
}


void MainWindow::on_N6_clicked()
{
    if(writingFirst)
        ui->num1->setText(ui->num1->text() + "6");
    else
        ui->num2->setText(ui->num2->text() + "6");
}


void MainWindow::on_N7_clicked()
{
    if(writingFirst)
        ui->num1->setText(ui->num1->text() + "7");
    else
        ui->num2->setText(ui->num2->text() + "7");
}

void MainWindow::on_N8_clicked()
{
    if(writingFirst)
        ui->num1->setText(ui->num1->text() + "8");
    else
        ui->num2->setText(ui->num2->text() + "8");
}


void MainWindow::on_N9_clicked()
{
    if(writingFirst)
        ui->num1->setText(ui->num1->text() + "9");
    else
        ui->num2->setText(ui->num2->text() + "9");
}




