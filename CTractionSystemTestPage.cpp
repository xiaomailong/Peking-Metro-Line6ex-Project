#include "CTractionSystemTestPage.h"

ROMDATA g_PicRom_TractionSystemTest[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#endif


#ifdef PAGE_HEADER_NEW
    D_COMMON_PAGE_HEADER_NEW(QSTR(" 牵引系统检查") )
    {"",                          D_FONT_BOLD(5),      QRect(178, 108, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_TRACTSYSTEST_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(700+2, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_TRACTSYSTEST_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 58-4, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_TRACTSYSTEST_ARROW_LEFT                 },


#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_HEADER(QSTR("牵引系统检查"))
    D_COMMON_PAGE_BUTTON_BAR

    {"",                            D_FONT_BOLD(5),      QRect(178, 100, 600,  60),           Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_TRACTSYSTEST_TRAIN         },
    {"RIGHT",                       D_FONT_BOLD(6),      QRect(700, 118,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,          ID_TRACTSYSTEST_ARROW_RIGHT   },
    {"LEFT",                        D_FONT_BOLD(6),      QRect(58, 118,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,          ID_TRACTSYSTEST_ARROW_LEFT    },

    {QSTR("网压"),                   D_FONT_BOLD(8),      QRect( 40,  45, 120,  20),           Qt::white,               Qt::black,                 CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect( 40,  66, 120,  30),           Qt::white,               Qt::black,                 CONTROL_LABEL,          ID_ACCESSORYSYSTEM_V             },

    {QSTR("网流"),                   D_FONT_BOLD(8),      QRect(180,  45, 120,  20),           Qt::white,               Qt::black,                 CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(180,  66, 120,  30),           Qt::white,               Qt::black,                 CONTROL_LABEL,           ID_ACCESSORYSYSTEM_A            },

#endif


    {"",                            D_FONT_BOLD(6),      QRect(10, 150+TractionSystemTest_y, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 180+TractionSystemTest_y, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 230+TractionSystemTest_y, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 280+TractionSystemTest_y, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 330+TractionSystemTest_y, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 380+TractionSystemTest_y, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(10, 150+TractionSystemTest_y,   1, 230),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(100, 150+TractionSystemTest_y,   1, 230),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(175, 150+TractionSystemTest_y,   1, 230),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(250, 150+TractionSystemTest_y,   1, 230),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(325, 150+TractionSystemTest_y,   1, 230),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(400, 150+TractionSystemTest_y,   1, 230),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(475, 150+TractionSystemTest_y,   1, 230),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(550, 150+TractionSystemTest_y,   1, 230),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(625, 150+TractionSystemTest_y,   1, 230),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(700, 150+TractionSystemTest_y,   1, 230),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QSTR("车  号"),                D_FONT_BOLD(8),      QRect(11,  150+TractionSystemTest_y, 88, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("1"),                    D_FONT_BOLD(8),      QRect(103,  150+TractionSystemTest_y,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("2"),                    D_FONT_BOLD(8),      QRect(178,  150+TractionSystemTest_y,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("3"),                    D_FONT_BOLD(8),      QRect(253,  150+TractionSystemTest_y,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("4"),                    D_FONT_BOLD(8),      QRect(328,  150+TractionSystemTest_y,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("5"),                    D_FONT_BOLD(8),      QRect(403,  150+TractionSystemTest_y,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("6"),                    D_FONT_BOLD(8),      QRect(478,  150+TractionSystemTest_y,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("7"),                    D_FONT_BOLD(8),      QRect(553,  150+TractionSystemTest_y,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("8"),                    D_FONT_BOLD(8),      QRect(628,  150+TractionSystemTest_y,  70, 30),           Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE         },

    {QSTR("测试条件"),               D_FONT_BOLD(8),      QRect(11, 181+TractionSystemTest_y, 88,  48),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(103, 181+TractionSystemTest_y,  70,  48),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(178, 190+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::green,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_CONDITION2         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(253, 190+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::green,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_CONDITION3         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(328, 190+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::green,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_CONDITION4         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(403, 190+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::green,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_CONDITION5         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(478, 190+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::green,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_CONDITION6         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(553, 190+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::green,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_CONDITION7         },
    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(628, 181+TractionSystemTest_y,  70,  48),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },

    {QSTR("牵引高压"),               D_FONT_BOLD(8),      QRect(11, 231+TractionSystemTest_y, 88,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("测试"),                  D_FONT_BOLD(8),      QRect(11, 255+TractionSystemTest_y, 88,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(103, 231+TractionSystemTest_y,  70,  48),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(178, 235+TractionSystemTest_y,  70,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_HIGHPREESURE2         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(253, 235+TractionSystemTest_y,  70,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_HIGHPREESURE3         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(328, 235+TractionSystemTest_y,  70,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_HIGHPREESURE4         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(403, 235+TractionSystemTest_y,  70,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_HIGHPREESURE5         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(478, 235+TractionSystemTest_y,  70,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_HIGHPREESURE6         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(553, 235+TractionSystemTest_y,  70,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_HIGHPREESURE7         },
    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(628, 231+TractionSystemTest_y,  70,  48),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },

    {QSTR("测试条件"),               D_FONT_BOLD(8),      QRect(11, 281+TractionSystemTest_y, 88,  48),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(103, 281+TractionSystemTest_y,  70,  48),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(178, 290+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_LOWERCONDITION2         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(253, 290+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_LOWERCONDITION3         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(328, 290+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_LOWERCONDITION4         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(403, 290+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_LOWERCONDITION5         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(478, 290+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_LOWERCONDITION6         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(553, 290+TractionSystemTest_y,  70,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_LOWERCONDITION7         },
    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(628, 281+TractionSystemTest_y,  70,  48),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QSTR("牵引低压"),               D_FONT_BOLD(8),      QRect(11,  331+TractionSystemTest_y, 88,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("测试"),                  D_FONT_BOLD(8),      QRect(11,  355+TractionSystemTest_y, 88,  24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(103, 331+TractionSystemTest_y,  70,  48),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(178, 335+TractionSystemTest_y,  70,  40),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_LOWERPREESURE2         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(253, 335+TractionSystemTest_y,  70,  40),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_LOWERPREESURE3         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(328, 335+TractionSystemTest_y,  70,  40),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_LOWERPREESURE4         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(403, 335+TractionSystemTest_y,  70,  40),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_LOWERPREESURE5         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(478, 335+TractionSystemTest_y,  70,  40),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_LOWERPREESURE6         },
    {QSTR(""),                      D_FONT_BOLD(8),      QRect(553, 335+TractionSystemTest_y,  70,  40),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_TRACTSYSTEST_LABEL_LOWERPREESURE7         },
    {QSTR("--"),                    D_FONT_BOLD(8),      QRect(628, 331+TractionSystemTest_y,  70,  48),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },

    {QSTR("开始"),                  D_FONT_BOLD(8),      QRect( 710, 240+TractionSystemTest_y,  70,  30),            Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_TRACTSYSTEST_BUTTON_HIGHPREESURE               },
    {QSTR("开始"),                  D_FONT_BOLD(8),      QRect( 710, 340+TractionSystemTest_y,  70,  30),            Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_TRACTSYSTEST_BUTTON_LOWERHPREESURE  },

    {QSTR("TCU版本检查"),            D_FONT_BOLD(8),      QRect( 20, 420, 150,  40),            Qt::white,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QSTR("1.3.4"),                      D_FONT_BOLD(7),      QRect(178, 420, 70,  40),            Qt::white,               Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_TCUVERSION1         },
    {QSTR("1.3.4"),                      D_FONT_BOLD(7),      QRect(253, 420, 70,  40),            Qt::white,               Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_TCUVERSION2         },
    {QSTR("1.3.4"),                      D_FONT_BOLD(7),      QRect(328, 420, 70,  40),            Qt::white,               Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_TCUVERSION3         },
    {QSTR("1.3.4"),                      D_FONT_BOLD(7),      QRect(403, 420, 70,  40),            Qt::white,               Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_TCUVERSION4         },
    {QSTR("1.3.4"),                      D_FONT_BOLD(7),      QRect(478, 420, 70,  40),            Qt::white,               Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_TCUVERSION5         },
    {QSTR("1.3.4"),                      D_FONT_BOLD(7),      QRect(553, 420, 70,  40),            Qt::white,               Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_TCUVERSION6         },

//    {QSTR("当前测试步骤："),                D_FONT_BOLD(8),      QRect(20, 470, 100,  20),            Qt::white,               Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_HELP1         },
//    {QSTR("0"),                D_FONT_BOLD(8),      QRect(20, 470, 500,  20),            Qt::white,               Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_TESTSTEP         },

//    {QSTR("提示2:"),                D_FONT_BOLD(8),      QRect(20, 500, 500,  20),            Qt::white,               Qt::black,                CONTROL_LABEL,           ID_TRACTSYSTEST_LABEL_HELP2         },


};
int g_TractionSystemTestRomLen = sizeof(g_PicRom_TractionSystemTest)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CTractionSystemTestPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_LEAVEPAGE()
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


        ON_BTNCLK(ID_TRACTSYSTEST_BUTTON_HIGHPREESURE, OnHighTestStartBtnClk)
        ON_BTNCLK(ID_TRACTSYSTEST_BUTTON_LOWERHPREESURE,OnLowerTestStartBtnClk)

END_MESSAGE_MAP()

CTractionSystemTestPage::CTractionSystemTestPage()
{
}

void CTractionSystemTestPage::OnUpdatePage()
{  
    UpTCUVer();

    UpPressTestStatus();
    updateTrain(ID_TRACTSYSTEST_TRAIN);
    updateArrow(ID_TRACTSYSTEST_ARROW_LEFT,ID_TRACTSYSTEST_ARROW_RIGHT);

    updateErrorLine(ID_TRACTSYSTEST_TRAIN);

    static quint32 timers = 0;
    timers++;

    if (m_bHighTestStartBtnDown)
    {
        UpHighPressTest();
        if (timers%times_n == 0)
        {

            TCU_test_timer1--;

            if (TCU_test_timer1 <= 0)
            {
                ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_HIGHPREESURE))->ChangeButtonState(LBUTTON_UP);
                m_bHighTestStartBtnDown = false;

                if (TCU_test_display1==1)
                {
                    if (Bit(HMI_send_data28,4)==1)
                    {
                        BitSet( HMI_send_data28, 4, 0);//牵引高压测试
                        if(Bit(TCU_test_ok,1)==0)
                        {
                            highPressT1="NG";
                            TCU_test_error1=1;
                        }

                        if(Bit(TCU_test_ok,2)==0)
                        {
                            highPressT2="NG";
                            TCU_test_error2=1;
                        }

                        if(Bit(TCU_test_ok,3)==0)
                        {
                            highPressT3="NG";
                            TCU_test_error3=1;
                        }

                        if(Bit(TCU_test_ok,4)==0)
                        {
                            highPressT4="NG";
                            TCU_test_error4=1;
                        }

                        if(Bit(TCU_test_ok,5)==0)
                        {
                            highPressT5="NG";
                            TCU_test_error5=1;
                        }

                        if(Bit(TCU_test_ok,6)==0)
                        {
                            highPressT6="NG";
                            TCU_test_error6=1;
                        }

                     }
                }
                timers = 0;

                SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE2, highPressT1);
                SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE2, TCU_test_error1);
                SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE3, highPressT2);
                SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE3, TCU_test_error2);
                SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE4, highPressT3);
                SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE4, TCU_test_error3);
                SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE5, highPressT4);
                SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE5, TCU_test_error4);
                SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE6, highPressT5);
                SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE6, TCU_test_error5);
                SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE7, highPressT6);
                SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE7, TCU_test_error6);

            }

        }
    }
    if (m_bLowTestStartBtnDown)
    {
        UpLowerPressTest();
        if (timers%times_n == 0)
        {
            TCU_test_timer2--;
            if (TCU_test_timer2 <= 0)
            {
                ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_LOWERHPREESURE))->ChangeButtonState(LBUTTON_UP);
                m_bLowTestStartBtnDown = false;


                if (TCU_test_display2==1)
                {
                    if (Bit(HMI_send_data28,3)==1)
                    {
                        BitSet( HMI_send_data28, 3, 0);//牵引低{低压测试2="OK";}else{低压测试2="NG";TCU_test_error6=1;}

                        if(Bit(TCU_test_ok,9)==0)
                        {
                            lowerPressT1="NG";
                            TCU_test_error7=1;
                        }
                        if(Bit(TCU_test_ok,10)==0)
                        {
                            lowerPressT2="NG";
                            TCU_test_error8=1;
                        }
                        if(Bit(TCU_test_ok,11)==0)
                        {
                            lowerPressT3="NG";
                            TCU_test_error9=1;
                        }
                        if(Bit(TCU_test_ok,12)==0)
                        {
                            lowerPressT4="NG";
                            TCU_test_error10=1;
                        }
                        if(Bit(TCU_test_ok,13)==0)
                        {
                            lowerPressT5="NG";
                            TCU_test_error11=1;
                        }
                        if(Bit(TCU_test_ok,14)==0)
                        {
                            lowerPressT6="NG";
                            TCU_test_error12=1;
                        }

                    }
                }
                timers = 0;
                //
                SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE2, lowerPressT1);
                SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE2, TCU_test_error7);
                SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE3, lowerPressT2);
                SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE3, TCU_test_error8);
                SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE4, lowerPressT3);
                SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE4, TCU_test_error9);
                SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE5, lowerPressT4);
                SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE5, TCU_test_error10);
                SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE6, lowerPressT5);
                SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE6, TCU_test_error11);
                SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE7, lowerPressT6);
                SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE7, TCU_test_error12);
            }

        }
    }


}

void CTractionSystemTestPage::OnInitPage()
{
    //((CLabel*)GetDlgItem(ID_TRACTSYSTEST_LABEL_HELP1))->SetAlignment(Qt::AlignLeft);
    //((CLabel*)GetDlgItem(ID_TRACTSYSTEST_LABEL_HELP2))->SetAlignment(Qt::AlignLeft);

    ((CLabel *) GetDlgItem(ID_TRACTSYSTEST_LABEL_TCUVERSION1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_TRACTSYSTEST_LABEL_TCUVERSION2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_TRACTSYSTEST_LABEL_TCUVERSION3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_TRACTSYSTEST_LABEL_TCUVERSION4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_TRACTSYSTEST_LABEL_TCUVERSION5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_TRACTSYSTEST_LABEL_TCUVERSION6))->SetBorderColor(Qt::white);

    ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_HIGHPREESURE))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_LOWERHPREESURE))->m_bAutoUpState = false;

}

void CTractionSystemTestPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR("帮   助"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("退   出"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR("帮   助"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("退   出"));

#endif

    m_bHighTestStartBtnDown = false;
    m_bLowTestStartBtnDown = false;
     TCU_test_timer1 = 60;
    TCU_test_timer2 = 20;
    this->InitPageHeader();
}

void CTractionSystemTestPage::OnLeavePage()
{
    if(CGlobal::m_nNextPageIndex != PAGE_INDEX_TRACTIONSYSTEMTESTHELP)
    {
        ResetUI();
    }
}

#ifdef PAGE_BUTTON_BAR_NEW
void CTractionSystemTestPage::OnComBtn1Clk()
{

}

void CTractionSystemTestPage::OnComBtn2Clk()
{

}

void CTractionSystemTestPage::OnComBtn3Clk()
{

}

void CTractionSystemTestPage::OnComBtn4Clk()
{

}

void CTractionSystemTestPage::OnComBtn5Clk()
{

}

void CTractionSystemTestPage::OnComBtn6Clk()
{

}
void CTractionSystemTestPage::OnComBtn7Clk()
{
    ChangePage(PAGE_INDEX_TRACTIONSYSTEMTESTHELP);
}
void CTractionSystemTestPage::OnComBtn8Clk()
{
    ResetUI();
    ChangePage(PAGE_INDEX_MAINTAIN);
}
#else
void CTractionSystemTestPage::OnComBtn1Clk()
{

}

void CTractionSystemTestPage::OnComBtn2Clk()
{

}

void CTractionSystemTestPage::OnComBtn3Clk()
{

}

void CTractionSystemTestPage::OnComBtn4Clk()
{

}

void CTractionSystemTestPage::OnComBtn5Clk()
{
      ChangePage(PAGE_INDEX_TRACTIONSYSTEMTESTHELP);
}

void CTractionSystemTestPage::OnComBtn6Clk()
{
   ResetUI();
   ChangePage(PAGE_INDEX_MAINTAIN);
}
#endif



void CTractionSystemTestPage::OnHighTestStartBtnClk()
{

    if (m_bLowTestStartBtnDown==false)
    {
        TCU_test_error1=0;
        TCU_test_error2=0;
        TCU_test_error3=0;
        TCU_test_error4=0;
        TCU_test_error5=0;
        TCU_test_error6=0;

        highPressT1 = "";
        highPressT2 = "";
        highPressT3 = "";
        highPressT4 = "";
        highPressT5 = "";
        highPressT6 = "";

        TCU_test_temp13 = 0;
        TCU_test_temp14 = 0;
        TCU_test_temp15 = 0;
        TCU_test_temp16 = 0;
        TCU_test_temp17 = 0;
        TCU_test_temp18 = 0;
        TCU_test_signal13 = 0;
        TCU_test_signal14 = 0;
        TCU_test_signal15 = 0;
        TCU_test_signal16 = 0;
        TCU_test_signal17 = 0;
        TCU_test_signal18 = 0;

        BitSet( HMI_send_data28, 4, 0 );
        SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE2, highPressT1);
        SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE2, TCU_test_error1);
        SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE3, highPressT2);
        SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE3, TCU_test_error2);
        SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE4, highPressT3);
        SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE4, TCU_test_error3);
        SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE5, highPressT4);
        SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE5, TCU_test_error4);
        SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE6, highPressT5);
        SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE6, TCU_test_error5);
        SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE7, highPressT6);
        SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE7, TCU_test_error6);

        m_bHighTestStartBtnDown = true;
        BitSet( HMI_send_data28, 4, 1 );
        TCU_test_display1=1;
        TCU_test_ok=TCU_test_ok&0xff00;
        TCU_test_timer1 = 60;
        UpHighPressTest();
    }
    else
    {
        ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_HIGHPREESURE))->ChangeButtonState(LBUTTON_UP);
    }


}

