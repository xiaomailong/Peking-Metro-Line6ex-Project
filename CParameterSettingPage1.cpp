#include "CParameterSettingPage1.h"
#include <qdebug.h>

ROMDATA g_PicRom_ParameterSetting1[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QSTR("参数设置"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {"",                  D_FONT_BOLD(5),      QRect(178, 85, 600,  70),           Qt::black,                Qt::gray,                 CONTROL_TRAIN,           ID_PARAMETERSET_TRAIN          },
    {"RIGHT",             D_FONT_BOLD(6),      QRect(702,  117,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PARAMETERSET_ARROW_RIGHT    },
    {"LEFT",              D_FONT_BOLD(6),      QRect(54,  117,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PARAMETERSET_ARROW_LEFT     },

    {"",                  D_FONT_BOLD(6),      QRect( 10,  160, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  190, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  220, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  250, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  280, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  310, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  340, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  370, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  400, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                          D_FONT_BOLD(6),      QRect( 10, 160,   1, 240),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(100, 160,   1, 240),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(175, 160,   1, 240),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(250, 160,   1, 240),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(325, 160,   1, 240),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(400, 160,   1, 240),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(475, 160,   1, 240),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(550, 160,   1, 240),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(625, 160,   1, 240),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(700, 160,   1, 240),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },


    {QSTR("车   号"),      D_FONT_BOLD(8),      QRect( 11, 161, 88, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1"),            D_FONT_BOLD(8),      QRect(103, 161,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("2"),            D_FONT_BOLD(8),      QRect(178, 161,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("3"),            D_FONT_BOLD(8),      QRect(253, 161,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("4"),            D_FONT_BOLD(8),      QRect(328, 161,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("5"),            D_FONT_BOLD(8),      QRect(403, 161,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("6"),            D_FONT_BOLD(8),      QRect(478, 161,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("7"),            D_FONT_BOLD(8),      QRect(553, 161,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("8"),            D_FONT_BOLD(8),      QRect(628, 161,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR(""),            D_FONT_BOLD(8),      QRect( 11, 191, 88, 28),            Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_TRAINNUMBER         },
    {QSTR("列车号"),       D_FONT_BOLD(6),      QRect( 12, 192,  44, 27),            Qt::black,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_TRAINSTR            },
    {QSTR(""),            D_FONT_BOLD(6),      QRect(57, 192,  42, 27),            Qt::black,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_TRAINNUMVAL         },


    {QSTR(""),            D_FONT_BOLD(8),      QRect(103, 192,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER1         },
    {QSTR(""),            D_FONT_BOLD(8),      QRect(178, 192,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER2         },
    {QSTR(""),            D_FONT_BOLD(8),      QRect(253, 192,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER3         },
    {QSTR(""),            D_FONT_BOLD(8),      QRect(328, 192,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER4         },
    {QSTR(""),            D_FONT_BOLD(8),      QRect(403, 192,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER5         },
    {QSTR(""),            D_FONT_BOLD(8),      QRect(478, 192,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER6         },
    {QSTR(""),            D_FONT_BOLD(8),      QRect(553, 192,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER7         },
    {QSTR(""),            D_FONT_BOLD(8),      QRect(628, 192,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER8         },

    {QSTR("1轴轮径"),      D_FONT_BOLD(8),      QRect( 11, 221, 88, 27),           Qt::white,                Qt::black,               CONTROL_LABEL,            ID_IGNORE         },

    {QSTR(""),            D_FONT_BOLD(8),      QRect(103, 221,  70, 28),           Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR1DIAMETER1      },
    {QSTR(""),            D_FONT_BOLD(8),      QRect(178, 221,  70, 28),           Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR2DIAMETER1      },
    {QSTR(""),            D_FONT_BOLD(8),      QRect(253, 221,  70, 28),           Qt::black,                 Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR3DIAMETER1      },
    {QSTR(""),            D_FONT_BOLD(8),      QRect(328, 221,  70, 28),           Qt::black,                 Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR4DIAMETER1      },
    {QSTR(""),            D_FONT_BOLD(8),      QRect(403, 221,  70, 28),           Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR5DIAMETER1      },
    {QSTR(""),            D_FONT_BOLD(8),      QRect(478, 221,  70, 28),           Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR6DIAMETER1      },
    {QSTR(""),            D_FONT_BOLD(8),      QRect(553, 221,  70, 28),           Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR7DIAMETER1      },
    {QSTR(""),            D_FONT_BOLD(8),      QRect(628, 221,  70, 28),           Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR8DIAMETER1      },

    {QSTR("2轴轮径"),      D_FONT_BOLD(8),      QRect(  11, 251, 88, 27),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE          },
    {QSTR("--"),           D_FONT_BOLD(8),      QRect(178, 251,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),           D_FONT_BOLD(8),      QRect(253, 251,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),           D_FONT_BOLD(8),      QRect(328, 251,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),           D_FONT_BOLD(8),      QRect(403, 251,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),           D_FONT_BOLD(8),      QRect(478, 251,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),           D_FONT_BOLD(8),      QRect(553, 251,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR(""),             D_FONT_BOLD(8),      QRect(103, 251,  70, 28),          Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR1DIAMETER2        },
    {QSTR(""),             D_FONT_BOLD(8),      QRect(628, 251,  70, 28),          Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR8DIAMETER2        },

    {QSTR("3轴轮径"),       D_FONT_BOLD(8),      QRect( 11, 281, 88, 27),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE          },
    {QSTR("--"),           D_FONT_BOLD(8),      QRect(178, 282,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),           D_FONT_BOLD(8),      QRect(253, 282,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),           D_FONT_BOLD(8),      QRect(328, 282,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),           D_FONT_BOLD(8),      QRect(403, 282,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),           D_FONT_BOLD(8),      QRect(478, 282,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),           D_FONT_BOLD(8),      QRect(553, 282,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR(""),             D_FONT_BOLD(8),      QRect(103, 281,  70, 28),           Qt::black,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR1DIAMETER3        },
    {QSTR(""),             D_FONT_BOLD(8),      QRect(628, 281,  70, 28),           Qt::black,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR8DIAMETER3        },

    {QSTR("4轴轮径"),       D_FONT_BOLD(8),      QRect( 11, 311, 88, 27),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE          },
    {QSTR("--"),           D_FONT_BOLD(8),      QRect(178, 312, 70, 27),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),           D_FONT_BOLD(8),      QRect(253, 312, 70, 27),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),           D_FONT_BOLD(8),      QRect(328, 312, 70, 27),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),           D_FONT_BOLD(8),      QRect(403, 312, 70, 27),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),           D_FONT_BOLD(8),      QRect(478, 312, 70, 27),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),           D_FONT_BOLD(8),      QRect(553, 312, 70, 27),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR(""),              D_FONT_BOLD(8),      QRect(103, 311, 70, 28),           Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR1DIAMETER4        },
    {QSTR(""),              D_FONT_BOLD(8),      QRect(628, 311, 70, 28),           Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR8DIAMETER4        },

    {QSTR("AS压力(满)"),   D_FONT_BOLD(8),      QRect( 11, 341, 88, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("560"),           D_FONT_BOLD(8),      QRect(103, 342,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("560"),           D_FONT_BOLD(8),      QRect(178, 342,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("560"),           D_FONT_BOLD(8),      QRect(253, 342,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("560"),           D_FONT_BOLD(8),      QRect(328, 342,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("560"),           D_FONT_BOLD(8),      QRect(403, 342,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("560"),           D_FONT_BOLD(8),      QRect(478, 342,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("560"),           D_FONT_BOLD(8),      QRect(553, 342,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("560"),           D_FONT_BOLD(8),      QRect(628, 342,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QSTR("AS压力(空)"),   D_FONT_BOLD(8),      QRect( 11, 371, 88, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("250"),           D_FONT_BOLD(8),      QRect(103, 371,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("250"),           D_FONT_BOLD(8),      QRect(178, 371,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("250"),           D_FONT_BOLD(8),      QRect(253, 371,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("250"),           D_FONT_BOLD(8),      QRect(328, 371,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("250"),           D_FONT_BOLD(8),      QRect(403, 371,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("250"),           D_FONT_BOLD(8),      QRect(478, 371,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("250"),           D_FONT_BOLD(8),      QRect(553, 371,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("250"),           D_FONT_BOLD(8),      QRect(628, 371,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },

    {QSTR("如变更数据，请按相关数据进行设置。"),                     D_FONT_BOLD(8),     QRect(40, 420, 400, 30),  Qt::white,   Qt::black,    CONTROL_LABEL,           ID_IGNORE       },
    {QSTR("全部设置完毕后，点击【变更】按钮，按钮弹起表示设置完毕。"),   D_FONT_BOLD(8),    QRect(40, 451, 600, 30),  Qt::white,   Qt::black,    CONTROL_LABEL,           ID_IGNORE       },

    {QSTR("变   更"),        D_FONT_BOLD(8),      QRect( 25, 490, 100, 40),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_CHANGE              },
    {QSTR("轮径履历"),       D_FONT_BOLD(8),      QRect(675, 490, 100, 40),            Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_WHEELDIAMETERRESUME  },



};
int g_ParameterSetting1RomLen = sizeof(g_PicRom_ParameterSetting1)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CParameterSettingPage1,CPage)
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

        ON_BTNCLK(ID_PICCARSET_LABEL_CAR1DIAMETER1, OnCar1Diameter1SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR2DIAMETER1, OnCar2Diameter1SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR3DIAMETER1, OnCar3Diameter1SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR4DIAMETER1, OnCar4Diameter1SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR5DIAMETER1, OnCar5Diameter1SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR6DIAMETER1, OnCar6Diameter1SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR7DIAMETER1, OnCar7Diameter1SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR8DIAMETER1, OnCar8Diameter1SetBtnClk)

        ON_BTNCLK(ID_PICCARSET_LABEL_CAR1DIAMETER2, OnCar1Diameter2SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR8DIAMETER2, OnCar8Diameter2SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR1DIAMETER3, OnCar1Diameter3SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR8DIAMETER3, OnCar8Diameter3SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR1DIAMETER4, OnCar1Diameter4SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR8DIAMETER4, OnCar8Diameter4SetBtnClk)

        ON_BTNCLK(ID_PICCARSET_LABEL_TRAINNUMBER, OnTrainNumBtnClk)


        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_CHANGE, OnChangeBtnDown)
        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_WHEELDIAMETERRESUME, OnWheelDiamResumBtnClk)

END_MESSAGE_MAP()

CParameterSettingPage1::CParameterSettingPage1()
{
    m_WheelDiaType = -1;
}

void CParameterSettingPage1::OnUpdatePage()
{
    updateTrain(ID_PARAMETERSET_TRAIN);
    updateArrow(ID_PARAMETERSET_ARROW_LEFT,ID_PARAMETERSET_ARROW_RIGHT);

    updateErrorLine(ID_PARAMETERSET_TRAIN);

    UpdateCarNumber();
    UpdateDiameterValue();
    UpdateTrainValue();

    if (m_bChange)
    {
        static int times = 0;
        times++;
        if (times%times_n == 0)
        {
            prameter_setting_timer--;
            if (prameter_setting_timer==0)
            {
                m_bChange = false;
                prameter_setting_button=0;
                parameter_setting_se1ect1=0;

                BitSet( HMI_send_data28, 5, 0);
                BitSet( HMI_send_data16, 8, 0);
         //       BitSet( HMI_send_data16, 8, 0);


                ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_CHANGE))->ChangeButtonState(LBUTTON_UP);

                SaveCurWheelDia();
                SaveWheelDiaToCSV();
            }
        }
    }
}

void CParameterSettingPage1::OnInitPage()
{
    ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_CHANGE))->m_bAutoUpState = false;
}

void CParameterSettingPage1::OnShowPage()
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
     ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
#endif

    prameter_setting_timer = 5;
    ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_CHANGE))->ChangeButtonState(LBUTTON_UP);
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CParameterSettingPage1::OnComBtn1Clk()
        {
            //reset label state
            for(int i = WHEELDIAENUM_CAR11; i <= WHEELDIAENUM_CAR64; i++)
                ResetParameter1Label(i);

            m_WheelDiaList.clear();

            ChangePage(PAGE_INDEX_MAINTAIN);
        }

        void CParameterSettingPage1::OnComBtn2Clk()
        {

        }

        void CParameterSettingPage1::OnComBtn3Clk()
        {

        }

        void CParameterSettingPage1::OnComBtn4Clk()
        {

        }

        void CParameterSettingPage1::OnComBtn5Clk()
        {

        }

        void CParameterSettingPage1::OnComBtn6Clk()
        {

        }
        void CParameterSettingPage1::OnComBtn7Clk()
        {

        }

        void CParameterSettingPage1::OnComBtn8Clk()
        {

        }
#else
        void CParameterSettingPage1::OnComBtn1Clk()
        {
            //reset label state
            for(int i = WHEELDIAENUM_CAR11; i <= WHEELDIAENUM_CAR64; i++)
                ResetParameter1Label(i);

            m_WheelDiaList.clear();

            ChangePage(PAGE_INDEX_MAINTAIN);
        }

        void CParameterSettingPage1::OnComBtn2Clk()
        {

        }

        void CParameterSettingPage1::OnComBtn3Clk()
        {

        }

        void CParameterSettingPage1::OnComBtn4Clk()
        {

        }

        void CParameterSettingPage1::OnComBtn5Clk()
        {

        }

        void CParameterSettingPage1::OnComBtn6Clk()
        {
         //ChangePage(PAGE_INDEX_MAINTAIN);
        }

#endif


void CParameterSettingPage1::OnChangeBtnDown()
{
    m_bChange = true;
    prameter_setting_timer = 5;

    if ( Bit(parameter_setting_se1ect1,1)==1)
    {
        HMI_send_data25=HMI_send_data_temp1;
    }

    HMI_send_data2=CCU_HMI_220_2;
    HMI_send_data3=CCU_HMI_220_3;
    HMI_send_data4=CCU_HMI_220_4;
    HMI_send_data5=CCU_HMI_220_5;
    HMI_send_data6=CCU_HMI_220_6;
    HMI_send_data7=CCU_HMI_220_7;
    HMI_send_data8=CCU_HMI_220_8;
    HMI_send_data9=CCU_HMI_220_9;
    HMI_send_data10=CCU_HMI_220_10;
    HMI_send_data11=CCU_HMI_220_11;
    HMI_send_data12=CCU_HMI_220_12;
    HMI_send_data13=CCU_HMI_220_13;
    HMI_send_data14=CCU_HMI_220_14;
    HMI_send_data15=CCU_HMI_220_15;

    if ( Bit(parameter_setting_se1ect1,2)==1)
    {
           HMI_send_data2=HMI_send_data_temp2;
    }
    if ( Bit(parameter_setting_se1ect1,3)==1)
    {
            HMI_send_data3=HMI_send_data_temp3;
    }
    if ( Bit(parameter_setting_se1ect1,4)==1)
    {
            HMI_send_data4=HMI_send_data_temp4;
    }
    if (Bit(parameter_setting_se1ect1,5)==1)
    {
            HMI_send_data5=HMI_send_data_temp5;

    }
    if ( Bit(parameter_setting_se1ect1,6)==1)
    {
            HMI_send_data6=HMI_send_data_temp6;

    }
    if ( Bit(parameter_setting_se1ect1,7)==1)
    {
            HMI_send_data7=HMI_send_data_temp7;

    }
    if ( Bit(parameter_setting_se1ect1,8)==1)
    {
            HMI_send_data8=HMI_send_data_temp8;

    }
    if ( Bit(parameter_setting_se1ect1,9)==1)
    {
            HMI_send_data9=HMI_send_data_temp9;
    }
    if ( Bit(parameter_setting_se1ect1,10)==1)
    {
            HMI_send_data10=HMI_send_data_temp10;

    }

    if ( Bit(parameter_setting_se1ect1,11)==1)
    {
            HMI_send_data11=HMI_send_data_temp11;
    }

    if ( Bit(parameter_setting_se1ect1,12)==1)
    {
            HMI_send_data12=HMI_send_data_temp12;
    }

    if ( Bit(parameter_setting_se1ect1,13)==1)
    {
            HMI_send_data13=HMI_send_data_temp13;
    }
    if ( Bit(parameter_setting_se1ect1,14)==1)
    {
            HMI_send_data14=HMI_send_data_temp14;
    }
    if ( Bit(parameter_setting_se1ect1,15)==1)
    {
            HMI_send_data15=HMI_send_data_temp15;
    }
    if ( Bit(parameter_setting_se1ect1,1)==1)
    {
            BitSet( HMI_send_data28, 5, 1);
    }

    if ( (parameter_setting_se1ect1&65534)!=0)
    {

          //          BitSet( HMI_send_data16, 14, 1);
                    BitSet( HMI_send_data16, 8, 1);

    }

    prameter_setting_button=1;
//  prameter_setting_timer=5;
    SavePreWheelDia();
}

void CParameterSettingPage1::OnWheelDiamResumBtnClk()
{
    ChangePage(PAGE_INDEX_WHEELDIARECORDSELECT);
}

void CParameterSettingPage1::UpdateCarNumber()
{
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER1,che1_num);
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER2,che2_num);
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER3,che3_num);
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER4,che4_num);
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER5,che5_num);
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER6,che6_num);
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER7,che7_num);
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER8,che8_num);
   // SetIntValue(ID_PICCARSET_LABEL_CARNUMBER8,HMI_send_data16);

}

void CParameterSettingPage1::SetIntValue(int id, int aValue)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(aValue));
}

void CParameterSettingPage1::SetStringValue(int id, QString aValue)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(aValue);
}

void CParameterSettingPage1::UpdateTrainValue()
{

    SetStringValue(ID_PICCARSET_LABEL_TRAINSTR, QSTR("列车号"));

    if (Bit(parameter_setting_se1ect1,1))
    {
         SetIntValue(ID_PICCARSET_LABEL_TRAINNUMVAL, HMI_send_data_temp1);
    }

    SetLabelColor(ID_PICCARSET_LABEL_TRAINNUMVAL, parameter_setting_se1ect1);
    SetLabelColor(ID_PICCARSET_LABEL_TRAINSTR, parameter_setting_se1ect1);
}

void CParameterSettingPage1::SetLabelColor(int id, int colorVal)
{
    //ASSERT((colorVal >= 0) && (colorVal <= 15));
    if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
}

void CParameterSettingPage1::OnTrainNumBtnClk()
{
    if (Bit(parameter_setting_se1ect1,1)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,1,1);
        BitSet(parameter_setting_se1ect1,1,1);

        carnum_prompt=1;
        parameter_setting_text=QSTR("列车编号设置");
        parameter_wheeldia=CCU_HMI_221_9;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_TRAINCODE;
    }
    else
    {
        BitSet(parameter_setting_se1ect1,1,0);
    }
}

void CParameterSettingPage1::UpdateDiameterValue()
{
    if (Bit(parameter_setting_se1ect1,1))
    {
        SetIntValue(ID_PICCARSET_LABEL_TRAINNUMVAL, HMI_send_data_temp1);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_TRAINNUMVAL, CCU_HMI_221_9);
    }

    if (Bit(parameter_setting_se1ect1,2))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER1, HMI_send_data_temp2);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER1, CCU_HMI_220_2);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR1DIAMETER1, Bit(parameter_setting_se1ect1,2));


    if (Bit(parameter_setting_se1ect1,3))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER2, HMI_send_data_temp3);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER2, CCU_HMI_220_3);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR1DIAMETER2, Bit(parameter_setting_se1ect1,3));


    if (Bit(parameter_setting_se1ect1,4))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER3, HMI_send_data_temp4);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER3, CCU_HMI_220_4);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR1DIAMETER3, Bit(parameter_setting_se1ect1,4));

    if (Bit(parameter_setting_se1ect1,5))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER4, HMI_send_data_temp5);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER4, CCU_HMI_220_5);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR1DIAMETER4, Bit(parameter_setting_se1ect1,5));

    if (Bit(parameter_setting_se1ect1,6))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR2DIAMETER1, HMI_send_data_temp6);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR2DIAMETER1, CCU_HMI_220_6);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR2DIAMETER1, Bit(parameter_setting_se1ect1,6));

    if (Bit(parameter_setting_se1ect1,7))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR3DIAMETER1, HMI_send_data_temp7);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR3DIAMETER1, CCU_HMI_220_7);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR3DIAMETER1, Bit(parameter_setting_se1ect1,7));

    if (Bit(parameter_setting_se1ect1,8))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR4DIAMETER1, HMI_send_data_temp8);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR4DIAMETER1, CCU_HMI_220_8);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR4DIAMETER1, Bit(parameter_setting_se1ect1,8));

    if (Bit(parameter_setting_se1ect1,9))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR5DIAMETER1, HMI_send_data_temp9);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR5DIAMETER1, CCU_HMI_220_9);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR5DIAMETER1, Bit(parameter_setting_se1ect1,9));



    if (Bit(parameter_setting_se1ect1,10))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR6DIAMETER1, HMI_send_data_temp10);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR6DIAMETER1, CCU_HMI_220_10);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR6DIAMETER1, Bit(parameter_setting_se1ect1,10));

    if (Bit(parameter_setting_se1ect1,11))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR7DIAMETER1, HMI_send_data_temp11);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR7DIAMETER1, CCU_HMI_220_11);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR7DIAMETER1, Bit(parameter_setting_se1ect1,11));

    if (Bit(parameter_setting_se1ect1,12))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR8DIAMETER1, HMI_send_data_temp12);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR8DIAMETER1, CCU_HMI_220_12);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR8DIAMETER1, Bit(parameter_setting_se1ect1,12));


    if (Bit(parameter_setting_se1ect1,13))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR8DIAMETER2, HMI_send_data_temp13);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR8DIAMETER2, CCU_HMI_220_13);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR8DIAMETER2, Bit(parameter_setting_se1ect1,13));

    if (Bit(parameter_setting_se1ect1,14))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR8DIAMETER3, HMI_send_data_temp14);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR8DIAMETER3, CCU_HMI_220_14);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR8DIAMETER3, Bit(parameter_setting_se1ect1,14));

    if (Bit(parameter_setting_se1ect1,15))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR8DIAMETER4, HMI_send_data_temp15);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR8DIAMETER4, CCU_HMI_220_15);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR8DIAMETER4, Bit(parameter_setting_se1ect1,15));
}

