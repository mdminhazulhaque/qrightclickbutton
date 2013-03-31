#include "window.h"
#include "ui_window.h"
Window::Window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Window)
{
    ui->setupUi(this);
    QRightClickButton *button = new QRightClickButton(this);
    ui->gridLayout->addWidget(button);
    connect(button, SIGNAL(rightClicked()), this, SLOT(onRightClicked()));

}

Window::~Window()
{
    delete ui;
}

void Window::onRightClicked()
{
    qDebug() << "User right clicked me";
}