void CTractionSystemTestPage::OnLowerTestStartBtnClk()
{

    if (m_bHighTestStartBtnDown==false)
    {
        TCU_test_error7=0;
        TCU_test_error8=0;
        TCU_test_error9=0;
        TCU_test_error10=0;
        TCU_test_error11=0;
        TCU_test_error12=0;
        lowerPressT1 = "";
        lowerPressT2 = "";
        lowerPressT3 = "";
        lowerPressT4 = "";
        lowerPressT5 = "";
        lowerPressT6 = "";

        TCU_test_temp13 = 0;
        TCU_test_temp14 = 0;
        TCU_test_temp15 = 0;
        TCU_test_temp16 = 0;
        TCU_test_temp17 = 0;
        TCU_test_temp18 = 0;
        TCU_test_signal13 = 0;
        TCU_test_signal14 = 0;
        TCU_test_signal15 = 0;
        TCU_test_signal16 = 0;
        TCU_test_signal17 = 0;
        TCU_test_signal18 = 0;

        BitSet( HMI_send_data28, 3, 0 );
     //  ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_LOWERHPREESURE))->ChangeButtonState(LBUTTON_UP);
       SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE2, lowerPressT1);
       SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE2, TCU_test_error7);
       SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE3, lowerPressT2);
       SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE3, TCU_test_error8);
       SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE4, lowerPressT3);
       SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE4, TCU_test_error9);
       SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE5, lowerPressT4);
       SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE5, TCU_test_error10);
       SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE6, lowerPressT5);
       SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE6, TCU_test_error11);
       SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE7, lowerPressT6);
       SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE7, TCU_test_error12);

      //     ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_LOWERHPREESURE))->ChangeButtonState(LBUTTON_DOWN);

        m_bLowTestStartBtnDown = true;
        BitSet( HMI_send_data28, 3, 1 );
        TCU_test_display2=1;
        TCU_test_ok=TCU_test_ok&0x00ff;
        TCU_test_timer2 = 20;
        UpLowerPressTest();

    }
    else
    {
        ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_LOWERHPREESURE))->ChangeButtonState(LBUTTON_UP);
    }

}

