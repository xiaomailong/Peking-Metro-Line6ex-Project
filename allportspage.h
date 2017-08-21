#ifndef ALLPORTSPAGE_H
#define ALLPORTSPAGE_H

#include "CGlobal.h"
#include "CPage.h"
#include <QList>

class QPainter;

extern vector<CPage*>  g_PageVec;

#define ID_BUTTON_HMI 0x0001
#define ID_BUTTON_CCU_A 0x0002
#define ID_BUTTON_CCU_B 0x0003
#define ID_BUTTON_ERM 0x0004
#define ID_BUTTON_RIOM 0x0005
#define ID_BUTTON_BCU_A 0x0006
#define ID_BUTTON_BCU_B 0x0007

#define ID_BUTTON_TCU 0x0008
#define ID_BUTTON_EDCU_A 0x0009
#define ID_BUTTON_EDCU_B 0x000A
#define ID_BUTTON_ACU 0x000B
#define ID_BUTTON_HVAC 0x000C

#define ID_BUTTON_FAS 0x000D
#define ID_BUTTON_PA 0x000E
#define ID_BUTTON_PMS 0x000F
#define ID_BUTTON_RSFDS 0x0010
#define ID_BUTTON_ATC 0x0011

#define ID_BUTTON_BACK 0x0012

class AllPortsPage: public CPage
{
    DECLEAR_MESSAGE_MAP(AllPortsPage)

public:
    AllPortsPage();
    void OnUpdatePage();
    void OnInitPage();
    void backButtonDown();
    void controlButtonDown();
    void hmiButtonDown();
    void ccuAButtonDown();
    void ccuBButtonDown();
    void ermButtonDown();
    void riomButtonDown();
    void bcuAButtonDown();
    void bcuBButtonDown();
    void tcuButtonDown();
    void edcuAButtonDown();
    void edcuBButtonDown();
    void acuButtonDown();
    void hvacButtonDown();
    void fasButtonDown();
    void paButtonDown();
    void pmsButtonDown();
    void rsfdsButtonDown();
    void atcButtonDown();
    void controlButtonDown(unsigned short int controlId);

private:
    QList<unsigned short int> hmiPorts, ccuAPorts, ccuBPorts, ermPorts, riomPorts, atcPorts,
                                bcuAPorts, bcuBPorts, tcuPorts, edcuAPorts, edcuBPorts,
                                acuPorts, hvacPorts, fasPorts, pmsPorts, paPorts, rsfdsPorts;
    unsigned short int currentId;
    QList<unsigned short int> currentPorts;
};

#endif // ALLPORTSPAGE_H
