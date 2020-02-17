#include "ClickableQLabel.h"

ClickableQLabel::ClickableQLabel()
{

}
void ClickableQLabel::mousePressEvent(QMouseEvent* event)
{
    emit clicked();
}
