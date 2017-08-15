#include "CMaintainPage.h"
#include <qdatetime.h>
#include "cwarningdialog.h"
#include "CConfirmDialog.h"
#include <qprocess.h>
#include <qapplication.h>

extern bool FindUSBDevice(string& usbpath);
extern bool FindFile(const QString &path,vector<string>& filelist);

ROMDATA g_PicRom_Maintain[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    D_COMMON_PAGE_HEADER(QSTR("维修菜单"))

    {QSTR("通信中断"),          D_FONT_BOLD(8),      QRect( 20,   6, 162,  30),          Qt::red,                 Qt::white,              CONTROL_LABEL,           ID_PICMAINTAIN_COMMINTERRUPT            },

    {QSTR("加减速度试验"),        D_FONT_BOLD(8),      QRect( 30, 100, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_OPERATIONTEST         },
    {QSTR("牵引系统检查"),      D_FONT_BOLD(8),      QRect(180, 100, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_TRACTIONCHECK     },
    {QSTR("辅助系统检查"),      D_FONT_BOLD(8),      QRect(330, 100, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_AUXILIARYCHECK    },
    {QSTR("制动试验"),          D_FONT_BOLD(8),      QRect(480, 100, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_BRAKETEST         },
    {QSTR("制动自检"),          D_FONT_BOLD(8),      QRect(630, 100, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_BRAKESELFTEST     },

    {QSTR("密码设置"),          D_FONT_BOLD(8),      QRect( 30, 160, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_PASSWORDSETTING   },
    {QSTR("参数设置"),          D_FONT_BOLD(8),      QRect(180, 160, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_PARAMENTSETTING   },
    {QSTR("时间设定"),          D_FONT_BOLD(8),      QRect(330, 160, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_TIMESETTING       },
    {QSTR("AW0校正"),          D_FONT_BOLD(8),      QRect(480, 160, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_AWOTESTING          },
    {QSTR("电制动切除"),        D_FONT_BOLD(8),      QRect(630, 160, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_DisEBTest         },

    {QSTR("故障记录"),          D_FONT_BOLD(8),      QRect( 30, 220, 130,  40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_FAULTRECORD       },
    {QSTR("运行记录"),                 D_FONT_BOLD(8),      QRect(180, 220, 130,  40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_RUNRECORD        },
    {QSTR("运行记录清零"),          D_FONT_BOLD(8),      QRect(330, 220, 130,  40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_CLEARRUNRECORD         },
    {QSTR("走行部状态"), D_FONT_BOLD(8), QRect(330 + 150, 220, 130,  40), Qt::black, Qt::gray, CONTROL_BUTTON, ID_PICMAINTAIN_BUTTON_RSFDS_STATE_PAGE},

    // added by Deng Ran on the 09th of August 2017.
    {QSTR("弓网监测系统"), D_FONT_BOLD(8), QRect(330 + 150 * 2, 220, 130,  40), Qt::black, Qt::gray, CONTROL_BUTTON, ID_PICMAINTAIN_BUTTON_PMS_STATE_PAGE},

};

int g_MaintainRomLen = sizeof(g_PicRom_Maintain)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CMaintainPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_RSFDS_STATE_PAGE, buttonRsfsdDown)
        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_PMS_STATE_PAGE, buttonPmsDown)
#ifdef PAGE_BUTTON_BAR_NEW
        ON_BTNCLK(IDLB_COM_BTN7, OnComBtn7Clk)
        ON_BTNCLK(IDLB_COM_BTN8, OnComBtn8Clk)
#endif
        // door check
        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_DOORCHECK, OnDoorCheckBtnClk)
        // 牵引系统检查
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_TRACTIONCHECK, OnTractionCheckBtnClk)
        // 辅助系统检查
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_AUXILIARYCHECK, OnAccessoryCheckBtnClk)
        // 制动实验
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_BRAKETEST, OnBrakeTestBtnClk)
        // 制动自检
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_BRAKESELFTEST, OnBrakeSelfTestBtnClk)
        // 密码设置
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_PASSWORDSETTING, OnPasswordSetBtnClk)
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_PARAMENTSETTING, OnParameterSetBtnClk)
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_TIMESETTING, OnTimeSetBtnClk)
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_AWOTESTING, OnAW0TestCLK)
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_DisEBTest, OnDisEBTestCLK)

        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_FAULTRECORD, OnFaultRecordBtnClk)
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_RUNRECORD, OnRunRecordBtnClk)
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_CLEARRUNRECORD, OnClearRunRecordBtnClk)
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_OPERATIONTEST, OnTryRuntestBtnClk)
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_UPDATE, OnUpdateProgramm)
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_DOWNLOADLOG, OnDownLoadLogCLK)
        ON_BTNCLK(  ID_PICMAINTAIN_BUTTON_CLEARLOG, OnClearLogCLK)
        void  OnAW0TestCLK();
