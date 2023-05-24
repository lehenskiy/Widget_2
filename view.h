#ifndef VIEW_H
#define VIEW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class View : public QWidget {
Q_OBJECT

public:
    View(QWidget *parent = nullptr);

    ~View();

private:
    Ui::Widget *ui;
};

#endif // VIEW_H