void CTractionSystemTestPage::UpPressTestStatus()
{
    SetPTStatusColor(ID_TRACTSYSTEST_LABEL_CONDITION2, Bit(TCU_511_6, 3));
    SetPTStatusColor(ID_TRACTSYSTEST_LABEL_CONDITION3, Bit(TCU_521_6, 3));
    SetPTStatusColor(ID_TRACTSYSTEST_LABEL_CONDITION4, Bit(TCU_531_6, 3));
    SetPTStatusColor(ID_TRACTSYSTEST_LABEL_CONDITION5, Bit(TCU_541_6, 3));
    SetPTStatusColor(ID_TRACTSYSTEST_LABEL_CONDITION6, Bit(TCU_551_6, 3));
    SetPTStatusColor(ID_TRACTSYSTEST_LABEL_CONDITION7, Bit(TCU_561_6, 3));

    SetPTStatusColor(ID_TRACTSYSTEST_LABEL_LOWERCONDITION2, Bit(TCU_511_6, 6));
    SetPTStatusColor(ID_TRACTSYSTEST_LABEL_LOWERCONDITION3, Bit(TCU_521_6, 6));
    SetPTStatusColor(ID_TRACTSYSTEST_LABEL_LOWERCONDITION4, Bit(TCU_531_6, 6));
    SetPTStatusColor(ID_TRACTSYSTEST_LABEL_LOWERCONDITION5, Bit(TCU_541_6, 6));
    SetPTStatusColor(ID_TRACTSYSTEST_LABEL_LOWERCONDITION6, Bit(TCU_551_6, 6));
    SetPTStatusColor(ID_TRACTSYSTEST_LABEL_LOWERCONDITION7, Bit(TCU_561_6, 6));

}