void CParameterSettingPage1::SetCarDiameterButtoColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
}


void CParameterSettingPage1::OnCar1Diameter1SetBtnClk()
{
    if (Bit(parameter_setting_se1ect1,2)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,2,1);
        BitSet(parameter_setting_se1ect1,2,1);

        carnum_prompt=0;

        parameter_setting_text=QSTR("1车厢轴1轮径设置");
        parameter_wheeldia=CCU_HMI_220_2;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR11;
    }
    else
    {
       BitSet(parameter_setting_se1ect1,2,0);
       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR11);
    }
}

void CParameterSettingPage1::OnCar1Diameter2SetBtnClk()
{
    if (Bit(parameter_setting_se1ect1,3)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,3,1);
        BitSet(parameter_setting_se1ect1,3,1);
        carnum_prompt=0;
        parameter_setting_text=QSTR("1车厢轴2轮径设置");
        parameter_wheeldia=CCU_HMI_220_3;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR12;
    }
    else
    {
        BitSet(parameter_setting_se1ect1,3,0);
        ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR12);
    }
}

void CParameterSettingPage1::OnCar1Diameter3SetBtnClk()
{
    if (Bit(parameter_setting_se1ect1,4)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,4,1);
        BitSet(parameter_setting_se1ect1,4,1);
        carnum_prompt=0;
        parameter_setting_text=QSTR("1车厢轴3轮径设置");
        parameter_wheeldia=CCU_HMI_220_4;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR13;
    }
    else
    {
        BitSet(parameter_setting_se1ect1,4,0);
        ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR13);
    }
}

