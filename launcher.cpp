#include "launcher.h"
#include <QPushButton>
#include <QVBoxLayout>

Launcher::Launcher(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("MyLauncher");
    setFixedSize(400, 200);

    QPushButton *btn = new QPushButton("Start", this);
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(btn);

    connect(btn, &QPushButton::clicked, this, &Launcher::onStartClicked);
}

Launcher::~Launcher()
{
}

void Launcher::onStartClicked()
{
}
