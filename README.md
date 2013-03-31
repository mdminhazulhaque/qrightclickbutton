QRightClickButton
=================

## What is it ##
Fork of QPushButton that emits `rightClicked()` signal when user clicks over it with right button.

## How to use ##
Copy `qrightclickbutton.cpp` and `qrightclickbutton.h` to your project directory. Then add the following lines to `projectname.pro`.

```
SOURCES += qrightclickbutton.cpp
HEADERS += qrightclickbutton.h
```

Then include it in project directory.

#include <QRightClickButton>

And finally add it whereever you want.

```
QRightClickButton *button = new QRightClickButton(this);
ui->gridLayout->addWidget(button);
connect(button, SIGNAL(rightClicked()), this, SLOT(onRightClicked()));
```

Note that `onRightClicked()` is a slot in the class this button is used.

## Hard to use? ##
It would be easy to use if this button was available in Designer's widget box. I will write a plugin to do so. Please check back later.