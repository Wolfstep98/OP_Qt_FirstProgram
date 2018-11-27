//---Main---
#include <QApplication>
#include <Qt>
#include <QLocale>
#include <QTranslator>
#include <QLibraryInfo>

//---Widgets---
#include <QWidget>
//Buttons
#include <QPushButton>
//Font
#include <QFont>
//Icons
#include <QIcon>
//LineEdit
#include <QLineEdit>

//---Layouts---
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QFormLayout>

//Custom
#include "mywindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);

    //QString locale = QLocale::system().name().section('_', 0, 0);
    //QTranslator translator;
    //translator.load(QString("qt_") + locale, QLibraryInfo::location(QLibraryInfo::TranslationsPath));
    //app.installTranslator(&translator);

    //MyWindow
    //MyWindow window;
    //window.show();

    //Window
    /*
    //Window
    QWidget window;
    //Set the size of the window
    window.setFixedSize(300,150);

    //Create a button
    QPushButton button("Je suis un button",&window);
    button.move(60,50);

    //Setup button
    button.setFont(QFont("Comic Sans MS",14));
    button.setCursor(Qt::PointingHandCursor);
    button.setIcon(QIcon("ArenaFortressField.png"));

    //Show the window
    window.show();
*/

    //Button
    /*
    //Create the widget : Button
    QPushButton button("Salut les Zéros, ça gaze ?");

    //Change the text of the button
    button.setText("C'est lui, c'est le méchant !");

    //Change the tooltip of the button
    button.setToolTip("This is a tooltip !");

    //Change the font of the button
    QFont myFont("Courier",12,QFont::Weight::Normal);
    button.setFont(myFont);

    //Change the cursor while overlaping the button
    button.setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

    //Change the icon of the button
    button.setIcon(QIcon("ArenaFortressField.png"));

    //Show the button on the window.
    button.show();
*/

    //Positioning
    /*
    //QWidget window;
    //QHBoxLayout *layout = new QHBoxLayout();
    //QGridLayout *gridLayout = new QGridLayout();

    //QPushButton *button1 = new QPushButton("Bonjour");
    //QPushButton *button2 = new QPushButton("les");
    //QPushButton *button3 = new QPushButton("pd");

    //gridLayout->addWidget(button1,0,0);
    //gridLayout->addWidget(button2,0,1);
    //gridLayout->addWidget(button3,1,0,1,2);

    //window.setLayout(gridLayout);
    //QPushButton bouton("Bonjour Lylouf", &fenetre);
    //bouton.move(70, 60);
    //QFormLayout *layoutForm = new QFormLayout();

    //QLineEdit *lineFirstName = new QLineEdit();
    //QLineEdit *lineLastName = new QLineEdit();
    //QLineEdit *lineAge = new QLineEdit();

    //layoutForm->addRow("&First Name :", lineFirstName);
    //layoutForm->addRow("&Last Name :", lineLastName);
    //layoutForm->addRow("&Age :", lineAge);

    //QVBoxLayout *mainLayout = new QVBoxLayout();
    //mainLayout->addLayout(layoutForm);

    //QPushButton *buttonQuit = new QPushButton("Quitter");
    //QWidget::connect(buttonQuit, SIGNAL(clicked()), &app, SLOT(quit()));
    //mainLayout->addWidget(buttonQuit); // Ajout du bouton

    //window.setLayout(mainLayout);
    window.show();
    */

    //Widgets


    //Run the app.
    return app.exec();
}