void CParameterSettingPage1::OnCar1Diameter4SetBtnClk()
{
   if (Bit(parameter_setting_se1ect1,5)==0)
   {
       p_set_signal=0;
       BitSet(p_set_signal,5,1);
       BitSet(parameter_setting_se1ect1,5,1);
       carnum_prompt=0;
       parameter_setting_text=QSTR("1车厢轴4轮径设置");
       parameter_wheeldia=CCU_HMI_220_5;
       parameter_setting_temp="";

       ChangePage(PAGE_INDEX_PARAMETERSETTING2);
       m_WheelDiaType = WHEELDIAENUM_CAR14;
   }
   else
   {
      BitSet(parameter_setting_se1ect1,5,0);
      ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR14);
   }
}

void CParameterSettingPage1::OnCar2Diameter1SetBtnClk()
{
    if (Bit(parameter_setting_se1ect1,6)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,6,1);
        BitSet(parameter_setting_se1ect1,6,1);
        carnum_prompt=0;
        parameter_setting_text=QSTR("2车厢轴1轮径设置");
        parameter_wheeldia=CCU_HMI_220_6;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR21;
    }
    else
    {
        BitSet(parameter_setting_se1ect1,6,0);
        ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR21);
    }
}

void CParameterSettingPage1::OnCar3Diameter1SetBtnClk()
{
    if (Bit(parameter_setting_se1ect1,7)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,7,1);
        BitSet(parameter_setting_se1ect1,7,1);
        carnum_prompt=0;
        parameter_setting_text=QSTR("3车厢轴1轮径设置");
        parameter_wheeldia=CCU_HMI_220_7;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR31;

    }
    else
    {
        BitSet(parameter_setting_se1ect1,7,0);
        ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR31);
    }
}

