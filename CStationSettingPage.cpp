#include "CStationSettingPage.h"

ROMDATA g_PicRom_StationSetting[] =
{
    D_COMMON_PAGE_HEADER(QSTR("站设置") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {QSTR("五路居"),                 D_FONT_BOLD(8),      QRect(40, 100, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_1_1        },
    {QSTR("车公庄西"),          D_FONT_BOLD(8),      QRect(40, 150, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_2_1        },
    {QSTR("东四"),                 D_FONT_BOLD(8),      QRect(40, 200, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_3_1        },
    {QSTR("十里堡"),                 D_FONT_BOLD(8),      QRect(40, 250, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_4_1        },
    {QSTR("草房"),                 D_FONT_BOLD(8),      QRect(40, 300, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_5_1        },
    {QSTR("北运河东"),                     D_FONT_BOLD(8),      QRect(40, 350, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_6_1        },
//    {QSTR(""),                     D_FONT_BOLD(8),      QRect(40, 400, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_7_1        },
//    {QSTR(""),                     D_FONT_BOLD(8),      QRect(40, 450, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_8_1        },
    {QSTR("慈寿寺"),               D_FONT_BOLD(8),      QRect(180, 100, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_1_2        },
    {QSTR("车公庄"),                 D_FONT_BOLD(8),      QRect(180, 150, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_2_2        },
    {QSTR("朝阳门"),               D_FONT_BOLD(8),      QRect(180, 200, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_3_2        },
    {QSTR("青年路"),               D_FONT_BOLD(8),      QRect(180, 250, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_4_2        },
    {QSTR("物资学院路"),                 D_FONT_BOLD(8),      QRect(180, 300, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_5_2        },
    {QSTR("郝家府"),                    D_FONT_BOLD(8),      QRect(180, 350, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_6_2        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(180, 400, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_7_2        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(180, 450, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_8_2        },
    {QSTR("花园桥"),               D_FONT_BOLD(8),      QRect(320, 100, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_1_3        },
    {QSTR("平安里"),             D_FONT_BOLD(8),      QRect(320, 150, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_2_3        },
    {QSTR("东大桥"),               D_FONT_BOLD(8),      QRect(320, 200, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_3_3        },
    {QSTR("褡裢坡"),               D_FONT_BOLD(8),      QRect(320, 250, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_4_3        },
    {QSTR("通州北关"),                    D_FONT_BOLD(8),      QRect(320, 300, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_5_3        },
    {QSTR("东夏园"),                    D_FONT_BOLD(8),      QRect(320, 350, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_6_3        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(320, 400, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_7_3        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(320, 450, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_8_3        },
    {QSTR("白石桥南"),               D_FONT_BOLD(8),      QRect(460, 100, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_1_4        },
    {QSTR("北海北"),                 D_FONT_BOLD(8),      QRect(460, 150, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_2_4        },
    {QSTR("呼家楼"),               D_FONT_BOLD(8),      QRect(460, 200, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_3_4        },
    {QSTR("黄渠"),               D_FONT_BOLD(8),      QRect(460, 250, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_4_4        },
    {QSTR("通运门"),                    D_FONT_BOLD(8),      QRect(460, 300, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_5_4        },
    {QSTR("潞城"),                    D_FONT_BOLD(8),      QRect(460, 350, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_6_4        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(460, 400, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_7_4        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(460, 450, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_8_4        },
    {QSTR("二里沟"),               D_FONT_BOLD(8),      QRect(600, 100, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_1_5        },
    {QSTR("南锣鼓巷"),               D_FONT_BOLD(8),      QRect(600, 150, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_2_5        },
    {QSTR("金台路"),                 D_FONT_BOLD(8),      QRect(600, 200, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_3_5        },
    {QSTR("常营"),                 D_FONT_BOLD(8),      QRect(600, 250, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_4_5        },
    {QSTR("北运河西"),                    D_FONT_BOLD(8),      QRect(600, 300, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_5_5        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(600, 350, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_6_5        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(600, 400, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_7_5        },
//    {QSTR(""),                    D_FONT_BOLD(8),      QRect(600, 450, 120, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_8_5        },

};
int g_StationSettingRomLen = sizeof(g_PicRom_StationSetting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CStationSettingPage,CPage)
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
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_1_1, OnBtn11Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_1_2, OnBtn12Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_1_3, OnBtn13Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_1_4, OnBtn14Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_1_5, OnBtn15Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_2_1, OnBtn21Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_2_2, OnBtn22Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_2_3, OnBtn23Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_2_4, OnBtn24Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_2_5, OnBtn25Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_3_1, OnBtn31Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_3_2, OnBtn32Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_3_3, OnBtn33Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_3_4, OnBtn34Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_3_5, OnBtn35Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_4_1, OnBtn41Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_4_2, OnBtn42Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_4_3, OnBtn43Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_4_4, OnBtn44Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_4_5, OnBtn45Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_5_1, OnBtn51Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_5_2, OnBtn52Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_5_3, OnBtn53Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_5_4, OnBtn54Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_5_5, OnBtn55Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_6_1, OnBtn61Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_6_2, OnBtn62Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_6_3, OnBtn63Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_6_4, OnBtn64Clk)
//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_5_2, OnBtn52Clk)
END_MESSAGE_MAP()

CStationSettingPage::CStationSettingPage()
{
}

void CStationSettingPage::OnUpdatePage()
{

}

void CStationSettingPage::OnInitPage()
{
    int nBtnIDArray[] =
    {
     ID_PIBSTATIONSET_BUTTON_1_1,
     ID_PIBSTATIONSET_BUTTON_1_2,
     ID_PIBSTATIONSET_BUTTON_1_3,
     ID_PIBSTATIONSET_BUTTON_1_4,
     ID_PIBSTATIONSET_BUTTON_1_5,
     ID_PIBSTATIONSET_BUTTON_2_1,
     ID_PIBSTATIONSET_BUTTON_2_2,
     ID_PIBSTATIONSET_BUTTON_2_3,
     ID_PIBSTATIONSET_BUTTON_2_4,
     ID_PIBSTATIONSET_BUTTON_2_5,
     ID_PIBSTATIONSET_BUTTON_3_1,
     ID_PIBSTATIONSET_BUTTON_3_2,
     ID_PIBSTATIONSET_BUTTON_3_3,
     ID_PIBSTATIONSET_BUTTON_3_4,
     ID_PIBSTATIONSET_BUTTON_3_5,
     ID_PIBSTATIONSET_BUTTON_4_1,
     ID_PIBSTATIONSET_BUTTON_4_2,
     ID_PIBSTATIONSET_BUTTON_4_3,
     ID_PIBSTATIONSET_BUTTON_4_4,
     ID_PIBSTATIONSET_BUTTON_4_5,
     ID_PIBSTATIONSET_BUTTON_5_1,
     ID_PIBSTATIONSET_BUTTON_5_2,
     ID_PIBSTATIONSET_BUTTON_5_3,
     ID_PIBSTATIONSET_BUTTON_5_4,
     ID_PIBSTATIONSET_BUTTON_5_5,
     ID_PIBSTATIONSET_BUTTON_6_1,
     ID_PIBSTATIONSET_BUTTON_6_2,
     ID_PIBSTATIONSET_BUTTON_6_3,
     ID_PIBSTATIONSET_BUTTON_6_4,
    };

    for (int i=0; i<29; i++)
        ((CButton*)GetDlgItem(nBtnIDArray[i]))->m_bAutoUpState = false;
}

void CStationSettingPage::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("确   认"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
     ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("确   认"));
#endif

    QString stationName = "";

    switch(m_nStationFlg)
    {
    case STATIONFLG_START:
        stationName = station_start_display;
        break;
    case STATIONFLG_END:
        stationName = station_end_display;
        break;
    default:
        break;
    }
    SetStationButtonDownByName(stationName);
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CStationSettingPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_INITIALSETTING);
        }

        void CStationSettingPage::OnComBtn2Clk()
        {

        }

        void CStationSettingPage::OnComBtn3Clk()
        {

        }

        void CStationSettingPage::OnComBtn4Clk()
        {

        }

        void CStationSettingPage::OnComBtn5Clk()
        {

        }

        void CStationSettingPage::OnComBtn6Clk()
        {

        }
        void CStationSettingPage::OnComBtn7Clk()
        {

        }

        void CStationSettingPage::OnComBtn8Clk()
        {
            switch(m_nStationFlg)
            {
            case STATIONFLG_START:
                station_start=m_stationindex;
                break;
            case STATIONFLG_END:
                station_end=m_stationindex;
                break;
            }

            ChangePage(PAGE_INDEX_INITIALSETTING);
        }
#else
        void CStationSettingPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_INITIALSETTING);
        }

        void CStationSettingPage::OnComBtn2Clk()
        {

        }

        void CStationSettingPage::OnComBtn3Clk()
        {

        }

        void CStationSettingPage::OnComBtn4Clk()
        {

        }

        void CStationSettingPage::OnComBtn5Clk()
        {

        }

        void CStationSettingPage::OnComBtn6Clk()
        {
            switch(m_nStationFlg)
            {
            case STATIONFLG_START:
                station_start=m_stationindex;
                break;
            case STATIONFLG_END:
                station_end=m_stationindex;
                break;
            }

            ChangePage(PAGE_INDEX_INITIALSETTING);
        }
#endif



void CStationSettingPage::OnBtn11Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_1_1);
    m_stationindex=1;
}

void CStationSettingPage::OnBtn12Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_1_2);
    m_stationindex=2;
}

void CStationSettingPage::OnBtn13Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_1_3);
    m_stationindex=3;
}

void CStationSettingPage::OnBtn14Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_1_4);
    m_stationindex=4;
}

void CStationSettingPage::OnBtn15Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_1_5);
    m_stationindex=5;
}

void CStationSettingPage::OnBtn21Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_2_1);
    m_stationindex=6;
}

void CStationSettingPage::OnBtn22Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_2_2);
    m_stationindex=7;
}

void CStationSettingPage::OnBtn23Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_2_3);
    m_stationindex=8;
}

void CStationSettingPage::OnBtn24Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_2_4);
    m_stationindex=9;
}

void CStationSettingPage::OnBtn25Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_2_5);
    m_stationindex=10;
}

void CStationSettingPage::OnBtn31Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_3_1);
    m_stationindex=11;
}

void CStationSettingPage::OnBtn32Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_3_2);
    m_stationindex=12;
}

void CStationSettingPage::OnBtn33Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_3_3);
    m_stationindex=13;
}

void CStationSettingPage::OnBtn34Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_3_4);
    m_stationindex=14;
}

void CStationSettingPage::OnBtn35Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_3_5);
    m_stationindex=15;
}

void CStationSettingPage::OnBtn41Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_4_1);
    m_stationindex=16;
}

void CStationSettingPage::OnBtn42Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_4_2);
    m_stationindex=17;
}