void CTractionSystemTestPage::SetPTStatusColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }

    return;
}
void CTractionSystemTestPage::UpHighPressTest()
{   


    TCU_test_signal13 = TCU_511_6 ^ TCU_test_temp13;
    if (TCU_test_signal13 != 0 )//判定中
    {
        if (Bit(TCU_test_signal13,2) == 1)
        {

            if (Bit(TCU_511_6,2) == 0)
            {
                if (Bit(TCU_511_6,1))
                {
                    highPressT1 = QSTR("OK");
                }
                else
                {
                    highPressT1 = QSTR("NG");
                    TCU_test_error1 = 1;
                }
                BitSet( TCU_test_ok, 1, 1);
            }
        }

        TCU_test_temp13 = TCU_511_6;
    }
    if (Bit(TCU_511_6,2) == 1)
    {
        highPressT1 = QSTR("判定中\n步骤")+StrFromInt( TCU_510_12%256, 10 );
    }
    SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE2, highPressT1);
    SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE2, TCU_test_error1);

    TCU_test_signal14 =  TCU_521_6^TCU_test_temp14;
    if (TCU_test_signal14 != 0)
    {
        if (Bit(TCU_test_signal14,2) == 1)
        {

            if (Bit(TCU_521_6,2) == 0)
            {
                if (Bit(TCU_521_6,1))
                {
                    highPressT2 = QSTR("OK");
                }
                else
                {
                    highPressT2 = QSTR("NG");
                    TCU_test_error2 = 1;
                }
                BitSet( TCU_test_ok, 2, 1);
            }
        }
        TCU_test_temp14 = TCU_521_6;


    }
    if (Bit(TCU_521_6,2) == 1)
    {
            highPressT2 = QSTR("判定中\n步骤")+StrFromInt( TCU_520_12%256, 10 );
    }
    SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE3, highPressT2);
    SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE3, TCU_test_error2);

    TCU_test_signal15 =  TCU_531_6^TCU_test_temp15;
    if (TCU_test_signal15 != 0)
    {     
        if (Bit(TCU_test_signal15,2) == 1)
        {

            if (Bit(TCU_531_6,2) == 0)
            {
                if (Bit(TCU_531_6,1))
                {
                    highPressT3 = QSTR("OK");
                }
                else
                {
                    highPressT3 = QSTR("NG");
                    TCU_test_error3 = 1;
                }
                BitSet( TCU_test_ok, 3, 1);

            }
        }
        TCU_test_temp15 = TCU_531_6;

    }
    if (Bit(TCU_531_6,2) == 1)
    {
            highPressT3 = QSTR("判定中\n步骤")+StrFromInt( TCU_530_12%256, 10 );
    }
    SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE4, highPressT3);
    SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE4, TCU_test_error3);

    TCU_test_signal16 =  TCU_541_6^TCU_test_temp16;
    if (TCU_test_signal16 != 0)
    {
        if (Bit(TCU_test_signal16,2) == 1)
        {

            if (Bit(TCU_541_6,2) == 0)
            {
                if (Bit(TCU_541_6,1))
                {
                    highPressT4 = QSTR("OK");
                }
                else
                {
                    highPressT4 = QSTR("NG");
                    TCU_test_error4 = 1;
                }
                BitSet( TCU_test_ok, 4, 1);

            }
        }
        TCU_test_temp16 = TCU_541_6;

    }
    if (Bit(TCU_541_6,2) == 1)
    {
        highPressT4 = QSTR("判定中\n步骤")+StrFromInt( TCU_540_12%256, 10 );
    }
    SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE5, highPressT4);
    SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE5, TCU_test_error4);

    TCU_test_signal17 =  TCU_551_6^TCU_test_temp17;
    if (TCU_test_signal17 != 0)
    {
        if (Bit(TCU_test_signal17,2) == 1)
        {

            if (Bit(TCU_551_6,2) == 0)
            {
                if (Bit(TCU_551_6,1))
                {
                    highPressT5 = QSTR("OK");
                }
                else
                {
                    highPressT5 = QSTR("NG");
                    TCU_test_error5 = 1;
                }
                BitSet( TCU_test_ok, 5, 1);

            }
        }
        TCU_test_temp17 = TCU_551_6;

    }
    if (Bit(TCU_551_6,2) == 1)
    {
        highPressT5 = QSTR("判定中\n步骤")+StrFromInt( TCU_550_12%256, 10 );
    }
    SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE6, highPressT5);
    SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE6, TCU_test_error5);

    TCU_test_signal18 =  TCU_561_6^TCU_test_temp18;
    if (TCU_test_signal18 != 0)
    {
        if (Bit(TCU_test_signal18,2) == 1)
        {
            if (Bit(TCU_561_6,2) == 0)
            {
                if (Bit(TCU_561_6,1))
                {
                    highPressT6 = QSTR("OK");
                }
                else
                {
                    highPressT6 = QSTR("NG");
                    TCU_test_error6= 1;
                }
                BitSet( TCU_test_ok, 6, 1);

            }
        }
        TCU_test_temp18 = TCU_561_6;


    }
    if (Bit(TCU_561_6,2) == 1)
    {
        highPressT6 = QSTR("判定中\n步骤")+StrFromInt( TCU_560_12%256, 10 );
    }
    SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE7, highPressT6);
    SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE7, TCU_test_error6);

    if((TCU_test_ok&0x3f)==0x3f)
    {
        BitSet( HMI_send_data28, 4, 0 );

        ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_HIGHPREESURE))->ChangeButtonState(LBUTTON_UP);
        m_bHighTestStartBtnDown = false;
    }

}