void CParameterSettingPage1::OnCar4Diameter1SetBtnClk()
{
    if (Bit(parameter_setting_se1ect1,8)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,8,1);
        BitSet(parameter_setting_se1ect1,8,1);
        carnum_prompt=0;
        parameter_setting_text=QSTR("4车厢轴1轮径设置");
        parameter_wheeldia=CCU_HMI_220_8;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR41;
    }
    else
    {
        BitSet(parameter_setting_se1ect1,8,0);
        ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR41);
    }
}

void CParameterSettingPage1::OnCar5Diameter1SetBtnClk()
{
    if (Bit(parameter_setting_se1ect1,9)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,9,1);
        BitSet(parameter_setting_se1ect1,9,1);
        carnum_prompt=0;
        parameter_setting_text=QSTR("5车厢轴1轮径设置");
        parameter_wheeldia=CCU_HMI_220_9;
       // LABEL=parameter_setting_data9;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR51;
    }
    else
    {
       BitSet(parameter_setting_se1ect1,9,0);
       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR51);
    }
}

void CParameterSettingPage1::OnCar6Diameter1SetBtnClk()
{
    if (Bit(parameter_setting_se1ect1,10)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,10,1);
        BitSet(parameter_setting_se1ect1,10,1);
        carnum_prompt=0;
        parameter_setting_text=QSTR("6车厢轴1轮径设置");
        parameter_wheeldia=CCU_HMI_220_10;
       // LABEL=parameter_setting_data10;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR61;
    }
    else
    {
       BitSet(parameter_setting_se1ect1,10,0);
       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR61);
    }
}

