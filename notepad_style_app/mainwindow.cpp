#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextEdit>
#include <QLabel>
#include <QGuiApplication>
#include <QDesktopServices>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget((ui->textEdit));
    resumePopupPtr = new resumePopup();
    resumePopupPtr->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionBold_triggered()
{

    QTextCharFormat format;
    format.setFontWeight(QFont::Bold);
    ui->textEdit->textCursor().mergeCharFormat(format);
}

void MainWindow::on_actionUnBold_triggered()
{
    QTextCharFormat format;
    format.setFontWeight(QFont::Normal);
    ui->textEdit->textCursor().mergeCharFormat(format);
}

void MainWindow::on_actionSuperScript_triggered()
{
    //ui->textEdit->setText("A<sub>1</sub><sup>2</sup>");
    QTextCharFormat format;
    format.setVerticalAlignment(QTextCharFormat::AlignSuperScript);
    if(ui->textEdit->hasFocus())
        ui->textEdit->mergeCurrentCharFormat(format);
}

void MainWindow::on_actionSubScript_triggered()
{
    QTextCharFormat format;
    format.setVerticalAlignment(QTextCharFormat::AlignSubScript);
    if(ui->textEdit->hasFocus())
        ui->textEdit->mergeCurrentCharFormat(format);

}

void MainWindow::on_actionResume_triggered()
{
    //QDesktopServices::openUrl(QUrl::fromLocalFile(m_appPath+"resume.PNG"));
    resumePopupPtr->show();
}

void MainWindow::on_actionNormal_Text_triggered()
{
    QTextCharFormat format;
    format.setVerticalAlignment(QTextCharFormat::AlignNormal);
    if(ui->textEdit->hasFocus())
        ui->textEdit->mergeCurrentCharFormat(format);
 }
