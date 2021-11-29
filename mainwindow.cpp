#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QScroller::grabGesture(ui->scrollArea, QScroller::LeftMouseButtonGesture);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_26_clicked()
{
    const QSize btnSize = QSize(150, 50);
    for (int i=0;i<15 ;i++ )
    {
        for (int j=0;j<5 ;j++ )
        {
            QString s1 = QString::number(i);
             QString s2 = QString::number(j);
            QPushButton *button = new QPushButton("button"+s1+s2);
            button->setFixedSize(btnSize);
            button->setObjectName("button"+s1+s2);
            //connect(button, &QPushButton::clicked, this, &MainWindow::cald);
            ui->gridLayout_2->addWidget(button,i,j);
            //lay->addWidget(button,i,j);
        }

    }

}

void MainWindow::on_pushButton_27_clicked()
{
    const QSize btnSize = QSize(150, 50);
    for (int i=0;i<30 ;i++ )
    {
        for (int j=0;j<5 ;j++ )
        {
            QString s1 = QString::number(i);
             QString s2 = QString::number(j);
            QPushButton *button = new QPushButton("button"+s1+s2);
            button->setFixedSize(btnSize);
            button->setObjectName("button"+s1+s2);
            //connect(button, &QPushButton::clicked, this, &MainWindow::cald);
            ui->gridLayout_2->addWidget(button,i,j);
            //lay->addWidget(button,i,j);
        }

    }
}

