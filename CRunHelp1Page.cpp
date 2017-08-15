#include "CRunHelp1Page.h"

ROMDATA g_PicRom_RunHelp1[] =
{
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    D_COMMON_PAGE_HEADER(QSTR("运行帮助") )

    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40,  90, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 210, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 270, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 420, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 510, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 40, 540, 720,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(200, 120, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 150, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 180, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 240, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 300, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 345, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 390, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(200, 450, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(200, 480, 560,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 40,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(310,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(420,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(760,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QSTR("显示项目"),                D_FONT_BOLD(8),      QRect( 41,  61, 158, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("显示条件"),                D_FONT_BOLD(8),      QRect(201,  61, 108, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("显示"),                   D_FONT_BOLD(8),      QRect(311,  61, 108, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("备注"),                   D_FONT_BOLD(8),      QRect(421,  61, 338, 28),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QSTR("接触网电压"),              D_FONT_BOLD(8),      QRect( 41, 135, 158, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("网流"),                   D_FONT_BOLD(8),      QRect( 41, 225, 158, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("牵引系统电制动"),          D_FONT_BOLD(8),      QRect( 41, 300, 158, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("级位"),                   D_FONT_BOLD(8),      QRect( 81, 330,  58, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },

    {QSTR("正常"),                   D_FONT_BOLD(8),      QRect(201,  91, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("电压过低"),               D_FONT_BOLD(8),      QRect(201, 121, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("电压过高"),               D_FONT_BOLD(8),      QRect(201, 151, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("通信异常"),               D_FONT_BOLD(8),      QRect(201, 181, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QSTR("显示实际值"),             D_FONT_BOLD(8),      QRect(201, 211, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("通信异常"),               D_FONT_BOLD(8),      QRect(201, 241, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QSTR("惰行"),                  D_FONT_BOLD(8),       QRect(201, 271, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("牵引"),                  D_FONT_BOLD(8),       QRect(201, 308, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("制动 "),                 D_FONT_BOLD(8),       QRect(201, 354, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("紧急制动"),              D_FONT_BOLD(8),       QRect(201, 391, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    //  {QSTR("空压机状态"),              D_FONT_BOLD(8),      QRect( 41, 450, 158, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE       },
    //    {QSTR("未运行"),                D_FONT_BOLD(8),       QRect(201, 421, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    //    {QSTR("运行"),                  D_FONT_BOLD(8),       QRect(201, 451, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    //    {QSTR("故障"),                  D_FONT_BOLD(8),       QRect(201, 481, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    //    {QSTR(""),                      D_FONT_BOLD(8),       QRect(320, 455,  90, 20),          Qt::black,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE        },
    //    {QSTR(""),                      D_FONT_BOLD(8),       QRect(320, 485,  90, 20),          Qt::black,                Qt::red,                   CONTROL_LABEL,           ID_IGNORE        },

    {QSTR("1500V"),                  D_FONT_BOLD(8),       QRect(320,  95,  90, 20),          Qt::black,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("900V"),                  D_FONT_BOLD(8),       QRect(320, 125,  90, 20),          Qt::white,                Qt::red,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("1900V"),                  D_FONT_BOLD(8),       QRect(320, 155,  90, 20),          Qt::white,                Qt::red,                   CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),       QRect(320, 185,  90, 20),          Qt::black,                Qt::white,                 CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("80A"),                   D_FONT_BOLD(8),       QRect(311, 211, 108, 28),          Qt::white,                Qt::black,                 CONTROL_LABEL,           ID_IGNORE        },
    {QSTR(""),                      D_FONT_BOLD(8),       QRect(320, 245,  90, 20),          Qt::white,                Qt::white,                 CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("惰行"),                  D_FONT_BOLD(8),       QRect(311, 271, 108, 28),          Qt::white,                Qt::black,                 CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("牵引 50%"),              D_FONT_BOLD(8),       QRect(320, 310,  90, 25),          Qt::black,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("制动 50%"),              D_FONT_BOLD(8),       QRect(320, 355,  90, 25),          Qt::white,                Qt::darkRed,               CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("紧急制动"),               D_FONT_BOLD(8),       QRect(320, 395,  90, 20),          Qt::white,                Qt::red,                   CONTROL_LABEL,           ID_IGNORE        },

    {QSTR("该车辆牵引系统检测出接触网的电压"),      D_FONT_BOLD(8),      QRect(421,  91, 338, 28),           Qt::white,      Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("1000V以下"),                         D_FONT_BOLD(8),      QRect(421, 121, 338, 28),           Qt::white,      Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("1800V以上"),                         D_FONT_BOLD(8),      QRect(421, 151, 338, 28),           Qt::white,      Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("该车辆牵引系统检测出网流"),            D_FONT_BOLD(8),      QRect(421, 211, 338, 28),           Qt::white,      Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("不存在牵引和制动命令"),               D_FONT_BOLD(8),      QRect(421, 271, 338, 28),           Qt::white,      Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("牵引有效/制动无效，pwm范围为0%-100%"),   D_FONT_BOLD(7),    QRect(421, 302, 338,40),   Qt::white,      Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("5%-10%默认为10%,90%-95%默认为90%"),             D_FONT_BOLD(5),    QRect(421, 323, 300,20),   Qt::white,      Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QSTR("制动有效/牵引无效，pwm范围为0%-100%"),   D_FONT_BOLD(7),    QRect(421, 347, 338, 40),  Qt::white,      Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QSTR("5%-10%默认为10%,90%-95%默认为90%"),             D_FONT_BOLD(5),    QRect(421, 368, 300, 20),  Qt::white,      Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QSTR("故障信息"),                    D_FONT_BOLD(8),      QRect( 41, 450, 158, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("发生故障"),                    D_FONT_BOLD(8),      QRect(201, 450, 108, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {"FaultRed.PNG",                    D_DEFAULT_FONT,      QRect(330,  430,  70,  70),         Qt::black,                  Qt::red,                  CONTROL_IMAGE,            ID_IGNORE    },

    {QSTR("当前有1,2级故障发生时，点击故障"), D_FONT_BOLD(8),      QRect(421, 421, 330, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("按钮可以进入故障显示页面，正常情"), D_FONT_BOLD(8),      QRect(421, 451, 330, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("况下不显示故障三角"),            D_FONT_BOLD(8),      QRect(421, 481, 210, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("速度"),                    D_FONT_BOLD(8),      QRect(41, 511, 158, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("显示实际值"),               D_FONT_BOLD(8),      QRect( 201, 511, 108, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("60 km/h"),                     D_FONT_BOLD(8),      QRect( 320, 515, 90, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("根据制动传感器计算的速度"),    D_FONT_BOLD(8),      QRect( 421, 511, 338, 28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

};
int g_RunHelp1RomLen = sizeof(g_PicRom_RunHelp1)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRunHelp1Page,CPage)
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

CRunHelp1Page::CRunHelp1Page()
{
}

void CRunHelp1Page::OnUpdatePage()
{

}

void CRunHelp1Page::OnInitPage()
{

}

void CRunHelp1Page::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("下一页"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("下一页"));
#endif
}

#ifdef PAGE_BUTTON_BAR_NEW
        void CRunHelp1Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp1Page::OnComBtn2Clk()
        {

        }

        void CRunHelp1Page::OnComBtn3Clk()
        {

        }

        void CRunHelp1Page::OnComBtn4Clk()
        {

        }

        void CRunHelp1Page::OnComBtn5Clk()
        {

        }

        void CRunHelp1Page::OnComBtn6Clk()
        {

        }
        void CRunHelp1Page::OnComBtn7Clk()
        {

        }

        void CRunHelp1Page::OnComBtn8Clk()
        {
         ChangePage(PAGE_INDEX_RUNHELP2);
        }
#else
        void CRunHelp1Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp1Page::OnComBtn2Clk()
        {

        }

        void CRunHelp1Page::OnComBtn3Clk()
        {

        }

        void CRunHelp1Page::OnComBtn4Clk()
        {

        }

        void CRunHelp1Page::OnComBtn5Clk()
        {

        }

        void CRunHelp1Page::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP2);
        }

#endif