void CStationSettingPage::OnBtn43Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_4_3);
    m_stationindex=18;
}

void CStationSettingPage::OnBtn44Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_4_4);
    m_stationindex=19;
}

void CStationSettingPage::OnBtn45Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_4_5);
    m_stationindex=20;
}

void CStationSettingPage::OnBtn51Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_5_1);
    m_stationindex=21;
}

void CStationSettingPage::OnBtn52Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_5_2);
    m_stationindex=22;
}

void CStationSettingPage::OnBtn53Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_5_3);
    m_stationindex=23;
}

void CStationSettingPage::OnBtn54Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_5_4);
    m_stationindex=24;
}

void CStationSettingPage::OnBtn55Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_5_5);
    m_stationindex=25;
}

void CStationSettingPage::OnBtn61Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_6_1);
    m_stationindex=33;
}

void CStationSettingPage::OnBtn62Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_6_2);
    m_stationindex=26;
}

void CStationSettingPage::OnBtn63Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_6_3);
    m_stationindex=27;
}

void CStationSettingPage::OnBtn64Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_6_4);
    m_stationindex=28;
}



void CStationSettingPage::SetStationButtonDownByID(int nID)
{
    int nBtnIDArray[] =
    {
        ID_PIBSTATIONSET_BUTTON_1_1,
        ID_PIBSTATIONSET_BUTTON_1_2,
        ID_PIBSTATIONSET_BUTTON_1_3,
        ID_PIBSTATIONSET_BUTTON_1_4,
        ID_PIBSTATIONSET_BUTTON_1_5,
        ID_PIBSTATIONSET_BUTTON_2_1,
        ID_PIBSTATIONSET_BUTTON_2_2,
        ID_PIBSTATIONSET_BUTTON_2_3,
        ID_PIBSTATIONSET_BUTTON_2_4,
        ID_PIBSTATIONSET_BUTTON_2_5,
        ID_PIBSTATIONSET_BUTTON_3_1,
        ID_PIBSTATIONSET_BUTTON_3_2,
        ID_PIBSTATIONSET_BUTTON_3_3,
        ID_PIBSTATIONSET_BUTTON_3_4,
        ID_PIBSTATIONSET_BUTTON_3_5,
        ID_PIBSTATIONSET_BUTTON_4_1,
        ID_PIBSTATIONSET_BUTTON_4_2,
        ID_PIBSTATIONSET_BUTTON_4_3,
        ID_PIBSTATIONSET_BUTTON_4_4,
        ID_PIBSTATIONSET_BUTTON_4_5,
        ID_PIBSTATIONSET_BUTTON_5_1,
        ID_PIBSTATIONSET_BUTTON_5_2,
        ID_PIBSTATIONSET_BUTTON_5_3,
        ID_PIBSTATIONSET_BUTTON_5_4,
        ID_PIBSTATIONSET_BUTTON_5_5,
        ID_PIBSTATIONSET_BUTTON_6_1,
        ID_PIBSTATIONSET_BUTTON_6_2,
        ID_PIBSTATIONSET_BUTTON_6_3,
        ID_PIBSTATIONSET_BUTTON_6_4,
    };

    for (int i=0; i<29; i++)
    {
        if (nBtnIDArray[i] == nID)
        {
            ((CButton*)GetDlgItem(nBtnIDArray[i]))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            ((CButton*)GetDlgItem(nBtnIDArray[i]))->ChangeButtonState(LBUTTON_UP);
        }
    }
}