END_MESSAGE_MAP()

CMaintainPage::CMaintainPage()
{
}

void CMaintainPage::OnUpdatePage()
{
    UpdateCommInterrupt(ID_PICMAINTAIN_COMMINTERRUPT);
    if (m_bReset)
    {
        static int times = 0;
        times++;
        if (times%times_n == 0)
        {
            clear_CCU_record_timer--;
            if ( clear_CCU_record_timer == 0 )
            {
                times = 0;
                m_bReset = false;
                ((CButton*)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_UP);
                clear_CCU_record_timer = 5;


                BitSet( HMI_send_data28, 11, 0);
                ((CButton*)GetDlgItem(IDLB_COM_BTN8))->m_bAutoUpState = true;

            }
        }
    }
}

void CMaintainPage::OnInitPage()
{

}

void CMaintainPage::buttonRsfsdDown()
{
    this->ChangePage(PAGE_INDEX_RSFDS_STATE_PAGE);
}

void CMaintainPage::buttonPmsDown()
{
    this->ChangePage(PAGE_INDEX_PMS_STATE_PAGE);
}

void CMaintainPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText("");
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
#endif
    clear_CCU_record_timer=5;
    m_bReset = false;
    ((CButton*)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonState(LBUTTON_UP);
}

void CMaintainPage::OnComBtn1Clk()
{
    if (m_bReset== false)
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

}

void CMaintainPage::OnComBtn2Clk()
{

}

void CMaintainPage::OnComBtn3Clk()
{

}

void CMaintainPage::OnComBtn4Clk()
{

}

void CMaintainPage::OnComBtn5Clk()
{

}

void CMaintainPage::OnComBtn6Clk()
{

}
void CMaintainPage::OnComBtn7Clk()
{

}

void CMaintainPage::OnComBtn8Clk()
{
    static int times = 0;
    times++;
    if(times%4 == 0)
    {
        times = 0;
        CConfirmDialog confirmDlg;
        confirmDlg.SetConfirmStr(QSTR("确定要清零CCU记录的能耗数据吗?"));
        confirmDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
        confirmDlg.exec();
        if(confirmDlg.m_nFlag)
        {
            BitSet( HMI_send_data28, 11, 1);
            clear_CCU_record_timer=5;
            m_bReset = true;
            ((CButton*)GetDlgItem(IDLB_COM_BTN8))->m_bAutoUpState = false;

        }
    }
}

void CMaintainPage::OnDoorCheckBtnClk()
{
    ChangePage(PAGE_INDEX_DOORTEST);
}

void CMaintainPage::OnTractionCheckBtnClk()
{
    if (m_bReset== false)
    {
        HighPress_Test = 0;
        LowerPress_Test = 0;
        LowerPress_Test1 = 0;
        HighPress_Test1 = 0;

        ChangePage(PAGE_INDEX_TRACTIONSYSTEMTEST);
    }

}

void CMaintainPage::OnAccessoryCheckBtnClk()
{
    if (m_bReset== false)
    {
    ChangePage(PAGE_INDEX_ACCESSORYSYSTEMTEST);
    }


}

void CMaintainPage::OnBrakeTestBtnClk()
{
    if (m_bReset== false)
    {
    ChangePage(PAGE_INDEX_BRAKETEST);
    }

}

void CMaintainPage::OnBrakeSelfTestBtnClk()
{
    if (m_bReset== false)
    {
    ChangePage(PAGE_INDEX_BRAKESELFTEST);
    }

}

//密码设置
void CMaintainPage::OnPasswordSetBtnClk()
{
    if (m_bReset== false)
    {
        pw_display_old="";
        pw_display_new1="";
        pw_display_new2="";
        pw_new1="";
        pw_new2="";
        pw_old="";
        ChangePage(PAGE_INDEX_PASSWORDMODIFY);
    }

}


//parameter
void CMaintainPage::OnParameterSetBtnClk()
{
    if (m_bReset== false)
    {
        pw_select=1;
        ChangePage(PAGE_INDEX_PASSWORD);
        pwdisplay="";
        pw_input="";
    }

}

//时间设定
void CMaintainPage::OnTimeSetBtnClk()
{
    if (m_bReset== false)
    {
        pw_select=3;
        ChangePage(PAGE_INDEX_PASSWORD);
        pwdisplay="";
        pw_input="";

        time_setting_start=1;

        QTime time = QDateTime::currentDateTime().time();
        QDate date = QDate::currentDate();

        time_setting_1 = date.year();
        time_setting_2 = date.month();
        time_setting_3 = date.day();
        time_setting_4 = time.hour();
        time_setting_5 = time.minute();
        time_setting_6 = time.second();
    }

}

