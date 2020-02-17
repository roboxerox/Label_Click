#ifndef CLICKABLEQLABEL_H
#define CLICKABLEQLABEL_H
#include <QLabel>

class ClickableQLabel :public QLabel
{
    Q_OBJECT
public:
    ClickableQLabel();
signals :
    void clicked();
public:
    void mousePressEvent(QMouseEvent* event);

    using QLabel::QLabel;
};

#endif // CLICKABLEQLABEL_H
