#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pQTimer = new QTimer(this);
    connect(pQTimer, SIGNAL(timeout()), this, SLOT(timeout()));

    setGameInfoText("Select game time", 12);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timeout()
{
    if(currentPlayer == 1)
        player1Time--;
    else
        player2Time--;
    updateProgressBar();

    if(player1Time <= 0)
    {
        pQTimer->stop();
        setGameInfoText("Player 2 wins!", 14);
    }

    if(player2Time <= 0)
    {
        pQTimer->stop();
        setGameInfoText("Player 1 wins!", 14);
    }
}

void MainWindow::updateProgressBar()
{
    int p1Percent = (player1Time * 100) / gameTime;
    int p2Percent = (player2Time * 100) / gameTime;

    ui->progressBar->setValue(p1Percent);
    ui->progressBar_2->setValue(p2Percent);
}

void MainWindow::setGameInfoText(QString text, short fontsize)
{
    ui->gameInfoLabel->setText(text);

    QFont font = ui->gameInfoLabel->font();

    font.setPointSize(fontsize);

    ui->gameInfoLabel->setFont(font);
}

void MainWindow::on_startGame_clicked()
{
    if(gameTime == 0)
    {
        setGameInfoText("Select game time first!", 12);
        return;
    }

    currentPlayer = 1;
    pQTimer->start(1000);
    setGameInfoText("Game ongoing", 12);
}

void MainWindow::on_stopGame_clicked()
{
    pQTimer->stop();
    setGameInfoText("Game stopped.Select new time.", 12);
}

void MainWindow::on_switchP1_clicked()
{
    if(currentPlayer == 1)
        currentPlayer = 2;
}

void MainWindow::on_switchP2_clicked()
{
    if(currentPlayer == 2)
        currentPlayer = 1;
}

void MainWindow::on_time120_clicked()
{
    gameTime = 120;
    player1Time = gameTime;
    player2Time = gameTime;

    ui->progressBar->setValue(100);
    ui->progressBar_2->setValue(100);

    setGameInfoText("120 sec selected", 12);
}

void MainWindow::on_time300_clicked()
{
    gameTime = 300;
    player1Time = gameTime;
    player2Time = gameTime;

    ui->progressBar->setValue(100);
    ui->progressBar_2->setValue(100);

    setGameInfoText("5 min selected", 12);
}

