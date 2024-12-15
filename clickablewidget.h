#ifndef CLICKABLEWIDGET_H
#define CLICKABLEWIDGET_H

#include <QWidget>
#include <QMouseEvent>

class ClickableWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ClickableWidget(QWidget *parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *event) override;
};

#endif // CLICKABLEWIDGET_H
