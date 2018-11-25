#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QFont>
#include <QIcon>
#include <Qt>
#include <QLocale>
#include <QTranslator>
#include <QLibraryInfo>
#include "mywindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);

    //QString locale = QLocale::system().name().section('_', 0, 0);
    //QTranslator translator;
    //translator.load(QString("qt_") + locale, QLibraryInfo::location(QLibraryInfo::TranslationsPath));
    //app.installTranslator(&translator);

    //MyWindow
    MyWindow window;
    window.show();

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

    //Run the app.
    return app.exec();
}