void CTractionSystemTestPage::UpLowerPressTest()
{



    TCU_test_signal13 = TCU_511_6 ^ TCU_test_temp13;
    if (TCU_test_signal13 != 0 )//判定中
    {
        if (Bit(TCU_test_signal13,5) == 1)
        {

            if (Bit(TCU_511_6,5) == 0)
            {
                if (Bit(TCU_511_6,4))
                {
                    lowerPressT1 = QSTR("OK");
                }
                else
                {
                    lowerPressT1 = QSTR("NG");
                    TCU_test_error7 = 1;
                }
                BitSet( TCU_test_ok, 9, 1);


            }
        }

        TCU_test_temp13 = TCU_511_6;
        
    }
    if (Bit(TCU_511_6,5) == 1)
    {
        lowerPressT1 = QSTR("判定中\n步骤")+StrFromInt( TCU_510_12%256, 10 );
    }
    SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE2, lowerPressT1);
    SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE2, TCU_test_error7);

    TCU_test_signal14 =  TCU_521_6^TCU_test_temp14;
    if (TCU_test_signal14 != 0)
    {
        if (Bit(TCU_test_signal14,5) == 1)
        {

            if (Bit(TCU_521_6,5) == 0)
            {
                if (Bit(TCU_521_6,4))
                {
                    lowerPressT2 = QSTR("OK");
                }
                else
                {
                    lowerPressT2 = QSTR("NG");
                    TCU_test_error8 = 1;
                }
                BitSet( TCU_test_ok, 10, 1);


            }
        }
        TCU_test_temp14 = TCU_521_6;
        
    }
    if (Bit(TCU_521_6,5) == 1)
    {
      lowerPressT2 = QSTR("判定中\n步骤")+StrFromInt( TCU_520_12%256, 10 );
    }
    SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE3, lowerPressT2);
    SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE3, TCU_test_error8);

    TCU_test_signal15 =  TCU_531_6^TCU_test_temp15;
    if (TCU_test_signal15 != 0)
    {
        if (Bit(TCU_test_signal15,5) == 1)
        {

            if (Bit(TCU_531_6,5) == 0)
            {
                if (Bit(TCU_531_6,4))
                {
                    lowerPressT3 = QSTR("OK");
                }
                else
                {
                    lowerPressT3 = QSTR("NG");
                    TCU_test_error9 = 1;
                }
                BitSet( TCU_test_ok, 11, 1);

            }
        }

        TCU_test_temp15 = TCU_531_6;
        
    }
    if (Bit(TCU_531_6,5) == 1)
    {
        lowerPressT3 = QSTR("判定中\n步骤")+StrFromInt( TCU_530_12%256, 10 );
    }
    SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE4, lowerPressT3);
    SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE4, TCU_test_error9);

    TCU_test_signal16 =  TCU_541_6^TCU_test_temp16;
    if (TCU_test_signal16 != 0)
    {
        if (Bit(TCU_test_signal16,5) == 1)
        {

            if (Bit(TCU_541_6,5) == 0)
            {
                if (Bit(TCU_541_6,4))
                {
                    lowerPressT4 = QSTR("OK");
                }
                else
                {
                    lowerPressT4 = QSTR("NG");
                    TCU_test_error10 = 1;
                }
                BitSet( TCU_test_ok, 12, 1);
            }
        }

        TCU_test_temp16 = TCU_541_6;
        
    }
    if (Bit(TCU_541_6,5) == 1)
    {
        lowerPressT4 = QSTR("判定中\n步骤")+StrFromInt( TCU_540_12%256, 10 );
    }
    SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE5, lowerPressT4);
    SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE5, TCU_test_error10);

    TCU_test_signal17 =  TCU_551_6^TCU_test_temp17;
    if (TCU_test_signal17 != 0)
    {
        if (Bit(TCU_test_signal17,5) == 1)
        {
            if (Bit(TCU_551_6,5) == 0)
            {
                if (Bit(TCU_551_6,4))
                {
                    lowerPressT5 = QSTR("OK");
                }
                else
                {
                    lowerPressT5 = QSTR("NG");
                    TCU_test_error11 = 1;
                }
                BitSet( TCU_test_ok, 13, 1);
            }
        }

        TCU_test_temp17 = TCU_551_6;

    }
    if (Bit(TCU_551_6,5) == 1)
    {
        lowerPressT5 = QSTR("判定中\n步骤")+StrFromInt( TCU_550_12%256, 10 );
    }
    SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE6, lowerPressT5);
    SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE6, TCU_test_error11);

    TCU_test_signal18 =  TCU_561_6^TCU_test_temp18;
    if (TCU_test_signal18 != 0)
    {
        if (Bit(TCU_test_signal18,5) == 1)
        {
            if (Bit(TCU_561_6,5) == 0)
            {
                if (Bit(TCU_561_6,4))
                {
                    lowerPressT6 = QSTR("OK");
                }
                else
                {
                    lowerPressT6 = QSTR("NG");
                    TCU_test_error12 = 1;
                }
                BitSet( TCU_test_ok, 14, 1);
            }
        }

        TCU_test_temp18 = TCU_561_6;

    }
    if (Bit(TCU_561_6,5) == 1)
    {
        lowerPressT6 = QSTR("判定中\n步骤")+StrFromInt( TCU_560_12%256, 10 );
    }
    SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE7, lowerPressT6);
    SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE7, TCU_test_error12);

    if((TCU_test_ok&0x3f00)==0x3f00)
    {
        BitSet( HMI_send_data28, 3, 0 );
        ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_LOWERHPREESURE))->ChangeButtonState(LBUTTON_UP);
        m_bLowTestStartBtnDown = false;
     //   TCU_test_timer2 = 0;
    }

}
void CTractionSystemTestPage::SetPressTestValue(int id, QString rValue)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(rValue);
}

