#ifndef HMIPOSITIONSETPAGE_H
#define HMIPOSITIONSETPAGE_H

#include <QDialog>
#include "CGlobal.h"
#include <qevent.h>
#include <qmutex.h>
#include <qtimer.h>
#include "CPage.h"

#define ID_BUTTON_HMI_TC1 0x0001
#define ID_BUTTON_HMI_TC2 0x0002
#define ID_BUTTON_HMI_RESET 0x0003
#define ID_BUTTON_HMI_DESCRIPTION 0x0004

extern vector<CPage*>  g_PageVec;

class HmiPositionSetPage: public CPage
{
    DECLEAR_MESSAGE_MAP(HmiPositionSetPage)

public:
    HmiPositionSetPage();
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void buttonHmiTc1Down();
    void buttonHmiTc2Down();
    void buttonHmiReset();
    void buttonBackClick();
};

#endif // HMIPOSITIONSETPAGE_H
