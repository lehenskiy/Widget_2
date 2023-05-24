#include <QLineEdit>

class Counter : public QLineEdit {
Q_OBJECT
public:
    Counter(const QString &contents, QWidget *parent = 0) :
            QLineEdit(contents, parent) {
        // Определяем размер счетчика на основе размера его родительского элемента
        QSize sizeHint = parent->sizeHint();
        // Устанавливаем размер от родительского элемента
        setGeometry(0, 0, parent->parentWidget()->width(), sizeHint.height());
    };

    ~Counter() {
        delete this;
    };

signals:

    void tick_signal();

public slots:

    void add_one() {
        QString str = text();
        int r = str.toInt();
        r++;

        if (r != 0 && r % 5 == 0) {
            emit tick_signal();
        }

        str.setNum(r);
        setText(str);
    }
};