void CTractionSystemTestPage::SetPTColor(int id, int colorVal)
{
    if (colorVal > 0)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }

    return;
}


void CTractionSystemTestPage::UpTCUVer()
{



    software_version1=StrFromInt( TCU_511_1%256, 10 )+"."+StrFromInt( TCU_511_1/256, 10 )+"."+StrFromInt( TCU_511_2%256, 10 );
    software_version2=StrFromInt( TCU_521_1%256, 10 )+"."+StrFromInt( TCU_521_1/256, 10 )+"."+StrFromInt( TCU_521_2%256, 10 );
    software_version3=StrFromInt( TCU_531_1%256, 10 )+"."+StrFromInt( TCU_531_1/256, 10 )+"."+StrFromInt( TCU_531_2%256, 10 );
    software_version4=StrFromInt( TCU_541_1%256, 10 )+"."+StrFromInt( TCU_541_1/256, 10 )+"."+StrFromInt( TCU_541_2%256, 10 );
    software_version5=StrFromInt( TCU_551_1%256, 10 )+"."+StrFromInt( TCU_551_1/256, 10 )+"."+StrFromInt( TCU_551_2%256, 10 );
    software_version6=StrFromInt( TCU_561_1%256, 10 )+"."+StrFromInt( TCU_561_1/256, 10 )+"."+StrFromInt( TCU_561_2%256, 10 );

//    TCU__version1 = StrFromInt( soft_version13/256, 10 )+"."+StrFromInt( soft_version13%256, 10 );//+"."+StrFromInt( soft_version14/256, 10 );
//    TCU__version2 = StrFromInt( soft_version15/256, 10 )+"."+StrFromInt( soft_version15%256, 10 );//+"."+StrFromInt( soft_version16/256, 10 );
//    TCU__version3 = StrFromInt( soft_version17/256, 10 )+"."+StrFromInt( soft_version17%256, 10 );//+"."+StrFromInt( soft_version18/256, 10 );
//    TCU__version4 = StrFromInt( soft_version19/256, 10 )+"."+StrFromInt( soft_version19%256, 10 );//+"."+StrFromInt( soft_version20/256, 10 );

    SetTCUVersion(ID_TRACTSYSTEST_LABEL_TCUVERSION1,software_version1);
    SetTCUVersion(ID_TRACTSYSTEST_LABEL_TCUVERSION2,software_version2);
    SetTCUVersion(ID_TRACTSYSTEST_LABEL_TCUVERSION3,software_version3);
    SetTCUVersion(ID_TRACTSYSTEST_LABEL_TCUVERSION4,software_version4);
    SetTCUVersion(ID_TRACTSYSTEST_LABEL_TCUVERSION5,software_version5);
    SetTCUVersion(ID_TRACTSYSTEST_LABEL_TCUVERSION6,software_version6);
}


