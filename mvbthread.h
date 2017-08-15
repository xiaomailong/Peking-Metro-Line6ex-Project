#ifndef MvbThread_H
#define MvbThread_H
#include <QtGui/QApplication>
#include <QThread>
#include <QByteArray>
#include <QMutex>
#include <QWaitCondition>
#include <QTimer>

//#define DEBUG

#ifdef DEBUG
#include <QVariant>
#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#endif
#include "DataBuffer.h"
#include "PixyTypes.h"
#include "PixyMvbLib.h"


class MvbThread : public QThread
{
    Q_OBJECT
public:
    MvbThread();
    ~MvbThread();
    void render();
    //UNSIGNED8 sendData[128];
signals:

public slots:

private:
    bool restart;
    bool abort;
    QWaitCondition condition;
    QMutex mutex;

    //src
    PIXYMVB_Data srcPortData200;
    PIXYMVB_Data srcPortData201;
    PIXYMVB_Data srcPortData202;
    PIXYMVB_Data srcPortData203;

    PIXYMVB_Data srcPortData280;
    PIXYMVB_Data srcPortData281;
    PIXYMVB_Data srcPortData282;
    PIXYMVB_Data srcPortData283;
    //snk
    PIXYMVB_Data snkPortData100;
    PIXYMVB_Data snkPortData110;
    PIXYMVB_Data snkPortData114;
    PIXYMVB_Data snkPortData120;
    PIXYMVB_Data snkPortData130;
    PIXYMVB_Data snkPortData140;
    PIXYMVB_Data snkPortData150;
    PIXYMVB_Data snkPortData160;
    PIXYMVB_Data snkPortData170;
    PIXYMVB_Data snkPortData180;
    PIXYMVB_Data snkPortData184;

    PIXYMVB_Data snkPortData200;
    PIXYMVB_Data snkPortData201;
    PIXYMVB_Data snkPortData202;
    PIXYMVB_Data snkPortData203;

    PIXYMVB_Data snkPortData280;
    PIXYMVB_Data snkPortData281;
    PIXYMVB_Data snkPortData282;
    PIXYMVB_Data snkPortData283;

