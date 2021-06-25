#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton,SIGNAL(clicked()),this, SLOT(showText()));
    QObject::connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),ui->lcdNumber, SLOT(display(int)));
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::showText()
{
    ui->label->setText("Hello QT1");
}

