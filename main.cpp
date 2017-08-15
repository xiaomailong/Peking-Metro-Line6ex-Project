#include <QtGui/QApplication>
#include <QSplashScreen>
#include "dialog.h"
#include <QWSServer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    #ifndef USE_RAND_DATA
        a.setOverrideCursor(QCursor(Qt::BlankCursor));
            if (QWSServer::isCursorVisible()) {
                QWSServer::setCursorVisible(false);
            } //end
    #endif

    //QString path = qApp->applicationDirPath();
    // QString fileName = path + "/resource/image/splash.PNG";
    // QFile inifile( fileName );

    // if ( inifile.exists( fileName ) )
    // {
        // deleted by Deng Ran on the 15th of August 2017.
        // QSplashScreen *splash = new QSplashScreen;
        // splash->setPixmap(QPixmap("resource/image/splash.PNG"));
        // splash->show();
        // Dialog w;
        // w.show();
        // splash->finish(&w);
        // delete splash;
        // return a.exec();
    // }
    // else
    // {
    // Dialog w;
    // w.show();
    // return a.exec();
    // }

    Dialog w;
    w.show();

    return a.exec();
}
