#ifndef RESUMEPOPUP_H
#define RESUMEPOPUP_H

#include <QWidget>

namespace Ui {
class resumePopup;
}

class resumePopup : public QWidget
{
    Q_OBJECT

public:
    explicit resumePopup(QWidget *parent = nullptr);
    ~resumePopup();

private:
    Ui::resumePopup *ui;
};

#endif // RESUMEPOPUP_H
