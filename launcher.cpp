#include "launcher.h"
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>

Launcher::Launcher(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("MyLauncher");
    setFixedSize(400, 200);

    QPushButton *startButton = new QPushButton("Start Game", this);
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(startButton);

    connect(startButton, &QPushButton::clicked, this, &Launcher::onStartClicked);
}

Launcher::~Launcher()
{
}

void Launcher::onStartClicked()
{
    QMessageBox::information(this, "Launcher", "Запуск игры...");
    emit startGame();
}