void CParameterSettingPage1::OnCar7Diameter1SetBtnClk()
{
    if (Bit(parameter_setting_se1ect1,11)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,11,1);
        BitSet(parameter_setting_se1ect1,11,1);
        carnum_prompt=0;
        parameter_setting_text=QSTR("7车厢轴1轮径设置");
        parameter_wheeldia=CCU_HMI_220_11;
       // LABEL=parameter_setting_data10;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR71;
    }
    else
    {
       BitSet(parameter_setting_se1ect1,11,0);
       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR71);
    }
}

void CParameterSettingPage1::OnCar8Diameter1SetBtnClk()
{
    if (Bit(parameter_setting_se1ect1,12)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,12,1);
        BitSet(parameter_setting_se1ect1,12,1);
        carnum_prompt=0;
        parameter_setting_text=QSTR("8车厢轴1轮径设置");
        parameter_wheeldia=CCU_HMI_220_12;
       // LABEL=parameter_setting_data10;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR81;
    }
    else
    {
       BitSet(parameter_setting_se1ect1,12,0);
       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR81);
    }
}



void CParameterSettingPage1::OnCar8Diameter2SetBtnClk()
{
    if (Bit(parameter_setting_se1ect1,13)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,13,1);
        BitSet(parameter_setting_se1ect1,13,1);
        carnum_prompt=0;
        parameter_setting_text=QSTR("6车厢轴2轮径设置");
        parameter_wheeldia=CCU_HMI_220_13;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR62;
    }
    else
    {
       BitSet(parameter_setting_se1ect1,13,0);
       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR62);
    }
}



