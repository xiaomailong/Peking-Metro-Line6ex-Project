#include "CCarStatusHelpPage.h"

ROMDATA g_PicRom_CarStatusHelp[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QSTR("牵引状态帮助"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {"",                            D_FONT_BOLD(6),      QRect( 50,  55, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 50,  85, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 120, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 155, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 190, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 225, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 260, 220,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 295, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 330, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 365, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(50, 400, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 435, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 470, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 505, 550,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 540, 700,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 50,  55,   1, 485),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200,  55,   1, 485),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(310,  55,   1, 485),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(420,  55,   1, 485),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(750,  55,   1, 486),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QSTR("显示项目"),               D_FONT_BOLD(8),      QRect( 50,  55, 150,  30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("显示条件"),               D_FONT_BOLD(8),      QRect(200,  55, 110,  30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("显示"),                  D_FONT_BOLD(8),      QRect(310,  55, 110,  30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("备注"),                  D_FONT_BOLD(8),      QRect(420,  55, 330,  30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },

    {QSTR("高速断路器状态"),     D_FONT_BOLD(8),      QRect( 50,  85, 150, 140),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("断开"),                  D_FONT_BOLD(8),      QRect(200,  85, 110,  35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("闭合"),                  D_FONT_BOLD(8),      QRect(200, 120, 110,  35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                     D_FONT_BOLD(6),      QRect(330, 125,  70,  25),            Qt::white,                Qt::green,               CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("故障"),                  D_FONT_BOLD(8),      QRect(200, 155, 110,  35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                     D_FONT_BOLD(6),      QRect(330, 160,  70,  25),            Qt::white,                Qt::red,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("断开或闭合失败"),          D_FONT_BOLD(8),      QRect(460, 155, 250,  35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("通信异常"),               D_FONT_BOLD(8),      QRect(200, 190, 110,  35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                     D_FONT_BOLD(6),      QRect(330, 195,  70,  25),            Qt::white,                Qt::white,               CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("KIC状态\nKCCC状态"),      D_FONT_BOLD(8),      QRect( 50, 225, 150, 105),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("闭合"),                  D_FONT_BOLD(8),      QRect(200, 225, 110,  35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                     D_FONT_BOLD(6),      QRect(330, 230,  70,  25),            Qt::white,                Qt::green,               CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("断开"),                  D_FONT_BOLD(8),      QRect(200, 260, 110,  35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("故障"),                  D_FONT_BOLD(8),      QRect(200, 295, 110,  35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                     D_FONT_BOLD(6),      QRect(330, 300,  70,  25),            Qt::white,                Qt::red,                 CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("KIC,KCCC为牵引系统内部接触器，\nKIC为线路接触器，KCCC为预充电接触器"),          D_FONT_BOLD(8),      QRect(421, 225, 329,  70),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("闭合或断开失败"),          D_FONT_BOLD(8),      QRect(460, 295, 250,  35),            Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("牵引制动力"),       D_FONT_BOLD(8),      QRect( 50, 330, 150, 70),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("牵引时"),                  D_FONT_BOLD(8),      QRect(200, 330, 110,  35),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("160"),                     D_FONT_BOLD(6),      QRect(330, 335,  70,  25),            Qt::white,                Qt::transparent,              CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("正值代表牵引力"),         D_FONT_BOLD(8),      QRect(460, 330, 250,  35),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("制动时"),                 D_FONT_BOLD(8),      QRect(200, 365, 110,  35),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("-80"),                      D_FONT_BOLD(6),      QRect(330, 370,  70,  25),            Qt::white,                Qt::transparent,             CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("负值代表电制动力"),         D_FONT_BOLD(8),      QRect(460, 365, 250,  35),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE          },

    {QSTR("IES状态"),       D_FONT_BOLD(8),      QRect( 50, 400, 150, 70),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("正常时"),               D_FONT_BOLD(8),      QRect(200, 400, 110,  35),             Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("受电弓位"),                     D_FONT_BOLD(6),      QRect(330, 405,  70,  25),             Qt::black,                Qt::green,               CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("通信异常"),                  D_FONT_BOLD(8),      QRect(200, 435, 110,  35),             Qt::white,                Qt::transparent,         CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                     D_FONT_BOLD(6),      QRect(330, 440,  70,  25),             Qt::white,                Qt::white,                 CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("IES有受电弓位，接地位和车间电源位3种\n状态，分别显示汉字"),            D_FONT_BOLD(5),      QRect(421, 400, 329,  35),             Qt::white,                Qt::transparent,         CONTROL_LABEL,          ID_IGNORE         },

    {QSTR("主熔断器状态"),         D_FONT_BOLD(8),      QRect( 50, 470, 150, 70),            Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("正常时"),               D_FONT_BOLD(8),      QRect(200, 470, 110,  35),             Qt::white,                Qt::transparent,        CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),             D_FONT_BOLD(8),      QRect(330, 475,  70,  25),             Qt::black,                Qt::green,               CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("不正常时"),                    D_FONT_BOLD(8),      QRect(200, 505, 110,  35),             Qt::white,                Qt::transparent,         CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                     D_FONT_BOLD(8),      QRect(330, 510,  70,  25),             Qt::white,                Qt::transparent,                 CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                    D_FONT_BOLD(8),      QRect(460, 470, 250,  35),             Qt::white,                Qt::transparent,         CONTROL_LABEL,          ID_IGNORE         },

    // {QSTR("备注：KIC,KCCC为牵引系统内部接触器，KIC为线路接触器，KCCC为预充电接触器"),            D_FONT_BOLD(8),      QRect(30, 470, 700,  35),             Qt::white,                Qt::transparent,         CONTROL_LABEL,          ID_IGNORE         },

};
int g_CarStatusHelpRomLen = sizeof(g_PicRom_CarStatusHelp)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCarStatusHelpPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
#ifdef PAGE_BUTTON_BAR_NEW
        ON_BTNCLK(IDLB_COM_BTN7, OnComBtn7Clk)
        ON_BTNCLK(IDLB_COM_BTN8, OnComBtn8Clk)
#endif
END_MESSAGE_MAP()

CCarStatusHelpPage::CCarStatusHelpPage()
{
}

void CCarStatusHelpPage::OnUpdatePage()
{

}

void CCarStatusHelpPage::OnInitPage()
{

}

void CCarStatusHelpPage::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR(""));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
#endif
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CCarStatusHelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS2);
        }

        void CCarStatusHelpPage::OnComBtn2Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn3Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn4Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn5Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn6Clk()
        {

        }
        void CCarStatusHelpPage::OnComBtn7Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn8Clk()
        {

        }
#else
        void CCarStatusHelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS2);
        }

        void CCarStatusHelpPage::OnComBtn2Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn3Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn4Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn5Clk()
        {

        }

        void CCarStatusHelpPage::OnComBtn6Clk()
        {

        }

#endif


