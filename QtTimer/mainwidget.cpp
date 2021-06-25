#include "mainwidget.h"
#include "ui_mainwidget.h"
#include <QTimer>
#include <QTime>
#include <QPixmap>

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    QTimer *timer = new QTimer(this);
    timer->start(500);
    connect(timer, SIGNAL(timeout()),this, SLOT(onTimeout()));
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::onTimeout()
{

    ui->label->setText(QTime::currentTime().toString());

    QLabel *label = new QLabel(this);
    label->setPixmap(QPixmap("/Users/roserouge22/project_Qt/QtTimer/face-angry.ico").scaledToHeight(rand()%80+20));
    label->setGeometry(rand()%this->width(),rand()%this->height(), 100,100);
    label->show();
}