void CParameterSettingPage1::OnCar8Diameter3SetBtnClk()
{
    if (Bit(parameter_setting_se1ect1,14)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,14,1);
        BitSet(parameter_setting_se1ect1,14,1);
        carnum_prompt=0;

        parameter_setting_text=QSTR("6车厢轴3轮径设置");
        parameter_wheeldia=CCU_HMI_220_14;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR63;
    }
    else
    {
       BitSet(parameter_setting_se1ect1,14,0);
       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR63);
    }
}



void CParameterSettingPage1::OnCar8Diameter4SetBtnClk()
{
    if (Bit(parameter_setting_se1ect1,15)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,15,1);
        BitSet(parameter_setting_se1ect1,15,1);
        carnum_prompt=0;
        parameter_setting_text=QSTR("6车厢轴4轮径设置");
        parameter_wheeldia=CCU_HMI_220_15;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR64;
    }
    else
    {
       BitSet(parameter_setting_se1ect1,15,0);
       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR64);
    }
}

void CParameterSettingPage1::ClearWheelDiaFromMemByType(int nType)
{  
    for(int i = 0; i < m_WheelDiaList.size(); i++)
    {
        if(m_WheelDiaList[i].WheelDiaType == nType)
        {
            m_WheelDiaList.removeAt(i);
        }
    }
}