void CTractionSystemTestPage::SetTCUVersion(int id, QString vVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(vVal);

}

void CTractionSystemTestPage::ResetUI()
{
    TCU_test_temp13 = 0;
    TCU_test_temp14 = 0;
    TCU_test_temp15 = 0;
    TCU_test_temp16 = 0;
    TCU_test_temp17 = 0;
    TCU_test_temp18 = 0;
    TCU_test_signal13 = 0;
    TCU_test_signal14 = 0;
    TCU_test_signal15 = 0;
    TCU_test_signal16 = 0;
    TCU_test_signal17 = 0;
    TCU_test_signal18 = 0;
    TCU_test_error1=0;
    TCU_test_error2=0;
    TCU_test_error3=0;
    TCU_test_error4=0;
    TCU_test_error5=0;
    TCU_test_error6=0;
    lowerPressT1 = "";
    lowerPressT2 = "";
    lowerPressT3 = "";
    lowerPressT4 = "";
    lowerPressT5 = "";
    lowerPressT6 = "";
    BitSet( HMI_send_data28, 4, 0 );
    ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_HIGHPREESURE))->ChangeButtonState(LBUTTON_UP);
    SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE2, highPressT1);
    SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE2, TCU_test_error1);
    SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE3, highPressT2);
    SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE3, TCU_test_error2);
    SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE4, highPressT3);
    SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE4, TCU_test_error3);
    SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE5, highPressT4);
    SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE5, TCU_test_error4);
    SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE6, highPressT5);
    SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE6, TCU_test_error5);
    SetPressTestValue(ID_TRACTSYSTEST_LABEL_HIGHPREESURE7, highPressT6);
    SetPTColor(ID_TRACTSYSTEST_LABEL_HIGHPREESURE7, TCU_test_error6);



    TCU_test_error7=0;
    TCU_test_error8=0;
    TCU_test_error9=0;
    TCU_test_error10=0;
    TCU_test_error11=0;
    TCU_test_error12=0;
    highPressT1 = "";
    highPressT2 = "";
    highPressT3 = "";
    highPressT4 = "";
    highPressT5 = "";
    highPressT6 = "";
    BitSet( HMI_send_data28, 3, 0 );
   ((CButton*)GetDlgItem(ID_TRACTSYSTEST_BUTTON_LOWERHPREESURE))->ChangeButtonState(LBUTTON_UP);
   SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE2, lowerPressT1);
   SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE2, TCU_test_error7);
   SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE3, lowerPressT2);
   SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE3, TCU_test_error8);
   SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE4, lowerPressT3);
   SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE4, TCU_test_error9);
   SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE5, lowerPressT4);
   SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE5, TCU_test_error10);
   SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE6, lowerPressT5);
   SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE6, TCU_test_error11);
   SetPressTestValue(ID_TRACTSYSTEST_LABEL_LOWERPREESURE7, lowerPressT6);
   SetPTColor(ID_TRACTSYSTEST_LABEL_LOWERPREESURE7, TCU_test_error12);
}
