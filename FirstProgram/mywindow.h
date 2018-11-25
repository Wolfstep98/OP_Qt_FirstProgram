#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QProgressBar>
#include <QSlider>
#include <QMessageBox>
#include <QInputDialog>
#include <QFontDialog>
#include <QFont>
#include <QColorDialog>
#include <QColor>
#include <QPalette>

class MyWindow : public QWidget
{
    Q_OBJECT

private:
    QPushButton *m_button;
    //QProgressBar *m_progressBar;
    //QSlider *m_sliderWidth;
    //QSlider *m_sliderHeight;

public:
    explicit MyWindow(QWidget *parent = nullptr);
    ~MyWindow();

signals:
void maxWidthReached();

public slots:
    void setWidth(int width);
    void setHeight(int height);
    void OpenDialogue();
};

#endif // MYWINDOW_H
