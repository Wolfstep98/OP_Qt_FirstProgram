#include "mywindow.h"

MyWindow::MyWindow(QWidget *parent) : QWidget(parent)
{
    setFixedSize(200,150);

    //Button
    m_button = new QPushButton(this);
    m_button->setText("Open message box");
    m_button->move(50,50);
    m_button->setFixedSize(100,50);

    connect(m_button,SIGNAL(clicked()),this,SLOT(OpenDialogue()));
    //Progress Bar
    //m_progressBar = new QProgressBar(this);
    //m_progressBar->setGeometry(10,20,150,20);

    //Slider Width
    //m_sliderWidth = new QSlider(Qt::Orientation::Horizontal,this);
    //m_sliderWidth->setRange(200,600);
    //m_sliderWidth->setGeometry(10,60,150,20);

    //Slider Height
    //m_sliderHeight = new QSlider(Qt::Orientation::Vertical,this);
    //m_sliderHeight->setSliderDown(true);
    //m_sliderHeight->setRange(200,600);
    //m_sliderHeight->setGeometry(160,10,20,100);

    //connect(m_sliderWidth,SIGNAL(valueChanged(int)),this,SLOT(setWidth(int)));
    //connect(m_sliderHeight,SIGNAL(valueChanged(int)),this,SLOT(setHeight(int)));

    //connect(this,SIGNAL(maxWidthReached()),qApp,SLOT(quit()));
    //Update Progress Bar value
    //connect(m_slider,SIGNAL(valueChanged(int)),m_progressBar,SLOT(setValue(int)));

    //Reset Progress Bar value
    //connect(m_button,SIGNAL(clicked()),m_progressBar,SLOT(reset()));
}

MyWindow::~MyWindow()
{
    delete m_button;
    //delete m_progressBar;
    //delete m_sliderWidth;
    //delete m_sliderHeight;
}

void MyWindow::setWidth(int width)
{
    setFixedWidth(width);
    //if(width == m_sliderWidth->maximum())
    //{
    //    emit maxWidthReached();
    //}
}

void MyWindow::setHeight(int height)
{
    setFixedHeight(height);
}

void MyWindow::OpenDialogue()
{
    //---Open the main classic window---
    //QMessageBox::information(this,"Message Box","This is a message box !");
    //QMessageBox::StandardButton result = QMessageBox::question(this,"Question","Did you answered this question ?",QMessageBox::StandardButton::Yes | QMessageBox::StandardButton::No);
    //if(result == QMessageBox::StandardButton::Yes)
    //{
    //    QMessageBox::warning(this,"Question","Good answer !");
    //}
    //else
    //{
    //    QMessageBox::critical(this,"Fatal error","Bad answer !!!");
    //}
    //QMessageBox::warning(this,"ERROR","This is an evil error !");
    //QMessageBox::critical(this,"Fatal error","NullReferencePointer");

    //---Open the InputDialog window---
    //bool ok = false;
    //QString pseudo = QInputDialog::getText(this,"Pseudo","What is your pseudo ?",QLineEdit::Normal,QString(),&ok);
    //if(ok && !pseudo.isEmpty())
    //{
    //    QMessageBox::information(this,"Pseudo","Hello " + pseudo + ", welcome to SAO.");
    //    this->m_button->setText("Hello " + pseudo);
    //}
    //else
    //{
    //    QMessageBox::critical(this,"Threat","I'm going to find you, and I'm going to know your name !");
    //}

    //---Open the font window---
    //bool ok = false;
    //QFont police = QFontDialog::getFont(&ok, m_button->font(), this, "Choisissez une police");
    //if (ok)
    //{
    //    m_button->setFont(police);
    //}

    //---Open the color window---
    QColor couleur = QColorDialog::getColor(Qt::white, this);

    QPalette palette;
    palette.setColor(QPalette::ButtonText, couleur);
    m_button->setPalette(palette);
}