    PIXYMVB_Data snkPortData400;
    PIXYMVB_Data snkPortData410;
    PIXYMVB_Data snkPortData411;
    PIXYMVB_Data snkPortData412;
    PIXYMVB_Data snkPortData413;
    PIXYMVB_Data snkPortData414;
    PIXYMVB_Data snkPortData420;
    PIXYMVB_Data snkPortData421;
    PIXYMVB_Data snkPortData422;
    PIXYMVB_Data snkPortData423;
    PIXYMVB_Data snkPortData424;
    PIXYMVB_Data snkPortData430;
    PIXYMVB_Data snkPortData431;
    PIXYMVB_Data snkPortData432;
    PIXYMVB_Data snkPortData433;
    PIXYMVB_Data snkPortData434;
    PIXYMVB_Data snkPortData440;
    PIXYMVB_Data snkPortData441;
    PIXYMVB_Data snkPortData442;
    PIXYMVB_Data snkPortData443;
    PIXYMVB_Data snkPortData444;
    PIXYMVB_Data snkPortData500;
    PIXYMVB_Data snkPortData510;
    PIXYMVB_Data snkPortData511;
    PIXYMVB_Data snkPortData520;
    PIXYMVB_Data snkPortData521;
    PIXYMVB_Data snkPortData530;
    PIXYMVB_Data snkPortData531;
    PIXYMVB_Data snkPortData540;
    PIXYMVB_Data snkPortData541;
    PIXYMVB_Data snkPortData550;
    PIXYMVB_Data snkPortData551;
    PIXYMVB_Data snkPortData560;
    PIXYMVB_Data snkPortData561;
    PIXYMVB_Data snkPortData600;
    PIXYMVB_Data snkPortData610;
    PIXYMVB_Data snkPortData611;
    PIXYMVB_Data snkPortData620;
    PIXYMVB_Data snkPortData621;
    PIXYMVB_Data snkPortData700;
    PIXYMVB_Data snkPortData701;
    PIXYMVB_Data snkPortData710;
    PIXYMVB_Data snkPortData711;
    PIXYMVB_Data snkPortData720;
    PIXYMVB_Data snkPortData721;
    PIXYMVB_Data snkPortData730;
    PIXYMVB_Data snkPortData731;
    PIXYMVB_Data snkPortData740;
    PIXYMVB_Data snkPortData741;
    PIXYMVB_Data snkPortData750;
    PIXYMVB_Data snkPortData751;
    PIXYMVB_Data snkPortData760;
    PIXYMVB_Data snkPortData761;
    PIXYMVB_Data snkPortData770;
    PIXYMVB_Data snkPortData771;
    PIXYMVB_Data snkPortData780;
    PIXYMVB_Data snkPortData781;
    PIXYMVB_Data snkPortData790;
    PIXYMVB_Data snkPortData791;
    PIXYMVB_Data snkPortData7A0;
    PIXYMVB_Data snkPortData7A1;
    PIXYMVB_Data snkPortData7B0;
    PIXYMVB_Data snkPortData7B1;
    PIXYMVB_Data snkPortData7C0;
    PIXYMVB_Data snkPortData7C1;
    PIXYMVB_Data snkPortData7D0;
    PIXYMVB_Data snkPortData7D1;
    PIXYMVB_Data snkPortData7E0;
    PIXYMVB_Data snkPortData7E1;
    PIXYMVB_Data snkPortData7F0;
    PIXYMVB_Data snkPortData7F1;
    PIXYMVB_Data snkPortData800;
    PIXYMVB_Data snkPortData810;
    PIXYMVB_Data snkPortData820;
    PIXYMVB_Data snkPortData830;
    PIXYMVB_Data snkPortData840;
    PIXYMVB_Data snkPortData850;
    PIXYMVB_Data snkPortData860;
    PIXYMVB_Data snkPortData870;
    PIXYMVB_Data snkPortData880;
    PIXYMVB_Data snkPortData900;
    PIXYMVB_Data snkPortData910;
    PIXYMVB_Data snkPortData911;
    PIXYMVB_Data snkPortData920;
    PIXYMVB_Data snkPortData921;
    PIXYMVB_Data snkPortDataA00;
    PIXYMVB_Data snkPortDataA10;
    PIXYMVB_Data snkPortDataA11;
    PIXYMVB_Data snkPortDataB00;
    PIXYMVB_Data snkPortDataB10;
    PIXYMVB_Data snkPortDataB20;
    PIXYMVB_Data snkPortDataF00;
    PIXYMVB_Data snkPortDataF01;
    PIXYMVB_Data snkPortDataF02;
    PIXYMVB_Data snkPortDataF03;
    PIXYMVB_Data snkPortDataF10;
    PIXYMVB_Data snkPortDataF11;
    PIXYMVB_Data snkPortDataF12;
    PIXYMVB_Data snkPortDataF13;
    PIXYMVB_Data snkPortData108;
    PIXYMVB_Data snkPortData118;
    PIXYMVB_Data snkPortData128;
    PIXYMVB_Data snkPortData138;
    PIXYMVB_Data snkPortData148;
    PIXYMVB_Data snkPortData158;
    PIXYMVB_Data snkPortData168;
    PIXYMVB_Data snkPortData178;
    PIXYMVB_Data snkPortData188;
    PIXYMVB_Data snkPortData220;
    PIXYMVB_Data snkPortData221;
    PIXYMVB_Data snkPortData222;
    PIXYMVB_Data snkPortData223;
    PIXYMVB_Data snkPortData408;
    PIXYMVB_Data snkPortData418;
    PIXYMVB_Data snkPortData508;
    PIXYMVB_Data snkPortData518;
    PIXYMVB_Data snkPortData528;
    PIXYMVB_Data snkPortData538;
    PIXYMVB_Data snkPortData548;
    PIXYMVB_Data snkPortData558;
    PIXYMVB_Data snkPortData568;
    PIXYMVB_Data snkPortData608;
    PIXYMVB_Data snkPortData618;
    PIXYMVB_Data snkPortData628;
    PIXYMVB_Data snkPortData708;
    PIXYMVB_Data snkPortData718;
    PIXYMVB_Data snkPortData808;
    PIXYMVB_Data snkPortData818;
    PIXYMVB_Data snkPortData908;
    PIXYMVB_Data snkPortData918;
    PIXYMVB_Data snkPortData919;
    PIXYMVB_Data snkPortDataA08;
    PIXYMVB_Data snkPortDataA18;
    PIXYMVB_Data snkPortDataB08;
    PIXYMVB_Data snkPortDataB18;


    //--------------------º¯ÊýÇø---------------------------------------------
    bool init();
    void run();
    UNSIGNED16 highbyteLowbyteExchange(const UNSIGNED16 wordData);
    void copyPort(int port, PIXYMVB_Data data, unsigned short int cycle);
#ifdef DEBUG
    void writeDebugLog( const QString str, const SIGNED16 state );
#endif
};

#endif // MvbThread_H
