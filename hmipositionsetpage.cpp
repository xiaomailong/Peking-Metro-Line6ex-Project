#include "hmipositionsetpage.h"
#include "dialog.h"
#include "ui_dialog.h"
#include <qdesktopwidget.h>
#include <qapplication.h>
#include <qdatetime.h>
#include <qdebug.h>
#include <qprocess.h>

ROMDATA g_PicRom_HmiPositionSet[] =
{
    D_COMMON_PAGE_HEADER(QSTR("HMI位置设置"))

    {QSTR("HMI TC1端"), D_FONT_BOLD(8), QRect( 55 + 120,  180, 120,  38), Qt::black, Qt::gray, CONTROL_BUTTON, ID_PIBDM_BUTTON_VERINF},
    {QSTR("HMI TC2端"), D_FONT_BOLD(8), QRect(195 + 120,  180, 120,  38), Qt::black, Qt::gray, CONTROL_BUTTON, ID_PIBDM_BUTTON_LIFESINGAL},
    {QSTR("重新启动HMI"), D_FONT_BOLD(8),QRect(335 + 120,  180, 120,  38), Qt::black, Qt::gray, CONTROL_BUTTON, ID_PIBDM_BUTTON_RIOMDEBUG},
    {QSTR("提示：设置完成后，请重新启动HMI。"), D_FONT_BOLD(8), QRect(55 + 120,  250, 330,  38), Qt::white, Qt::black, CONTROL_LABEL, ID_PIBDM_BUTTON_FRESHTIME},

    D_COMMON_PAGE_BUTTON_BAR
};

int g_HmiPositionSetLen = sizeof(g_PicRom_HmiPositionSet)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(HmiPositionSetPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_LBUTTONDOWN(ID_BUTTON_HMI_TC1, buttonHmiTc1Down)
        ON_LBUTTONDOWN(ID_BUTTON_HMI_TC2, buttonHmiTc2Down)
        ON_BTNCLK(ID_BUTTON_HMI_RESET, buttonHmiReset)
        ON_BTNCLK(IDLB_COM_BTN1, buttonBackClick)
END_MESSAGE_MAP()

HmiPositionSetPage::HmiPositionSetPage()
{
}

void HmiPositionSetPage::OnUpdatePage()
{

}

void HmiPositionSetPage::OnInitPage()
{
    ((CButton *)this->GetDlgItem(ID_BUTTON_HMI_TC1))->m_bAutoUpState = 0;
    ((CButton *)this->GetDlgItem(ID_BUTTON_HMI_TC2))->m_bAutoUpState = 0;
}

void HmiPositionSetPage::OnShowPage()
{
    if (1 == TC1_HMI)
    {
        ((CButton *)this->GetDlgItem(ID_BUTTON_HMI_TC1))->ChangeButtonState(LBUTTON_DOWN);
        ((CButton *)this->GetDlgItem(ID_BUTTON_HMI_TC2))->ChangeButtonState(LBUTTON_UP);
    }
    else if (1 == TC2_HMI)
    {
        ((CButton *)this->GetDlgItem(ID_BUTTON_HMI_TC1))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)this->GetDlgItem(ID_BUTTON_HMI_TC2))->ChangeButtonState(LBUTTON_DOWN);
    }
    else
    {
        ((CButton *)this->GetDlgItem(ID_BUTTON_HMI_TC1))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)this->GetDlgItem(ID_BUTTON_HMI_TC2))->ChangeButtonState(LBUTTON_UP);
    }

    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
}

void HmiPositionSetPage::buttonBackClick()
{
    this->ChangePage(PAGE_INDEX_DEBUGMAIN);
}

void HmiPositionSetPage::buttonHmiTc1Down()
{
    SetINIInfo(QString("/HMI/TC1_HMI"), QString("1"));
    SetINIInfo(QString("/HMI/TC2_HMI"), QString("0"));

    ((CButton *)this->GetDlgItem(ID_BUTTON_HMI_TC1))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton *)this->GetDlgItem(ID_BUTTON_HMI_TC2))->ChangeButtonState(LBUTTON_UP);
}

void HmiPositionSetPage::buttonHmiTc2Down()
{
    SetINIInfo(QString("/HMI/TC1_HMI"), QString("0"));
    SetINIInfo(QString("/HMI/TC2_HMI"), QString("1"));

    ((CButton *)this->GetDlgItem(ID_BUTTON_HMI_TC1))->ChangeButtonState(LBUTTON_UP);
    ((CButton *)this->GetDlgItem(ID_BUTTON_HMI_TC2))->ChangeButtonState(LBUTTON_DOWN);
}

void HmiPositionSetPage::buttonHmiReset()
{
    system("reboot");
}
