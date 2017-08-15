#ifndef CRunHelp3Page_H
#define CRunHelp3Page_H

#include "CPage.h"

#define ID_PIBRUNHELP_DOORSEPARAT1 0X0001
#define ID_PIBRUNHELP_DOORSEPARAT2 0X0002
#define ID_PIBRUNHELP_DOORSEPARAT3 0X0003
#define ID_PIBRUNHELP_DOORSEPARAT4 0X0004
#define ID_PIBRUNHELP_ICON3        0X0005

extern vector<CPage*>  g_PageVec;

class CRunHelp3Page : public CPage
{
    DECLEAR_MESSAGE_MAP(CRunHelp3Page)
public:
    CRunHelp3Page();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
private:
    void OnComBtn1Clk();
    void OnComBtn2Clk();
    void OnComBtn3Clk();
    void OnComBtn4Clk();
    void OnComBtn5Clk();
    void OnComBtn6Clk();
#ifdef PAGE_BUTTON_BAR_NEW
    void OnComBtn7Clk();
    void OnComBtn8Clk();
#endif
};

#endif // CRunHelp3Page_H