void  CMaintainPage::OnAW0TestCLK()
{
    if (m_bReset== false)
    {
        pw_select=5;
        ChangePage(PAGE_INDEX_PASSWORD);
        pwdisplay="";
        pw_input="";
    }

}

void  CMaintainPage::OnDisEBTestCLK()
{
    if (m_bReset== false)
    {
        pw_select=6;
        ChangePage(PAGE_INDEX_PASSWORD);
        pwdisplay="";
        pw_input="";
    }


}


//故障记录
void CMaintainPage::OnFaultRecordBtnClk()
{
    if (m_bReset== false)
    {
        SetFaultType(E_FAULTS_TYPE_HISTORY);
        ChangePage(PAGE_INDEX_TRACTIONSYSTEMFAULT);
    }

}

void CMaintainPage::OnRunRecordBtnClk()
{
    if (m_bReset== false)
    {
    ChangePage(PAGE_INDEX_RUNRECORD);
    }

}

//清零运行记录
void CMaintainPage::OnClearRunRecordBtnClk()
{
    if (m_bReset== false)
    {
        pw_select=2;
        ChangePage(PAGE_INDEX_PASSWORD);
        pwdisplay="";
        pw_input="";
    }



}

void CMaintainPage::OnTryRuntestBtnClk()
{
    if (m_bReset== false)
    {
        ChangePage(PAGE_INDEX_TRYRUNTEST);
    }

}

void CMaintainPage::OnUpdateProgramm()
{
//    char cmdbuff[128] = {'\0'};
//    string usbpath;
//
//    if (!FindUSBDevice(usbpath))
//    {
//        CWarningDialog warningDlg;
//        warningDlg.SetWarningStr(QSTR("没有找到USB存储设备!"));
//        warningDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
//        warningDlg.exec();
//    }
//    else
//    {
//        system("mkdir /root/usbshare");
//        sprintf(cmdbuff,"mount -t vfat %s /root/usbshare",usbpath.c_str());
//        system(cmdbuff);
//
//        vector<string> filelist;
//
//        if (!FindFile("/root/usbshare/CNR_BJ", filelist))
//        {
//            CWarningDialog warningDlg;
//            warningDlg.SetWarningStr(QSTR("没有找到文件夹:CNR_BJ!"));
//            warningDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
//            warningDlg.exec();
//        }
//        else
//        {
//            bool bFind = false;
//            for (int i=0; i<filelist.size(); i++)
//            {
//                if (filelist[i] == "CNR_BJ"
//                    || filelist[i] == "cnr_bj")
//                {
//                    bFind = true;
//                    break;
//                }
//            }
//
//            if (!bFind)
//            {
//                CWarningDialog warningDlg;
//                warningDlg.SetWarningStr(QSTR("没有找到可执行程序:CNR_BJ!"));
//                warningDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
//                warningDlg.exec();
//            }
//            else
//            {
//                system("chmod a+x ./BJ_Update");
//                QProcess::startDetached("./BJ_Update");
//            }
//        }
//
//        system("umount /root/usbshare");
//        system("rmdir /root/usbshare");
//    }
    static int times = 0;
    times++;
    if(times%4 == 0)
    {
        times = 0;
        CConfirmDialog confirmDlg;
        confirmDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
        confirmDlg.SetConfirmStr(QSTR("是否进行程序更新?"));
        confirmDlg.exec();
        if(confirmDlg.m_nFlag == 1)
            system("source /bjc.sh");
    }
}

void CMaintainPage::OnClearLogCLK()
{
    static int times = 0;
    times++;
    if(times%4 == 0)
    {
        times = 0;
        CConfirmDialog confirmDlg;
        confirmDlg.SetConfirmStr(QSTR("真的要删除所有LOG文件?"));
        confirmDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
        confirmDlg.exec();
        if(confirmDlg.m_nFlag)
        {
            char cmdbuff[128] = {'\0'};
            sprintf(cmdbuff, "rm -f %s/*.log",qApp->applicationDirPath().toStdString().c_str());
            system(cmdbuff);

            CWarningDialog warningDlg;
            warningDlg.SetWarningStr(QSTR("删除完毕!"));
            warningDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
            warningDlg.exec();
        }
    }
}

void CMaintainPage::OnDownLoadLogCLK()
{
    static int times = 0;
    times++;
    if(times%4 == 0)
    {
        times = 0;
        CConfirmDialog confirmDlg;
        confirmDlg.SetConfirmStr(QSTR("下载LOG文件?"));
        confirmDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
        confirmDlg.exec();
        if(confirmDlg.m_nFlag)
        {
            CWarningDialog warningDlg;

            if(DownLoadLOG(qApp->applicationDirPath().toStdString()))
                warningDlg.SetWarningStr(QSTR("下载完毕!"));
            else
                warningDlg.SetWarningStr(QSTR("没有找到USB存储设备!"));

            warningDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
            warningDlg.exec();
        }
    }
}
