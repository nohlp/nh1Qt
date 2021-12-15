#include "window.h"
#include <QPushButton>

Window::Window(QWidget *parent) : QWidget(parent){
 // Set size of the window
 setFixedSize(150, 100);

 // Create and position the button
 m_button = new QPushButton("Hello World", this);
 m_button->setGeometry(30, 30, 80, 30);
}


