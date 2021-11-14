#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "resumepopup.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionBold_triggered();

    void on_actionUnBold_triggered();

    void on_actionSuperScript_triggered();

    void on_actionSubScript_triggered();

    void on_actionResume_triggered();

    void on_actionNormal_Text_triggered();

private:
    Ui::MainWindow *ui;
    QString m_appPath ;
    resumePopup *resumePopupPtr = nullptr ;
};
#endif // MAINWINDOW_H
