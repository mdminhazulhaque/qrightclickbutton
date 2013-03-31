#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <qrightclickbutton.h>

namespace Ui {
class Window;
}

class Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit Window(QWidget *parent = 0);
    ~Window();

private slots:
    void onRightClicked();

private:
    Ui::Window *ui;
};

#endif // WINDOW_H