void CParameterSettingPage1::SavePreWheelDia()
{
    m_preWheelDiaList.clear();

    m_preWheelDiaList.append(HMI_send_data_temp2);
    m_preWheelDiaList.append(HMI_send_data_temp3);
    m_preWheelDiaList.append(HMI_send_data_temp4);
    m_preWheelDiaList.append(HMI_send_data_temp5);
    m_preWheelDiaList.append(HMI_send_data_temp6);
    m_preWheelDiaList.append(HMI_send_data_temp7);
    m_preWheelDiaList.append(HMI_send_data_temp8);
    m_preWheelDiaList.append(HMI_send_data_temp9);
    m_preWheelDiaList.append(HMI_send_data_temp10);
    m_preWheelDiaList.append(HMI_send_data_temp11);
    m_preWheelDiaList.append(HMI_send_data_temp12);
    m_preWheelDiaList.append(HMI_send_data_temp13);
    m_preWheelDiaList.append(HMI_send_data_temp14);
    m_preWheelDiaList.append(HMI_send_data_temp15);
}

void CParameterSettingPage1::SaveCurWheelDia()
{
    m_curWheelDiaList.clear();
    m_curWheelDiaList.append(CCU_HMI_220_2);
    m_curWheelDiaList.append(CCU_HMI_220_3);
    m_curWheelDiaList.append(CCU_HMI_220_4);
    m_curWheelDiaList.append(CCU_HMI_220_5);
    m_curWheelDiaList.append(CCU_HMI_220_6);
    m_curWheelDiaList.append(CCU_HMI_220_7);
    m_curWheelDiaList.append(CCU_HMI_220_8);
    m_curWheelDiaList.append(CCU_HMI_220_9);
    m_curWheelDiaList.append(CCU_HMI_220_10);
    m_curWheelDiaList.append(CCU_HMI_220_11);
    m_curWheelDiaList.append(CCU_HMI_220_12);
    m_curWheelDiaList.append(CCU_HMI_220_13);
    m_curWheelDiaList.append(CCU_HMI_220_14);
    m_curWheelDiaList.append(CCU_HMI_220_15);
}