void CStationSettingPage::SetStationButtonDownByName(QString stationName)
{
    int nBtnIDArray[] =
    {
        ID_PIBSTATIONSET_BUTTON_1_1,
        ID_PIBSTATIONSET_BUTTON_1_2,
        ID_PIBSTATIONSET_BUTTON_1_3,
        ID_PIBSTATIONSET_BUTTON_1_4,
        ID_PIBSTATIONSET_BUTTON_1_5,
        ID_PIBSTATIONSET_BUTTON_2_1,
        ID_PIBSTATIONSET_BUTTON_2_2,
        ID_PIBSTATIONSET_BUTTON_2_3,
        ID_PIBSTATIONSET_BUTTON_2_4,
        ID_PIBSTATIONSET_BUTTON_2_5,
        ID_PIBSTATIONSET_BUTTON_3_1,
        ID_PIBSTATIONSET_BUTTON_3_2,
        ID_PIBSTATIONSET_BUTTON_3_3,
        ID_PIBSTATIONSET_BUTTON_3_4,
        ID_PIBSTATIONSET_BUTTON_3_5,
        ID_PIBSTATIONSET_BUTTON_4_1,
        ID_PIBSTATIONSET_BUTTON_4_2,
        ID_PIBSTATIONSET_BUTTON_4_3,
        ID_PIBSTATIONSET_BUTTON_4_4,
        ID_PIBSTATIONSET_BUTTON_4_5,
        ID_PIBSTATIONSET_BUTTON_5_1,
        ID_PIBSTATIONSET_BUTTON_5_2,
        ID_PIBSTATIONSET_BUTTON_5_3,
        ID_PIBSTATIONSET_BUTTON_5_4,
        ID_PIBSTATIONSET_BUTTON_5_5,
        ID_PIBSTATIONSET_BUTTON_6_1,
        ID_PIBSTATIONSET_BUTTON_6_2,
        ID_PIBSTATIONSET_BUTTON_6_3,
        ID_PIBSTATIONSET_BUTTON_6_4,
    };

    for (int i = 0; i < 29; i++)
    {
        QString str = ((CButton*)GetDlgItem(nBtnIDArray[i]))->GetCtrlText();
        if (str == stationName)
            ((CButton*)GetDlgItem(nBtnIDArray[i]))->ChangeButtonState(LBUTTON_DOWN);
        else
            ((CButton*)GetDlgItem(nBtnIDArray[i]))->ChangeButtonState(LBUTTON_UP);
    }
}
