#include "CRunRecordPage.h"

ROMDATA g_PicRom_RunRecord[] =
{
  /*string                font                            rc                  foreground color              background color                control type                   ID           */
  D_COMMON_PAGE_HEADER(QSTR("运行记录"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
  {"",                            D_FONT_BOLD(6),      QRect( 50, 115, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 50, 145, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 50, 180, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 50, 215, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 50, 250, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 50, 285, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 50, 320, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 50, 355, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 50, 390, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 50, 425, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 50, 460, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect( 50, 495, 700,   1),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },

  {"",                            D_FONT_BOLD(6),      QRect( 50, 115,   1, 380),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect(200, 115,   1, 380),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect(310, 115,   1, 380),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect(550, 115,   1, 380),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },
  {"",                            D_FONT_BOLD(6),      QRect(750, 115,   1, 380),           Qt::white,                Qt::black,                      CONTROL_LINE,           ID_IGNORE         },

  {QSTR("记录项目"),               D_FONT_BOLD(8),      QRect( 50, 115, 150,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QSTR("记录状态"),               D_FONT_BOLD(8),      QRect(200, 115, 110,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QSTR("记录开始时刻"),            D_FONT_BOLD(8),      QRect(310, 115, 240,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QSTR("记录容量"),               D_FONT_BOLD(8),      QRect(550, 115, 200,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QSTR("当天运行时间"),           D_FONT_BOLD(8),      QRect( 50, 145, 150,  35),            Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QSTR("检修里程"),           D_FONT_BOLD(8),      QRect( 50, 180, 150,  35),            Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QSTR("运行总里程"),             D_FONT_BOLD(8),      QRect( 50, 215, 150,  35),            Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QSTR("牵引能耗"),               D_FONT_BOLD(8),      QRect( 50, 250, 150,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QSTR("再生电能"),               D_FONT_BOLD(8),      QRect( 50, 285, 150,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QSTR("辅助系统能耗"),            D_FONT_BOLD(8),      QRect( 50, 320, 150,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QSTR("TC1空压机工作时间"),              D_FONT_BOLD(8),      QRect( 50, 355, 150,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QSTR("TC1空压机工作率"),               D_FONT_BOLD(8),      QRect( 50, 390, 150,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QSTR("TC2空压机工作时间"),              D_FONT_BOLD(8),      QRect( 50, 425, 150,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },
  {QSTR("TC2空压机工作率"),               D_FONT_BOLD(8),      QRect( 50, 460, 150,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE         },

  {QSTR("记录中"),                 D_FONT_BOLD(8),      QRect(200, 145, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
  {QSTR("记录中"),                 D_FONT_BOLD(8),      QRect(200, 180, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
  {QSTR("记录中"),                 D_FONT_BOLD(8),      QRect(200, 215, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
  {QSTR("记录中"),                 D_FONT_BOLD(8),      QRect(200, 250, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
  {QSTR("记录中"),                 D_FONT_BOLD(8),      QRect(200, 285, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
  {QSTR("记录中"),                 D_FONT_BOLD(8),      QRect(200, 320, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
  {QSTR("记录中"),                 D_FONT_BOLD(8),      QRect(200, 355, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
  {QSTR("记录中"),                 D_FONT_BOLD(8),      QRect(200, 390, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
  {QSTR("记录中"),                 D_FONT_BOLD(8),      QRect(200, 425, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
  {QSTR("记录中"),                 D_FONT_BOLD(8),      QRect(200, 460, 110,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },

  {QSTR(""),                      D_FONT_BOLD(8),      QRect(311, 146, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME1       },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(311, 181, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME2       },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(311, 216, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME4       },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(311, 251, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME5       },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(311, 286, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME6       },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(311, 321, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME7       },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(311, 356, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME8       },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(311, 391, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME9       },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(311, 426, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME10       },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(311, 461, 239,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDTIME11       },

  {QSTR(""),                      D_FONT_BOLD(8),      QRect(551, 146, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE1      },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(551, 181, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE2      },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(551, 216, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE4      },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(551, 251, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE5      },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(551, 286, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE6      },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(551, 321, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE7      },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(551, 356, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE8      },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(551, 391, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE9      },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(551, 426, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE10      },
  {QSTR(""),                      D_FONT_BOLD(8),      QRect(551, 461, 149,  34),           Qt::white,                Qt::black,                      CONTROL_LABEL,           ID_PIBRRP_LABEL_REDRANGE11      },

  {QSTR("分  "),                  D_FONT_BOLD(8),      QRect(700, 145,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QSTR("km  "),                  D_FONT_BOLD(8),      QRect(700, 180,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QSTR("km "),                   D_FONT_BOLD(8),      QRect(700, 215,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QSTR("kwh"),                   D_FONT_BOLD(8),      QRect(700, 250,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QSTR("kwh"),                   D_FONT_BOLD(8),      QRect(700, 285,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QSTR("kwh"),                   D_FONT_BOLD(8),      QRect(700, 320,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QSTR("小时"),                   D_FONT_BOLD(8),      QRect(700, 355,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QSTR("%"),                   D_FONT_BOLD(8),      QRect(700, 390,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QSTR("小时"),                   D_FONT_BOLD(8),      QRect(700, 425,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },
  {QSTR("%"),                   D_FONT_BOLD(8),      QRect(700, 461,  50,  35),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE      },


};
int g_RunRecordRomLen = sizeof(g_PicRom_RunRecord)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRunRecordPage,CPage)
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

CRunRecordPage::CRunRecordPage()
{
}

void CRunRecordPage::OnUpdatePage()
{
    UpdateRun_RecordData();
}

void CRunRecordPage::OnInitPage()
{

}

void CRunRecordPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("退   出"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("退   出"));
#endif

     ((CLabel*)GetDlgItem(ID_PIBRRP_LABEL_REDTIME1))->SetCtrlText(g_runtime1);
     //((CLabel*)GetDlgItem(ID_PIBRRP_LABEL_REDTIME2))->SetCtrlText(g_runtime2);
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CRunRecordPage::OnComBtn1Clk()
        {

        }

        void CRunRecordPage::OnComBtn2Clk()
        {

        }

        void CRunRecordPage::OnComBtn3Clk()
        {

        }

        void CRunRecordPage::OnComBtn4Clk()
        {

        }

        void CRunRecordPage::OnComBtn5Clk()
        {

        }

        void CRunRecordPage::OnComBtn6Clk()
        {

        }
        void CRunRecordPage::OnComBtn7Clk()
        {

        }

        void CRunRecordPage::OnComBtn8Clk()
        {
           ChangePage(PAGE_INDEX_MAINTAIN);
        }
#else
        void CRunRecordPage::OnComBtn1Clk()
        {

        }

        void CRunRecordPage::OnComBtn2Clk()
        {

        }

        void CRunRecordPage::OnComBtn3Clk()
        {

        }

        void CRunRecordPage::OnComBtn4Clk()
        {

        }

        void CRunRecordPage::OnComBtn5Clk()
        {

        }

        void CRunRecordPage::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
        }

#endif



void CRunRecordPage::UpdateRun_RecordData()
{
    run_record_date2 = StrFromInt( ERM_F01_7 / 256 + 2000, 10 )
                       + "-" + StrFromInt( ERM_F01_8 % 256, 10 )
                       + "-" + StrFromInt( ERM_F01_8 / 256, 10 );
    run_record_date3 = StrFromInt( ERM_F01_9 % 256 + 2000, 10 )
                       + "-" + StrFromInt( ERM_F01_9 / 256, 10 )
                       + "-" + StrFromInt( ERM_F01_10 % 256, 10 );
    run_record_date4 = StrFromInt( ERM_F01_10 / 256 + 2000, 10 )
                       + "-" + StrFromInt( ERM_F01_11 % 256, 10 )
                       + "-" + StrFromInt( ERM_F01_11 / 256, 10 );
    run_record_date5 = StrFromInt( ERM_F01_12 % 256 + 2000, 10 )
                       + "-" + StrFromInt( ERM_F01_12 / 256, 10 )
                       + "-" + StrFromInt( ERM_F01_13 % 256, 10 );
    run_record_date6 = StrFromInt( ERM_F01_13 / 256 + 2000, 10 )
                       + "-" + StrFromInt( ERM_F01_14 % 256, 10 )
                       + "-" + StrFromInt( ERM_F01_14 / 256, 10 );
    run_record_date1 = StrFromInt( ERM_F01_15 % 256 + 2000, 10 )
                       + "-" + StrFromInt( ERM_F01_15 / 256, 10 )
                       + "-" + StrFromInt( ERM_F01_16 % 256, 10 );

    run_record_distance = ERM_F00_2 + ERM_F00_1 * 65536;
    run_record_today_distance = ERM_F00_4  + ERM_F00_3* 65536;

//    SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDTIME1, run_record_time);
    //当天运行时间
    SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDRANGE1, ERM_F00_5);
//"当天运行里程改为检修里程，检修里程记录时间使用总里程的记录时间，总里程记录时间一栏为空"
    // 检修里程时间
    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME2, run_record_date1);
    SetRun_Record_LabelString_long(ID_PIBRRP_LABEL_REDRANGE2, run_record_today_distance);

  //  SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME4, run_record_date1);
    SetRun_Record_LabelString_long(ID_PIBRRP_LABEL_REDRANGE4, run_record_distance);
  //牵引能耗
    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME5, run_record_date2);
   // CCU_HMI_223_8=65535;
   // CCU_HMI_223_7=65535;
    SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDRANGE5, CCU_HMI_223_8 + CCU_HMI_223_7 * 65536);

    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME6, run_record_date3);
    SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDRANGE6, CCU_HMI_223_10 + CCU_HMI_223_9 * 65536);

    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME7, run_record_date4);
    SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDRANGE7, CCU_HMI_223_12 + CCU_HMI_223_11 * 65536);

    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME8, run_record_date5);
    SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDRANGE8, ERM_F00_9);

    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME9, run_record_date5);
    SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDRANGE9, ERM_F02_8%256);

    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME10, run_record_date6);
    SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDRANGE10,ERM_F00_10 );

    SetRun_Record_TimeLabelString(ID_PIBRRP_LABEL_REDTIME11, run_record_date6);
    SetRun_Record_LabelString(ID_PIBRRP_LABEL_REDRANGE11, ERM_F02_8/256);
}

void CRunRecordPage::SetRun_Record_LabelString(int id, unsigned int DataVal)
{
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));
}

void CRunRecordPage::SetRun_Record_LabelString_long(int id, unsigned long DataVal)
{
     ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));
}

void CRunRecordPage::SetRun_Record_TimeLabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

}