void CParameterSettingPage1::SaveWheelDiaToCSV()
{
    if (m_WheelDiaType == -1)
        return;

    if (m_WheelDiaType == WHEELDIAENUM_TRAINCODE)
    {
        SetINIInfo("/CNR_BJ/Traincode", QString::number(HMI_send_data_temp1));
    }
    else
    {
        for (int i=0; i<m_WheelDiaList.size(); i++)
        {
            int nIndex = m_WheelDiaList[i].WheelDiaType;
            if(m_preWheelDiaList[nIndex] == m_curWheelDiaList[nIndex]) {
                SaveWheelDiaCSV(m_WheelDiaList[i].WheelDiaStr,m_WheelDiaList[i].WheelDiaType);
            }
        }
    }

    m_WheelDiaList.clear();
    m_curWheelDiaList.clear();
    m_preWheelDiaList.clear();
}

void CParameterSettingPage1::ResetParameter1Label(int nType)
{
    switch(nType)
    {
        case WHEELDIAENUM_CAR11:
        {
            BitSet(parameter_setting_se1ect1,2,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR11);
            break;
        }
        case WHEELDIAENUM_CAR21:
        {
            BitSet(parameter_setting_se1ect1,3,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR21);
            break;
        }
        case WHEELDIAENUM_CAR31:
        {
            BitSet(parameter_setting_se1ect1,4,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR31);
            break;
        }
        case WHEELDIAENUM_CAR41:
        {
            BitSet(parameter_setting_se1ect1,5,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR41);
            break;
        }
        case WHEELDIAENUM_CAR51:
        {
            BitSet(parameter_setting_se1ect1,6,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR51);
            break;
        }
        case WHEELDIAENUM_CAR61:
        {
            BitSet(parameter_setting_se1ect1,7,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR61);
            break;
        }
        case WHEELDIAENUM_CAR12:
        {
            BitSet(parameter_setting_se1ect1,8,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR12);
            break;
        }
        case WHEELDIAENUM_CAR62:
        {
            BitSet(parameter_setting_se1ect1,9,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR62);
            break;
        }
        case WHEELDIAENUM_CAR13:
        {
            BitSet(parameter_setting_se1ect1,10,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR13);
            break;
        }
        case WHEELDIAENUM_CAR63:
        {
            BitSet(parameter_setting_se1ect1,11,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR63);
            break;
        }
        case WHEELDIAENUM_CAR14:
        {
            BitSet(parameter_setting_se1ect1,12,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR14);
            break;
        }
        case WHEELDIAENUM_CAR64:
        {
            BitSet(parameter_setting_se1ect1,13,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR64);
            break;
        }
        case WHEELDIAENUM_CAR71:
        {
            BitSet(parameter_setting_se1ect1,14,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR71);
            break;
        }
        case WHEELDIAENUM_CAR81:
        {
            BitSet(parameter_setting_se1ect1,15,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR81);
            break;
        }
        default:
           break;
    }
    Update();
}
