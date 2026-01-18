#ifndef LAUNCHER_H
#define LAUNCHER_H

#include <QWidget>

class Launcher : public QWidget
{
    Q_OBJECT

public:
    explicit Launcher(QWidget *parent = nullptr);
    ~Launcher();

private slots:
    void onStartClicked();
};

#endif
