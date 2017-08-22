#include "dialog.h"
#include "ui_dialog.h"
#include <qdesktopwidget.h>
#include <qapplication.h>
#include <qdatetime.h>
#include <qdebug.h>
#include "CRealTimeFaultsWarnningDialog.h"
#include "PixyTypes.h"
#include "PixyMvbLib.h"

// added by Deng Ran on the 09th of August 2017.
#include "pmsstatepage.h"
#include "rsfsdstatepage.h"

vector<CPage*>  g_PageVec(BKSURFACENUM);

WORD ccu_lifesignal_temp = 0;

WORD riom1_gw123_lifesignal_temp = 0;
WORD riom1_di1_lifesignal_temp = 0;
WORD riom1_di2_lifesignal_temp = 0;
WORD riom1_di3_lifesignal_temp = 0;
WORD riom1_di4_lifesignal_temp = 0;
WORD riom1_do1_lifesignal_temp = 0;
WORD riom1_do2_lifesignal_temp = 0;
WORD riom1_ai1_lifesignal_temp = 0;
WORD riom2_gw123_lifesignal_temp = 0;
WORD riom2_di1_lifesignal_temp = 0;
WORD riom2_di2_lifesignal_temp = 0;
WORD riom2_di3_lifesignal_temp = 0;
WORD riom2_di4_lifesignal_temp = 0;
WORD riom2_do1_lifesignal_temp = 0;
WORD riom2_do2_lifesignal_temp = 0;
WORD riom2_ai1_lifesignal_temp = 0;
WORD riom3_gw123_lifesignal_temp = 0;
WORD riom3_di1_lifesignal_temp = 0;
WORD riom3_di2_lifesignal_temp = 0;
WORD riom3_di3_lifesignal_temp = 0;
WORD riom3_di4_lifesignal_temp = 0;
WORD riom3_do1_lifesignal_temp = 0;
WORD riom3_do2_lifesignal_temp = 0;
WORD riom3_ai1_lifesignal_temp = 0;
WORD riom4_gw123_lifesignal_temp = 0;
WORD riom4_di1_lifesignal_temp = 0;
WORD riom4_di2_lifesignal_temp = 0;
WORD riom4_di3_lifesignal_temp = 0;
WORD riom4_di4_lifesignal_temp = 0;
WORD riom4_do1_lifesignal_temp = 0;
WORD riom4_do2_lifesignal_temp = 0;
WORD riom4_ai1_lifesignal_temp = 0;
WORD riom5_gw123_lifesignal_temp = 0;
WORD riom5_di1_lifesignal_temp = 0;
WORD riom5_di2_lifesignal_temp = 0;
WORD riom5_di3_lifesignal_temp = 0;
WORD riom5_di4_lifesignal_temp = 0;
WORD riom5_do1_lifesignal_temp = 0;
WORD riom5_do2_lifesignal_temp = 0;
WORD riom5_ai1_lifesignal_temp = 0;
WORD riom6_gw123_lifesignal_temp = 0;
WORD riom6_di1_lifesignal_temp = 0;
WORD riom6_di2_lifesignal_temp = 0;
WORD riom6_di3_lifesignal_temp = 0;
WORD riom6_di4_lifesignal_temp = 0;
WORD riom6_do1_lifesignal_temp = 0;
WORD riom6_do2_lifesignal_temp = 0;
WORD riom6_ai1_lifesignal_temp = 0;
WORD riom7_gw123_lifesignal_temp = 0;
WORD riom7_di1_lifesignal_temp = 0;
WORD riom7_di2_lifesignal_temp = 0;
WORD riom7_di3_lifesignal_temp = 0;
WORD riom7_di4_lifesignal_temp = 0;
WORD riom7_do1_lifesignal_temp = 0;
WORD riom7_do2_lifesignal_temp = 0;
WORD riom7_ai1_lifesignal_temp = 0;
WORD riom8_gw123_lifesignal_temp = 0;
WORD riom8_di1_lifesignal_temp = 0;
WORD riom8_di2_lifesignal_temp = 0;
WORD riom8_di3_lifesignal_temp = 0;
WORD riom8_di4_lifesignal_temp = 0;
WORD riom8_do1_lifesignal_temp = 0;
WORD riom8_do2_lifesignal_temp = 0;
WORD riom8_ai1_lifesignal_temp = 0;
WORD tcu1_lifesignal_temp = 0;
WORD tcu2_lifesignal_temp = 0;
WORD tcu3_lifesignal_temp = 0;
WORD tcu4_lifesignal_temp = 0;
WORD tcu5_lifesignal_temp = 0;
WORD tcu6_lifesignal_temp = 0;
WORD acu1_lifesignal_temp = 0;
WORD acu2_lifesignal_temp = 0;
WORD bcu1_lifesignal_temp = 0;
WORD bcu2_lifesignal_temp = 0;
WORD bcu3_lifesignal_temp = 0;
WORD bcu4_lifesignal_temp = 0;
WORD door1_lifesignal_temp = 0;
WORD door2_lifesignal_temp = 0;
WORD door3_lifesignal_temp = 0;
WORD door4_lifesignal_temp = 0;
WORD door5_lifesignal_temp = 0;
WORD door6_lifesignal_temp = 0;
WORD door7_lifesignal_temp = 0;
WORD door8_lifesignal_temp = 0;
WORD hvac1_lifesignal_temp = 0;
WORD hvac2_lifesignal_temp = 0;
WORD hvac3_lifesignal_temp = 0;
WORD hvac4_lifesignal_temp = 0;
WORD hvac5_lifesignal_temp = 0;
WORD hvac6_lifesignal_temp = 0;
WORD hvac7_lifesignal_temp = 0;
WORD hvac8_lifesignal_temp = 0;
WORD pis1_lifesignal_temp = 0;
WORD pis2_lifesignal_temp = 0;
WORD atc1_lifesignal_temp = 0;
WORD atc2_lifesignal_temp = 0;
WORD atc3_lifesignal_temp = 0;
WORD atc4_lifesignal_temp = 0;
WORD fas1_lifesignal_temp = 0;
WORD fas2_lifesignal_temp = 0;

WORD door9_lifesignal_temp = 0;
WORD door10_lifesignal_temp = 0;
WORD door11_lifesignal_temp = 0;
WORD door12_lifesignal_temp = 0;
WORD door13_lifesignal_temp = 0;
WORD door14_lifesignal_temp = 0;
WORD door15_lifesignal_temp = 0;
WORD door16_lifesignal_temp = 0;

BEGIN_PAGE_MANAGE()
        ADD_PAGE(CCommStatusPage,               ROM_INDEX(PAGE_INDEX_COMMSTATUS))
        ADD_PAGE(CCommStatusHelpPage,           ROM_INDEX(PAGE_INDEX_COMMSTATUSHELP))
        ADD_PAGE(CMainPage,                     ROM_INDEX(PAGE_INDEX_MAIN))
        ADD_PAGE(CInitialSettingPage,           ROM_INDEX(PAGE_INDEX_INITIALSETTING))
        ADD_PAGE(CReserveSettingPage,           ROM_INDEX(PAGE_INDEX_RESERVESETTING))
        ADD_PAGE(CStationSettingPage,           ROM_INDEX(PAGE_INDEX_STATIONSETTING))
        ADD_PAGE(CDirectionConfirmPage,         ROM_INDEX(PAGE_INDEX_DIRECTIONCONFIRM))
        ADD_PAGE(CRunStatePage,                 ROM_INDEX(PAGE_INDEX_RUNSTATE))
        ADD_PAGE(CRunHelp1Page,                 ROM_INDEX(PAGE_INDEX_RUNHELP1))
        ADD_PAGE(CRunHelp2Page,                 ROM_INDEX(PAGE_INDEX_RUNHELP2))
        ADD_PAGE(CRunHelp3Page,                 ROM_INDEX(PAGE_INDEX_RUNHELP3))
        ADD_PAGE(CRunHelp4Page,                 ROM_INDEX(PAGE_INDEX_RUNHELP4))
        ADD_PAGE(CCarStatus1Page,               ROM_INDEX(PAGE_INDEX_CARSTATUS1))
        ADD_PAGE(CCarStatus1Help1Page,          ROM_INDEX(PAGE_INDEX_CARSTATUS1HELP1))
        ADD_PAGE(CCarStatus1Help2Page,          ROM_INDEX(PAGE_INDEX_CARSTATUS1HELP2))
        ADD_PAGE(CCarStatus1Help3Page,          ROM_INDEX(PAGE_INDEX_CARSTATUS1HELP3))
        ADD_PAGE(CCarStatus2Page,               ROM_INDEX(PAGE_INDEX_CARSTATUS2))
        ADD_PAGE(CCarStatusHelpPage,            ROM_INDEX(PAGE_INDEX_CARSTATUSHELP))
        ADD_PAGE(CCarStatus3Page,               ROM_INDEX(PAGE_INDEX_CARSTATUS3))
        ADD_PAGE(CCarStatus3HelpPage,           ROM_INDEX(PAGE_INDEX_CARSTATUS3HELP))
        ADD_PAGE(CFaultPage,                    ROM_INDEX(PAGE_INDEX_FAULT))
        ADD_PAGE(CHVACSettingPage,              ROM_INDEX(PAGE_INDEX_HVACSETTING))
        ADD_PAGE(CHVACSettingHelpPage,          ROM_INDEX(PAGE_INDEX_HVACSETTINGHELP))
        ADD_PAGE(CMaintainPage,                 ROM_INDEX(PAGE_INDEX_MAINTAIN))
        ADD_PAGE(CParameterSettingPage1,        ROM_INDEX(PAGE_INDEX_PARAMETERSETTING1))
        ADD_PAGE(CParameterSettingPage2,        ROM_INDEX(PAGE_INDEX_PARAMETERSETTING2))
        ADD_PAGE(CWheelDiaRecordPage,           ROM_INDEX(PAGE_INDEX_WHEELDIARECORD))
        ADD_PAGE(CDoorTestPage,                 ROM_INDEX(PAGE_INDEX_DOORTEST))
        ADD_PAGE(CDoorTestHelpPage,             ROM_INDEX(PAGE_INDEX_DOORTESTHELP))
        ADD_PAGE(CTractionSystemTestPage,	ROM_INDEX(PAGE_INDEX_TRACTIONSYSTEMTEST))
        ADD_PAGE(CTractionSystemTestHelpPage,	ROM_INDEX(PAGE_INDEX_TRACTIONSYSTEMTESTHELP))
        ADD_PAGE(CAccessorySystemTestPage,	ROM_INDEX(PAGE_INDEX_ACCESSORYSYSTEMTEST))
        ADD_PAGE(CAccessorySystemTestHelpPage,	ROM_INDEX(PAGE_INDEX_ACCESSORYSYSTEMTESTHELP))
        ADD_PAGE(CBrakeTestPage,                ROM_INDEX(PAGE_INDEX_BRAKETEST))
        ADD_PAGE(CBrakeTestHelpPage,        	ROM_INDEX(PAGE_INDEX_BRAKETESTHELP))
        ADD_PAGE(CBrakeSelfTestPage,            ROM_INDEX(PAGE_INDEX_BRAKESELFTEST))
        ADD_PAGE(CBrakeSelfTestHelpPage,	ROM_INDEX(PAGE_INDEX_BRAKESELFTESTHELP))
        ADD_PAGE(CTodayFaultPage,               ROM_INDEX(PAGE_INDEX_TODAYFAULT))
        ADD_PAGE(CRunRecordPage,                ROM_INDEX(PAGE_INDEX_RUNRECORD))
        ADD_PAGE(CTryRunTestPage,               ROM_INDEX(PAGE_INDEX_TRYRUNTEST))
        ADD_PAGE(CPasswordPage,                 ROM_INDEX(PAGE_INDEX_PASSWORD))
        ADD_PAGE(CResetRunRecordPage,       	ROM_INDEX(PAGE_INDEX_RESETRUNRECORD))
        ADD_PAGE(CInstancyBroadcastPage,	ROM_INDEX(PAGE_INDEX_INSTANCYBROADCAST))
        ADD_PAGE(CRealTimeFaultPage,            ROM_INDEX(PAGE_INDEX_REALTIMEFAULT))
        ADD_PAGE(CHistoryFaultPage,             ROM_INDEX(PAGE_INDEX_HISTORYFAULT))
        ADD_PAGE(CTractionSystemFaultPage,	ROM_INDEX(PAGE_INDEX_TRACTIONSYSTEMFAULT))
        ADD_PAGE(CDebugMainPage,                ROM_INDEX(PAGE_INDEX_DEBUGMAIN))
        ADD_PAGE(CVersionInfoPage,              ROM_INDEX(PAGE_INDEX_VERSIONINFO))
        ADD_PAGE(CVialSignalPage,               ROM_INDEX(PAGE_INDEX_VIALSIGNAL))
        ADD_PAGE(CRIOMDebugPage,                ROM_INDEX(PAGE_INDEX_RIOMDEBUG))
        ADD_PAGE(CRefreshTimePage,              ROM_INDEX(PAGE_INDEX_REFRESHTIME))
        ADD_PAGE(CPasswordModifyPage,           ROM_INDEX(PAGE_INDEX_PASSWORDMODIFY))
        ADD_PAGE(CTimeSettingPage,              ROM_INDEX(PAGE_INDEX_TIMESETTING))
        ADD_PAGE(CFaultInfoPage,                ROM_INDEX(PAGE_INDEX_FAULTINFO))
        ADD_PAGE(CWheelDiaRecordSelectPage,     ROM_INDEX(PAGE_INDEX_WHEELDIARECORDSELECT))
        ADD_PAGE(CIOTCTablePage,                ROM_INDEX(PAGE_INDEX_IOTCTABLE))
        ADD_PAGE(CIOMTablePage,                 ROM_INDEX(PAGE_INDEX_IOMTABLE))
        ADD_PAGE(CDOTablePage,                  ROM_INDEX(PAGE_INDEX_DOTABLE))
        ADD_PAGE(CUdpDataPage1,                 ROM_INDEX(PAGE_INDEX_UDPDATA1))
        ADD_PAGE(CAW0Setting,                   ROM_INDEX(PAGE_INDEX_AW0SETTING))
        ADD_PAGE(FASPage,                       ROM_INDEX(PAGE_INDEX_FASPage))
        ADD_PAGE(CRefreshTimePage2,             ROM_INDEX(PAGE_INDEX_REFRESHTIME2))
        ADD_PAGE(CFaultPageHelp,                ROM_INDEX(PAGE_INDEX_FAULTPAGEHELP))
        ADD_PAGE(HmiPositionSetPage, ROM_INDEX(PAGE_INDEX_HMI_POSITION_SET_PAGE))
        ADD_PAGE(RsfsdStatePage, ROM_INDEX(PAGE_INDEX_RSFDS_STATE_PAGE))
        ADD_PAGE(PmsStatePage, ROM_INDEX(PAGE_INDEX_PMS_STATE_PAGE))
        ADD_PAGE(AllPortsPage, ROM_INDEX(PAGE_INDEX_ALL_PORTS_PAGE))
        ADD_PAGE(CVersionInfoPage2, ROM_INDEX(PAGE_INDEX_VERSION_INFO2))
END_PAGE_MANAGE()


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    QDesktopWidget* pDesktop = QApplication::desktop();
    int nScrW = pDesktop->width(), nScrH = pDesktop->height();
    if ((nScrW == SCREEN_W*SCREEN_factor) && (nScrH == SCREEN_H*SCREEN_factor))
    {
        this->showFullScreen();
    }
    else
    {
//        this->setFixedSize(1024, 768);
        this->setFixedSize(SCREEN_W*SCREEN_factor, SCREEN_H*SCREEN_factor);
//        int x = (nScrW - 1024)/2;
//        int y = (nScrH - 768)/2;
        int x = (nScrW - this->width())/2;
        int y = (nScrH - this->height())/2;
        this->move(x,y);
    }

    globalDataInit();
    //TC1_HMI=1;


#ifndef USE_RAND_DATA

    HMI_Initial_Set();
    // deleted by Deng Ran on the 03rd of March 2017
    // SetWarningTemperature();

    //读报警，关闭显示屏，关闭电源 温度设定值
    //BackLightCtrl(1);
#endif


#ifdef USE_SERIAL_DATA

    m_serialThread  = new SerialThread;
    m_serialThread->render();
//    connect( m_serialThread, SIGNAL( SendReadData(  int, QByteArray, int ) ),
//             this,  SLOT( getRevDataSlot( int, QByteArray, int ) ) );
#endif

#ifdef USE_MVB_DATA

    m_mvbthread  = new MvbThread;
    m_mvbthread->render();
    //writeLog("USE_MVB_DATA\n");
#endif


    //init page
    IMPLEMENT_PAGE_MANAGE()
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    pPage->ChangePage(PAGE_INDEX_COMMSTATUS);
    //init rand seed
    srand((unsigned int)time(NULL));



    //update date
    connect(&dateTimer,SIGNAL(timeout()),this,SLOT(OnUpdateDate()));
    dateTimer.start(1000);
    //update data timer
    connect(&UpdateDataTimer,SIGNAL(timeout()),this,SLOT(OnUpdateData()));
    UpdateDataTimer.start(200);
    //start 4s timer
    connect(&timer4s,SIGNAL(timeout()),this,SLOT(OnTimer4s()));
    timer4s.start(4000);

    // deleted by Deng Ran on the 31st of July 2017.
    // connect(&timer30s,SIGNAL(timeout()),this,SLOT(OnTimer30s()));
    // timer30s.start(30000);

#ifdef LOG_OPEN
    //log timer
//    connect(&m_logTimer,SIGNAL(timeout()),this,SLOT(OnLogTimer()));
//    m_logTimer.start(10000);
#endif

#ifdef LOG_OPEN
    QString dateStr = GetDateStr();
    dateStr.replace("-", "");
    QString timeStr = GetTimeStr();
    timeStr.replace(':', "");
    g_logFileName = "/Log_" + dateStr.toStdString() + "_" + timeStr.toStdString() + ".log";
#endif
}

Dialog::~Dialog()
{
    for_each(g_PageVec.begin(), g_PageVec.end(), DELOBJ<CPage*>());
    delete ui;
}

void Dialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Dialog::OnUpdateData()
{
    static unsigned short int counter = 0;

    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    if (pPage == NULL)
        return;

    initReceiveData();
    FaultsScanning();




    pPage->ConnectEvent(WM_UPDATEPAGE);



    if (pPage->TestControlExists(IDLB_COM_voltage))
    {
        pPage->UpdateVoltage(IDLB_COM_voltage);


    }

    if (pPage->TestControlExists(IDLB_COM_CarSpeedMode))
    {
        pPage->UpdateCarSpeedMode(IDLB_COM_CarSpeedMode);


    }

    if (pPage->TestControlExists(IDLB_COM_level))
    {
        pPage->UpdateTractionLevel(IDLB_COM_level);

    }
    if (pPage->TestControlExists(IDLB_COM_speed))
    {
        //CCU_HMI_222_3%256=CTHM_TrainSpeed_U8	列车速度
        pPage->GetDlgItem(IDLB_COM_speed)->SetCtrlText(QString::number(CCU_HMI_222_3%256).append(" km/h"));
        if (Bit(CCU_HMI_222_9, 8 )||Bit(CCU_HMI_222_9, 7 ) == 1)
        {
            (pPage->GetDlgItem(IDLB_COM_speed))->SetCtrlBKColor(Qt::black);
        }
        else
        {
            (pPage->GetDlgItem(IDLB_COM_speed))->SetCtrlBKColor(Qt::white);
        }

    }

    if (pPage->TestControlExists(IDLB_COM_current))
    {
        webflow=(int16_t)(CCU_HMI_223_1/256+CCU_HMI_223_2%256*256);

        pPage->SetAValue(IDLB_COM_current, webflow);

    }
    if (pPage->TestControlExists(IDLB_COM_CurrentStation))
    {
        pPage->UpdateStation();

    }
    if (pPage->TestControlExists(IDLB_COM_TrainFault))
    {
        pPage->updateFault(IDLB_COM_TrainFault);
    }

    createSendData();
    this->updateSignals();

    // about 30s
    if (counter / 70 == 0)
    {
        this->synchronizeTimeWithCcu();
    }

    // about 1.2s
    if (counter / 3 == 0)
    {
        ccuOnline = this->checkCcuOnline(ccuLifeSignal);
    }

    counter = (counter ++) / 1000;
}

void Dialog::OnUpdateDate()
{
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        if (pPage == NULL)
            return;
    if (pPage->TestControlExists(IDLB_COM_TIME))
    {
        QDate date = QDate::currentDate();
        QString str;
        str = QString::number(date.year()) + QSTR("年")+
              QString::number(date.month()) + QSTR("月")+
              QString::number(date.day()) + QSTR("日");
        pPage->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);

        QString time = QDateTime::currentDateTime().toString("HH:mm:ss");
        pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);
    }

// deleted by Deng Ran on the 03rd of March 2017 for it is invalid on inc-90
// #ifdef USE_MVB_DATA
    // pixymvb_ForceSwitch();
// #endif



    //send data 28 29 30
    QTime time = QDateTime::currentDateTime().time();
    QDate date = QDate::currentDate();
    time_setting_1 = date.year();
    time_setting_2 = date.month();
    time_setting_3 = date.day();
    time_setting_4 = time.hour();
    time_setting_5 = time.minute();
    time_setting_6 = time.second();
    HMI_send_data30=(time_setting_1-2000)+time_setting_2*256;
    HMI_send_data31=time_setting_3+time_setting_4*256;
    HMI_send_data32=time_setting_5+time_setting_6*256;
}

void Dialog::paintEvent(QPaintEvent* /*e*/)
{
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    if (pPage == NULL)
        return;
    if (pPage->TestControlExists(IDLB_COM_TIME))
    {
        QString time = QDateTime::currentDateTime().toString("HH:mm:ss");
        pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);
    }
    QPainter painter;
    painter.begin(this);
    painter.drawPixmap(0,0,*(pPage->GetPixmap()));
    painter.end();
}

void Dialog::keyPressEvent( QKeyEvent * event )
{
    if ((event->modifiers() & Qt::ControlModifier)
        && event->key() == Qt::Key_F)
    {
        CDebugDialog dbgDlg(this);
        if (dbgDlg.exec() == QDialog::Accepted)
        {
            this->update();
        }
    }
    else if ((event->modifiers() & Qt::ControlModifier)
        && event->key() == Qt::Key_D)
    {
        if(serialDebugDlg.isHidden())
            serialDebugDlg.show();
    }
    else if (event->key() == Qt::Key_Escape)
    {
        this->close();
    }
    else if((event->modifiers() & Qt::ControlModifier) && event->key() == Qt::Key_D)
    {
        //stop or continue scann fault.
        g_bScannFault = !g_bScannFault;
    }
}

void Dialog::mouseMoveEvent( QMouseEvent * /*event*/)
{
    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    pPage->ConnectEvent(WM_MOUSEMOVE);
}

void Dialog::mousePressEvent(QMouseEvent * event)
{
    if (event->button() == Qt::LeftButton)
    {
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        pPage->ConnectEvent(event->pos(), WM_LBUTTONDOWN);
    }
}

void Dialog::mouseReleaseEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton)
    {
        CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
        pPage->ConnectEvent(event->pos(),WM_LBUTTONUP);
        pPage->ConnectEvent(event->pos(),WM_LBTNCLICK);
        pPage->ResetButtonState();
        update();
    }
}

void Dialog::reject()
{
    close();
}

void Dialog::closeEvent(QCloseEvent* /*e*/)
{
    system("killall CNR_BJ6");
}

void Dialog::globalDataInit()
{
    g_history_faults_pagenum = 1;
    g_current_faults_pagenum = 1;

    HistoryFaultsListInit();

    GetINIInfo();
}

void Dialog::initReceiveData()
{


#ifdef USE_RAND_DATA
        uchar tmpChar[8000];
        for (int i=0; i<8000; i++)
        {
            tmpChar[i]=0;
        }
        for (int i=0; i<4000; i++)
        {
              g_dataBuffer[i] = (tmpChar[2+i*2+1]<<8) | tmpChar[2+i*2];
        }
#endif

#ifndef USE_RAND_DATA
    if((g_485_comm_err_flg1||g_485_comm_err_flg2)!=1)
    {
        for(int i=0;i<4000;i++)
        {
            g_dataBuffer[i]=g_dataBuffer_MVB[i];
        }
        /*---使用MVB通信时字变量需要改变开端，高低8位颠倒----*/
        //RIOM
        g_dataBuffer[16+16]= Change_BigEen(g_dataBuffer[16+16]);   //AX_114_1
        g_dataBuffer[17+16]= Change_BigEen(g_dataBuffer[17+16]);
        g_dataBuffer[18+16]= Change_BigEen(g_dataBuffer[18+16]);
        g_dataBuffer[19+16]= Change_BigEen(g_dataBuffer[19+16]);
        g_dataBuffer[20+16]= Change_BigEen(g_dataBuffer[20+16]);  //AX_114_5
        g_dataBuffer[144+16]= Change_BigEen(g_dataBuffer[144+16]); //AX_184_1
        g_dataBuffer[145+16]= Change_BigEen(g_dataBuffer[145+16]);
        g_dataBuffer[146+16]= Change_BigEen(g_dataBuffer[146+16]);
        g_dataBuffer[147+16]= Change_BigEen(g_dataBuffer[147+16]);
        g_dataBuffer[148+16]= Change_BigEen(g_dataBuffer[148+16]);//AX_184_5
        g_dataBuffer[36+16]= Change_BigEen(g_dataBuffer[36+16]);  //DI_120_5
        g_dataBuffer[68+16]= Change_BigEen(g_dataBuffer[68+16]);  //DI_140_5
        g_dataBuffer[116+16]= Change_BigEen(g_dataBuffer[116+16]); //DI_170_5
        //BCU
        g_dataBuffer[288+32]= Change_BigEen(g_dataBuffer[288+32]);
        g_dataBuffer[289+32]= Change_BigEen(g_dataBuffer[289+32]);
        g_dataBuffer[290+32]= Change_BigEen(g_dataBuffer[290+32]);
        g_dataBuffer[291+32]= Change_BigEen(g_dataBuffer[291+32]);
        g_dataBuffer[292+32]= Change_BigEen(g_dataBuffer[292+32]);
        g_dataBuffer[293+32]= Change_BigEen(g_dataBuffer[293+32]);
        g_dataBuffer[294+32]= Change_BigEen(g_dataBuffer[294+32]);
        g_dataBuffer[295+32]= Change_BigEen(g_dataBuffer[295+32]);
        g_dataBuffer[296+32]= Change_BigEen(g_dataBuffer[296+32]);
        g_dataBuffer[297+32]= Change_BigEen(g_dataBuffer[297+32]);
        g_dataBuffer[298+32]= Change_BigEen(g_dataBuffer[298+32]);
        g_dataBuffer[299+32]= Change_BigEen(g_dataBuffer[299+32]);
        g_dataBuffer[300+32]= Change_BigEen(g_dataBuffer[300+32]);
        g_dataBuffer[301+32]= Change_BigEen(g_dataBuffer[301+32]);
        g_dataBuffer[302+32]= Change_BigEen(g_dataBuffer[302+32]);
        g_dataBuffer[303+32]= Change_BigEen(g_dataBuffer[303+32]);
        g_dataBuffer[304+32]= Change_BigEen(g_dataBuffer[304+32]);
        g_dataBuffer[305+32]= Change_BigEen(g_dataBuffer[305+32]);
        g_dataBuffer[306+32]= Change_BigEen(g_dataBuffer[306+32]);
        g_dataBuffer[307+32]= Change_BigEen(g_dataBuffer[307+32]);
        g_dataBuffer[308+32]= Change_BigEen(g_dataBuffer[308+32]);
        g_dataBuffer[309+32]= Change_BigEen(g_dataBuffer[309+32]);
        g_dataBuffer[310+32]= Change_BigEen(g_dataBuffer[310+32]);
        g_dataBuffer[311+32]= Change_BigEen(g_dataBuffer[311+32]);
        g_dataBuffer[312+32]= Change_BigEen(g_dataBuffer[312+32]);
        g_dataBuffer[313+32]= Change_BigEen(g_dataBuffer[313+32]);
        g_dataBuffer[314+32]= Change_BigEen(g_dataBuffer[314+32]);
        g_dataBuffer[315+32]= Change_BigEen(g_dataBuffer[315+32]);
        g_dataBuffer[316+32]= Change_BigEen(g_dataBuffer[316+32]);
        g_dataBuffer[317+32]= Change_BigEen(g_dataBuffer[317+32]);
        g_dataBuffer[318+32]= Change_BigEen(g_dataBuffer[318+32]);
        g_dataBuffer[319+32]= Change_BigEen(g_dataBuffer[319+32]);
        g_dataBuffer[320+32]= Change_BigEen(g_dataBuffer[320+32]);
        g_dataBuffer[321+32]= Change_BigEen(g_dataBuffer[321+32]);
        g_dataBuffer[322+32]= Change_BigEen(g_dataBuffer[322+32]);
        g_dataBuffer[323+32]= Change_BigEen(g_dataBuffer[323+32]);
        g_dataBuffer[324+32]= Change_BigEen(g_dataBuffer[324+32]);
        g_dataBuffer[325+32]= Change_BigEen(g_dataBuffer[325+32]);
        g_dataBuffer[326+32]= Change_BigEen(g_dataBuffer[326+32]);
        g_dataBuffer[327+32]= Change_BigEen(g_dataBuffer[327+32]);
        g_dataBuffer[328+32]= Change_BigEen(g_dataBuffer[328+32]);
        g_dataBuffer[368+32]= Change_BigEen(g_dataBuffer[368+32]);
        g_dataBuffer[369+32]= Change_BigEen(g_dataBuffer[369+32]);
        g_dataBuffer[370+32]= Change_BigEen(g_dataBuffer[370+32]);
        g_dataBuffer[371+32]= Change_BigEen(g_dataBuffer[371+32]);
        g_dataBuffer[372+32]= Change_BigEen(g_dataBuffer[372+32]);
        g_dataBuffer[373+32]= Change_BigEen(g_dataBuffer[373+32]);
        g_dataBuffer[374+32]= Change_BigEen(g_dataBuffer[374+32]);
        g_dataBuffer[375+32]= Change_BigEen(g_dataBuffer[375+32]);
        g_dataBuffer[376+32]= Change_BigEen(g_dataBuffer[376+32]);
        g_dataBuffer[377+32]= Change_BigEen(g_dataBuffer[377+32]);
        g_dataBuffer[378+32]= Change_BigEen(g_dataBuffer[378+32]);
        g_dataBuffer[379+32]= Change_BigEen(g_dataBuffer[379+32]);
        g_dataBuffer[380+32]= Change_BigEen(g_dataBuffer[380+32]);
        g_dataBuffer[381+32]= Change_BigEen(g_dataBuffer[381+32]);
        g_dataBuffer[382+32]= Change_BigEen(g_dataBuffer[382+32]);
        g_dataBuffer[383+32]= Change_BigEen(g_dataBuffer[383+32]);
        g_dataBuffer[384+32]= Change_BigEen(g_dataBuffer[384+32]);
        g_dataBuffer[385+32]= Change_BigEen(g_dataBuffer[385+32]);
        g_dataBuffer[386+32]= Change_BigEen(g_dataBuffer[386+32]);
        g_dataBuffer[387+32]= Change_BigEen(g_dataBuffer[387+32]);
        g_dataBuffer[388+32]= Change_BigEen(g_dataBuffer[388+32]);
        g_dataBuffer[389+32]= Change_BigEen(g_dataBuffer[389+32]);
        g_dataBuffer[390+32]= Change_BigEen(g_dataBuffer[390+32]);
        g_dataBuffer[391+32]= Change_BigEen(g_dataBuffer[391+32]);
        g_dataBuffer[392+32]= Change_BigEen(g_dataBuffer[392+32]);
        g_dataBuffer[393+32]= Change_BigEen(g_dataBuffer[393+32]);
        g_dataBuffer[394+32]= Change_BigEen(g_dataBuffer[394+32]);
        g_dataBuffer[395+32]= Change_BigEen(g_dataBuffer[395+32]);
        g_dataBuffer[396+32]= Change_BigEen(g_dataBuffer[396+32]);
        g_dataBuffer[397+32]= Change_BigEen(g_dataBuffer[397+32]);
        g_dataBuffer[398+32]= Change_BigEen(g_dataBuffer[398+32]);
        g_dataBuffer[399+32]= Change_BigEen(g_dataBuffer[399+32]);
        g_dataBuffer[400+32]= Change_BigEen(g_dataBuffer[400+32]);
        g_dataBuffer[401+32]= Change_BigEen(g_dataBuffer[401+32]);
        g_dataBuffer[402+32]= Change_BigEen(g_dataBuffer[402+32]);
        g_dataBuffer[403+32]= Change_BigEen(g_dataBuffer[403+32]);
        g_dataBuffer[404+32]= Change_BigEen(g_dataBuffer[404+32]);
        g_dataBuffer[405+32]= Change_BigEen(g_dataBuffer[405+32]);
        g_dataBuffer[406+32]= Change_BigEen(g_dataBuffer[406+32]);
        g_dataBuffer[407+32]= Change_BigEen(g_dataBuffer[407+32]);
        g_dataBuffer[408+32]= Change_BigEen(g_dataBuffer[408+32]);

        g_dataBuffer[448+32]= Change_BigEen(g_dataBuffer[448+32]);
        g_dataBuffer[449+32]= Change_BigEen(g_dataBuffer[449+32]);
        g_dataBuffer[450+32]= Change_BigEen(g_dataBuffer[450+32]);
        g_dataBuffer[451+32]= Change_BigEen(g_dataBuffer[451+32]);
        g_dataBuffer[452+32]= Change_BigEen(g_dataBuffer[452+32]);
        g_dataBuffer[453+32]= Change_BigEen(g_dataBuffer[453+32]);
        g_dataBuffer[454+32]= Change_BigEen(g_dataBuffer[454+32]);
        g_dataBuffer[455+32]= Change_BigEen(g_dataBuffer[455+32]);
        g_dataBuffer[456+32]= Change_BigEen(g_dataBuffer[456+32]);
        g_dataBuffer[457+32]= Change_BigEen(g_dataBuffer[457+32]);
        g_dataBuffer[458+32]= Change_BigEen(g_dataBuffer[458+32]);
        g_dataBuffer[459+32]= Change_BigEen(g_dataBuffer[459+32]);
        g_dataBuffer[460+32]= Change_BigEen(g_dataBuffer[460+32]);
        g_dataBuffer[461+32]= Change_BigEen(g_dataBuffer[461+32]);
        g_dataBuffer[462+32]= Change_BigEen(g_dataBuffer[462+32]);
        g_dataBuffer[463+32]= Change_BigEen(g_dataBuffer[463+32]);
        g_dataBuffer[464+32]= Change_BigEen(g_dataBuffer[464+32]);
        g_dataBuffer[465+32]= Change_BigEen(g_dataBuffer[465+32]);
        g_dataBuffer[466+32]= Change_BigEen(g_dataBuffer[466+32]);
        g_dataBuffer[467+32]= Change_BigEen(g_dataBuffer[467+32]);
        g_dataBuffer[468+32]= Change_BigEen(g_dataBuffer[468+32]);
        g_dataBuffer[469+32]= Change_BigEen(g_dataBuffer[469+32]);
        g_dataBuffer[470+32]= Change_BigEen(g_dataBuffer[470+32]);
        g_dataBuffer[471+32]= Change_BigEen(g_dataBuffer[471+32]);
        g_dataBuffer[472+32]= Change_BigEen(g_dataBuffer[472+32]);
        g_dataBuffer[473+32]= Change_BigEen(g_dataBuffer[473+32]);
        g_dataBuffer[474+32]= Change_BigEen(g_dataBuffer[474+32]);
        g_dataBuffer[475+32]= Change_BigEen(g_dataBuffer[475+32]);
        g_dataBuffer[476+32]= Change_BigEen(g_dataBuffer[476+32]);
        g_dataBuffer[477+32]= Change_BigEen(g_dataBuffer[477+32]);
        g_dataBuffer[478+32]= Change_BigEen(g_dataBuffer[478+32]);
        g_dataBuffer[479+32]= Change_BigEen(g_dataBuffer[479+32]);
        g_dataBuffer[480+32]= Change_BigEen(g_dataBuffer[480+32]);
        g_dataBuffer[481+32]= Change_BigEen(g_dataBuffer[481+32]);
        g_dataBuffer[482+32]= Change_BigEen(g_dataBuffer[482+32]);
        g_dataBuffer[483+32]= Change_BigEen(g_dataBuffer[483+32]);
        g_dataBuffer[484+32]= Change_BigEen(g_dataBuffer[484+32]);
        g_dataBuffer[485+32]= Change_BigEen(g_dataBuffer[485+32]);
        g_dataBuffer[486+32]= Change_BigEen(g_dataBuffer[486+32]);
        g_dataBuffer[487+32]= Change_BigEen(g_dataBuffer[487+32]);
        g_dataBuffer[488+32]= Change_BigEen(g_dataBuffer[488+32]);
        g_dataBuffer[528+32]= Change_BigEen(g_dataBuffer[528+32]);
        g_dataBuffer[529+32]= Change_BigEen(g_dataBuffer[529+32]);
        g_dataBuffer[530+32]= Change_BigEen(g_dataBuffer[530+32]);
        g_dataBuffer[531+32]= Change_BigEen(g_dataBuffer[531+32]);
        g_dataBuffer[532+32]= Change_BigEen(g_dataBuffer[532+32]);
        g_dataBuffer[533+32]= Change_BigEen(g_dataBuffer[533+32]);
        g_dataBuffer[534+32]= Change_BigEen(g_dataBuffer[534+32]);
        g_dataBuffer[535+32]= Change_BigEen(g_dataBuffer[535+32]);
        g_dataBuffer[536+32]= Change_BigEen(g_dataBuffer[536+32]);
        g_dataBuffer[537+32]= Change_BigEen(g_dataBuffer[537+32]);
        g_dataBuffer[538+32]= Change_BigEen(g_dataBuffer[538+32]);
        g_dataBuffer[539+32]= Change_BigEen(g_dataBuffer[539+32]);
        g_dataBuffer[540+32]= Change_BigEen(g_dataBuffer[540+32]);
        g_dataBuffer[541+32]= Change_BigEen(g_dataBuffer[541+32]);
        g_dataBuffer[542+32]= Change_BigEen(g_dataBuffer[542+32]);
        g_dataBuffer[543+32]= Change_BigEen(g_dataBuffer[543+32]);
        g_dataBuffer[544+32]= Change_BigEen(g_dataBuffer[544+32]);
        g_dataBuffer[545+32]= Change_BigEen(g_dataBuffer[545+32]);
        g_dataBuffer[546+32]= Change_BigEen(g_dataBuffer[546+32]);
        g_dataBuffer[547+32]= Change_BigEen(g_dataBuffer[547+32]);
        g_dataBuffer[548+32]= Change_BigEen(g_dataBuffer[548+32]);
        g_dataBuffer[549+32]= Change_BigEen(g_dataBuffer[549+32]);
        g_dataBuffer[550+32]= Change_BigEen(g_dataBuffer[550+32]);
        g_dataBuffer[551+32]= Change_BigEen(g_dataBuffer[551+32]);
        g_dataBuffer[552+32]= Change_BigEen(g_dataBuffer[552+32]);
        g_dataBuffer[553+32]= Change_BigEen(g_dataBuffer[553+32]);
        g_dataBuffer[554+32]= Change_BigEen(g_dataBuffer[554+32]);
        g_dataBuffer[555+32]= Change_BigEen(g_dataBuffer[555+32]);
        g_dataBuffer[556+32]= Change_BigEen(g_dataBuffer[556+32]);
        g_dataBuffer[557+32]= Change_BigEen(g_dataBuffer[557+32]);
        g_dataBuffer[558+32]= Change_BigEen(g_dataBuffer[558+32]);
        g_dataBuffer[559+32]= Change_BigEen(g_dataBuffer[559+32]);
        g_dataBuffer[560+32]= Change_BigEen(g_dataBuffer[560+32]);
        g_dataBuffer[561+32]= Change_BigEen(g_dataBuffer[561+32]);
        g_dataBuffer[562+32]= Change_BigEen(g_dataBuffer[562+32]);
        g_dataBuffer[563+32]= Change_BigEen(g_dataBuffer[563+32]);
        g_dataBuffer[564+32]= Change_BigEen(g_dataBuffer[564+32]);
        g_dataBuffer[565+32]= Change_BigEen(g_dataBuffer[565+32]);
        g_dataBuffer[566+32]= Change_BigEen(g_dataBuffer[566+32]);
        g_dataBuffer[567+32]= Change_BigEen(g_dataBuffer[567+32]);
        g_dataBuffer[568+32]= Change_BigEen(g_dataBuffer[568+32]);
        //TCU
        g_dataBuffer[608+48]= Change_BigEen(g_dataBuffer[608+48]);
        g_dataBuffer[609+48]= Change_BigEen(g_dataBuffer[609+48]);
        g_dataBuffer[610+48]= Change_BigEen(g_dataBuffer[610+48]);
        g_dataBuffer[611+48]= Change_BigEen(g_dataBuffer[611+48]);
        g_dataBuffer[612+48]= Change_BigEen(g_dataBuffer[612+48]);
        g_dataBuffer[613+48]= Change_BigEen(g_dataBuffer[613+48]);
        g_dataBuffer[614+48]= Change_BigEen(g_dataBuffer[614+48]);
        g_dataBuffer[615+48]= Change_BigEen(g_dataBuffer[615+48]);
        g_dataBuffer[616+48]= Change_BigEen(g_dataBuffer[616+48]);
        g_dataBuffer[617+48]= Change_BigEen(g_dataBuffer[617+48]);
        g_dataBuffer[640+48]= Change_BigEen(g_dataBuffer[640+48]);
        g_dataBuffer[641+48]= Change_BigEen(g_dataBuffer[641+48]);
        g_dataBuffer[642+48]= Change_BigEen(g_dataBuffer[642+48]);
        g_dataBuffer[643+48]= Change_BigEen(g_dataBuffer[643+48]);
        g_dataBuffer[644+48]= Change_BigEen(g_dataBuffer[644+48]);
        g_dataBuffer[645+48]= Change_BigEen(g_dataBuffer[645+48]);
        g_dataBuffer[646+48]= Change_BigEen(g_dataBuffer[646+48]);
        g_dataBuffer[647+48]= Change_BigEen(g_dataBuffer[647+48]);
        g_dataBuffer[648+48]= Change_BigEen(g_dataBuffer[648+48]);
        g_dataBuffer[649+48]= Change_BigEen(g_dataBuffer[649+48]);
        g_dataBuffer[672+48]= Change_BigEen(g_dataBuffer[672+48]);
        g_dataBuffer[673+48]= Change_BigEen(g_dataBuffer[673+48]);
        g_dataBuffer[674+48]= Change_BigEen(g_dataBuffer[674+48]);
        g_dataBuffer[675+48]= Change_BigEen(g_dataBuffer[675+48]);
        g_dataBuffer[676+48]= Change_BigEen(g_dataBuffer[676+48]);
        g_dataBuffer[677+48]= Change_BigEen(g_dataBuffer[677+48]);
        g_dataBuffer[678+48]= Change_BigEen(g_dataBuffer[678+48]);
        g_dataBuffer[679+48]= Change_BigEen(g_dataBuffer[679+48]);
        g_dataBuffer[680+48]= Change_BigEen(g_dataBuffer[680+48]);
        g_dataBuffer[681+48]= Change_BigEen(g_dataBuffer[681+48]);
        g_dataBuffer[704+48]= Change_BigEen(g_dataBuffer[704+48]);
        g_dataBuffer[705+48]= Change_BigEen(g_dataBuffer[705+48]);
        g_dataBuffer[706+48]= Change_BigEen(g_dataBuffer[706+48]);
        g_dataBuffer[707+48]= Change_BigEen(g_dataBuffer[707+48]);
        g_dataBuffer[708+48]= Change_BigEen(g_dataBuffer[708+48]);
        g_dataBuffer[709+48]= Change_BigEen(g_dataBuffer[709+48]);
        g_dataBuffer[710+48]= Change_BigEen(g_dataBuffer[710+48]);
        g_dataBuffer[711+48]= Change_BigEen(g_dataBuffer[711+48]);
        g_dataBuffer[712+48]= Change_BigEen(g_dataBuffer[712+48]);
        g_dataBuffer[713+48]= Change_BigEen(g_dataBuffer[713+48]);
        g_dataBuffer[736+48]= Change_BigEen(g_dataBuffer[736+48]);
        g_dataBuffer[737+48]= Change_BigEen(g_dataBuffer[737+48]);
        g_dataBuffer[738+48]= Change_BigEen(g_dataBuffer[738+48]);
        g_dataBuffer[739+48]= Change_BigEen(g_dataBuffer[739+48]);
        g_dataBuffer[740+48]= Change_BigEen(g_dataBuffer[740+48]);
        g_dataBuffer[741+48]= Change_BigEen(g_dataBuffer[741+48]);
        g_dataBuffer[742+48]= Change_BigEen(g_dataBuffer[742+48]);
        g_dataBuffer[743+48]= Change_BigEen(g_dataBuffer[743+48]);
        g_dataBuffer[744+48]= Change_BigEen(g_dataBuffer[744+48]);
        g_dataBuffer[745+48]= Change_BigEen(g_dataBuffer[745+48]);
        g_dataBuffer[768+48]= Change_BigEen(g_dataBuffer[768+48]);
        g_dataBuffer[769+48]= Change_BigEen(g_dataBuffer[769+48]);
        g_dataBuffer[770+48]= Change_BigEen(g_dataBuffer[770+48]);
        g_dataBuffer[771+48]= Change_BigEen(g_dataBuffer[771+48]);
        g_dataBuffer[772+48]= Change_BigEen(g_dataBuffer[772+48]);
        g_dataBuffer[773+48]= Change_BigEen(g_dataBuffer[773+48]);
        g_dataBuffer[774+48]= Change_BigEen(g_dataBuffer[774+48]);
        g_dataBuffer[775+48]= Change_BigEen(g_dataBuffer[775+48]);
        g_dataBuffer[776+48]= Change_BigEen(g_dataBuffer[776+48]);
        g_dataBuffer[777+48]= Change_BigEen(g_dataBuffer[777+48]);
        //ACU
        g_dataBuffer[800+64]= Change_BigEen(g_dataBuffer[800+64]);
        g_dataBuffer[824+64]= Change_BigEen(g_dataBuffer[824+64]);
        //DCU
        g_dataBuffer[864+48]= Change_BigEen(g_dataBuffer[864+48]);
        g_dataBuffer[896+48]= Change_BigEen(g_dataBuffer[896+48]);
        g_dataBuffer[928+48]= Change_BigEen(g_dataBuffer[928+48]);
        g_dataBuffer[960+48]= Change_BigEen(g_dataBuffer[960+48]);
        g_dataBuffer[992+48]= Change_BigEen(g_dataBuffer[992+48]);
        g_dataBuffer[1024+48]= Change_BigEen(g_dataBuffer[1024+48]);
        g_dataBuffer[1056+48]= Change_BigEen(g_dataBuffer[1056+48]);
        g_dataBuffer[1088+48]= Change_BigEen(g_dataBuffer[1088+48]);
        g_dataBuffer[1120+48]= Change_BigEen(g_dataBuffer[1120+48]);
        g_dataBuffer[1152+48]= Change_BigEen(g_dataBuffer[1152+48]);
        g_dataBuffer[1184+48]= Change_BigEen(g_dataBuffer[1184+48]);
        g_dataBuffer[1216+48]= Change_BigEen(g_dataBuffer[1216+48]);
        g_dataBuffer[1248+48]= Change_BigEen(g_dataBuffer[1248+48]);
        g_dataBuffer[1280+48]= Change_BigEen(g_dataBuffer[1280+48]);
        g_dataBuffer[1312+48]= Change_BigEen(g_dataBuffer[1312+48]);
        g_dataBuffer[1344+48]= Change_BigEen(g_dataBuffer[1344+48]);
        g_dataBuffer[896+2264]= Change_BigEen(g_dataBuffer[896+2264]);
        g_dataBuffer[928+2264]= Change_BigEen(g_dataBuffer[928+2264]);
        g_dataBuffer[960+2264]= Change_BigEen(g_dataBuffer[960+2264]);
        g_dataBuffer[992+2264]= Change_BigEen(g_dataBuffer[992+2264]);
        g_dataBuffer[1024+2264]= Change_BigEen(g_dataBuffer[1024+2264]);
        g_dataBuffer[1056+2264]= Change_BigEen(g_dataBuffer[1056+2264]);
        g_dataBuffer[1088+2264]= Change_BigEen(g_dataBuffer[1088+2264]);
        g_dataBuffer[1120+2264]= Change_BigEen(g_dataBuffer[1120+2264]);
        //HVAC
        g_dataBuffer[1232+208]= Change_BigEen(g_dataBuffer[1232+208]);
        g_dataBuffer[1233+208]= Change_BigEen(g_dataBuffer[1233+208]);
        g_dataBuffer[1234+208]= Change_BigEen(g_dataBuffer[1234+208]);
        g_dataBuffer[1235+208]= Change_BigEen(g_dataBuffer[1235+208]);
        g_dataBuffer[1236+208]= Change_BigEen(g_dataBuffer[1236+208]);
        g_dataBuffer[1237+208]= Change_BigEen(g_dataBuffer[1237+208]);
        g_dataBuffer[1248+208]= Change_BigEen(g_dataBuffer[1248+208]);
        g_dataBuffer[1249+208]= Change_BigEen(g_dataBuffer[1249+208]);
        g_dataBuffer[1250+208]= Change_BigEen(g_dataBuffer[1250+208]);
        g_dataBuffer[1251+208]= Change_BigEen(g_dataBuffer[1251+208]);
        g_dataBuffer[1252+208]= Change_BigEen(g_dataBuffer[1252+208]);
        g_dataBuffer[1253+208]= Change_BigEen(g_dataBuffer[1253+208]);
        g_dataBuffer[1264+208]= Change_BigEen(g_dataBuffer[1264+208]);
        g_dataBuffer[1265+208]= Change_BigEen(g_dataBuffer[1265+208]);
        g_dataBuffer[1266+208]= Change_BigEen(g_dataBuffer[1266+208]);
        g_dataBuffer[1267+208]= Change_BigEen(g_dataBuffer[1267+208]);
        g_dataBuffer[1268+208]= Change_BigEen(g_dataBuffer[1268+208]);
        g_dataBuffer[1269+208]= Change_BigEen(g_dataBuffer[1269+208]);
        g_dataBuffer[1280+208]= Change_BigEen(g_dataBuffer[1280+208]);
        g_dataBuffer[1281+208]= Change_BigEen(g_dataBuffer[1281+208]);
        g_dataBuffer[1282+208]= Change_BigEen(g_dataBuffer[1282+208]);
        g_dataBuffer[1283+208]= Change_BigEen(g_dataBuffer[1283+208]);
        g_dataBuffer[1284+208]= Change_BigEen(g_dataBuffer[1284+208]);
        g_dataBuffer[1285+208]= Change_BigEen(g_dataBuffer[1285+208]);
        g_dataBuffer[1296+208]= Change_BigEen(g_dataBuffer[1296+208]);
        g_dataBuffer[1297+208]= Change_BigEen(g_dataBuffer[1297+208]);
        g_dataBuffer[1298+208]= Change_BigEen(g_dataBuffer[1298+208]);
        g_dataBuffer[1299+208]= Change_BigEen(g_dataBuffer[1299+208]);
        g_dataBuffer[1300+208]= Change_BigEen(g_dataBuffer[1300+208]);
        g_dataBuffer[1301+208]= Change_BigEen(g_dataBuffer[1301+208]);
        g_dataBuffer[1312+208]= Change_BigEen(g_dataBuffer[1312+208]);
        g_dataBuffer[1313+208]= Change_BigEen(g_dataBuffer[1313+208]);
        g_dataBuffer[1314+208]= Change_BigEen(g_dataBuffer[1314+208]);
        g_dataBuffer[1315+208]= Change_BigEen(g_dataBuffer[1315+208]);
        g_dataBuffer[1316+208]= Change_BigEen(g_dataBuffer[1316+208]);
        g_dataBuffer[1317+208]= Change_BigEen(g_dataBuffer[1317+208]);
        g_dataBuffer[1328+208]= Change_BigEen(g_dataBuffer[1328+208]);
        g_dataBuffer[1329+208]= Change_BigEen(g_dataBuffer[1329+208]);
        g_dataBuffer[1330+208]= Change_BigEen(g_dataBuffer[1330+208]);
        g_dataBuffer[1331+208]= Change_BigEen(g_dataBuffer[1331+208]);
        g_dataBuffer[1332+208]= Change_BigEen(g_dataBuffer[1332+208]);
        g_dataBuffer[1333+208]= Change_BigEen(g_dataBuffer[1333+208]);
        g_dataBuffer[1344+208]= Change_BigEen(g_dataBuffer[1344+208]);
        g_dataBuffer[1345+208]= Change_BigEen(g_dataBuffer[1345+208]);
        g_dataBuffer[1346+208]= Change_BigEen(g_dataBuffer[1346+208]);
        g_dataBuffer[1347+208]= Change_BigEen(g_dataBuffer[1347+208]);
        g_dataBuffer[1348+208]= Change_BigEen(g_dataBuffer[1348+208]);
        g_dataBuffer[1349+208]= Change_BigEen(g_dataBuffer[1349+208]);
        //PIS
        g_dataBuffer[1360+224]= Change_BigEen(g_dataBuffer[1360+224]);
        g_dataBuffer[1392+224]= Change_BigEen(g_dataBuffer[1392+224]);
        //ATC
        g_dataBuffer[1424+240]= Change_BigEen(g_dataBuffer[1424+240]);
        //ERM
        g_dataBuffer[1744]= Change_BigEen(g_dataBuffer[1744]);
        g_dataBuffer[1745]= Change_BigEen(g_dataBuffer[1745]);
        g_dataBuffer[1746]= Change_BigEen(g_dataBuffer[1746]);
        g_dataBuffer[1747]= Change_BigEen(g_dataBuffer[1747]);
        g_dataBuffer[1748]= Change_BigEen(g_dataBuffer[1748]);
        g_dataBuffer[1749]= Change_BigEen(g_dataBuffer[1749]);
        g_dataBuffer[1750]= Change_BigEen(g_dataBuffer[1750]);
        g_dataBuffer[1751]= Change_BigEen(g_dataBuffer[1751]);
        g_dataBuffer[1752]= Change_BigEen(g_dataBuffer[1752]);
        g_dataBuffer[1753]= Change_BigEen(g_dataBuffer[1753]);
        g_dataBuffer[1760]= Change_BigEen(g_dataBuffer[1760]);
        g_dataBuffer[1761]= Change_BigEen(g_dataBuffer[1761]);
        g_dataBuffer[1762]= Change_BigEen(g_dataBuffer[1762]);
        g_dataBuffer[1782]= Change_BigEen(g_dataBuffer[1782]);
        g_dataBuffer[1744+64]= Change_BigEen(g_dataBuffer[1744+64]);
        g_dataBuffer[1745+64]= Change_BigEen(g_dataBuffer[1745+64]);
        g_dataBuffer[1746+64]= Change_BigEen(g_dataBuffer[1746+64]);
        g_dataBuffer[1747+64]= Change_BigEen(g_dataBuffer[1747+64]);
        g_dataBuffer[1748+64]= Change_BigEen(g_dataBuffer[1748+64]);
        g_dataBuffer[1749+64]= Change_BigEen(g_dataBuffer[1749+64]);
        g_dataBuffer[1750+64]= Change_BigEen(g_dataBuffer[1750+64]);
        g_dataBuffer[1751+64]= Change_BigEen(g_dataBuffer[1751+64]);
        g_dataBuffer[1752+64]= Change_BigEen(g_dataBuffer[1752+64]);
        g_dataBuffer[1753+64]= Change_BigEen(g_dataBuffer[1753+64]);
        g_dataBuffer[1760+64]= Change_BigEen(g_dataBuffer[1760+64]);
        g_dataBuffer[1761+64]= Change_BigEen(g_dataBuffer[1761+64]);
        g_dataBuffer[1762+64]= Change_BigEen(g_dataBuffer[1762+64]);
        g_dataBuffer[1782+64]= Change_BigEen(g_dataBuffer[1782+64]);
        //CCU
        g_dataBuffer[2080]= Change_BigEen(g_dataBuffer[2080]);
        g_dataBuffer[2081]= Change_BigEen(g_dataBuffer[2081]);
        g_dataBuffer[2082]= Change_BigEen(g_dataBuffer[2082]);
        g_dataBuffer[2083]= Change_BigEen(g_dataBuffer[2083]);
        g_dataBuffer[2084]= Change_BigEen(g_dataBuffer[2084]);
        g_dataBuffer[2085]= Change_BigEen(g_dataBuffer[2085]);
        g_dataBuffer[2086]= Change_BigEen(g_dataBuffer[2086]);
        g_dataBuffer[2087]= Change_BigEen(g_dataBuffer[2087]);
        g_dataBuffer[2088]= Change_BigEen(g_dataBuffer[2088]);
        g_dataBuffer[2089]= Change_BigEen(g_dataBuffer[2089]);
        g_dataBuffer[2090]= Change_BigEen(g_dataBuffer[2090]);
        g_dataBuffer[2091]= Change_BigEen(g_dataBuffer[2091]);
        g_dataBuffer[2092]= Change_BigEen(g_dataBuffer[2092]);
        g_dataBuffer[2093]= Change_BigEen(g_dataBuffer[2093]);
        g_dataBuffer[2094]= Change_BigEen(g_dataBuffer[2094]);
        g_dataBuffer[2096]= Change_BigEen(g_dataBuffer[2096]);
        g_dataBuffer[2097]= Change_BigEen(g_dataBuffer[2097]);
        g_dataBuffer[2098]= Change_BigEen(g_dataBuffer[2098]);
        g_dataBuffer[2099]= Change_BigEen(g_dataBuffer[2099]);
        g_dataBuffer[2100]= Change_BigEen(g_dataBuffer[2100]);
        g_dataBuffer[2101]= Change_BigEen(g_dataBuffer[2101]);
        g_dataBuffer[2102]= Change_BigEen(g_dataBuffer[2102]);
        g_dataBuffer[2103]= Change_BigEen(g_dataBuffer[2103]);
        g_dataBuffer[2104]= Change_BigEen(g_dataBuffer[2104]);
        g_dataBuffer[2112]= Change_BigEen(g_dataBuffer[2112]);
        g_dataBuffer[2113]= Change_BigEen(g_dataBuffer[2113]);
        g_dataBuffer[2115]= Change_BigEen(g_dataBuffer[2115]);
        g_dataBuffer[2128]= g_dataBuffer_MVB[2128]%256+(g_dataBuffer_MVB[2129]%256)*256;
        g_dataBuffer[2129]= g_dataBuffer_MVB[2128]/256+(g_dataBuffer_MVB[2129]/256)*256;

        g_dataBuffer[2134]= Change_BigEen(g_dataBuffer[2134]);
        g_dataBuffer[2135]= Change_BigEen(g_dataBuffer[2135]);
        g_dataBuffer[2136]= Change_BigEen(g_dataBuffer[2136]);
        g_dataBuffer[2137]= Change_BigEen(g_dataBuffer[2137]);
        g_dataBuffer[2138]= Change_BigEen(g_dataBuffer[2138]);
        g_dataBuffer[2139]= Change_BigEen(g_dataBuffer[2139]);

    }
    else  //MVB通信异常则信任以太网UDP数据包
    {
        if((g_udp_comm_err_flg1||g_udp_comm_err_flg2)!=1)
        {
            for(int i=0;i<4000;i++)
            {
                g_dataBuffer[i]=g_dataBuffer_UDP[i];
            }

            //ERM
            g_dataBuffer[1744]= Change_BigEen(g_dataBuffer[1744]);
            g_dataBuffer[1745]= Change_BigEen(g_dataBuffer[1745]);
            g_dataBuffer[1746]= Change_BigEen(g_dataBuffer[1746]);
            g_dataBuffer[1747]= Change_BigEen(g_dataBuffer[1747]);
            g_dataBuffer[1748]= Change_BigEen(g_dataBuffer[1748]);
            g_dataBuffer[1749]= Change_BigEen(g_dataBuffer[1749]);
            g_dataBuffer[1750]= Change_BigEen(g_dataBuffer[1750]);
            g_dataBuffer[1751]= Change_BigEen(g_dataBuffer[1751]);
            g_dataBuffer[1752]= Change_BigEen(g_dataBuffer[1752]);
            g_dataBuffer[1753]= Change_BigEen(g_dataBuffer[1753]);
            g_dataBuffer[1760]= Change_BigEen(g_dataBuffer[1760]);
            g_dataBuffer[1761]= Change_BigEen(g_dataBuffer[1761]);
            g_dataBuffer[1762]= Change_BigEen(g_dataBuffer[1762]);
            g_dataBuffer[1782]= Change_BigEen(g_dataBuffer[1782]);
            g_dataBuffer[1744+64]= Change_BigEen(g_dataBuffer[1744+64]);
            g_dataBuffer[1745+64]= Change_BigEen(g_dataBuffer[1745+64]);
            g_dataBuffer[1746+64]= Change_BigEen(g_dataBuffer[1746+64]);
            g_dataBuffer[1747+64]= Change_BigEen(g_dataBuffer[1747+64]);
            g_dataBuffer[1748+64]= Change_BigEen(g_dataBuffer[1748+64]);
            g_dataBuffer[1749+64]= Change_BigEen(g_dataBuffer[1749+64]);
            g_dataBuffer[1750+64]= Change_BigEen(g_dataBuffer[1750+64]);
            g_dataBuffer[1751+64]= Change_BigEen(g_dataBuffer[1751+64]);
            g_dataBuffer[1752+64]= Change_BigEen(g_dataBuffer[1752+64]);
            g_dataBuffer[1753+64]= Change_BigEen(g_dataBuffer[1753+64]);
            g_dataBuffer[1760+64]= Change_BigEen(g_dataBuffer[1760+64]);
            g_dataBuffer[1761+64]= Change_BigEen(g_dataBuffer[1761+64]);
            g_dataBuffer[1762+64]= Change_BigEen(g_dataBuffer[1762+64]);
            g_dataBuffer[1782+64]= Change_BigEen(g_dataBuffer[1782+64]);

            //CCU记录的能耗数据使用以太网时 双字高低字颠倒
            g_dataBuffer[2134]= g_dataBuffer_UDP[2135];
            g_dataBuffer[2135]= g_dataBuffer_UDP[2134];
            g_dataBuffer[2136]= g_dataBuffer_UDP[2137];
            g_dataBuffer[2137]= g_dataBuffer_UDP[2136];
            g_dataBuffer[2138]= g_dataBuffer_UDP[2139];
            g_dataBuffer[2139]= g_dataBuffer_UDP[2138];
        }
        else
        {
            //用于CCU调试或下载程序时，CCU没有生命信号但其它设备生命信号正常
            for(int i=0;i<4000;i++)
            {
                g_dataBuffer[i]=g_dataBuffer_MVB[i];
            }
            //RIOM
            g_dataBuffer[16+16]= Change_BigEen(g_dataBuffer[16+16]);   //AX_114_1
            g_dataBuffer[17+16]= Change_BigEen(g_dataBuffer[17+16]);
            g_dataBuffer[18+16]= Change_BigEen(g_dataBuffer[18+16]);
            g_dataBuffer[19+16]= Change_BigEen(g_dataBuffer[19+16]);
            g_dataBuffer[20+16]= Change_BigEen(g_dataBuffer[20+16]);  //AX_114_5
            g_dataBuffer[144+16]= Change_BigEen(g_dataBuffer[144+16]); //AX_184_1
            g_dataBuffer[145+16]= Change_BigEen(g_dataBuffer[145+16]);
            g_dataBuffer[146+16]= Change_BigEen(g_dataBuffer[146+16]);
            g_dataBuffer[147+16]= Change_BigEen(g_dataBuffer[147+16]);
            g_dataBuffer[148+16]= Change_BigEen(g_dataBuffer[148+16]);//AX_184_5
            g_dataBuffer[36+16]= Change_BigEen(g_dataBuffer[36+16]);  //DI_120_5
            g_dataBuffer[68+16]= Change_BigEen(g_dataBuffer[68+16]);  //DI_140_5
            g_dataBuffer[116+16]= Change_BigEen(g_dataBuffer[116+16]); //DI_170_5

            //BCU
            g_dataBuffer[288+32]= Change_BigEen(g_dataBuffer[288+32]);
            g_dataBuffer[289+32]= Change_BigEen(g_dataBuffer[289+32]);
            g_dataBuffer[290+32]= Change_BigEen(g_dataBuffer[290+32]);
            g_dataBuffer[291+32]= Change_BigEen(g_dataBuffer[291+32]);
            g_dataBuffer[292+32]= Change_BigEen(g_dataBuffer[292+32]);
            g_dataBuffer[293+32]= Change_BigEen(g_dataBuffer[293+32]);
            g_dataBuffer[294+32]= Change_BigEen(g_dataBuffer[294+32]);
            g_dataBuffer[295+32]= Change_BigEen(g_dataBuffer[295+32]);
            g_dataBuffer[296+32]= Change_BigEen(g_dataBuffer[296+32]);
            g_dataBuffer[297+32]= Change_BigEen(g_dataBuffer[297+32]);
            g_dataBuffer[298+32]= Change_BigEen(g_dataBuffer[298+32]);
            g_dataBuffer[299+32]= Change_BigEen(g_dataBuffer[299+32]);
            g_dataBuffer[300+32]= Change_BigEen(g_dataBuffer[300+32]);
            g_dataBuffer[301+32]= Change_BigEen(g_dataBuffer[301+32]);
            g_dataBuffer[302+32]= Change_BigEen(g_dataBuffer[302+32]);
            g_dataBuffer[303+32]= Change_BigEen(g_dataBuffer[303+32]);
            g_dataBuffer[304+32]= Change_BigEen(g_dataBuffer[304+32]);
            g_dataBuffer[305+32]= Change_BigEen(g_dataBuffer[305+32]);
            g_dataBuffer[306+32]= Change_BigEen(g_dataBuffer[306+32]);
            g_dataBuffer[307+32]= Change_BigEen(g_dataBuffer[307+32]);
            g_dataBuffer[308+32]= Change_BigEen(g_dataBuffer[308+32]);
            g_dataBuffer[309+32]= Change_BigEen(g_dataBuffer[309+32]);
            g_dataBuffer[310+32]= Change_BigEen(g_dataBuffer[310+32]);
            g_dataBuffer[311+32]= Change_BigEen(g_dataBuffer[311+32]);
            g_dataBuffer[312+32]= Change_BigEen(g_dataBuffer[312+32]);
            g_dataBuffer[313+32]= Change_BigEen(g_dataBuffer[313+32]);
            g_dataBuffer[314+32]= Change_BigEen(g_dataBuffer[314+32]);
            g_dataBuffer[315+32]= Change_BigEen(g_dataBuffer[315+32]);
            g_dataBuffer[316+32]= Change_BigEen(g_dataBuffer[316+32]);
            g_dataBuffer[317+32]= Change_BigEen(g_dataBuffer[317+32]);
            g_dataBuffer[318+32]= Change_BigEen(g_dataBuffer[318+32]);
            g_dataBuffer[319+32]= Change_BigEen(g_dataBuffer[319+32]);
            g_dataBuffer[320+32]= Change_BigEen(g_dataBuffer[320+32]);
            g_dataBuffer[321+32]= Change_BigEen(g_dataBuffer[321+32]);
            g_dataBuffer[322+32]= Change_BigEen(g_dataBuffer[322+32]);
            g_dataBuffer[323+32]= Change_BigEen(g_dataBuffer[323+32]);
            g_dataBuffer[324+32]= Change_BigEen(g_dataBuffer[324+32]);
            g_dataBuffer[325+32]= Change_BigEen(g_dataBuffer[325+32]);
            g_dataBuffer[326+32]= Change_BigEen(g_dataBuffer[326+32]);
            g_dataBuffer[327+32]= Change_BigEen(g_dataBuffer[327+32]);
            g_dataBuffer[328+32]= Change_BigEen(g_dataBuffer[328+32]);


            g_dataBuffer[368+32]= Change_BigEen(g_dataBuffer[368+32]);
            g_dataBuffer[369+32]= Change_BigEen(g_dataBuffer[369+32]);
            g_dataBuffer[370+32]= Change_BigEen(g_dataBuffer[370+32]);
            g_dataBuffer[371+32]= Change_BigEen(g_dataBuffer[371+32]);
            g_dataBuffer[372+32]= Change_BigEen(g_dataBuffer[372+32]);
            g_dataBuffer[373+32]= Change_BigEen(g_dataBuffer[373+32]);
            g_dataBuffer[374+32]= Change_BigEen(g_dataBuffer[374+32]);
            g_dataBuffer[375+32]= Change_BigEen(g_dataBuffer[375+32]);
            g_dataBuffer[376+32]= Change_BigEen(g_dataBuffer[376+32]);
            g_dataBuffer[377+32]= Change_BigEen(g_dataBuffer[377+32]);
            g_dataBuffer[378+32]= Change_BigEen(g_dataBuffer[378+32]);
            g_dataBuffer[379+32]= Change_BigEen(g_dataBuffer[379+32]);
            g_dataBuffer[380+32]= Change_BigEen(g_dataBuffer[380+32]);
            g_dataBuffer[381+32]= Change_BigEen(g_dataBuffer[381+32]);
            g_dataBuffer[382+32]= Change_BigEen(g_dataBuffer[382+32]);
            g_dataBuffer[383+32]= Change_BigEen(g_dataBuffer[383+32]);
            g_dataBuffer[384+32]= Change_BigEen(g_dataBuffer[384+32]);
            g_dataBuffer[385+32]= Change_BigEen(g_dataBuffer[385+32]);
            g_dataBuffer[386+32]= Change_BigEen(g_dataBuffer[386+32]);
            g_dataBuffer[387+32]= Change_BigEen(g_dataBuffer[387+32]);
            g_dataBuffer[388+32]= Change_BigEen(g_dataBuffer[388+32]);
            g_dataBuffer[389+32]= Change_BigEen(g_dataBuffer[389+32]);
            g_dataBuffer[390+32]= Change_BigEen(g_dataBuffer[390+32]);
            g_dataBuffer[391+32]= Change_BigEen(g_dataBuffer[391+32]);
            g_dataBuffer[392+32]= Change_BigEen(g_dataBuffer[392+32]);
            g_dataBuffer[393+32]= Change_BigEen(g_dataBuffer[393+32]);
            g_dataBuffer[394+32]= Change_BigEen(g_dataBuffer[394+32]);
            g_dataBuffer[395+32]= Change_BigEen(g_dataBuffer[395+32]);
            g_dataBuffer[396+32]= Change_BigEen(g_dataBuffer[396+32]);
            g_dataBuffer[397+32]= Change_BigEen(g_dataBuffer[397+32]);
            g_dataBuffer[398+32]= Change_BigEen(g_dataBuffer[398+32]);
            g_dataBuffer[399+32]= Change_BigEen(g_dataBuffer[399+32]);
            g_dataBuffer[400+32]= Change_BigEen(g_dataBuffer[400+32]);
            g_dataBuffer[401+32]= Change_BigEen(g_dataBuffer[401+32]);
            g_dataBuffer[402+32]= Change_BigEen(g_dataBuffer[402+32]);
            g_dataBuffer[403+32]= Change_BigEen(g_dataBuffer[403+32]);
            g_dataBuffer[404+32]= Change_BigEen(g_dataBuffer[404+32]);
            g_dataBuffer[405+32]= Change_BigEen(g_dataBuffer[405+32]);
            g_dataBuffer[406+32]= Change_BigEen(g_dataBuffer[406+32]);
            g_dataBuffer[407+32]= Change_BigEen(g_dataBuffer[407+32]);
            g_dataBuffer[408+32]= Change_BigEen(g_dataBuffer[408+32]);

            g_dataBuffer[448+32]= Change_BigEen(g_dataBuffer[448+32]);
            g_dataBuffer[449+32]= Change_BigEen(g_dataBuffer[449+32]);
            g_dataBuffer[450+32]= Change_BigEen(g_dataBuffer[450+32]);
            g_dataBuffer[451+32]= Change_BigEen(g_dataBuffer[451+32]);
            g_dataBuffer[452+32]= Change_BigEen(g_dataBuffer[452+32]);
            g_dataBuffer[453+32]= Change_BigEen(g_dataBuffer[453+32]);
            g_dataBuffer[454+32]= Change_BigEen(g_dataBuffer[454+32]);
            g_dataBuffer[455+32]= Change_BigEen(g_dataBuffer[455+32]);
            g_dataBuffer[456+32]= Change_BigEen(g_dataBuffer[456+32]);
            g_dataBuffer[457+32]= Change_BigEen(g_dataBuffer[457+32]);
            g_dataBuffer[458+32]= Change_BigEen(g_dataBuffer[458+32]);
            g_dataBuffer[459+32]= Change_BigEen(g_dataBuffer[459+32]);
            g_dataBuffer[460+32]= Change_BigEen(g_dataBuffer[460+32]);
            g_dataBuffer[461+32]= Change_BigEen(g_dataBuffer[461+32]);
            g_dataBuffer[462+32]= Change_BigEen(g_dataBuffer[462+32]);
            g_dataBuffer[463+32]= Change_BigEen(g_dataBuffer[463+32]);
            g_dataBuffer[464+32]= Change_BigEen(g_dataBuffer[464+32]);
            g_dataBuffer[465+32]= Change_BigEen(g_dataBuffer[465+32]);
            g_dataBuffer[466+32]= Change_BigEen(g_dataBuffer[466+32]);
            g_dataBuffer[467+32]= Change_BigEen(g_dataBuffer[467+32]);
            g_dataBuffer[468+32]= Change_BigEen(g_dataBuffer[468+32]);
            g_dataBuffer[469+32]= Change_BigEen(g_dataBuffer[469+32]);
            g_dataBuffer[470+32]= Change_BigEen(g_dataBuffer[470+32]);
            g_dataBuffer[471+32]= Change_BigEen(g_dataBuffer[471+32]);
            g_dataBuffer[472+32]= Change_BigEen(g_dataBuffer[472+32]);
            g_dataBuffer[473+32]= Change_BigEen(g_dataBuffer[473+32]);
            g_dataBuffer[474+32]= Change_BigEen(g_dataBuffer[474+32]);
            g_dataBuffer[475+32]= Change_BigEen(g_dataBuffer[475+32]);
            g_dataBuffer[476+32]= Change_BigEen(g_dataBuffer[476+32]);
            g_dataBuffer[477+32]= Change_BigEen(g_dataBuffer[477+32]);
            g_dataBuffer[478+32]= Change_BigEen(g_dataBuffer[478+32]);
            g_dataBuffer[479+32]= Change_BigEen(g_dataBuffer[479+32]);
            g_dataBuffer[480+32]= Change_BigEen(g_dataBuffer[480+32]);
            g_dataBuffer[481+32]= Change_BigEen(g_dataBuffer[481+32]);
            g_dataBuffer[482+32]= Change_BigEen(g_dataBuffer[482+32]);
            g_dataBuffer[483+32]= Change_BigEen(g_dataBuffer[483+32]);
            g_dataBuffer[484+32]= Change_BigEen(g_dataBuffer[484+32]);
            g_dataBuffer[485+32]= Change_BigEen(g_dataBuffer[485+32]);
            g_dataBuffer[486+32]= Change_BigEen(g_dataBuffer[486+32]);
            g_dataBuffer[487+32]= Change_BigEen(g_dataBuffer[487+32]);
            g_dataBuffer[488+32]= Change_BigEen(g_dataBuffer[488+32]);

            g_dataBuffer[528+32]= Change_BigEen(g_dataBuffer[528+32]);
            g_dataBuffer[529+32]= Change_BigEen(g_dataBuffer[529+32]);
            g_dataBuffer[530+32]= Change_BigEen(g_dataBuffer[530+32]);
            g_dataBuffer[531+32]= Change_BigEen(g_dataBuffer[531+32]);
            g_dataBuffer[532+32]= Change_BigEen(g_dataBuffer[532+32]);
            g_dataBuffer[533+32]= Change_BigEen(g_dataBuffer[533+32]);
            g_dataBuffer[534+32]= Change_BigEen(g_dataBuffer[534+32]);
            g_dataBuffer[535+32]= Change_BigEen(g_dataBuffer[535+32]);
            g_dataBuffer[536+32]= Change_BigEen(g_dataBuffer[536+32]);
            g_dataBuffer[537+32]= Change_BigEen(g_dataBuffer[537+32]);
            g_dataBuffer[538+32]= Change_BigEen(g_dataBuffer[538+32]);
            g_dataBuffer[539+32]= Change_BigEen(g_dataBuffer[539+32]);
            g_dataBuffer[540+32]= Change_BigEen(g_dataBuffer[540+32]);
            g_dataBuffer[541+32]= Change_BigEen(g_dataBuffer[541+32]);
            g_dataBuffer[542+32]= Change_BigEen(g_dataBuffer[542+32]);
            g_dataBuffer[543+32]= Change_BigEen(g_dataBuffer[543+32]);
            g_dataBuffer[544+32]= Change_BigEen(g_dataBuffer[544+32]);
            g_dataBuffer[545+32]= Change_BigEen(g_dataBuffer[545+32]);
            g_dataBuffer[546+32]= Change_BigEen(g_dataBuffer[546+32]);
            g_dataBuffer[547+32]= Change_BigEen(g_dataBuffer[547+32]);
            g_dataBuffer[548+32]= Change_BigEen(g_dataBuffer[548+32]);
            g_dataBuffer[549+32]= Change_BigEen(g_dataBuffer[549+32]);
            g_dataBuffer[550+32]= Change_BigEen(g_dataBuffer[550+32]);
            g_dataBuffer[551+32]= Change_BigEen(g_dataBuffer[551+32]);
            g_dataBuffer[552+32]= Change_BigEen(g_dataBuffer[552+32]);
            g_dataBuffer[553+32]= Change_BigEen(g_dataBuffer[553+32]);
            g_dataBuffer[554+32]= Change_BigEen(g_dataBuffer[554+32]);
            g_dataBuffer[555+32]= Change_BigEen(g_dataBuffer[555+32]);
            g_dataBuffer[556+32]= Change_BigEen(g_dataBuffer[556+32]);
            g_dataBuffer[557+32]= Change_BigEen(g_dataBuffer[557+32]);
            g_dataBuffer[558+32]= Change_BigEen(g_dataBuffer[558+32]);
            g_dataBuffer[559+32]= Change_BigEen(g_dataBuffer[559+32]);
            g_dataBuffer[560+32]= Change_BigEen(g_dataBuffer[560+32]);
            g_dataBuffer[561+32]= Change_BigEen(g_dataBuffer[561+32]);
            g_dataBuffer[562+32]= Change_BigEen(g_dataBuffer[562+32]);
            g_dataBuffer[563+32]= Change_BigEen(g_dataBuffer[563+32]);
            g_dataBuffer[564+32]= Change_BigEen(g_dataBuffer[564+32]);
            g_dataBuffer[565+32]= Change_BigEen(g_dataBuffer[565+32]);
            g_dataBuffer[566+32]= Change_BigEen(g_dataBuffer[566+32]);
            g_dataBuffer[567+32]= Change_BigEen(g_dataBuffer[567+32]);
            g_dataBuffer[568+32]= Change_BigEen(g_dataBuffer[568+32]);
            //TCU
            g_dataBuffer[608+48]= Change_BigEen(g_dataBuffer[608+48]);
            g_dataBuffer[609+48]= Change_BigEen(g_dataBuffer[609+48]);
            g_dataBuffer[610+48]= Change_BigEen(g_dataBuffer[610+48]);
            g_dataBuffer[611+48]= Change_BigEen(g_dataBuffer[611+48]);
            g_dataBuffer[612+48]= Change_BigEen(g_dataBuffer[612+48]);
            g_dataBuffer[613+48]= Change_BigEen(g_dataBuffer[613+48]);
            g_dataBuffer[614+48]= Change_BigEen(g_dataBuffer[614+48]);
            g_dataBuffer[615+48]= Change_BigEen(g_dataBuffer[615+48]);
            g_dataBuffer[616+48]= Change_BigEen(g_dataBuffer[616+48]);
            g_dataBuffer[617+48]= Change_BigEen(g_dataBuffer[617+48]);
            g_dataBuffer[640+48]= Change_BigEen(g_dataBuffer[640+48]);
            g_dataBuffer[641+48]= Change_BigEen(g_dataBuffer[641+48]);
            g_dataBuffer[642+48]= Change_BigEen(g_dataBuffer[642+48]);
            g_dataBuffer[643+48]= Change_BigEen(g_dataBuffer[643+48]);
            g_dataBuffer[644+48]= Change_BigEen(g_dataBuffer[644+48]);
            g_dataBuffer[645+48]= Change_BigEen(g_dataBuffer[645+48]);
            g_dataBuffer[646+48]= Change_BigEen(g_dataBuffer[646+48]);
            g_dataBuffer[647+48]= Change_BigEen(g_dataBuffer[647+48]);
            g_dataBuffer[648+48]= Change_BigEen(g_dataBuffer[648+48]);
            g_dataBuffer[649+48]= Change_BigEen(g_dataBuffer[649+48]);
            g_dataBuffer[672+48]= Change_BigEen(g_dataBuffer[672+48]);
            g_dataBuffer[673+48]= Change_BigEen(g_dataBuffer[673+48]);
            g_dataBuffer[674+48]= Change_BigEen(g_dataBuffer[674+48]);
            g_dataBuffer[675+48]= Change_BigEen(g_dataBuffer[675+48]);
            g_dataBuffer[676+48]= Change_BigEen(g_dataBuffer[676+48]);
            g_dataBuffer[677+48]= Change_BigEen(g_dataBuffer[677+48]);
            g_dataBuffer[678+48]= Change_BigEen(g_dataBuffer[678+48]);
            g_dataBuffer[679+48]= Change_BigEen(g_dataBuffer[679+48]);
            g_dataBuffer[680+48]= Change_BigEen(g_dataBuffer[680+48]);
            g_dataBuffer[681+48]= Change_BigEen(g_dataBuffer[681+48]);
            g_dataBuffer[704+48]= Change_BigEen(g_dataBuffer[704+48]);
            g_dataBuffer[705+48]= Change_BigEen(g_dataBuffer[705+48]);
            g_dataBuffer[706+48]= Change_BigEen(g_dataBuffer[706+48]);
            g_dataBuffer[707+48]= Change_BigEen(g_dataBuffer[707+48]);
            g_dataBuffer[708+48]= Change_BigEen(g_dataBuffer[708+48]);
            g_dataBuffer[709+48]= Change_BigEen(g_dataBuffer[709+48]);
            g_dataBuffer[710+48]= Change_BigEen(g_dataBuffer[710+48]);
            g_dataBuffer[711+48]= Change_BigEen(g_dataBuffer[711+48]);
            g_dataBuffer[712+48]= Change_BigEen(g_dataBuffer[712+48]);
            g_dataBuffer[713+48]= Change_BigEen(g_dataBuffer[713+48]);
            g_dataBuffer[736+48]= Change_BigEen(g_dataBuffer[736+48]);
            g_dataBuffer[737+48]= Change_BigEen(g_dataBuffer[737+48]);
            g_dataBuffer[738+48]= Change_BigEen(g_dataBuffer[738+48]);
            g_dataBuffer[739+48]= Change_BigEen(g_dataBuffer[739+48]);
            g_dataBuffer[740+48]= Change_BigEen(g_dataBuffer[740+48]);
            g_dataBuffer[741+48]= Change_BigEen(g_dataBuffer[741+48]);
            g_dataBuffer[742+48]= Change_BigEen(g_dataBuffer[742+48]);
            g_dataBuffer[743+48]= Change_BigEen(g_dataBuffer[743+48]);
            g_dataBuffer[744+48]= Change_BigEen(g_dataBuffer[744+48]);
            g_dataBuffer[745+48]= Change_BigEen(g_dataBuffer[745+48]);
            g_dataBuffer[768+48]= Change_BigEen(g_dataBuffer[768+48]);
            g_dataBuffer[769+48]= Change_BigEen(g_dataBuffer[769+48]);
            g_dataBuffer[770+48]= Change_BigEen(g_dataBuffer[770+48]);
            g_dataBuffer[771+48]= Change_BigEen(g_dataBuffer[771+48]);
            g_dataBuffer[772+48]= Change_BigEen(g_dataBuffer[772+48]);
            g_dataBuffer[773+48]= Change_BigEen(g_dataBuffer[773+48]);
            g_dataBuffer[774+48]= Change_BigEen(g_dataBuffer[774+48]);
            g_dataBuffer[775+48]= Change_BigEen(g_dataBuffer[775+48]);
            g_dataBuffer[776+48]= Change_BigEen(g_dataBuffer[776+48]);
            g_dataBuffer[777+48]= Change_BigEen(g_dataBuffer[777+48]);
            //ACU
            g_dataBuffer[800+64]= Change_BigEen(g_dataBuffer[800+64]);
            g_dataBuffer[824+64]= Change_BigEen(g_dataBuffer[824+64]);
            //DCU
            g_dataBuffer[864+48]= Change_BigEen(g_dataBuffer[864+48]);
            g_dataBuffer[896+48]= Change_BigEen(g_dataBuffer[896+48]);
            g_dataBuffer[928+48]= Change_BigEen(g_dataBuffer[928+48]);
            g_dataBuffer[960+48]= Change_BigEen(g_dataBuffer[960+48]);
            g_dataBuffer[992+48]= Change_BigEen(g_dataBuffer[992+48]);
            g_dataBuffer[1024+48]= Change_BigEen(g_dataBuffer[1024+48]);
            g_dataBuffer[1056+48]= Change_BigEen(g_dataBuffer[1056+48]);
            g_dataBuffer[1088+48]= Change_BigEen(g_dataBuffer[1088+48]);
            g_dataBuffer[1120+48]= Change_BigEen(g_dataBuffer[1120+48]);
            g_dataBuffer[1152+48]= Change_BigEen(g_dataBuffer[1152+48]);
            g_dataBuffer[1184+48]= Change_BigEen(g_dataBuffer[1184+48]);
            g_dataBuffer[1216+48]= Change_BigEen(g_dataBuffer[1216+48]);
            g_dataBuffer[1248+48]= Change_BigEen(g_dataBuffer[1248+48]);
            g_dataBuffer[1280+48]= Change_BigEen(g_dataBuffer[1280+48]);
            g_dataBuffer[1312+48]= Change_BigEen(g_dataBuffer[1312+48]);
            g_dataBuffer[1344+48]= Change_BigEen(g_dataBuffer[1344+48]);
            g_dataBuffer[896+2264]= Change_BigEen(g_dataBuffer[896+2264]);
            g_dataBuffer[928+2264]= Change_BigEen(g_dataBuffer[928+2264]);
            g_dataBuffer[960+2264]= Change_BigEen(g_dataBuffer[960+2264]);
            g_dataBuffer[992+2264]= Change_BigEen(g_dataBuffer[992+2264]);
            g_dataBuffer[1024+2264]= Change_BigEen(g_dataBuffer[1024+2264]);
            g_dataBuffer[1056+2264]= Change_BigEen(g_dataBuffer[1056+2264]);
            g_dataBuffer[1088+2264]= Change_BigEen(g_dataBuffer[1088+2264]);
            g_dataBuffer[1120+2264]= Change_BigEen(g_dataBuffer[1120+2264]);
            //HVAC
            g_dataBuffer[1232+208]= Change_BigEen(g_dataBuffer[1232+208]);
            g_dataBuffer[1233+208]= Change_BigEen(g_dataBuffer[1233+208]);
            g_dataBuffer[1234+208]= Change_BigEen(g_dataBuffer[1234+208]);
            g_dataBuffer[1235+208]= Change_BigEen(g_dataBuffer[1235+208]);
            g_dataBuffer[1236+208]= Change_BigEen(g_dataBuffer[1236+208]);
            g_dataBuffer[1237+208]= Change_BigEen(g_dataBuffer[1237+208]);
            g_dataBuffer[1248+208]= Change_BigEen(g_dataBuffer[1248+208]);
            g_dataBuffer[1249+208]= Change_BigEen(g_dataBuffer[1249+208]);
            g_dataBuffer[1250+208]= Change_BigEen(g_dataBuffer[1250+208]);
            g_dataBuffer[1251+208]= Change_BigEen(g_dataBuffer[1251+208]);
            g_dataBuffer[1252+208]= Change_BigEen(g_dataBuffer[1252+208]);
            g_dataBuffer[1253+208]= Change_BigEen(g_dataBuffer[1253+208]);
            g_dataBuffer[1264+208]= Change_BigEen(g_dataBuffer[1264+208]);
            g_dataBuffer[1265+208]= Change_BigEen(g_dataBuffer[1265+208]);
            g_dataBuffer[1266+208]= Change_BigEen(g_dataBuffer[1266+208]);
            g_dataBuffer[1267+208]= Change_BigEen(g_dataBuffer[1267+208]);
            g_dataBuffer[1268+208]= Change_BigEen(g_dataBuffer[1268+208]);
            g_dataBuffer[1269+208]= Change_BigEen(g_dataBuffer[1269+208]);
            g_dataBuffer[1280+208]= Change_BigEen(g_dataBuffer[1280+208]);
            g_dataBuffer[1281+208]= Change_BigEen(g_dataBuffer[1281+208]);
            g_dataBuffer[1282+208]= Change_BigEen(g_dataBuffer[1282+208]);
            g_dataBuffer[1283+208]= Change_BigEen(g_dataBuffer[1283+208]);
            g_dataBuffer[1284+208]= Change_BigEen(g_dataBuffer[1284+208]);
            g_dataBuffer[1285+208]= Change_BigEen(g_dataBuffer[1285+208]);
            g_dataBuffer[1296+208]= Change_BigEen(g_dataBuffer[1296+208]);
            g_dataBuffer[1297+208]= Change_BigEen(g_dataBuffer[1297+208]);
            g_dataBuffer[1298+208]= Change_BigEen(g_dataBuffer[1298+208]);
            g_dataBuffer[1299+208]= Change_BigEen(g_dataBuffer[1299+208]);
            g_dataBuffer[1300+208]= Change_BigEen(g_dataBuffer[1300+208]);
            g_dataBuffer[1301+208]= Change_BigEen(g_dataBuffer[1301+208]);
            g_dataBuffer[1312+208]= Change_BigEen(g_dataBuffer[1312+208]);
            g_dataBuffer[1313+208]= Change_BigEen(g_dataBuffer[1313+208]);
            g_dataBuffer[1314+208]= Change_BigEen(g_dataBuffer[1314+208]);
            g_dataBuffer[1315+208]= Change_BigEen(g_dataBuffer[1315+208]);
            g_dataBuffer[1316+208]= Change_BigEen(g_dataBuffer[1316+208]);
            g_dataBuffer[1317+208]= Change_BigEen(g_dataBuffer[1317+208]);
            g_dataBuffer[1328+208]= Change_BigEen(g_dataBuffer[1328+208]);
            g_dataBuffer[1329+208]= Change_BigEen(g_dataBuffer[1329+208]);
            g_dataBuffer[1330+208]= Change_BigEen(g_dataBuffer[1330+208]);
            g_dataBuffer[1331+208]= Change_BigEen(g_dataBuffer[1331+208]);
            g_dataBuffer[1332+208]= Change_BigEen(g_dataBuffer[1332+208]);
            g_dataBuffer[1333+208]= Change_BigEen(g_dataBuffer[1333+208]);
            g_dataBuffer[1344+208]= Change_BigEen(g_dataBuffer[1344+208]);
            g_dataBuffer[1345+208]= Change_BigEen(g_dataBuffer[1345+208]);
            g_dataBuffer[1346+208]= Change_BigEen(g_dataBuffer[1346+208]);
            g_dataBuffer[1347+208]= Change_BigEen(g_dataBuffer[1347+208]);
            g_dataBuffer[1348+208]= Change_BigEen(g_dataBuffer[1348+208]);
            g_dataBuffer[1349+208]= Change_BigEen(g_dataBuffer[1349+208]);
            //PIS
            g_dataBuffer[1360+224]= Change_BigEen(g_dataBuffer[1360+224]);
            g_dataBuffer[1392+224]= Change_BigEen(g_dataBuffer[1392+224]);
            //ATC
            g_dataBuffer[1424+240]= Change_BigEen(g_dataBuffer[1424+240]);
            //ERM
            g_dataBuffer[1744]= Change_BigEen(g_dataBuffer[1744]);
            g_dataBuffer[1745]= Change_BigEen(g_dataBuffer[1745]);
            g_dataBuffer[1746]= Change_BigEen(g_dataBuffer[1746]);
            g_dataBuffer[1747]= Change_BigEen(g_dataBuffer[1747]);
            g_dataBuffer[1748]= Change_BigEen(g_dataBuffer[1748]);
            g_dataBuffer[1749]= Change_BigEen(g_dataBuffer[1749]);
            g_dataBuffer[1750]= Change_BigEen(g_dataBuffer[1750]);
            g_dataBuffer[1751]= Change_BigEen(g_dataBuffer[1751]);
            g_dataBuffer[1752]= Change_BigEen(g_dataBuffer[1752]);
            g_dataBuffer[1753]= Change_BigEen(g_dataBuffer[1753]);
            g_dataBuffer[1760]= Change_BigEen(g_dataBuffer[1760]);
            g_dataBuffer[1761]= Change_BigEen(g_dataBuffer[1761]);
            g_dataBuffer[1762]= Change_BigEen(g_dataBuffer[1762]);
            g_dataBuffer[1782]= Change_BigEen(g_dataBuffer[1782]);

            g_dataBuffer[1744+64]= Change_BigEen(g_dataBuffer[1744+64]);
            g_dataBuffer[1745+64]= Change_BigEen(g_dataBuffer[1745+64]);
            g_dataBuffer[1746+64]= Change_BigEen(g_dataBuffer[1746+64]);
            g_dataBuffer[1747+64]= Change_BigEen(g_dataBuffer[1747+64]);
            g_dataBuffer[1748+64]= Change_BigEen(g_dataBuffer[1748+64]);
            g_dataBuffer[1749+64]= Change_BigEen(g_dataBuffer[1749+64]);
            g_dataBuffer[1750+64]= Change_BigEen(g_dataBuffer[1750+64]);
            g_dataBuffer[1751+64]= Change_BigEen(g_dataBuffer[1751+64]);
            g_dataBuffer[1752+64]= Change_BigEen(g_dataBuffer[1752+64]);
            g_dataBuffer[1753+64]= Change_BigEen(g_dataBuffer[1753+64]);
            g_dataBuffer[1760+64]= Change_BigEen(g_dataBuffer[1760+64]);
            g_dataBuffer[1761+64]= Change_BigEen(g_dataBuffer[1761+64]);
            g_dataBuffer[1762+64]= Change_BigEen(g_dataBuffer[1762+64]);
            g_dataBuffer[1782+64]= Change_BigEen(g_dataBuffer[1782+64]);
            //CCU
            g_dataBuffer[2080]= Change_BigEen(g_dataBuffer[2080]);
            g_dataBuffer[2081]= Change_BigEen(g_dataBuffer[2081]);
            g_dataBuffer[2082]= Change_BigEen(g_dataBuffer[2082]);
            g_dataBuffer[2083]= Change_BigEen(g_dataBuffer[2083]);
            g_dataBuffer[2084]= Change_BigEen(g_dataBuffer[2084]);
            g_dataBuffer[2085]= Change_BigEen(g_dataBuffer[2085]);
            g_dataBuffer[2086]= Change_BigEen(g_dataBuffer[2086]);
            g_dataBuffer[2087]= Change_BigEen(g_dataBuffer[2087]);
            g_dataBuffer[2088]= Change_BigEen(g_dataBuffer[2088]);
            g_dataBuffer[2089]= Change_BigEen(g_dataBuffer[2089]);
            g_dataBuffer[2090]= Change_BigEen(g_dataBuffer[2090]);
            g_dataBuffer[2091]= Change_BigEen(g_dataBuffer[2091]);
            g_dataBuffer[2092]= Change_BigEen(g_dataBuffer[2092]);
            g_dataBuffer[2093]= Change_BigEen(g_dataBuffer[2093]);
            g_dataBuffer[2094]= Change_BigEen(g_dataBuffer[2094]);

            g_dataBuffer[2096]= Change_BigEen(g_dataBuffer[2096]);
            g_dataBuffer[2097]= Change_BigEen(g_dataBuffer[2097]);
            g_dataBuffer[2098]= Change_BigEen(g_dataBuffer[2098]);
            g_dataBuffer[2099]= Change_BigEen(g_dataBuffer[2099]);
            g_dataBuffer[2100]= Change_BigEen(g_dataBuffer[2100]);
            g_dataBuffer[2101]= Change_BigEen(g_dataBuffer[2101]);
            g_dataBuffer[2102]= Change_BigEen(g_dataBuffer[2102]);
            g_dataBuffer[2103]= Change_BigEen(g_dataBuffer[2103]);
            g_dataBuffer[2104]= Change_BigEen(g_dataBuffer[2104]);

            g_dataBuffer[2112]= Change_BigEen(g_dataBuffer[2112]);
            g_dataBuffer[2113]= Change_BigEen(g_dataBuffer[2113]);
            g_dataBuffer[2115]= Change_BigEen(g_dataBuffer[2115]);

            g_dataBuffer[2128]= g_dataBuffer_MVB[2128]%256+(g_dataBuffer_MVB[2129]%256)*256;
            g_dataBuffer[2129]= g_dataBuffer_MVB[2128]/256+(g_dataBuffer_MVB[2129]/256)*256;

            g_dataBuffer[2134]= Change_BigEen(g_dataBuffer[2134]);
            g_dataBuffer[2135]= Change_BigEen(g_dataBuffer[2135]);
            g_dataBuffer[2136]= Change_BigEen(g_dataBuffer[2136]);
            g_dataBuffer[2137]= Change_BigEen(g_dataBuffer[2137]);
            g_dataBuffer[2138]= Change_BigEen(g_dataBuffer[2138]);
            g_dataBuffer[2139]= Change_BigEen(g_dataBuffer[2139]);

            for(int i=0;i<63;i++)
            {
                g_dataBuffer[2081+i]=0;
            }

        }
    }
#endif


#ifdef USE_RAND_DATA
    //用于显示屏设计说明文档页面截图, 模拟司机钥匙，方向，受电弓等
    g_dataBuffer[2120]=0xffff;    //
    g_dataBuffer[2121]=0x8000;    //door tc1_gw1
    // g_dataBuffer[2122]=0xff80;    //RIOM1       所有设备在线  tc1_gw2

    g_dataBuffer[2123]=0xffff;    //RIOM2 RIOM3 所有设备在线
    g_dataBuffer[2124]=0xffff;    //RIOM4 RIOM5 所有设备在线
    g_dataBuffer[2125]=0xffff;    //RIOM6 RIOM7 所有设备在线
    // g_dataBuffer[2126]=0x00ff;    //RIOM8       所有设备在线
    // g_dataBuffer[2120]=0xffff;      //ccu1在线 TCU       在线

    // g_dataBuffer[16]=0x0500;    // 司机室激活bit9   方向向前bit11
    g_dataBuffer[20]=0x00008;    //逃生门监视 tc1
    g_dataBuffer[148]=0x0008;   //逃生门监视 tc2
    g_dataBuffer[48]=0x0001;   //降弓到位监视  mp1
    g_dataBuffer[82]=0x0800;   //降弓到位监视  mp3

    g_dataBuffer[2127]=0xffff;   //PA  在线

    g_dataBuffer[897+48]=0x0001; //tc1_gw1 master
    g_dataBuffer[1153+48]=0x0001; //tc1_gw2 master

    BitSet(g_dataBuffer[347+32],11,1); //BRiCT_MGW_B1  Gateway is master   1= 主网关阀
    BitSet(g_dataBuffer[507+32],11,1); //BRiCT_MGW_B1  Gateway is master   1= 主网关阀
    // g_dataBuffer[898+48]=0x0100;  //tc1_gw1 door1 门1状态可信
    g_dataBuffer[1154+48]=0x0000; //tc1_gw2 door1 门1状态可信
    // g_dataBuffer[1154+48]=0x0000; //tc1_gw2 door1 门1状态可信
    g_dataBuffer[1154+48]=0x0000; //tc1_gw2 door1 门1状态可信

    // added by Deng Ran on the 13th of March 2015.
    g_dataBuffer[2112 + 9] |= 0x9000;
    g_dataBuffer[2112 + 10] |= 0x0090;
    g_dataBuffer[2112 + 9] |= 0xFF00;
    g_dataBuffer[2112 + 10] |= 0x00FF;

    // added by Deng Ran on the 09th of April 2015.
    // g_dataBuffer[944 + 12] |= 0x0000;
    // g_dataBuffer[944 + 13] |= 0xFF00;
    // g_dataBuffer[960 + 12] |= 0xFF00;
    g_dataBuffer[960 + 13] |= 0xFFFF;
    g_dataBuffer[1216 + 12] |= 0x0000;
    //g_dataBuffer[1216 + 13] |= 0xFFFF;
    //g_dataBuffer[928 + 13] |= 0xFF00;

    g_dataBuffer[945] |= 0x0001;
    // g_dataBuffer[1201] |= 0xFF01;

    g_dataBuffer[977] |= 0x0001;
    // g_dataBuffer[1233] |= 0xFF00;

    g_dataBuffer[1009] |= 0x0001;
    // g_dataBuffer[1265] |= 0xFF00;

    g_dataBuffer[1041] |= 0x0001;
    // g_dataBuffer[1297] |= 0xFF01;

    // g_dataBuffer[1073] |= 0xFF00;
    g_dataBuffer[1329] |= 0x0001;

    // g_dataBuffer[1115] |= 0xFF00;
    g_dataBuffer[1361] |= 0x0001;

    // g_dataBuffer[1137] |= 0xFF00;
    g_dataBuffer[1393] |= 0x0001;

    // g_dataBuffer[1169] |= 0xFF00;
    g_dataBuffer[913] |= 0x0001;

    g_dataBuffer[1713]=0x8888;  //fas
    g_dataBuffer[1714]=0x4888;
    g_dataBuffer[1715]=0x8888;
    g_dataBuffer[1716]=0x8488;
    g_dataBuffer[1717]=0x8488;
    g_dataBuffer[1718]=0x8488;
    g_dataBuffer[1719]=0x8288;
    g_dataBuffer[1720]=0x8488;
    g_dataBuffer[1721]=0x8488;  //fas
    g_dataBuffer[1722]=0x8488;
    g_dataBuffer[1723]=0x8288;
    g_dataBuffer[1724]=0x8488;
    g_dataBuffer[1725]=0x8488;

    // g_dataBuffer[130 + 16] = 0xffff;
#endif


    //RIOM网关通信中断则重置通过网关上传的DI,DO,AX的生命信号标志
    if(Bit(g_dataBuffer[2122],16)==0)
    {
        g_dataBuffer[2122]=g_dataBuffer[2122]&0x00ff;
    }
    if(Bit(g_dataBuffer[2123],8)==0)
    {
        g_dataBuffer[2123]=g_dataBuffer[2123]&0xff00;
    }
    if(Bit(g_dataBuffer[2123],16)==0)
    {
        g_dataBuffer[2123]=g_dataBuffer[2123]&0x00ff;
    }
    if(Bit(g_dataBuffer[2124],8)==0)
    {
        g_dataBuffer[2124]=g_dataBuffer[2124]&0xff00;
    }
    if(Bit(g_dataBuffer[2124],16)==0)
    {
        g_dataBuffer[2124]=g_dataBuffer[2124]&0x00ff;
    }
    if(Bit(g_dataBuffer[2125],8)==0)
    {
        g_dataBuffer[2125]=g_dataBuffer[2125]&0xff00;
    }
    if(Bit(g_dataBuffer[2125],16)==0)
    {
        g_dataBuffer[2125]=g_dataBuffer[2125]&0x00ff;
    }
    if(Bit(g_dataBuffer[2126],8)==0)
    {
        g_dataBuffer[2126]=g_dataBuffer[2126]&0xff00;
    }

    //门网关通信中断则清零相应端口所有数据
    if(Bit(CCU_HMI_222_10, 16 )  == 0 )
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer[944+j]=0;
        }
    }
    if (Bit(CCU_HMI_222_11, 8 )  == 0  )
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer[1200+j]=0;
        }
    }

    if(Bit(CCU_HMI_222_10, 15 )  == 0 )
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer[944+32+j]=0;
        }
    }
    if (Bit(CCU_HMI_222_11, 7 )  == 0  )
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer[1200+32+j]=0;
        }
    }

    if(Bit(CCU_HMI_222_10, 14 )  == 0 )
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer[944+64+j]=0;
        }
    }
    if (Bit(CCU_HMI_222_11, 6 )  == 0  )
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer[1200+64+j]=0;
        }
    }

    if(Bit(CCU_HMI_222_10, 13 )  == 0 )
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer[944+96+j]=0;
        }
    }
    if (Bit(CCU_HMI_222_11, 5 )  == 0  )
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer[1200+96+j]=0;
        }
    }

    if(Bit(CCU_HMI_222_10, 12 )  == 0 )
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer[944+128+j]=0;
        }
    }
    if (Bit(CCU_HMI_222_11, 4 )  == 0  )
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer[1200+128+j]=0;
        }
    }

    if(Bit(CCU_HMI_222_10, 11 )  == 0 )
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer[944+160+j]=0;
        }
    }
    if (Bit(CCU_HMI_222_11, 3 )  == 0  )
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer[1200+160+j]=0;
        }
    }

    if(Bit(CCU_HMI_222_10, 10 )  == 0 )
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer[944+192+j]=0;
        }
    }
    if (Bit(CCU_HMI_222_11, 2 )  == 0  )
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer[1200+192+j]=0;
        }
    }

    if(Bit(CCU_HMI_222_10, 9 )  == 0 )
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer[944+224+j]=0;
        }
    }
    if (Bit(CCU_HMI_222_11, 1 )  == 0  )
    {
        for(int j=0;j<32;j++)
        {
            g_dataBuffer[912+j]=0;
        }
    }


//    if(g_485_comm_err_flg1||g_485_comm_err_flg2==1)
//    {
//        for(int i=0;i<63;i++)
//        {
//            g_dataBuffer[2081+i]=0;
//        }
//    }

           //BCU  Master or Slaver

       if(  (Bit(g_dataBuffer[347+32],11)&&Bit(CCU_HMI_222_9, 12 )==1)||
            (Bit(g_dataBuffer[427+32],11)&&Bit(CCU_HMI_222_9, 11 )==1)      )
       {
           if(Bit(g_dataBuffer[347+32],11)&&Bit(CCU_HMI_222_9, 12 )==1)
           {

               for(int j=0;j<80;j++)
               {
                     g_dataBuffer[3000+j]=g_dataBuffer[288+32+j];
               }
           }
           if(Bit(g_dataBuffer[427+32],11)&&Bit(CCU_HMI_222_9, 11 )==1)
           {

               for(int j=0;j<80;j++)
               {
                     g_dataBuffer[3000+j]=g_dataBuffer[368+32+j];
               }
           }
       }
       else
       {
           if(    (   (Bit(g_dataBuffer[347+32],11)==0)&&  (Bit(CCU_HMI_222_9, 12 )==1) )   ||
                  (   (Bit(g_dataBuffer[427+32],11)==0)&&  (Bit(CCU_HMI_222_9, 11 )==1) )       )
           {
               if((Bit(g_dataBuffer[347+32],11)==0)&&  (Bit(CCU_HMI_222_9, 12 )==1))
               {

                   for(int j=0;j<80;j++)
                   {
                         g_dataBuffer[3000+j]=g_dataBuffer[288+32+j];
                   }
               }
               if((Bit(g_dataBuffer[427+32],11)==0)&&  (Bit(CCU_HMI_222_9, 11 )==1))
               {

                   for(int j=0;j<80;j++)
                   {
                         g_dataBuffer[3000+j]=g_dataBuffer[368+32+j];
                   }
               }
           }
       }

       if(  (Bit(g_dataBuffer[507+32],11)&&Bit(CCU_HMI_222_9, 10 )==1)||
            (Bit(g_dataBuffer[587+32],11)&&Bit(CCU_HMI_222_9, 9 )==1)      )
       {
           if(Bit(g_dataBuffer[507+32],11)&&Bit(CCU_HMI_222_9, 10 )==1)
           {

               for(int j=0;j<80;j++)
               {
                     g_dataBuffer[3080+j]=g_dataBuffer[448+32+j];
               }
           }
           if(Bit(g_dataBuffer[587+32],11)&&Bit(CCU_HMI_222_9, 9 )==1)
           {

               for(int j=0;j<80;j++)
               {
                     g_dataBuffer[3080+j]=g_dataBuffer[528+32+j];
               }
           }

       }
       else
       {
           if(    (   (Bit(g_dataBuffer[507+32],11)==0)&&  (Bit(CCU_HMI_222_9, 10 )==1) )   ||
                  (   (Bit(g_dataBuffer[587+32],11)==0)&&  (Bit(CCU_HMI_222_9, 9 )==1) )       )
           {
               if((Bit(g_dataBuffer[507+32],11)==0)&&  (Bit(CCU_HMI_222_9, 10 )==1))
               {

                   for(int j=0;j<80;j++)
                   {
                         g_dataBuffer[3080+j]=g_dataBuffer[448+32+j];
                   }
               }
               if((Bit(g_dataBuffer[587+32],11)==0)&&  (Bit(CCU_HMI_222_9, 9 )==1))
               {

                   for(int j=0;j<80;j++)
                   {
                         g_dataBuffer[3080+j]=g_dataBuffer[528+32+j];
                   }
               }
           }
       }

        if((g_dataBuffer[945] % 256) == 1)//若MDCU1状态为“主”默认相信MDCU1的数据信息
        {

            for(int j = 0;j < 32;j ++)
            {
                g_dataBuffer[3160 + j] = g_dataBuffer[944 + j];
            }
        }
        else
        {
            if((g_dataBuffer[1201] % 256) == 1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
            {

                for(int j = 0;j < 32;j ++)
                {
                    g_dataBuffer[3160 + j] = g_dataBuffer[1200 + j];
                }
            }
            else
            {
                if(((g_dataBuffer[945]%256)==2)||((g_dataBuffer[1201]%256)==2))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
                {
                    if((g_dataBuffer[945]%256)==2)
                    {
                        if(Bit(g_dataBuffer[944+2],9)==1)
                        {
                            g_dataBuffer[3160+2]=g_dataBuffer[944+2];
                            g_dataBuffer[3160+20]=g_dataBuffer[944+20];
                        }
                        if(Bit(g_dataBuffer[944+3],9)==1)
                        {
                            g_dataBuffer[3160+3]=g_dataBuffer[944+3];
                            g_dataBuffer[3160+21]=g_dataBuffer[944+21];
                        }
                        if(Bit(g_dataBuffer[944+4],9)==1)
                        {
                            g_dataBuffer[3160+4]=g_dataBuffer[944+4];
                            g_dataBuffer[3160+22]=g_dataBuffer[944+22];
                        }
                        if(Bit(g_dataBuffer[944+5],9)==1)
                        {
                            g_dataBuffer[3160+5]=g_dataBuffer[944+5];
                            g_dataBuffer[3160+23]=g_dataBuffer[944+23];
                        }
                        if(Bit(g_dataBuffer[944+6],9)==1)
                        {
                            g_dataBuffer[3160+6]=g_dataBuffer[944+6];
                            g_dataBuffer[3160+24]=g_dataBuffer[944+24];
                        }
                        if(Bit(g_dataBuffer[944+7],9)==1)
                        {
                            g_dataBuffer[3160+7]=g_dataBuffer[944+7];
                            g_dataBuffer[3160+25]=g_dataBuffer[944+25];
                        }
                        if(Bit(g_dataBuffer[944+8],9)==1)
                        {
                            g_dataBuffer[3160+8]=g_dataBuffer[944+8];
                            g_dataBuffer[3160+26]=g_dataBuffer[944+26];
                        }
                        if(Bit(g_dataBuffer[944+9],9)==1)
                        {
                            g_dataBuffer[3160+9]=g_dataBuffer[944+9];
                            g_dataBuffer[3160+27]=g_dataBuffer[944+27];
                        }

                        if(Bit(g_dataBuffer[944+10],12)==1)
                        {
                            g_dataBuffer[3160+10]=g_dataBuffer[944+10];
                            g_dataBuffer[3160+28]=g_dataBuffer[944+28];
                        }
                        if(Bit(g_dataBuffer[944+11],12)==1)
                        {
                            g_dataBuffer[3160+11]=g_dataBuffer[944+11];
                            g_dataBuffer[3160+29]=g_dataBuffer[944+29];
                        }

                    }
                    if((g_dataBuffer[1201]%256)==2)
                    {

                        if(Bit(g_dataBuffer[1200+2],9)==1)
                        {
                            g_dataBuffer[3160+2]=g_dataBuffer[1200+2];
                            g_dataBuffer[3160+20]=g_dataBuffer[1200+20];
                        }
                        if(Bit(g_dataBuffer[1200+3],9)==1)
                        {
                            g_dataBuffer[3160+3]=g_dataBuffer[1200+3];
                            g_dataBuffer[3160+21]=g_dataBuffer[1200+21];
                        }
                        if(Bit(g_dataBuffer[1200+4],9)==1)
                        {
                            g_dataBuffer[3160+4]=g_dataBuffer[1200+4];
                            g_dataBuffer[3160+22]=g_dataBuffer[1200+22];
                        }
                        if(Bit(g_dataBuffer[1200+5],9)==1)
                        {
                            g_dataBuffer[3160+5]=g_dataBuffer[1200+5];
                            g_dataBuffer[3160+23]=g_dataBuffer[1200+23];
                        }
                        if(Bit(g_dataBuffer[1200+6],9)==1)
                        {
                            g_dataBuffer[3160+6]=g_dataBuffer[1200+6];
                            g_dataBuffer[3160+24]=g_dataBuffer[1200+24];
                        }
                        if(Bit(g_dataBuffer[1200+7],9)==1)
                        {
                            g_dataBuffer[3160+7]=g_dataBuffer[1200+7];
                            g_dataBuffer[3160+25]=g_dataBuffer[1200+25];
                        }
                        if(Bit(g_dataBuffer[1200+8],9)==1)
                        {
                            g_dataBuffer[3160+8]=g_dataBuffer[1200+8];
                            g_dataBuffer[3160+26]=g_dataBuffer[1200+26];
                        }
                        if(Bit(g_dataBuffer[1200+9],9)==1)
                        {
                            g_dataBuffer[3160+9]=g_dataBuffer[1200+9];
                            g_dataBuffer[3160+27]=g_dataBuffer[1200+27];
                        }

                        if(Bit(g_dataBuffer[1200+10],12)==1)
                        {
                            g_dataBuffer[3160+10]=g_dataBuffer[1200+10];
                            g_dataBuffer[3160+28]=g_dataBuffer[1200+28];
                        }
                        if(Bit(g_dataBuffer[1200+11],12)==1)
                        {
                            g_dataBuffer[3160+11]=g_dataBuffer[1200+11];
                            g_dataBuffer[3160+29]=g_dataBuffer[1200+29];
                        }
                    }
                }
                else
                {
                //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。
                }

            }
        }

        if((g_dataBuffer[977]%256)==1)//若MDCU1状态为“主”默认相信MDCU1的数据信息
        {

        for(int j=0;j<32;j++)
        {
        g_dataBuffer[3192+j]=g_dataBuffer[976+j];
        }
        }
        else
        {
        if((g_dataBuffer[1233]%256)==1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
        {

        for(int j=0;j<32;j++)
        {
            g_dataBuffer[3192+j]=g_dataBuffer[1232+j];
        }
        }
        else
        {
        if(((g_dataBuffer[977]%256)==2)||((g_dataBuffer[1233]%256)==2))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
        {
          if((g_dataBuffer[977]%256)==2)
          {
              if(Bit(g_dataBuffer[976+2],9)==1)
              {
                  g_dataBuffer[3192+2]=g_dataBuffer[976+2];
                  g_dataBuffer[3192+20]=g_dataBuffer[976+20];
              }
              if(Bit(g_dataBuffer[976+3],9)==1)
              {
                  g_dataBuffer[3192+3]=g_dataBuffer[976+3];
                  g_dataBuffer[3192+21]=g_dataBuffer[976+21];
              }
              if(Bit(g_dataBuffer[976+4],9)==1)
              {
                  g_dataBuffer[3192+4]=g_dataBuffer[976+4];
                  g_dataBuffer[3192+22]=g_dataBuffer[976+22];
              }
              if(Bit(g_dataBuffer[976+5],9)==1)
              {
                  g_dataBuffer[3192+5]=g_dataBuffer[976+5];
                  g_dataBuffer[3192+23]=g_dataBuffer[976+23];
              }
              if(Bit(g_dataBuffer[976+6],9)==1)
              {
                  g_dataBuffer[3192+6]=g_dataBuffer[976+6];
                  g_dataBuffer[3192+24]=g_dataBuffer[976+24];
              }
              if(Bit(g_dataBuffer[976+7],9)==1)
              {
                  g_dataBuffer[3192+7]=g_dataBuffer[976+7];
                  g_dataBuffer[3192+25]=g_dataBuffer[976+25];
              }
              if(Bit(g_dataBuffer[976+8],9)==1)
              {
                  g_dataBuffer[3192+8]=g_dataBuffer[976+8];
                  g_dataBuffer[3192+26]=g_dataBuffer[976+26];
              }
              if(Bit(g_dataBuffer[976+9],9)==1)
              {
                  g_dataBuffer[3192+9]=g_dataBuffer[976+9];
                  g_dataBuffer[3192+27]=g_dataBuffer[976+27];
              }

          }
          if((g_dataBuffer[1233]%256)==2)
          {

              if(Bit(g_dataBuffer[1232+2],9)==1)
              {
                  g_dataBuffer[3192+2]=g_dataBuffer[1232+2];
                  g_dataBuffer[3192+20]=g_dataBuffer[1232+20];
              }
              if(Bit(g_dataBuffer[1232+3],9)==1)
              {
                  g_dataBuffer[3192+3]=g_dataBuffer[1232+3];
                  g_dataBuffer[3192+21]=g_dataBuffer[1232+21];
              }
              if(Bit(g_dataBuffer[1232+4],9)==1)
              {
                  g_dataBuffer[3192+4]=g_dataBuffer[1232+4];
                  g_dataBuffer[3192+22]=g_dataBuffer[1232+22];
              }
              if(Bit(g_dataBuffer[1232+5],9)==1)
              {
                  g_dataBuffer[3192+5]=g_dataBuffer[1232+5];
                  g_dataBuffer[3192+23]=g_dataBuffer[1232+23];
              }
              if(Bit(g_dataBuffer[1232+6],9)==1)
              {
                  g_dataBuffer[3192+6]=g_dataBuffer[1232+6];
                  g_dataBuffer[3192+24]=g_dataBuffer[1232+24];
              }
              if(Bit(g_dataBuffer[1232+7],9)==1)
              {
                  g_dataBuffer[3192+7]=g_dataBuffer[1232+7];
                  g_dataBuffer[3192+25]=g_dataBuffer[1232+25];
              }
              if(Bit(g_dataBuffer[1232+8],9)==1)
              {
                  g_dataBuffer[3192+8]=g_dataBuffer[1232+8];
                  g_dataBuffer[3192+26]=g_dataBuffer[1232+26];
              }
              if(Bit(g_dataBuffer[1232+9],9)==1)
              {
                  g_dataBuffer[3192+9]=g_dataBuffer[1232+9];
                  g_dataBuffer[3192+27]=g_dataBuffer[1232+27];
              }
          }
        }
        else
        {
        //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。
        }

        }
        }

        if((g_dataBuffer[1009]%256)==1)//若MDCU1状态为“主”默认相信MDCU1的数据信息
        {

        for(int j=0;j<32;j++)
        {
        g_dataBuffer[3224+j]=g_dataBuffer[1008+j];
        }
        }
        else
        {
        if((g_dataBuffer[1265]%256)==1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
        {

        for(int j=0;j<32;j++)
        {
            g_dataBuffer[3224+j]=g_dataBuffer[1264+j];
        }
        }
        else
        {
        if(((g_dataBuffer[1009]%256)==2)||((g_dataBuffer[1265]%256)==2))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
        {
          if((g_dataBuffer[1009]%256)==2)
          {
              if(Bit(g_dataBuffer[1008+2],9)==1)
              {
                  g_dataBuffer[3224+2]=g_dataBuffer[1008+2];
                  g_dataBuffer[3224+20]=g_dataBuffer[1008+20];
              }
              if(Bit(g_dataBuffer[1008+3],9)==1)
              {
                  g_dataBuffer[3224+3]=g_dataBuffer[1008+3];
                  g_dataBuffer[3224+21]=g_dataBuffer[1008+21];
              }
              if(Bit(g_dataBuffer[1008+4],9)==1)
              {
                  g_dataBuffer[3224+4]=g_dataBuffer[1008+4];
                  g_dataBuffer[3224+22]=g_dataBuffer[1008+22];
              }
              if(Bit(g_dataBuffer[1008+5],9)==1)
              {
                  g_dataBuffer[3224+5]=g_dataBuffer[1008+5];
                  g_dataBuffer[3224+23]=g_dataBuffer[1008+23];
              }
              if(Bit(g_dataBuffer[1008+6],9)==1)
              {
                  g_dataBuffer[3224+6]=g_dataBuffer[1008+6];
                  g_dataBuffer[3224+24]=g_dataBuffer[1008+24];
              }
              if(Bit(g_dataBuffer[1008+7],9)==1)
              {
                  g_dataBuffer[3224+7]=g_dataBuffer[1008+7];
                  g_dataBuffer[3224+25]=g_dataBuffer[1008+25];
              }
              if(Bit(g_dataBuffer[1008+8],9)==1)
              {
                  g_dataBuffer[3224+8]=g_dataBuffer[1008+8];
                  g_dataBuffer[3224+26]=g_dataBuffer[1008+26];
              }
              if(Bit(g_dataBuffer[1008+9],9)==1)
              {
                  g_dataBuffer[3224+9]=g_dataBuffer[1008+9];
                  g_dataBuffer[3224+27]=g_dataBuffer[1008+27];
              }

          }
          if((g_dataBuffer[1265]%256)==2)
          {

              if(Bit(g_dataBuffer[1264+2],9)==1)
              {
                  g_dataBuffer[3224+2]=g_dataBuffer[1264+2];
                  g_dataBuffer[3224+20]=g_dataBuffer[1264+20];
              }
              if(Bit(g_dataBuffer[1264+3],9)==1)
              {
                  g_dataBuffer[3224+3]=g_dataBuffer[1264+3];
                  g_dataBuffer[3224+21]=g_dataBuffer[1264+21];
              }
              if(Bit(g_dataBuffer[1264+4],9)==1)
              {
                  g_dataBuffer[3224+4]=g_dataBuffer[1264+4];
                  g_dataBuffer[3224+22]=g_dataBuffer[1264+22];
              }
              if(Bit(g_dataBuffer[1264+5],9)==1)
              {
                  g_dataBuffer[3224+5]=g_dataBuffer[1264+5];
                  g_dataBuffer[3224+23]=g_dataBuffer[1264+23];
              }
              if(Bit(g_dataBuffer[1264+6],9)==1)
              {
                  g_dataBuffer[3224+6]=g_dataBuffer[1264+6];
                  g_dataBuffer[3224+24]=g_dataBuffer[1264+24];
              }
              if(Bit(g_dataBuffer[1264+7],9)==1)
              {
                  g_dataBuffer[3224+7]=g_dataBuffer[1264+7];
                  g_dataBuffer[3224+25]=g_dataBuffer[1264+25];
              }
              if(Bit(g_dataBuffer[1264+8],9)==1)
              {
                  g_dataBuffer[3224+8]=g_dataBuffer[1264+8];
                  g_dataBuffer[3224+26]=g_dataBuffer[1264+26];
              }
              if(Bit(g_dataBuffer[1264+9],9)==1)
              {
                  g_dataBuffer[3224+9]=g_dataBuffer[1264+9];
                  g_dataBuffer[3224+27]=g_dataBuffer[1264+27];
              }
          }
        }
        else
        {
        //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。
        }

        }
        }
        if((g_dataBuffer[1041]%256)==1)//若MDCU1状态为“主”默认相信MDCU1的数据信息
        {

        for(int j=0;j<32;j++)
        {
        g_dataBuffer[3256+j]=g_dataBuffer[1040+j];
        }
        }
        else
        {
        if((g_dataBuffer[1297]%256)==1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
        {

        for(int j=0;j<32;j++)
        {
            g_dataBuffer[3256+j]=g_dataBuffer[1296+j];
        }
        }
        else
        {
        if(((g_dataBuffer[1041]%256)==2)||((g_dataBuffer[1297]%256)==2))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
        {
          if((g_dataBuffer[1041]%256)==2)
          {
              if(Bit(g_dataBuffer[1040+2],9)==1)
              {
                  g_dataBuffer[3256+2]=g_dataBuffer[1040+2];
                  g_dataBuffer[3256+20]=g_dataBuffer[1040+20];
              }
              if(Bit(g_dataBuffer[1040+3],9)==1)
              {
                  g_dataBuffer[3256+3]=g_dataBuffer[1040+3];
                  g_dataBuffer[3256+21]=g_dataBuffer[1040+21];
              }
              if(Bit(g_dataBuffer[1040+4],9)==1)
              {
                  g_dataBuffer[3256+4]=g_dataBuffer[1040+4];
                  g_dataBuffer[3256+22]=g_dataBuffer[1040+22];
              }
              if(Bit(g_dataBuffer[1040+5],9)==1)
              {
                  g_dataBuffer[3256+5]=g_dataBuffer[1040+5];
                  g_dataBuffer[3256+23]=g_dataBuffer[1040+23];
              }
              if(Bit(g_dataBuffer[1040+6],9)==1)
              {
                  g_dataBuffer[3256+6]=g_dataBuffer[1040+6];
                  g_dataBuffer[3256+24]=g_dataBuffer[1040+24];
              }
              if(Bit(g_dataBuffer[1040+7],9)==1)
              {
                  g_dataBuffer[3256+7]=g_dataBuffer[1040+7];
                  g_dataBuffer[3256+25]=g_dataBuffer[1040+25];
              }
              if(Bit(g_dataBuffer[1040+8],9)==1)
              {
                  g_dataBuffer[3256+8]=g_dataBuffer[1040+8];
                  g_dataBuffer[3256+26]=g_dataBuffer[1040+26];
              }
              if(Bit(g_dataBuffer[1040+9],9)==1)
              {
                  g_dataBuffer[3256+9]=g_dataBuffer[1040+9];
                  g_dataBuffer[3256+27]=g_dataBuffer[1040+27];
              }

          }
          if((g_dataBuffer[1297]%256)==2)
          {

              if(Bit(g_dataBuffer[1296+2],9)==1)
              {
                  g_dataBuffer[3256+2]=g_dataBuffer[1296+2];
                  g_dataBuffer[3256+20]=g_dataBuffer[1296+20];
              }
              if(Bit(g_dataBuffer[1296+3],9)==1)
              {
                  g_dataBuffer[3256+3]=g_dataBuffer[1296+3];
                  g_dataBuffer[3256+21]=g_dataBuffer[1296+21];
              }
              if(Bit(g_dataBuffer[1296+4],9)==1)
              {
                  g_dataBuffer[3256+4]=g_dataBuffer[1296+4];
                  g_dataBuffer[3256+22]=g_dataBuffer[1296+22];
              }
              if(Bit(g_dataBuffer[1296+5],9)==1)
              {
                  g_dataBuffer[3256+5]=g_dataBuffer[1296+5];
                  g_dataBuffer[3256+23]=g_dataBuffer[1296+23];
              }
              if(Bit(g_dataBuffer[1296+6],9)==1)
              {
                  g_dataBuffer[3256+6]=g_dataBuffer[1296+6];
                  g_dataBuffer[3256+24]=g_dataBuffer[1296+24];
              }
              if(Bit(g_dataBuffer[1296+7],9)==1)
              {
                  g_dataBuffer[3256+7]=g_dataBuffer[1296+7];
                  g_dataBuffer[3256+25]=g_dataBuffer[1296+25];
              }
              if(Bit(g_dataBuffer[1296+8],9)==1)
              {
                  g_dataBuffer[3256+8]=g_dataBuffer[1296+8];
                  g_dataBuffer[3256+26]=g_dataBuffer[1296+26];
              }
              if(Bit(g_dataBuffer[1296+9],9)==1)
              {
                  g_dataBuffer[3256+9]=g_dataBuffer[1296+9];
                  g_dataBuffer[3256+27]=g_dataBuffer[1296+27];
              }
          }
        }
        else
        {
        //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。
        }

        }
        }
        if((g_dataBuffer[1073]%256)==1)//若MDCU1状态为“主”默认相信MDCU1的数据信息
        {

        for(int j=0;j<32;j++)
        {
        g_dataBuffer[3288+j]=g_dataBuffer[1072+j];
        }
        }
        else
        {
        if((g_dataBuffer[1329]%256)==1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
        {

        for(int j=0;j<32;j++)
        {
            g_dataBuffer[3288+j]=g_dataBuffer[1328+j];
        }
        }
        else
        {
        if(((g_dataBuffer[1073]%256)==2)||((g_dataBuffer[1329]%256)==2))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
        {
          if((g_dataBuffer[1073]%256)==2)
          {
              if(Bit(g_dataBuffer[1072+2],9)==1)
              {
                  g_dataBuffer[3288+2]=g_dataBuffer[1072+2];
                  g_dataBuffer[3288+20]=g_dataBuffer[1072+20];
              }
              if(Bit(g_dataBuffer[1072+3],9)==1)
              {
                  g_dataBuffer[3288+3]=g_dataBuffer[1072+3];
                  g_dataBuffer[3288+21]=g_dataBuffer[1072+21];
              }
              if(Bit(g_dataBuffer[1072+4],9)==1)
              {
                  g_dataBuffer[3288+4]=g_dataBuffer[1072+4];
                  g_dataBuffer[3288+22]=g_dataBuffer[1072+22];
              }
              if(Bit(g_dataBuffer[1072+5],9)==1)
              {
                  g_dataBuffer[3288+5]=g_dataBuffer[1072+5];
                  g_dataBuffer[3288+23]=g_dataBuffer[1072+23];
              }
              if(Bit(g_dataBuffer[1072+6],9)==1)
              {
                  g_dataBuffer[3288+6]=g_dataBuffer[1072+6];
                  g_dataBuffer[3288+24]=g_dataBuffer[1072+24];
              }
              if(Bit(g_dataBuffer[1072+7],9)==1)
              {
                  g_dataBuffer[3288+7]=g_dataBuffer[1072+7];
                  g_dataBuffer[3288+25]=g_dataBuffer[1072+25];
              }
              if(Bit(g_dataBuffer[1072+8],9)==1)
              {
                  g_dataBuffer[3288+8]=g_dataBuffer[1072+8];
                  g_dataBuffer[3288+26]=g_dataBuffer[1072+26];
              }
              if(Bit(g_dataBuffer[1072+9],9)==1)
              {
                  g_dataBuffer[3288+9]=g_dataBuffer[1072+9];
                  g_dataBuffer[3288+27]=g_dataBuffer[1072+27];
              }

          }
          if((g_dataBuffer[1329]%256)==2)
          {

              if(Bit(g_dataBuffer[1328+2],9)==1)
              {
                  g_dataBuffer[3288+2]=g_dataBuffer[1328+2];
                  g_dataBuffer[3288+20]=g_dataBuffer[1328+20];
              }
              if(Bit(g_dataBuffer[1328+3],9)==1)
              {
                  g_dataBuffer[3288+3]=g_dataBuffer[1328+3];
                  g_dataBuffer[3288+21]=g_dataBuffer[1328+21];
              }
              if(Bit(g_dataBuffer[1328+4],9)==1)
              {
                  g_dataBuffer[3288+4]=g_dataBuffer[1328+4];
                  g_dataBuffer[3288+22]=g_dataBuffer[1328+22];
              }
              if(Bit(g_dataBuffer[1328+5],9)==1)
              {
                  g_dataBuffer[3288+5]=g_dataBuffer[1328+5];
                  g_dataBuffer[3288+23]=g_dataBuffer[1328+23];
              }
              if(Bit(g_dataBuffer[1328+6],9)==1)
              {
                  g_dataBuffer[3288+6]=g_dataBuffer[1328+6];
                  g_dataBuffer[3288+24]=g_dataBuffer[1328+24];
              }
              if(Bit(g_dataBuffer[1328+7],9)==1)
              {
                  g_dataBuffer[3288+7]=g_dataBuffer[1328+7];
                  g_dataBuffer[3288+25]=g_dataBuffer[1328+25];
              }
              if(Bit(g_dataBuffer[1328+8],9)==1)
              {
                  g_dataBuffer[3288+8]=g_dataBuffer[1328+8];
                  g_dataBuffer[3288+26]=g_dataBuffer[1328+26];
              }
              if(Bit(g_dataBuffer[1328+9],9)==1)
              {
                  g_dataBuffer[3288+9]=g_dataBuffer[1328+9];
                  g_dataBuffer[3288+27]=g_dataBuffer[1328+27];
              }
          }
        }
        else
        {
        //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。
        }

        }
        }
        if((g_dataBuffer[1105]%256)==1)//若MDCU1状态为“主”默认相信MDCU1的数据信息
        {

        for(int j=0;j<32;j++)
        {
        g_dataBuffer[3320+j]=g_dataBuffer[1104+j];
        }
        }
        else
        {
        if((g_dataBuffer[1361]%256)==1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
        {

        for(int j=0;j<32;j++)
        {
            g_dataBuffer[3320+j]=g_dataBuffer[1360+j];
        }
        }
        else
        {
        if(((g_dataBuffer[1105]%256)==2)||((g_dataBuffer[1361]%256)==2))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
        {
          if((g_dataBuffer[1105]%256)==2)
          {
              if(Bit(g_dataBuffer[1104+2],9)==1)
              {
                  g_dataBuffer[3320+2]=g_dataBuffer[1104+2];
                  g_dataBuffer[3320+20]=g_dataBuffer[1104+20];
              }
              if(Bit(g_dataBuffer[1104+3],9)==1)
              {
                  g_dataBuffer[3320+3]=g_dataBuffer[1104+3];
                  g_dataBuffer[3320+21]=g_dataBuffer[1104+21];
              }
              if(Bit(g_dataBuffer[1104+4],9)==1)
              {
                  g_dataBuffer[3320+4]=g_dataBuffer[1104+4];
                  g_dataBuffer[3320+22]=g_dataBuffer[1104+22];
              }
              if(Bit(g_dataBuffer[1104+5],9)==1)
              {
                  g_dataBuffer[3320+5]=g_dataBuffer[1104+5];
                  g_dataBuffer[3320+23]=g_dataBuffer[1104+23];
              }
              if(Bit(g_dataBuffer[1104+6],9)==1)
              {
                  g_dataBuffer[3320+6]=g_dataBuffer[1104+6];
                  g_dataBuffer[3320+24]=g_dataBuffer[1104+24];
              }
              if(Bit(g_dataBuffer[1104+7],9)==1)
              {
                  g_dataBuffer[3320+7]=g_dataBuffer[1104+7];
                  g_dataBuffer[3320+25]=g_dataBuffer[1104+25];
              }
              if(Bit(g_dataBuffer[1104+8],9)==1)
              {
                  g_dataBuffer[3320+8]=g_dataBuffer[1104+8];
                  g_dataBuffer[3320+26]=g_dataBuffer[1104+26];
              }
              if(Bit(g_dataBuffer[1104+9],9)==1)
              {
                  g_dataBuffer[3320+9]=g_dataBuffer[1104+9];
                  g_dataBuffer[3320+27]=g_dataBuffer[1104+27];
              }

          }
          if((g_dataBuffer[1361]%256)==2)
          {

              if(Bit(g_dataBuffer[1360+2],9)==1)
              {
                  g_dataBuffer[3320+2]=g_dataBuffer[1360+2];
                  g_dataBuffer[3320+20]=g_dataBuffer[1360+20];
              }
              if(Bit(g_dataBuffer[1360+3],9)==1)
              {
                  g_dataBuffer[3320+3]=g_dataBuffer[1360+3];
                  g_dataBuffer[3320+21]=g_dataBuffer[1360+21];
              }
              if(Bit(g_dataBuffer[1360+4],9)==1)
              {
                  g_dataBuffer[3320+4]=g_dataBuffer[1360+4];
                  g_dataBuffer[3320+22]=g_dataBuffer[1360+22];
              }
              if(Bit(g_dataBuffer[1360+5],9)==1)
              {
                  g_dataBuffer[3320+5]=g_dataBuffer[1360+5];
                  g_dataBuffer[3320+23]=g_dataBuffer[1360+23];
              }
              if(Bit(g_dataBuffer[1360+6],9)==1)
              {
                  g_dataBuffer[3320+6]=g_dataBuffer[1360+6];
                  g_dataBuffer[3320+24]=g_dataBuffer[1360+24];
              }
              if(Bit(g_dataBuffer[1360+7],9)==1)
              {
                  g_dataBuffer[3320+7]=g_dataBuffer[1360+7];
                  g_dataBuffer[3320+25]=g_dataBuffer[1360+25];
              }
              if(Bit(g_dataBuffer[1360+8],9)==1)
              {
                  g_dataBuffer[3320+8]=g_dataBuffer[1360+8];
                  g_dataBuffer[3320+26]=g_dataBuffer[1360+26];
              }
              if(Bit(g_dataBuffer[1360+9],9)==1)
              {
                  g_dataBuffer[3320+9]=g_dataBuffer[1360+9];
                  g_dataBuffer[3320+27]=g_dataBuffer[1360+27];
              }
          }
        }
        else
        {
        //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。
        }

        }
        }
        if((g_dataBuffer[1137]%256)==1)//若MDCU1状态为“主”默认相信MDCU1的数据信息
        {

        for(int j=0;j<32;j++)
        {
        g_dataBuffer[3352+j]=g_dataBuffer[1136+j];
        }
        }
        else
        {
        if((g_dataBuffer[1393]%256)==1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
        {

        for(int j=0;j<32;j++)
        {
            g_dataBuffer[3352+j]=g_dataBuffer[1392+j];
        }
        }
        else
        {
        if(((g_dataBuffer[1137]%256)==2)||((g_dataBuffer[1393]%256)==2))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
        {
          if((g_dataBuffer[1137]%256)==2)
          {
              if(Bit(g_dataBuffer[1136+2],9)==1)
              {
                  g_dataBuffer[3352+2]=g_dataBuffer[1136+2];
                  g_dataBuffer[3352+20]=g_dataBuffer[1136+20];
              }
              if(Bit(g_dataBuffer[1136+3],9)==1)
              {
                  g_dataBuffer[3352+3]=g_dataBuffer[1136+3];
                  g_dataBuffer[3352+21]=g_dataBuffer[1136+21];
              }
              if(Bit(g_dataBuffer[1136+4],9)==1)
              {
                  g_dataBuffer[3352+4]=g_dataBuffer[1136+4];
                  g_dataBuffer[3352+22]=g_dataBuffer[1136+22];
              }
              if(Bit(g_dataBuffer[1136+5],9)==1)
              {
                  g_dataBuffer[3352+5]=g_dataBuffer[1136+5];
                  g_dataBuffer[3352+23]=g_dataBuffer[1136+23];
              }
              if(Bit(g_dataBuffer[1136+6],9)==1)
              {
                  g_dataBuffer[3352+6]=g_dataBuffer[1136+6];
                  g_dataBuffer[3352+24]=g_dataBuffer[1136+24];
              }
              if(Bit(g_dataBuffer[1136+7],9)==1)
              {
                  g_dataBuffer[3352+7]=g_dataBuffer[1136+7];
                  g_dataBuffer[3352+25]=g_dataBuffer[1136+25];
              }
              if(Bit(g_dataBuffer[1136+8],9)==1)
              {
                  g_dataBuffer[3352+8]=g_dataBuffer[1136+8];
                  g_dataBuffer[3352+26]=g_dataBuffer[1136+26];
              }
              if(Bit(g_dataBuffer[1136+9],9)==1)
              {
                  g_dataBuffer[3352+9]=g_dataBuffer[1136+9];
                  g_dataBuffer[3352+27]=g_dataBuffer[1136+27];
              }

          }
          if((g_dataBuffer[1393]%256)==2)
          {

              if(Bit(g_dataBuffer[1392+2],9)==1)
              {
                  g_dataBuffer[3352+2]=g_dataBuffer[1392+2];
                  g_dataBuffer[3352+20]=g_dataBuffer[1392+20];
              }
              if(Bit(g_dataBuffer[1392+3],9)==1)
              {
                  g_dataBuffer[3352+3]=g_dataBuffer[1392+3];
                  g_dataBuffer[3352+21]=g_dataBuffer[1392+21];
              }
              if(Bit(g_dataBuffer[1392+4],9)==1)
              {
                  g_dataBuffer[3352+4]=g_dataBuffer[1392+4];
                  g_dataBuffer[3352+22]=g_dataBuffer[1392+22];
              }
              if(Bit(g_dataBuffer[1392+5],9)==1)
              {
                  g_dataBuffer[3352+5]=g_dataBuffer[1392+5];
                  g_dataBuffer[3352+23]=g_dataBuffer[1392+23];
              }
              if(Bit(g_dataBuffer[1392+6],9)==1)
              {
                  g_dataBuffer[3352+6]=g_dataBuffer[1392+6];
                  g_dataBuffer[3352+24]=g_dataBuffer[1392+24];
              }
              if(Bit(g_dataBuffer[1392+7],9)==1)
              {
                  g_dataBuffer[3352+7]=g_dataBuffer[1392+7];
                  g_dataBuffer[3352+25]=g_dataBuffer[1392+25];
              }
              if(Bit(g_dataBuffer[1392+8],9)==1)
              {
                  g_dataBuffer[3352+8]=g_dataBuffer[1392+8];
                  g_dataBuffer[3352+26]=g_dataBuffer[1392+26];
              }
              if(Bit(g_dataBuffer[1392+9],9)==1)
              {
                  g_dataBuffer[3352+9]=g_dataBuffer[1392+9];
                  g_dataBuffer[3352+27]=g_dataBuffer[1392+27];
              }
          }
        }
        else
        {
        //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。
        }

        }
        }

        if((g_dataBuffer[1169]%256)==1)//若MDCU1状态为“主”默认相信MDCU1的数据信息
        {

        for(int j=0;j<32;j++)
        {
        g_dataBuffer[3384+j]=g_dataBuffer[1168+j];
        }
        }
        else
        {
        if((g_dataBuffer[913]%256)==1)//若MDCU1状态为“部分主”或者“故障”，MDCU2状态为“主”，则进行转换，从信任MDCU1的数据转换为信任MDCU2的数据
        {

        for(int j=0;j<32;j++)
        {
            g_dataBuffer[3384+j]=g_dataBuffer[912+j];
        }
        }
        else
        {
        if(((g_dataBuffer[1169]%256)==2)||((g_dataBuffer[913]%256)==2))//若MDCU1与MDCU2状态均为“部分主”，TCMS则综合两个MDCU的可信数据得到有效地车门信息
        {
          if((g_dataBuffer[1169]%256)==2)
          {
              if(Bit(g_dataBuffer[1168+2],9)==1)
              {
                  g_dataBuffer[3384+2]=g_dataBuffer[1168+2];
                  g_dataBuffer[3384+20]=g_dataBuffer[1168+20];
              }
              if(Bit(g_dataBuffer[1168+3],9)==1)
              {
                  g_dataBuffer[3384+3]=g_dataBuffer[1168+3];
                  g_dataBuffer[3384+21]=g_dataBuffer[1168+21];
              }
              if(Bit(g_dataBuffer[1168+4],9)==1)
              {
                  g_dataBuffer[3384+4]=g_dataBuffer[1168+4];
                  g_dataBuffer[3384+22]=g_dataBuffer[1168+22];
              }
              if(Bit(g_dataBuffer[1168+5],9)==1)
              {
                  g_dataBuffer[3384+5]=g_dataBuffer[1168+5];
                  g_dataBuffer[3384+23]=g_dataBuffer[1168+23];
              }
              if(Bit(g_dataBuffer[1168+6],9)==1)
              {
                  g_dataBuffer[3384+6]=g_dataBuffer[1168+6];
                  g_dataBuffer[3384+24]=g_dataBuffer[1168+24];
              }
              if(Bit(g_dataBuffer[1168+7],9)==1)
              {
                  g_dataBuffer[3384+7]=g_dataBuffer[1168+7];
                  g_dataBuffer[3384+25]=g_dataBuffer[1168+25];
              }
              if(Bit(g_dataBuffer[1168+8],9)==1)
              {
                  g_dataBuffer[3384+8]=g_dataBuffer[1168+8];
                  g_dataBuffer[3384+26]=g_dataBuffer[1168+26];
              }
              if(Bit(g_dataBuffer[1168+9],9)==1)
              {
                  g_dataBuffer[3384+9]=g_dataBuffer[1168+9];
                  g_dataBuffer[3384+27]=g_dataBuffer[1168+27];
              }
              if(Bit(g_dataBuffer[1168+10],12)==1)
              {
                  g_dataBuffer[3384+10]=g_dataBuffer[1168+10];
                  g_dataBuffer[3384+28]=g_dataBuffer[1168+28];
              }
              if(Bit(g_dataBuffer[1168+11],12)==1)
              {
                  g_dataBuffer[3384+11]=g_dataBuffer[1168+11];
                  g_dataBuffer[3384+29]=g_dataBuffer[1168+29];
              }

          }
          if((g_dataBuffer[913]%256)==2)
          {

              if(Bit(g_dataBuffer[912+2],9)==1)
              {
                  g_dataBuffer[3384+2]=g_dataBuffer[912+2];
                  g_dataBuffer[3384+20]=g_dataBuffer[912+20];
              }
              if(Bit(g_dataBuffer[912+3],9)==1)
              {
                  g_dataBuffer[3384+3]=g_dataBuffer[912+3];
                  g_dataBuffer[3384+21]=g_dataBuffer[912+21];
              }
              if(Bit(g_dataBuffer[912+4],9)==1)
              {
                  g_dataBuffer[3384+4]=g_dataBuffer[912+4];
                  g_dataBuffer[3384+22]=g_dataBuffer[912+22];
              }
              if(Bit(g_dataBuffer[912+5],9)==1)
              {
                  g_dataBuffer[3384+5]=g_dataBuffer[912+5];
                  g_dataBuffer[3384+23]=g_dataBuffer[912+23];
              }
              if(Bit(g_dataBuffer[912+6],9)==1)
              {
                  g_dataBuffer[3384+6]=g_dataBuffer[912+6];
                  g_dataBuffer[3384+24]=g_dataBuffer[912+24];
              }
              if(Bit(g_dataBuffer[912+7],9)==1)
              {
                  g_dataBuffer[3384+7]=g_dataBuffer[912+7];
                  g_dataBuffer[3384+25]=g_dataBuffer[912+25];
              }
              if(Bit(g_dataBuffer[912+8],9)==1)
              {
                  g_dataBuffer[3384+8]=g_dataBuffer[912+8];
                  g_dataBuffer[3384+26]=g_dataBuffer[912+26];
              }
              if(Bit(g_dataBuffer[912+9],9)==1)
              {
                  g_dataBuffer[3384+9]=g_dataBuffer[912+9];
                  g_dataBuffer[3384+27]=g_dataBuffer[912+27];
              }
              if(Bit(g_dataBuffer[912+10],12)==1)
              {
                  g_dataBuffer[3384+10]=g_dataBuffer[912+10];
                  g_dataBuffer[3384+28]=g_dataBuffer[912+28];
              }
              if(Bit(g_dataBuffer[912+11],12)==1)
              {
                  g_dataBuffer[3384+11]=g_dataBuffer[912+11];
                  g_dataBuffer[3384+29]=g_dataBuffer[912+29];
              }
          }
        }
        else
        {
        //若两个MDCU状态均为“故障”，则门控系统无法向TCMS提供有效数据。
        }

        }
        }

        //pis  master? slave ?
        if((Bit(g_dataBuffer[1602],8)&&Bit(CCU_HMI_222_16, 8 )) ==1)
        {
            for(int j=0;j<32;j++)
            {
                g_dataBuffer[3416+j]=g_dataBuffer[1584+j];
            }
            PIS_Master_9i0_1= g_dataBuffer[3416];
            PIS_Master_9i0_2= g_dataBuffer[3417];
            PIS_Master_9i0_3= g_dataBuffer[3418];
            PIS_Master_9i0_4= g_dataBuffer[3419];
            PIS_Master_9i0_5= g_dataBuffer[3420];
            PIS_Master_9i0_6= g_dataBuffer[3421];
            PIS_Master_9i0_7= g_dataBuffer[3422];
            PIS_Master_9i0_8= g_dataBuffer[3423];
            PIS_Master_9i0_9= g_dataBuffer[3424];
            PIS_Master_9i0_10= g_dataBuffer[3425];
            PIS_Master_9i0_11= g_dataBuffer[3426];
            PIS_Master_9i0_12= g_dataBuffer[3427];
            PIS_Master_9i0_13= g_dataBuffer[3428];
            PIS_Master_9i0_14= g_dataBuffer[3429];
            PIS_Master_9i0_15= g_dataBuffer[3430];
            PIS_Master_9i0_16= g_dataBuffer[3431];

            PIS_Master_9i1_1= g_dataBuffer[3432];
            PIS_Master_9i1_2= g_dataBuffer[3433];
            PIS_Master_9i1_3= g_dataBuffer[3434];
            PIS_Master_9i1_4= g_dataBuffer[3435];
            PIS_Master_9i1_5= g_dataBuffer[3436];
            PIS_Master_9i1_6= g_dataBuffer[3437];
            PIS_Master_9i1_7= g_dataBuffer[3438];
            PIS_Master_9i1_8= g_dataBuffer[3439];
            PIS_Master_9i1_9= g_dataBuffer[3440];
            PIS_Master_9i1_10= g_dataBuffer[3441];
            PIS_Master_9i1_11= g_dataBuffer[3442];
            PIS_Master_9i1_12= g_dataBuffer[3443];
            PIS_Master_9i1_13= g_dataBuffer[3444];
            PIS_Master_9i1_14= g_dataBuffer[3445];
            PIS_Master_9i1_15= g_dataBuffer[3446];
            PIS_Master_9i1_16= g_dataBuffer[3447];
        }
        else
        {
            if((Bit(g_dataBuffer[1634],8)&&Bit(CCU_HMI_222_16, 7 ))==1)
            {
                for(int j=0;j<32;j++)
                {
                    g_dataBuffer[3416+j]=g_dataBuffer[1616+j];
                }

                PIS_Master_9i0_1= g_dataBuffer[3416];
                PIS_Master_9i0_2= g_dataBuffer[3417];
                PIS_Master_9i0_3= g_dataBuffer[3418];
                PIS_Master_9i0_4= g_dataBuffer[3419];
                PIS_Master_9i0_5= g_dataBuffer[3420];
                PIS_Master_9i0_6= g_dataBuffer[3421];
                PIS_Master_9i0_7= g_dataBuffer[3422];
                PIS_Master_9i0_8= g_dataBuffer[3423];
                PIS_Master_9i0_9= g_dataBuffer[3424];
                PIS_Master_9i0_10= g_dataBuffer[3425];
                PIS_Master_9i0_11= g_dataBuffer[3426];
                PIS_Master_9i0_12= g_dataBuffer[3427];
                PIS_Master_9i0_13= g_dataBuffer[3428];
                PIS_Master_9i0_14= g_dataBuffer[3429];
                PIS_Master_9i0_15= g_dataBuffer[3430];
                PIS_Master_9i0_16= g_dataBuffer[3431];

                PIS_Master_9i1_1= g_dataBuffer[3432];
                PIS_Master_9i1_2= g_dataBuffer[3433];
                PIS_Master_9i1_3= g_dataBuffer[3434];
                PIS_Master_9i1_4= g_dataBuffer[3435];
                PIS_Master_9i1_5= g_dataBuffer[3436];
                PIS_Master_9i1_6= g_dataBuffer[3437];
                PIS_Master_9i1_7= g_dataBuffer[3438];
                PIS_Master_9i1_8= g_dataBuffer[3439];
                PIS_Master_9i1_9= g_dataBuffer[3440];
                PIS_Master_9i1_10= g_dataBuffer[3441];
                PIS_Master_9i1_11= g_dataBuffer[3442];
                PIS_Master_9i1_12= g_dataBuffer[3443];
                PIS_Master_9i1_13= g_dataBuffer[3444];
                PIS_Master_9i1_14= g_dataBuffer[3445];
                PIS_Master_9i1_15= g_dataBuffer[3446];
                PIS_Master_9i1_16= g_dataBuffer[3447];
            }

        }

        //司机室两端的FAS数据相或

        g_dataBuffer[3448]= g_dataBuffer[1456+256]|g_dataBuffer[1472+256];
        g_dataBuffer[3449]= g_dataBuffer[1457+256]|g_dataBuffer[1473+256];
        g_dataBuffer[3450]= g_dataBuffer[1458+256]|g_dataBuffer[1474+256];
        g_dataBuffer[3451]= g_dataBuffer[1459+256]|g_dataBuffer[1475+256];
        g_dataBuffer[3452]= g_dataBuffer[1460+256]|g_dataBuffer[1476+256];
        g_dataBuffer[3453]= g_dataBuffer[1461+256]|g_dataBuffer[1477+256];
        g_dataBuffer[3454]= g_dataBuffer[1462+256]|g_dataBuffer[1478+256];
        g_dataBuffer[3455]= g_dataBuffer[1463+256]|g_dataBuffer[1479+256];
        g_dataBuffer[3456]= g_dataBuffer[1464+256]|g_dataBuffer[1480+256];
        g_dataBuffer[3457]= g_dataBuffer[1465+256]|g_dataBuffer[1481+256];
        g_dataBuffer[3458]= g_dataBuffer[1466+256]|g_dataBuffer[1482+256];
        g_dataBuffer[3459]= g_dataBuffer[1467+256]|g_dataBuffer[1483+256];
        g_dataBuffer[3460]= g_dataBuffer[1468+256]|g_dataBuffer[1484+256];
        g_dataBuffer[3461]= g_dataBuffer[1469+256]|g_dataBuffer[1485+256];
        g_dataBuffer[3462]= g_dataBuffer[1470+256]|g_dataBuffer[1486+256];
        g_dataBuffer[3463]= g_dataBuffer[1471+256]|g_dataBuffer[1487+256];

        FAS_Master_Bi0_1= g_dataBuffer[3448];
        FAS_Master_Bi0_2= g_dataBuffer[3449];
        FAS_Master_Bi0_3= g_dataBuffer[3450];
        FAS_Master_Bi0_4= g_dataBuffer[3451];
        FAS_Master_Bi0_5= g_dataBuffer[3452];
        FAS_Master_Bi0_6= g_dataBuffer[3453];
        FAS_Master_Bi0_7= g_dataBuffer[3454];
        FAS_Master_Bi0_8= g_dataBuffer[3455];
        FAS_Master_Bi0_9= g_dataBuffer[3456];
        FAS_Master_Bi0_10= g_dataBuffer[3457];
        FAS_Master_Bi0_11= g_dataBuffer[3458];
        FAS_Master_Bi0_12= g_dataBuffer[3459];
        FAS_Master_Bi0_13= g_dataBuffer[3460];
        FAS_Master_Bi0_14= g_dataBuffer[3461];
        FAS_Master_Bi0_15= g_dataBuffer[3462];
        FAS_Master_Bi0_16= g_dataBuffer[3463];


    DI_110_1= g_dataBuffer[0+16];
    DI_110_2= g_dataBuffer[1+16];
    DI_110_3= g_dataBuffer[2+16];
    DI_110_4= g_dataBuffer[3+16];
    DI_110_5= g_dataBuffer[4+16];
    DI_110_6= g_dataBuffer[5+16];
    DI_110_7= g_dataBuffer[6+16];
    DI_110_8= g_dataBuffer[7+16];
    DI_110_9= g_dataBuffer[8+16];
    DI_110_10= g_dataBuffer[9+16];
    DI_110_11= g_dataBuffer[10+16];
    DI_110_12= g_dataBuffer[11+16];
    DI_110_13= g_dataBuffer[12+16];
    DI_110_14= g_dataBuffer[13+16];
    DI_110_15= g_dataBuffer[14+16];
    DI_110_16= g_dataBuffer[15+16];

    AX_114_1= g_dataBuffer[16+16];
    AX_114_2= g_dataBuffer[17+16];
    AX_114_3= g_dataBuffer[18+16];
    AX_114_4= g_dataBuffer[19+16];
    AX_114_5= g_dataBuffer[20+16];
    AX_114_6= g_dataBuffer[21+16];
    AX_114_7= g_dataBuffer[22+16];
    AX_114_8= g_dataBuffer[23+16];
    AX_114_9= g_dataBuffer[24+16];
    AX_114_10= g_dataBuffer[25+16];
    AX_114_11= g_dataBuffer[26+16];
    AX_114_12= g_dataBuffer[27+16];
    AX_114_13= g_dataBuffer[28+16];
    AX_114_14= g_dataBuffer[29+16];
    AX_114_15= g_dataBuffer[30+16];
    AX_114_16= g_dataBuffer[31+16];

    DI_120_1= g_dataBuffer[32+16];
    DI_120_2= g_dataBuffer[33+16];
    DI_120_3= g_dataBuffer[34+16];
    DI_120_4= g_dataBuffer[35+16];
    DI_120_5= g_dataBuffer[36+16];
    DI_120_6= g_dataBuffer[37+16];
    DI_120_7= g_dataBuffer[38+16];
    DI_120_8= g_dataBuffer[39+16];
    DI_120_9= g_dataBuffer[40+16];
    DI_120_10= g_dataBuffer[41+16];
    DI_120_11= g_dataBuffer[42+16];
    DI_120_12= g_dataBuffer[43+16];
    DI_120_13= g_dataBuffer[44+16];
    DI_120_14= g_dataBuffer[45+16];
    DI_120_15= g_dataBuffer[46+16];
    DI_120_16= g_dataBuffer[47+16];

    DI_130_1= g_dataBuffer[48+16];
    DI_130_2= g_dataBuffer[49+16];
    DI_130_3= g_dataBuffer[50+16];
    DI_130_4= g_dataBuffer[51+16];
    DI_130_5= g_dataBuffer[52+16];
    DI_130_6= g_dataBuffer[53+16];
    DI_130_7= g_dataBuffer[54+16];
    DI_130_8= g_dataBuffer[55+16];
    DI_130_9= g_dataBuffer[56+16];
    DI_130_10= g_dataBuffer[57+16];
    DI_130_11= g_dataBuffer[58+16];
    DI_130_12= g_dataBuffer[59+16];
    DI_130_13= g_dataBuffer[60+16];
    DI_130_14= g_dataBuffer[61+16];
    DI_130_15= g_dataBuffer[62+16];
    DI_130_16= g_dataBuffer[63+16];

    DI_140_1= g_dataBuffer[64+16];
    DI_140_2= g_dataBuffer[65+16];
    DI_140_3= g_dataBuffer[66+16];
    DI_140_4= g_dataBuffer[67+16];
    DI_140_5= g_dataBuffer[68+16];
    DI_140_6= g_dataBuffer[69+16];
    DI_140_7= g_dataBuffer[70+16];
    DI_140_8= g_dataBuffer[71+16];
    DI_140_9= g_dataBuffer[72+16];
    DI_140_10= g_dataBuffer[73+16];
    DI_140_11= g_dataBuffer[74+16];
    DI_140_12= g_dataBuffer[75+16];
    DI_140_13= g_dataBuffer[76+16];
    DI_140_14= g_dataBuffer[77+16];
    DI_140_15= g_dataBuffer[78+16];
    DI_140_16= g_dataBuffer[79+16];

    DI_150_1= g_dataBuffer[80+16];
    DI_150_2= g_dataBuffer[81+16];
    DI_150_3= g_dataBuffer[82+16];
    DI_150_4= g_dataBuffer[83+16];
    DI_150_5= g_dataBuffer[84+16];
    DI_150_6= g_dataBuffer[85+16];
    DI_150_7= g_dataBuffer[86+16];
    DI_150_8= g_dataBuffer[87+16];
    DI_150_9= g_dataBuffer[88+16];
    DI_150_10= g_dataBuffer[89+16];
    DI_150_11= g_dataBuffer[90+16];
    DI_150_12= g_dataBuffer[91+16];
    DI_150_13= g_dataBuffer[92+16];
    DI_150_14= g_dataBuffer[93+16];
    DI_150_15= g_dataBuffer[94+16];
    DI_150_16= g_dataBuffer[95+16];

    DI_160_1= g_dataBuffer[96+16];
    DI_160_2= g_dataBuffer[97+16];
    DI_160_3= g_dataBuffer[98+16];
    DI_160_4= g_dataBuffer[99+16];
    DI_160_5= g_dataBuffer[100+16];
    DI_160_6= g_dataBuffer[101+16];
    DI_160_7= g_dataBuffer[102+16];
    DI_160_8= g_dataBuffer[103+16];
    DI_160_9= g_dataBuffer[104+16];
    DI_160_10= g_dataBuffer[105+16];
    DI_160_11= g_dataBuffer[106+16];
    DI_160_12= g_dataBuffer[107+16];
    DI_160_13= g_dataBuffer[108+16];
    DI_160_14= g_dataBuffer[109+16];
    DI_160_15= g_dataBuffer[110+16];
    DI_160_16= g_dataBuffer[111+16];

    DI_170_1= g_dataBuffer[112+16];
    DI_170_2= g_dataBuffer[113+16];
    DI_170_3= g_dataBuffer[114+16];
    DI_170_4= g_dataBuffer[115+16];
    DI_170_5= g_dataBuffer[116+16];
    DI_170_6= g_dataBuffer[117+16];
    DI_170_7= g_dataBuffer[118+16];
    DI_170_8= g_dataBuffer[119+16];
    DI_170_9= g_dataBuffer[120+16];
    DI_170_10= g_dataBuffer[121+16];
    DI_170_11= g_dataBuffer[122+16];
    DI_170_12= g_dataBuffer[123+16];
    DI_170_13= g_dataBuffer[124+16];
    DI_170_14= g_dataBuffer[125+16];
    DI_170_15= g_dataBuffer[126+16];
    DI_170_16= g_dataBuffer[127+16];

    DI_180_1= g_dataBuffer[128+16];
    DI_180_2= g_dataBuffer[129+16];
    DI_180_3= g_dataBuffer[130+16];
    DI_180_4= g_dataBuffer[131+16];
    DI_180_5= g_dataBuffer[132+16];
    DI_180_6= g_dataBuffer[133+16];
    DI_180_7= g_dataBuffer[134+16];
    DI_180_8= g_dataBuffer[135+16];
    DI_180_9= g_dataBuffer[136+16];
    DI_180_10= g_dataBuffer[137+16];
    DI_180_11= g_dataBuffer[138+16];
    DI_180_12= g_dataBuffer[139+16];
    DI_180_13= g_dataBuffer[140+16];
    DI_180_14= g_dataBuffer[141+16];
    DI_180_15= g_dataBuffer[142+16];
    DI_180_16= g_dataBuffer[143+16];

    AX_184_1= g_dataBuffer[144+16];
    AX_184_2= g_dataBuffer[145+16];
    AX_184_3= g_dataBuffer[146+16];
    AX_184_4= g_dataBuffer[147+16];
    AX_184_5= g_dataBuffer[148+16];
    AX_184_6= g_dataBuffer[149+16];
    AX_184_7= g_dataBuffer[150+16];
    AX_184_8= g_dataBuffer[151+16];
    AX_184_9= g_dataBuffer[152+16];
    AX_184_10= g_dataBuffer[153+16];
    AX_184_11= g_dataBuffer[154+16];
    AX_184_12= g_dataBuffer[155+16];
    AX_184_13= g_dataBuffer[156+16];
    AX_184_14= g_dataBuffer[157+16];
    AX_184_15= g_dataBuffer[158+16];
    AX_184_16= g_dataBuffer[159+16];

    HMI_200_1= g_dataBuffer[176];
    HMI_280_1= g_dataBuffer[240];


    HMI_202_1= g_dataBuffer[208];
    HMI_202_2= g_dataBuffer[209];
    HMI_282_1= g_dataBuffer[272];
    HMI_282_2= g_dataBuffer[273];

    BCU_410_1= g_dataBuffer[288+32];
    BCU_410_2= g_dataBuffer[289+32];
    BCU_410_3= g_dataBuffer[290+32];
    BCU_410_4= g_dataBuffer[291+32];
    BCU_410_5= g_dataBuffer[292+32];
    BCU_410_6= g_dataBuffer[293+32];
    BCU_410_7= g_dataBuffer[294+32];
    BCU_410_8= g_dataBuffer[295+32];
    BCU_410_9= g_dataBuffer[296+32];
    BCU_410_10= g_dataBuffer[297+32];
    BCU_410_11= g_dataBuffer[298+32];
    BCU_410_12= g_dataBuffer[299+32];
    BCU_410_13= g_dataBuffer[300+32];
    BCU_410_14= g_dataBuffer[301+32];
    BCU_410_15= g_dataBuffer[302+32];
    BCU_410_16= g_dataBuffer[303+32];

    BCU_411_1= g_dataBuffer[304+32];
    BCU_411_2= g_dataBuffer[305+32];
    BCU_411_3= g_dataBuffer[306+32];
    BCU_411_4= g_dataBuffer[307+32];
    BCU_411_5= g_dataBuffer[308+32];
    BCU_411_6= g_dataBuffer[309+32];
    BCU_411_7= g_dataBuffer[310+32];
    BCU_411_8= g_dataBuffer[311+32];
    BCU_411_9= g_dataBuffer[312+32];
    BCU_411_10= g_dataBuffer[313+32];
    BCU_411_11= g_dataBuffer[314+32];
    BCU_411_12= g_dataBuffer[315+32];
    BCU_411_13= g_dataBuffer[316+32];
    BCU_411_14= g_dataBuffer[317+32];
    BCU_411_15= g_dataBuffer[318+32];
    BCU_411_16= g_dataBuffer[319+32];

    BCU_412_1= g_dataBuffer[320+32];
    BCU_412_2= g_dataBuffer[321+32];
    BCU_412_3= g_dataBuffer[322+32];
    BCU_412_4= g_dataBuffer[323+32];
    BCU_412_5= g_dataBuffer[324+32];
    BCU_412_6= g_dataBuffer[325+32];
    BCU_412_7= g_dataBuffer[326+32];
    BCU_412_8= g_dataBuffer[327+32];
    BCU_412_9= g_dataBuffer[328+32];
    BCU_412_10= g_dataBuffer[329+32];
    BCU_412_11= g_dataBuffer[330+32];
    BCU_412_12= g_dataBuffer[331+32];
    BCU_412_13= g_dataBuffer[332+32];
    BCU_412_14= g_dataBuffer[333+32];
    BCU_412_15= g_dataBuffer[334+32];
    BCU_412_16= g_dataBuffer[335+32];

    BCU_413_1= g_dataBuffer[336+32];
    BCU_413_2= g_dataBuffer[337+32];
    BCU_413_3= g_dataBuffer[338+32];
    BCU_413_4= g_dataBuffer[339+32];
    BCU_413_5= g_dataBuffer[340+32];
    BCU_413_6= g_dataBuffer[341+32];
    BCU_413_7= g_dataBuffer[342+32];
    BCU_413_8= g_dataBuffer[343+32];
    BCU_413_9= g_dataBuffer[344+32];
    BCU_413_10= g_dataBuffer[345+32];
    BCU_413_11= g_dataBuffer[346+32];
    BCU_413_12= g_dataBuffer[347+32];
    BCU_413_13= g_dataBuffer[348+32];
    BCU_413_14= g_dataBuffer[349+32];
    BCU_413_15= g_dataBuffer[350+32];
    BCU_413_16= g_dataBuffer[351+32];

    BCU_414_1= g_dataBuffer[352+32];
    BCU_414_2= g_dataBuffer[353+32];
    BCU_414_3= g_dataBuffer[354+32];
    BCU_414_4= g_dataBuffer[355+32];
    BCU_414_5= g_dataBuffer[356+32];
    BCU_414_6= g_dataBuffer[357+32];
    BCU_414_7= g_dataBuffer[358+32];
    BCU_414_8= g_dataBuffer[359+32];
    BCU_414_9= g_dataBuffer[360+32];
    BCU_414_10= g_dataBuffer[361+32];
    BCU_414_11= g_dataBuffer[362+32];
    BCU_414_12= g_dataBuffer[363+32];
    BCU_414_13= g_dataBuffer[364+32];
    BCU_414_14= g_dataBuffer[365+32];
    BCU_414_15= g_dataBuffer[366+32];
    BCU_414_16= g_dataBuffer[367+32];

    BCU_420_1= g_dataBuffer[368+32];
    BCU_420_2= g_dataBuffer[369+32];
    BCU_420_3= g_dataBuffer[370+32];
    BCU_420_4= g_dataBuffer[371+32];
    BCU_420_5= g_dataBuffer[372+32];
    BCU_420_6= g_dataBuffer[373+32];
    BCU_420_7= g_dataBuffer[374+32];
    BCU_420_8= g_dataBuffer[375+32];
    BCU_420_9= g_dataBuffer[376+32];
    BCU_420_10= g_dataBuffer[377+32];
    BCU_420_11= g_dataBuffer[378+32];
    BCU_420_12= g_dataBuffer[379+32];
    BCU_420_13= g_dataBuffer[380+32];
    BCU_420_14= g_dataBuffer[381+32];
    BCU_420_15= g_dataBuffer[382+32];
    BCU_420_16= g_dataBuffer[383+32];

    BCU_421_1= g_dataBuffer[384+32];
    BCU_421_2= g_dataBuffer[385+32];
    BCU_421_3= g_dataBuffer[386+32];
    BCU_421_4= g_dataBuffer[387+32];
    BCU_421_5= g_dataBuffer[388+32];
    BCU_421_6= g_dataBuffer[389+32];
    BCU_421_7= g_dataBuffer[390+32];
    BCU_421_8= g_dataBuffer[391+32];
    BCU_421_9= g_dataBuffer[392+32];
    BCU_421_10= g_dataBuffer[393+32];
    BCU_421_11= g_dataBuffer[394+32];
    BCU_421_12= g_dataBuffer[395+32];
    BCU_421_13= g_dataBuffer[396+32];
    BCU_421_14= g_dataBuffer[397+32];
    BCU_421_15= g_dataBuffer[398+32];
    BCU_421_16= g_dataBuffer[399+32];

    BCU_422_1= g_dataBuffer[400+32];
    BCU_422_2= g_dataBuffer[401+32];
    BCU_422_3= g_dataBuffer[402+32];
    BCU_422_4= g_dataBuffer[403+32];
    BCU_422_5= g_dataBuffer[404+32];
    BCU_422_6= g_dataBuffer[405+32];
    BCU_422_7= g_dataBuffer[406+32];
    BCU_422_8= g_dataBuffer[407+32];
    BCU_422_9= g_dataBuffer[408+32];
    BCU_422_10= g_dataBuffer[409+32];
    BCU_422_11= g_dataBuffer[410+32];
    BCU_422_12= g_dataBuffer[411+32];
    BCU_422_13= g_dataBuffer[412+32];
    BCU_422_14= g_dataBuffer[413+32];
    BCU_422_15= g_dataBuffer[414+32];
    BCU_422_16= g_dataBuffer[415+32];

    BCU_423_1= g_dataBuffer[416+32];
    BCU_423_2= g_dataBuffer[417+32];
    BCU_423_3= g_dataBuffer[418+32];
    BCU_423_4= g_dataBuffer[419+32];
    BCU_423_5= g_dataBuffer[420+32];
    BCU_423_6= g_dataBuffer[421+32];
    BCU_423_7= g_dataBuffer[422+32];
    BCU_423_8= g_dataBuffer[423+32];
    BCU_423_9= g_dataBuffer[424+32];
    BCU_423_10= g_dataBuffer[425+32];
    BCU_423_11= g_dataBuffer[426+32];
    BCU_423_12= g_dataBuffer[427+32];
    BCU_423_13= g_dataBuffer[428+32];
    BCU_423_14= g_dataBuffer[429+32];
    BCU_423_15= g_dataBuffer[430+32];
    BCU_423_16= g_dataBuffer[431+32];

    BCU_424_1= g_dataBuffer[432+32];
    BCU_424_2= g_dataBuffer[433+32];
    BCU_424_3= g_dataBuffer[434+32];
    BCU_424_4= g_dataBuffer[435+32];
    BCU_424_5= g_dataBuffer[436+32];
    BCU_424_6= g_dataBuffer[437+32];
    BCU_424_7= g_dataBuffer[438+32];
    BCU_424_8= g_dataBuffer[439+32];
    BCU_424_9= g_dataBuffer[440+32];
    BCU_424_10= g_dataBuffer[441+32];
    BCU_424_11= g_dataBuffer[442+32];
    BCU_424_12= g_dataBuffer[443+32];
    BCU_424_13= g_dataBuffer[444+32];
    BCU_424_14= g_dataBuffer[445+32];
    BCU_424_15= g_dataBuffer[446+32];
    BCU_424_16= g_dataBuffer[447+32];

    BCU_430_1= g_dataBuffer[448+32];
    BCU_430_2= g_dataBuffer[449+32];
    BCU_430_3= g_dataBuffer[450+32];
    BCU_430_4= g_dataBuffer[451+32];
    BCU_430_5= g_dataBuffer[452+32];
    BCU_430_6= g_dataBuffer[453+32];
    BCU_430_7= g_dataBuffer[454+32];
    BCU_430_8= g_dataBuffer[455+32];
    BCU_430_9= g_dataBuffer[456+32];
    BCU_430_10= g_dataBuffer[457+32];
    BCU_430_11= g_dataBuffer[458+32];
    BCU_430_12= g_dataBuffer[459+32];
    BCU_430_13= g_dataBuffer[460+32];
    BCU_430_14= g_dataBuffer[461+32];
    BCU_430_15= g_dataBuffer[462+32];
    BCU_430_16= g_dataBuffer[463+32];

    BCU_431_1= g_dataBuffer[464+32];
    BCU_431_2= g_dataBuffer[465+32];
    BCU_431_3= g_dataBuffer[466+32];
    BCU_431_4= g_dataBuffer[467+32];
    BCU_431_5= g_dataBuffer[468+32];
    BCU_431_6= g_dataBuffer[469+32];
    BCU_431_7= g_dataBuffer[470+32];
    BCU_431_8= g_dataBuffer[471+32];
    BCU_431_9= g_dataBuffer[472+32];
    BCU_431_10= g_dataBuffer[473+32];
    BCU_431_11= g_dataBuffer[474+32];
    BCU_431_12= g_dataBuffer[475+32];
    BCU_431_13= g_dataBuffer[476+32];
    BCU_431_14= g_dataBuffer[477+32];
    BCU_431_15= g_dataBuffer[478+32];
    BCU_431_16= g_dataBuffer[479+32];

    BCU_432_1= g_dataBuffer[480+32];
    BCU_432_2= g_dataBuffer[481+32];
    BCU_432_3= g_dataBuffer[482+32];
    BCU_432_4= g_dataBuffer[483+32];
    BCU_432_5= g_dataBuffer[484+32];
    BCU_432_6= g_dataBuffer[485+32];
    BCU_432_7= g_dataBuffer[486+32];
    BCU_432_8= g_dataBuffer[487+32];
    BCU_432_9= g_dataBuffer[488+32];
    BCU_432_10= g_dataBuffer[489+32];
    BCU_432_11= g_dataBuffer[490+32];
    BCU_432_12= g_dataBuffer[491+32];
    BCU_432_13= g_dataBuffer[492+32];
    BCU_432_14= g_dataBuffer[493+32];
    BCU_432_15= g_dataBuffer[494+32];
    BCU_432_16= g_dataBuffer[495+32];

    BCU_433_1= g_dataBuffer[496+32];
    BCU_433_2= g_dataBuffer[497+32];
    BCU_433_3= g_dataBuffer[498+32];
    BCU_433_4= g_dataBuffer[499+32];
    BCU_433_5= g_dataBuffer[500+32];
    BCU_433_6= g_dataBuffer[501+32];
    BCU_433_7= g_dataBuffer[502+32];
    BCU_433_8= g_dataBuffer[503+32];
    BCU_433_9= g_dataBuffer[504+32];
    BCU_433_10= g_dataBuffer[505+32];
    BCU_433_11= g_dataBuffer[506+32];
    BCU_433_12= g_dataBuffer[507+32];
    BCU_433_13= g_dataBuffer[508+32];
    BCU_433_14= g_dataBuffer[509+32];
    BCU_433_15= g_dataBuffer[510+32];
    BCU_433_16= g_dataBuffer[511+32];

    BCU_434_1= g_dataBuffer[512+32];
    BCU_434_2= g_dataBuffer[513+32];
    BCU_434_3= g_dataBuffer[514+32];
    BCU_434_4= g_dataBuffer[515+32];
    BCU_434_5= g_dataBuffer[516+32];
    BCU_434_6= g_dataBuffer[517+32];
    BCU_434_7= g_dataBuffer[518+32];
    BCU_434_8= g_dataBuffer[519+32];
    BCU_434_9= g_dataBuffer[520+32];
    BCU_434_10= g_dataBuffer[521+32];
    BCU_434_11= g_dataBuffer[522+32];
    BCU_434_12= g_dataBuffer[523+32];
    BCU_434_13= g_dataBuffer[524+32];
    BCU_434_14= g_dataBuffer[525+32];
    BCU_434_15= g_dataBuffer[526+32];
    BCU_434_16= g_dataBuffer[527+32];

    BCU_440_1= g_dataBuffer[528+32];
    BCU_440_2= g_dataBuffer[529+32];
    BCU_440_3= g_dataBuffer[530+32];
    BCU_440_4= g_dataBuffer[531+32];
    BCU_440_5= g_dataBuffer[532+32];
    BCU_440_6= g_dataBuffer[533+32];
    BCU_440_7= g_dataBuffer[534+32];
    BCU_440_8= g_dataBuffer[535+32];
    BCU_440_9= g_dataBuffer[536+32];
    BCU_440_10= g_dataBuffer[537+32];
    BCU_440_11= g_dataBuffer[538+32];
    BCU_440_12= g_dataBuffer[539+32];
    BCU_440_13= g_dataBuffer[540+32];
    BCU_440_14= g_dataBuffer[541+32];
    BCU_440_15= g_dataBuffer[542+32];
    BCU_440_16= g_dataBuffer[543+32];

    BCU_441_1= g_dataBuffer[544+32];
    BCU_441_2= g_dataBuffer[545+32];
    BCU_441_3= g_dataBuffer[546+32];
    BCU_441_4= g_dataBuffer[547+32];
    BCU_441_5= g_dataBuffer[548+32];
    BCU_441_6= g_dataBuffer[549+32];
    BCU_441_7= g_dataBuffer[550+32];
    BCU_441_8= g_dataBuffer[551+32];
    BCU_441_9= g_dataBuffer[552+32];
    BCU_441_10= g_dataBuffer[553+32];
    BCU_441_11= g_dataBuffer[554+32];
    BCU_441_12= g_dataBuffer[555+32];
    BCU_441_13= g_dataBuffer[556+32];
    BCU_441_14= g_dataBuffer[557+32];
    BCU_441_15= g_dataBuffer[558+32];
    BCU_441_16= g_dataBuffer[559+32];

    BCU_442_1= g_dataBuffer[560+32];
    BCU_442_2= g_dataBuffer[561+32];
    BCU_442_3= g_dataBuffer[562+32];
    BCU_442_4= g_dataBuffer[563+32];
    BCU_442_5= g_dataBuffer[564+32];
    BCU_442_6= g_dataBuffer[565+32];
    BCU_442_7= g_dataBuffer[566+32];
    BCU_442_8= g_dataBuffer[567+32];
    BCU_442_9= g_dataBuffer[568+32];
    BCU_442_10= g_dataBuffer[569+32];
    BCU_442_11= g_dataBuffer[570+32];
    BCU_442_12= g_dataBuffer[571+32];
    BCU_442_13= g_dataBuffer[572+32];
    BCU_442_14= g_dataBuffer[573+32];
    BCU_442_15= g_dataBuffer[574+32];
    BCU_442_16= g_dataBuffer[575+32];

    BCU_443_1= g_dataBuffer[576+32];
    BCU_443_2= g_dataBuffer[577+32];
    BCU_443_3= g_dataBuffer[578+32];
    BCU_443_4= g_dataBuffer[579+32];
    BCU_443_5= g_dataBuffer[580+32];
    BCU_443_6= g_dataBuffer[581+32];
    BCU_443_7= g_dataBuffer[582+32];
    BCU_443_8= g_dataBuffer[583+32];
    BCU_443_9= g_dataBuffer[584+32];
    BCU_443_10= g_dataBuffer[585+32];
    BCU_443_11= g_dataBuffer[586+32];
    BCU_443_12= g_dataBuffer[587+32];
    BCU_443_13= g_dataBuffer[588+32];
    BCU_443_14= g_dataBuffer[589+32];
    BCU_443_15= g_dataBuffer[590+32];
    BCU_443_16= g_dataBuffer[591+32];

    BCU_444_1= g_dataBuffer[592+32];
    BCU_444_2= g_dataBuffer[593+32];
    BCU_444_3= g_dataBuffer[594+32];
    BCU_444_4= g_dataBuffer[595+32];
    BCU_444_5= g_dataBuffer[596+32];
    BCU_444_6= g_dataBuffer[597+32];
    BCU_444_7= g_dataBuffer[598+32];
    BCU_444_8= g_dataBuffer[599+32];
    BCU_444_9= g_dataBuffer[600+32];
    BCU_444_10= g_dataBuffer[601+32];
    BCU_444_11= g_dataBuffer[602+32];
    BCU_444_12= g_dataBuffer[603+32];
    BCU_444_13= g_dataBuffer[604+32];
    BCU_444_14= g_dataBuffer[605+32];
    BCU_444_15= g_dataBuffer[606+32];
    BCU_444_16= g_dataBuffer[607+32];

    TCU_510_1= g_dataBuffer[608+48];
    TCU_510_2= g_dataBuffer[609+48];
    TCU_510_3= g_dataBuffer[610+48];
    TCU_510_4= g_dataBuffer[611+48];
    TCU_510_5= g_dataBuffer[612+48];
    TCU_510_6= g_dataBuffer[613+48];
    TCU_510_7= g_dataBuffer[614+48];
    TCU_510_8= g_dataBuffer[615+48];
    TCU_510_9= g_dataBuffer[616+48];
    TCU_510_10= g_dataBuffer[617+48];
    TCU_510_11= g_dataBuffer[618+48];
    TCU_510_12= g_dataBuffer[619+48];
    TCU_510_13= g_dataBuffer[620+48];
    TCU_510_14= g_dataBuffer[621+48];
    TCU_510_15= g_dataBuffer[622+48];
    TCU_510_16= g_dataBuffer[623+48];

    TCU_511_1= g_dataBuffer[624+48];
    TCU_511_2= g_dataBuffer[625+48];
    TCU_511_3= g_dataBuffer[626+48];
    TCU_511_4= g_dataBuffer[627+48];
    TCU_511_5= g_dataBuffer[628+48];
    TCU_511_6= g_dataBuffer[629+48];
    TCU_511_7= g_dataBuffer[630+48];
    TCU_511_8= g_dataBuffer[631+48];
    TCU_511_9= g_dataBuffer[632+48];
    TCU_511_10= g_dataBuffer[633+48];
    TCU_511_11= g_dataBuffer[634+48];
    TCU_511_12= g_dataBuffer[635+48];
    TCU_511_13= g_dataBuffer[636+48];
    TCU_511_14= g_dataBuffer[637+48];
    TCU_511_15= g_dataBuffer[638+48];
    TCU_511_16= g_dataBuffer[639+48];

    TCU_520_1= g_dataBuffer[640+48];
    TCU_520_2= g_dataBuffer[641+48];
    TCU_520_3= g_dataBuffer[642+48];
    TCU_520_4= g_dataBuffer[643+48];
    TCU_520_5= g_dataBuffer[644+48];
    TCU_520_6= g_dataBuffer[645+48];
    TCU_520_7= g_dataBuffer[646+48];
    TCU_520_8= g_dataBuffer[647+48];
    TCU_520_9= g_dataBuffer[648+48];
    TCU_520_10= g_dataBuffer[649+48];
    TCU_520_11= g_dataBuffer[650+48];
    TCU_520_12= g_dataBuffer[651+48];
    TCU_520_13= g_dataBuffer[652+48];
    TCU_520_14= g_dataBuffer[653+48];
    TCU_520_15= g_dataBuffer[654+48];
    TCU_520_16= g_dataBuffer[655+48];

    TCU_521_1= g_dataBuffer[656+48];
    TCU_521_2= g_dataBuffer[657+48];
    TCU_521_3= g_dataBuffer[658+48];
    TCU_521_4= g_dataBuffer[659+48];
    TCU_521_5= g_dataBuffer[660+48];
    TCU_521_6= g_dataBuffer[661+48];
    TCU_521_7= g_dataBuffer[662+48];
    TCU_521_8= g_dataBuffer[663+48];
    TCU_521_9= g_dataBuffer[664+48];
    TCU_521_10= g_dataBuffer[665+48];
    TCU_521_11= g_dataBuffer[666+48];
    TCU_521_12= g_dataBuffer[667+48];
    TCU_521_13= g_dataBuffer[668+48];
    TCU_521_14= g_dataBuffer[669+48];
    TCU_521_15= g_dataBuffer[670+48];
    TCU_521_16= g_dataBuffer[671+48];

    TCU_530_1= g_dataBuffer[672+48];
    TCU_530_2= g_dataBuffer[673+48];
    TCU_530_3= g_dataBuffer[674+48];
    TCU_530_4= g_dataBuffer[675+48];
    TCU_530_5= g_dataBuffer[676+48];
    TCU_530_6= g_dataBuffer[677+48];
    TCU_530_7= g_dataBuffer[678+48];
    TCU_530_8= g_dataBuffer[679+48];
    TCU_530_9= g_dataBuffer[680+48];
    TCU_530_10= g_dataBuffer[681+48];
    TCU_530_11= g_dataBuffer[682+48];
    TCU_530_12= g_dataBuffer[683+48];
    TCU_530_13= g_dataBuffer[684+48];
    TCU_530_14= g_dataBuffer[685+48];
    TCU_530_15= g_dataBuffer[686+48];
    TCU_530_16= g_dataBuffer[687+48];

    TCU_531_1= g_dataBuffer[688+48];
    TCU_531_2= g_dataBuffer[689+48];
    TCU_531_3= g_dataBuffer[690+48];
    TCU_531_4= g_dataBuffer[691+48];
    TCU_531_5= g_dataBuffer[692+48];
    TCU_531_6= g_dataBuffer[693+48];
    TCU_531_7= g_dataBuffer[694+48];
    TCU_531_8= g_dataBuffer[695+48];
    TCU_531_9= g_dataBuffer[696+48];
    TCU_531_10= g_dataBuffer[697+48];
    TCU_531_11= g_dataBuffer[698+48];
    TCU_531_12= g_dataBuffer[699+48];
    TCU_531_13= g_dataBuffer[700+48];
    TCU_531_14= g_dataBuffer[701+48];
    TCU_531_15= g_dataBuffer[702+48];
    TCU_531_16= g_dataBuffer[703+48];

    TCU_540_1= g_dataBuffer[704+48];
    TCU_540_2= g_dataBuffer[705+48];
    TCU_540_3= g_dataBuffer[706+48];
    TCU_540_4= g_dataBuffer[707+48];
    TCU_540_5= g_dataBuffer[708+48];
    TCU_540_6= g_dataBuffer[709+48];
    TCU_540_7= g_dataBuffer[710+48];
    TCU_540_8= g_dataBuffer[711+48];
    TCU_540_9= g_dataBuffer[712+48];
    TCU_540_10= g_dataBuffer[713+48];
    TCU_540_11= g_dataBuffer[714+48];
    TCU_540_12= g_dataBuffer[715+48];
    TCU_540_13= g_dataBuffer[716+48];
    TCU_540_14= g_dataBuffer[717+48];
    TCU_540_15= g_dataBuffer[718+48];
    TCU_540_16= g_dataBuffer[719+48];

    TCU_541_1= g_dataBuffer[720+48];
    TCU_541_2= g_dataBuffer[721+48];
    TCU_541_3= g_dataBuffer[722+48];
    TCU_541_4= g_dataBuffer[723+48];
    TCU_541_5= g_dataBuffer[724+48];
    TCU_541_6= g_dataBuffer[725+48];
    TCU_541_7= g_dataBuffer[726+48];
    TCU_541_8= g_dataBuffer[727+48];
    TCU_541_9= g_dataBuffer[728+48];
    TCU_541_10= g_dataBuffer[729+48];
    TCU_541_11= g_dataBuffer[730+48];
    TCU_541_12= g_dataBuffer[731+48];
    TCU_541_13= g_dataBuffer[732+48];
    TCU_541_14= g_dataBuffer[733+48];
    TCU_541_15= g_dataBuffer[734+48];
    TCU_541_16= g_dataBuffer[735+48];

    TCU_550_1= g_dataBuffer[736+48];
    TCU_550_2= g_dataBuffer[737+48];
    TCU_550_3= g_dataBuffer[738+48];
    TCU_550_4= g_dataBuffer[739+48];
    TCU_550_5= g_dataBuffer[740+48];
    TCU_550_6= g_dataBuffer[741+48];
    TCU_550_7= g_dataBuffer[742+48];
    TCU_550_8= g_dataBuffer[743+48];
    TCU_550_9= g_dataBuffer[744+48];
    TCU_550_10= g_dataBuffer[745+48];
    TCU_550_11= g_dataBuffer[746+48];
    TCU_550_12= g_dataBuffer[747+48];
    TCU_550_13= g_dataBuffer[748+48];
    TCU_550_14= g_dataBuffer[749+48];
    TCU_550_15= g_dataBuffer[750+48];
    TCU_550_16= g_dataBuffer[751+48];

    TCU_551_1= g_dataBuffer[752+48];
    TCU_551_2= g_dataBuffer[753+48];
    TCU_551_3= g_dataBuffer[754+48];
    TCU_551_4= g_dataBuffer[755+48];
    TCU_551_5= g_dataBuffer[756+48];
    TCU_551_6= g_dataBuffer[757+48];
    TCU_551_7= g_dataBuffer[758+48];
    TCU_551_8= g_dataBuffer[759+48];
    TCU_551_9= g_dataBuffer[760+48];
    TCU_551_10= g_dataBuffer[761+48];
    TCU_551_11= g_dataBuffer[762+48];
    TCU_551_12= g_dataBuffer[763+48];
    TCU_551_13= g_dataBuffer[764+48];
    TCU_551_14= g_dataBuffer[765+48];
    TCU_551_15= g_dataBuffer[766+48];
    TCU_551_16= g_dataBuffer[767+48];

    TCU_560_1= g_dataBuffer[768+48];
    TCU_560_2= g_dataBuffer[769+48];
    TCU_560_3= g_dataBuffer[770+48];
    TCU_560_4= g_dataBuffer[771+48];
    TCU_560_5= g_dataBuffer[772+48];
    TCU_560_6= g_dataBuffer[773+48];
    TCU_560_7= g_dataBuffer[774+48];
    TCU_560_8= g_dataBuffer[775+48];
    TCU_560_9= g_dataBuffer[776+48];
    TCU_560_10= g_dataBuffer[777+48];
    TCU_560_11= g_dataBuffer[778+48];
    TCU_560_12= g_dataBuffer[779+48];
    TCU_560_13= g_dataBuffer[780+48];
    TCU_560_14= g_dataBuffer[781+48];
    TCU_560_15= g_dataBuffer[782+48];
    TCU_560_16= g_dataBuffer[783+48];

    TCU_561_1= g_dataBuffer[784+48];
    TCU_561_2= g_dataBuffer[785+48];
    TCU_561_3= g_dataBuffer[786+48];
    TCU_561_4= g_dataBuffer[787+48];
    TCU_561_5= g_dataBuffer[788+48];
    TCU_561_6= g_dataBuffer[789+48];
    TCU_561_7= g_dataBuffer[790+48];
    TCU_561_8= g_dataBuffer[791+48];
    TCU_561_9= g_dataBuffer[792+48];
    TCU_561_10= g_dataBuffer[793+48];
    TCU_561_11= g_dataBuffer[794+48];
    TCU_561_12= g_dataBuffer[795+48];
    TCU_561_13= g_dataBuffer[796+48];
    TCU_561_14= g_dataBuffer[797+48];
    TCU_561_15= g_dataBuffer[798+48];
    TCU_561_16= g_dataBuffer[799+48];

    ACU_610_1= g_dataBuffer[800+64];
    ACU_610_2= g_dataBuffer[801+64];
    ACU_610_3= g_dataBuffer[802+64];
    ACU_610_4= g_dataBuffer[803+64];
    ACU_610_5= g_dataBuffer[804+64];
    ACU_610_6= g_dataBuffer[805+64];
    ACU_610_7= g_dataBuffer[806+64];
    ACU_610_8= g_dataBuffer[807+64];

    ACU_611_1= g_dataBuffer[808+64];
    ACU_611_2= g_dataBuffer[809+64];
    ACU_611_3= g_dataBuffer[810+64];
    ACU_611_4= g_dataBuffer[811+64];
    ACU_611_5= g_dataBuffer[812+64];
    ACU_611_6= g_dataBuffer[813+64];
    ACU_611_7= g_dataBuffer[814+64];
    ACU_611_8= g_dataBuffer[815+64];
    ACU_611_9= g_dataBuffer[816+64];
    ACU_611_10= g_dataBuffer[817+64];
    ACU_611_11= g_dataBuffer[818+64];
    ACU_611_12= g_dataBuffer[819+64];
    ACU_611_13= g_dataBuffer[820+64];
    ACU_611_14= g_dataBuffer[821+64];
    ACU_611_15= g_dataBuffer[822+64];
    ACU_611_16= g_dataBuffer[823+64];

    ACU_620_1= g_dataBuffer[824+64];
    ACU_620_2= g_dataBuffer[825+64];
    ACU_620_3= g_dataBuffer[826+64];
    ACU_620_4= g_dataBuffer[827+64];
    ACU_620_5= g_dataBuffer[828+64];
    ACU_620_6= g_dataBuffer[829+64];
    ACU_620_7= g_dataBuffer[830+64];
    ACU_620_8= g_dataBuffer[831+64];

    ACU_621_1= g_dataBuffer[832+64];
    ACU_621_2= g_dataBuffer[833+64];
    ACU_621_3= g_dataBuffer[834+64];
    ACU_621_4= g_dataBuffer[835+64];
    ACU_621_5= g_dataBuffer[836+64];
    ACU_621_6= g_dataBuffer[837+64];
    ACU_621_7= g_dataBuffer[838+64];
    ACU_621_8= g_dataBuffer[839+64];
    ACU_621_9= g_dataBuffer[840+64];
    ACU_621_10= g_dataBuffer[841+64];
    ACU_621_11= g_dataBuffer[842+64];
    ACU_621_12= g_dataBuffer[843+64];
    ACU_621_13= g_dataBuffer[844+64];
    ACU_621_14= g_dataBuffer[845+64];
    ACU_621_15= g_dataBuffer[846+64];
    ACU_621_16= g_dataBuffer[847+64];

    DCU_OLD_700_1= g_dataBuffer[864+48];
    DCU_OLD_700_2= g_dataBuffer[865+48];
    DCU_OLD_700_3= g_dataBuffer[866+48];
    DCU_OLD_700_4= g_dataBuffer[867+48];
    DCU_OLD_700_5= g_dataBuffer[868+48];
    DCU_OLD_700_6= g_dataBuffer[869+48];
    DCU_OLD_700_7= g_dataBuffer[870+48];
    DCU_OLD_700_8= g_dataBuffer[871+48];
    DCU_OLD_700_9= g_dataBuffer[872+48];
    DCU_OLD_700_10= g_dataBuffer[873+48];
    DCU_OLD_700_11= g_dataBuffer[874+48];
    DCU_OLD_700_12= g_dataBuffer[875+48];
    DCU_OLD_700_13= g_dataBuffer[876+48];
    DCU_OLD_700_14= g_dataBuffer[877+48];
    DCU_OLD_700_15= g_dataBuffer[878+48];
    DCU_OLD_700_16= g_dataBuffer[879+48];

    DCU_OLD_701_1= g_dataBuffer[880+48];
    DCU_OLD_701_2= g_dataBuffer[881+48];
    DCU_OLD_701_3= g_dataBuffer[882+48];
    DCU_OLD_701_4= g_dataBuffer[883+48];
    DCU_OLD_701_5= g_dataBuffer[884+48];
    DCU_OLD_701_6= g_dataBuffer[885+48];
    DCU_OLD_701_7= g_dataBuffer[886+48];
    DCU_OLD_701_8= g_dataBuffer[887+48];
    DCU_OLD_701_9= g_dataBuffer[888+48];
    DCU_OLD_701_10= g_dataBuffer[889+48];
    DCU_OLD_701_11= g_dataBuffer[890+48];
    DCU_OLD_701_12= g_dataBuffer[891+48];
    DCU_OLD_701_13= g_dataBuffer[892+48];
    DCU_OLD_701_14= g_dataBuffer[893+48];
    DCU_OLD_701_15= g_dataBuffer[894+48];
    DCU_OLD_701_16= g_dataBuffer[895+48];


    DCU_OLD_710_1= g_dataBuffer[896+48];
    DCU_OLD_710_2= g_dataBuffer[897+48];
    DCU_OLD_710_3= g_dataBuffer[898+48];
    DCU_OLD_710_4= g_dataBuffer[899+48];
    DCU_OLD_710_5= g_dataBuffer[900+48];
    DCU_OLD_710_6= g_dataBuffer[901+48];
    DCU_OLD_710_7= g_dataBuffer[902+48];
    DCU_OLD_710_8= g_dataBuffer[903+48];
    DCU_OLD_710_9= g_dataBuffer[904+48];
    DCU_OLD_710_10= g_dataBuffer[905+48];
    DCU_OLD_710_11= g_dataBuffer[906+48];
    DCU_OLD_710_12= g_dataBuffer[907+48];
    DCU_OLD_710_13= g_dataBuffer[908+48];
    DCU_OLD_710_14= g_dataBuffer[909+48];
    DCU_OLD_710_15= g_dataBuffer[910+48];
    DCU_OLD_710_16= g_dataBuffer[911+48];

    DCU_OLD_711_1= g_dataBuffer[912+48];
    DCU_OLD_711_2= g_dataBuffer[913+48];
    DCU_OLD_711_3= g_dataBuffer[914+48];
    DCU_OLD_711_4= g_dataBuffer[915+48];
    DCU_OLD_711_5= g_dataBuffer[916+48];
    DCU_OLD_711_6= g_dataBuffer[917+48];
    DCU_OLD_711_7= g_dataBuffer[918+48];
    DCU_OLD_711_8= g_dataBuffer[919+48];
    DCU_OLD_711_9= g_dataBuffer[920+48];
    DCU_OLD_711_10= g_dataBuffer[921+48];
    DCU_OLD_711_11= g_dataBuffer[922+48];
    DCU_OLD_711_12= g_dataBuffer[923+48];
    DCU_OLD_711_13= g_dataBuffer[924+48];
    DCU_OLD_711_14= g_dataBuffer[925+48];
    DCU_OLD_711_15= g_dataBuffer[926+48];
    DCU_OLD_711_16= g_dataBuffer[927+48];


    DCU_OLD_720_1= g_dataBuffer[928+48];
    DCU_OLD_720_2= g_dataBuffer[929+48];
    DCU_OLD_720_3= g_dataBuffer[930+48];
    DCU_OLD_720_4= g_dataBuffer[931+48];
    DCU_OLD_720_5= g_dataBuffer[932+48];
    DCU_OLD_720_6= g_dataBuffer[933+48];
    DCU_OLD_720_7= g_dataBuffer[934+48];
    DCU_OLD_720_8= g_dataBuffer[935+48];
    DCU_OLD_720_9= g_dataBuffer[936+48];
    DCU_OLD_720_10= g_dataBuffer[937+48];
    DCU_OLD_720_11= g_dataBuffer[938+48];
    DCU_OLD_720_12= g_dataBuffer[939+48];
    DCU_OLD_720_13= g_dataBuffer[940+48];
    DCU_OLD_720_14= g_dataBuffer[941+48];
    DCU_OLD_720_15= g_dataBuffer[942+48];
    DCU_OLD_720_16= g_dataBuffer[943+48];

    DCU_OLD_721_1= g_dataBuffer[944+48];
    DCU_OLD_721_2= g_dataBuffer[945+48];
    DCU_OLD_721_3= g_dataBuffer[946+48];
    DCU_OLD_721_4= g_dataBuffer[947+48];
    DCU_OLD_721_5= g_dataBuffer[948+48];
    DCU_OLD_721_6= g_dataBuffer[949+48];
    DCU_OLD_721_7= g_dataBuffer[950+48];
    DCU_OLD_721_8= g_dataBuffer[951+48];
    DCU_OLD_721_9= g_dataBuffer[952+48];
    DCU_OLD_721_10= g_dataBuffer[953+48];
    DCU_OLD_721_11= g_dataBuffer[954+48];
    DCU_OLD_721_12= g_dataBuffer[955+48];
    DCU_OLD_721_13= g_dataBuffer[956+48];
    DCU_OLD_721_14= g_dataBuffer[957+48];
    DCU_OLD_721_15= g_dataBuffer[958+48];
    DCU_OLD_721_16= g_dataBuffer[959+48];

    DCU_OLD_730_1= g_dataBuffer[960+48];
    DCU_OLD_730_2= g_dataBuffer[961+48];
    DCU_OLD_730_3= g_dataBuffer[962+48];
    DCU_OLD_730_4= g_dataBuffer[963+48];
    DCU_OLD_730_5= g_dataBuffer[964+48];
    DCU_OLD_730_6= g_dataBuffer[965+48];
    DCU_OLD_730_7= g_dataBuffer[966+48];
    DCU_OLD_730_8= g_dataBuffer[967+48];
    DCU_OLD_730_9= g_dataBuffer[968+48];
    DCU_OLD_730_10= g_dataBuffer[969+48];
    DCU_OLD_730_11= g_dataBuffer[970+48];
    DCU_OLD_730_12= g_dataBuffer[971+48];
    DCU_OLD_730_13= g_dataBuffer[972+48];
    DCU_OLD_730_14= g_dataBuffer[973+48];
    DCU_OLD_730_15= g_dataBuffer[974+48];
    DCU_OLD_730_16= g_dataBuffer[975+48];

    DCU_OLD_731_1= g_dataBuffer[976+48];
    DCU_OLD_731_2= g_dataBuffer[977+48];
    DCU_OLD_731_3= g_dataBuffer[978+48];
    DCU_OLD_731_4= g_dataBuffer[979+48];
    DCU_OLD_731_5= g_dataBuffer[980+48];
    DCU_OLD_731_6= g_dataBuffer[981+48];
    DCU_OLD_731_7= g_dataBuffer[982+48];
    DCU_OLD_731_8= g_dataBuffer[983+48];
    DCU_OLD_731_9= g_dataBuffer[984+48];
    DCU_OLD_731_10= g_dataBuffer[985+48];
    DCU_OLD_731_11= g_dataBuffer[986+48];
    DCU_OLD_731_12= g_dataBuffer[987+48];
    DCU_OLD_731_13= g_dataBuffer[988+48];
    DCU_OLD_731_14= g_dataBuffer[989+48];
    DCU_OLD_731_15= g_dataBuffer[990+48];
    DCU_OLD_731_16= g_dataBuffer[991+48];

    DCU_OLD_740_1= g_dataBuffer[992+48];
    DCU_OLD_740_2= g_dataBuffer[993+48];
    DCU_OLD_740_3= g_dataBuffer[994+48];
    DCU_OLD_740_4= g_dataBuffer[995+48];
    DCU_OLD_740_5= g_dataBuffer[996+48];
    DCU_OLD_740_6= g_dataBuffer[997+48];
    DCU_OLD_740_7= g_dataBuffer[998+48];
    DCU_OLD_740_8= g_dataBuffer[999+48];
    DCU_OLD_740_9= g_dataBuffer[1000+48];
    DCU_OLD_740_10= g_dataBuffer[1001+48];
    DCU_OLD_740_11= g_dataBuffer[1002+48];
    DCU_OLD_740_12= g_dataBuffer[1003+48];
    DCU_OLD_740_13= g_dataBuffer[1004+48];
    DCU_OLD_740_14= g_dataBuffer[1005+48];
    DCU_OLD_740_15= g_dataBuffer[1006+48];
    DCU_OLD_740_16= g_dataBuffer[1007+48];

    DCU_OLD_741_1= g_dataBuffer[1008+48];
    DCU_OLD_741_2= g_dataBuffer[1009+48];
    DCU_OLD_741_3= g_dataBuffer[1010+48];
    DCU_OLD_741_4= g_dataBuffer[1011+48];
    DCU_OLD_741_5= g_dataBuffer[1012+48];
    DCU_OLD_741_6= g_dataBuffer[1013+48];
    DCU_OLD_741_7= g_dataBuffer[1014+48];
    DCU_OLD_741_8= g_dataBuffer[1015+48];
    DCU_OLD_741_9= g_dataBuffer[1016+48];
    DCU_OLD_741_10= g_dataBuffer[1017+48];
    DCU_OLD_741_11= g_dataBuffer[1018+48];
    DCU_OLD_741_12= g_dataBuffer[1019+48];
    DCU_OLD_741_13= g_dataBuffer[1020+48];
    DCU_OLD_741_14= g_dataBuffer[1021+48];
    DCU_OLD_741_15= g_dataBuffer[1022+48];
    DCU_OLD_741_16= g_dataBuffer[1023+48];

    DCU_OLD_750_1= g_dataBuffer[1024+48];
    DCU_OLD_750_2= g_dataBuffer[1025+48];
    DCU_OLD_750_3= g_dataBuffer[1026+48];
    DCU_OLD_750_4= g_dataBuffer[1027+48];
    DCU_OLD_750_5= g_dataBuffer[1028+48];
    DCU_OLD_750_6= g_dataBuffer[1029+48];
    DCU_OLD_750_7= g_dataBuffer[1030+48];
    DCU_OLD_750_8= g_dataBuffer[1031+48];
    DCU_OLD_750_9= g_dataBuffer[1032+48];
    DCU_OLD_750_10= g_dataBuffer[1033+48];
    DCU_OLD_750_11= g_dataBuffer[1034+48];
    DCU_OLD_750_12= g_dataBuffer[1035+48];
    DCU_OLD_750_13= g_dataBuffer[1036+48];
    DCU_OLD_750_14= g_dataBuffer[1037+48];
    DCU_OLD_750_15= g_dataBuffer[1038+48];
    DCU_OLD_750_16= g_dataBuffer[1039+48];

    DCU_OLD_751_1= g_dataBuffer[1040+48];
    DCU_OLD_751_2= g_dataBuffer[1041+48];
    DCU_OLD_751_3= g_dataBuffer[1042+48];
    DCU_OLD_751_4= g_dataBuffer[1043+48];
    DCU_OLD_751_5= g_dataBuffer[1044+48];
    DCU_OLD_751_6= g_dataBuffer[1045+48];
    DCU_OLD_751_7= g_dataBuffer[1046+48];
    DCU_OLD_751_8= g_dataBuffer[1047+48];
    DCU_OLD_751_9= g_dataBuffer[1048+48];
    DCU_OLD_751_10= g_dataBuffer[1049+48];
    DCU_OLD_751_11= g_dataBuffer[1050+48];
    DCU_OLD_751_12= g_dataBuffer[1051+48];
    DCU_OLD_751_13= g_dataBuffer[1052+48];
    DCU_OLD_751_14= g_dataBuffer[1053+48];
    DCU_OLD_751_15= g_dataBuffer[1054+48];
    DCU_OLD_751_16= g_dataBuffer[1055+48];


    DCU_OLD_760_1= g_dataBuffer[1056+48];
    DCU_OLD_760_2= g_dataBuffer[1057+48];
    DCU_OLD_760_3= g_dataBuffer[1058+48];
    DCU_OLD_760_4= g_dataBuffer[1059+48];
    DCU_OLD_760_5= g_dataBuffer[1060+48];
    DCU_OLD_760_6= g_dataBuffer[1061+48];
    DCU_OLD_760_7= g_dataBuffer[1062+48];
    DCU_OLD_760_8= g_dataBuffer[1063+48];
    DCU_OLD_760_9= g_dataBuffer[1064+48];
    DCU_OLD_760_10= g_dataBuffer[1065+48];
    DCU_OLD_760_11= g_dataBuffer[1066+48];
    DCU_OLD_760_12= g_dataBuffer[1067+48];
    DCU_OLD_760_13= g_dataBuffer[1068+48];
    DCU_OLD_760_14= g_dataBuffer[1069+48];
    DCU_OLD_760_15= g_dataBuffer[1070+48];
    DCU_OLD_760_16= g_dataBuffer[1071+48];

    DCU_OLD_761_1= g_dataBuffer[1072+48];
    DCU_OLD_761_2= g_dataBuffer[1073+48];
    DCU_OLD_761_3= g_dataBuffer[1074+48];
    DCU_OLD_761_4= g_dataBuffer[1075+48];
    DCU_OLD_761_5= g_dataBuffer[1076+48];
    DCU_OLD_761_6= g_dataBuffer[1077+48];
    DCU_OLD_761_7= g_dataBuffer[1078+48];
    DCU_OLD_761_8= g_dataBuffer[1079+48];
    DCU_OLD_761_9= g_dataBuffer[872+48];
    DCU_OLD_761_10= g_dataBuffer[873+48];
    DCU_OLD_761_11= g_dataBuffer[874+48];
    DCU_OLD_761_12= g_dataBuffer[875+48];
    DCU_OLD_761_13= g_dataBuffer[876+48];
    DCU_OLD_761_14= g_dataBuffer[877+48];
    DCU_OLD_761_15= g_dataBuffer[878+48];
    DCU_OLD_761_16= g_dataBuffer[879+48];


    DCU_OLD_770_1= g_dataBuffer[1088+48];
    DCU_OLD_770_2= g_dataBuffer[1089+48];
    DCU_OLD_770_3= g_dataBuffer[1090+48];
    DCU_OLD_770_4= g_dataBuffer[1091+48];
    DCU_OLD_770_5= g_dataBuffer[1092+48];
    DCU_OLD_770_6= g_dataBuffer[1093+48];
    DCU_OLD_770_7= g_dataBuffer[1094+48];
    DCU_OLD_770_8= g_dataBuffer[1095+48];
    DCU_OLD_770_9= g_dataBuffer[1096+48];
    DCU_OLD_770_10= g_dataBuffer[1097+48];
    DCU_OLD_770_11= g_dataBuffer[1098+48];
    DCU_OLD_770_12= g_dataBuffer[1099+48];
    DCU_OLD_770_13= g_dataBuffer[1100+48];
    DCU_OLD_770_14= g_dataBuffer[1101+48];
    DCU_OLD_770_15= g_dataBuffer[1102+48];
    DCU_OLD_770_16= g_dataBuffer[1103+48];

    DCU_OLD_771_1= g_dataBuffer[1104+48];
    DCU_OLD_771_2= g_dataBuffer[1105+48];
    DCU_OLD_771_3= g_dataBuffer[1106+48];
    DCU_OLD_771_4= g_dataBuffer[1107+48];
    DCU_OLD_771_5= g_dataBuffer[1108+48];
    DCU_OLD_771_6= g_dataBuffer[1109+48];
    DCU_OLD_771_7= g_dataBuffer[1110+48];
    DCU_OLD_771_8= g_dataBuffer[1111+48];
    DCU_OLD_771_9= g_dataBuffer[1112+48];
    DCU_OLD_771_10= g_dataBuffer[1113+48];
    DCU_OLD_771_11= g_dataBuffer[1114+48];
    DCU_OLD_771_12= g_dataBuffer[1115+48];
    DCU_OLD_771_13= g_dataBuffer[1116+48];
    DCU_OLD_771_14= g_dataBuffer[1117+48];
    DCU_OLD_771_15= g_dataBuffer[1118+48];
    DCU_OLD_771_16= g_dataBuffer[1119+48];

    DCU_OLD_780_1= g_dataBuffer[1120+48];
    DCU_OLD_780_2= g_dataBuffer[1121+48];
    DCU_OLD_780_3= g_dataBuffer[1122+48];
    DCU_OLD_780_4= g_dataBuffer[1123+48];
    DCU_OLD_780_5= g_dataBuffer[1124+48];
    DCU_OLD_780_6= g_dataBuffer[1125+48];
    DCU_OLD_780_7= g_dataBuffer[1126+48];
    DCU_OLD_780_8= g_dataBuffer[1127+48];
    DCU_OLD_780_9= g_dataBuffer[1128+48];
    DCU_OLD_780_10= g_dataBuffer[1129+48];
    DCU_OLD_780_11= g_dataBuffer[1130+48];
    DCU_OLD_780_12= g_dataBuffer[1131+48];
    DCU_OLD_780_13= g_dataBuffer[1132+48];
    DCU_OLD_780_14= g_dataBuffer[1133+48];
    DCU_OLD_780_15= g_dataBuffer[1134+48];
    DCU_OLD_780_16= g_dataBuffer[1135+48];

    DCU_OLD_781_1= g_dataBuffer[1136+48];
    DCU_OLD_781_2= g_dataBuffer[1137+48];
    DCU_OLD_781_3= g_dataBuffer[1138+48];
    DCU_OLD_781_4= g_dataBuffer[1139+48];
    DCU_OLD_781_5= g_dataBuffer[1140+48];
    DCU_OLD_781_6= g_dataBuffer[1141+48];
    DCU_OLD_781_7= g_dataBuffer[1142+48];
    DCU_OLD_781_8= g_dataBuffer[1143+48];
    DCU_OLD_781_9= g_dataBuffer[1144+48];
    DCU_OLD_781_10= g_dataBuffer[1145+48];
    DCU_OLD_781_11= g_dataBuffer[1146+48];
    DCU_OLD_781_12= g_dataBuffer[1147+48];
    DCU_OLD_781_13= g_dataBuffer[1148+48];
    DCU_OLD_781_14= g_dataBuffer[1149+48];
    DCU_OLD_781_15= g_dataBuffer[1150+48];
    DCU_OLD_781_16= g_dataBuffer[1151+48];

    DCU_OLD_790_1= g_dataBuffer[1152+48];
    DCU_OLD_790_2= g_dataBuffer[1153+48];
    DCU_OLD_790_3= g_dataBuffer[1154+48];
    DCU_OLD_790_4= g_dataBuffer[1155+48];
    DCU_OLD_790_5= g_dataBuffer[1156+48];
    DCU_OLD_790_6= g_dataBuffer[1157+48];
    DCU_OLD_790_7= g_dataBuffer[1158+48];
    DCU_OLD_790_8= g_dataBuffer[1159+48];
    DCU_OLD_790_9= g_dataBuffer[1160+48];
    DCU_OLD_790_10= g_dataBuffer[1161+48];
    DCU_OLD_790_11= g_dataBuffer[1162+48];
    DCU_OLD_790_12= g_dataBuffer[1163+48];
    DCU_OLD_790_13= g_dataBuffer[1164+48];
    DCU_OLD_790_14= g_dataBuffer[1165+48];
    DCU_OLD_790_15= g_dataBuffer[1166+48];
    DCU_OLD_790_16= g_dataBuffer[1167+48];

    DCU_OLD_791_1= g_dataBuffer[1168+48];
    DCU_OLD_791_2= g_dataBuffer[1169+48];
    DCU_OLD_791_3= g_dataBuffer[1170+48];
    DCU_OLD_791_4= g_dataBuffer[1171+48];
    DCU_OLD_791_5= g_dataBuffer[1172+48];
    DCU_OLD_791_6= g_dataBuffer[1173+48];
    DCU_OLD_791_7= g_dataBuffer[1174+48];
    DCU_OLD_791_8= g_dataBuffer[1175+48];
    DCU_OLD_791_9= g_dataBuffer[1176+48];
    DCU_OLD_791_10= g_dataBuffer[1177+48];
    DCU_OLD_791_11= g_dataBuffer[1178+48];
    DCU_OLD_791_12= g_dataBuffer[1179+48];
    DCU_OLD_791_13= g_dataBuffer[1180+48];
    DCU_OLD_791_14= g_dataBuffer[1181+48];
    DCU_OLD_791_15= g_dataBuffer[1182+48];
    DCU_OLD_791_16= g_dataBuffer[1183+48];

    DCU_OLD_7A0_1= g_dataBuffer[1184+48];
    DCU_OLD_7A0_2= g_dataBuffer[1185+48];
    DCU_OLD_7A0_3= g_dataBuffer[1186+48];
    DCU_OLD_7A0_4= g_dataBuffer[1187+48];
    DCU_OLD_7A0_5= g_dataBuffer[1188+48];
    DCU_OLD_7A0_6= g_dataBuffer[1189+48];
    DCU_OLD_7A0_7= g_dataBuffer[1190+48];
    DCU_OLD_7A0_8= g_dataBuffer[1191+48];
    DCU_OLD_7A0_9= g_dataBuffer[1192+48];
    DCU_OLD_7A0_10= g_dataBuffer[1193+48];
    DCU_OLD_7A0_11= g_dataBuffer[1194+48];
    DCU_OLD_7A0_12= g_dataBuffer[1195+48];
    DCU_OLD_7A0_13= g_dataBuffer[1196+48];
    DCU_OLD_7A0_14= g_dataBuffer[1197+48];
    DCU_OLD_7A0_15= g_dataBuffer[1198+48];
    DCU_OLD_7A0_16= g_dataBuffer[1199+48];

    DCU_OLD_7A1_1= g_dataBuffer[1200+48];
    DCU_OLD_7A1_2= g_dataBuffer[1201+48];
    DCU_OLD_7A1_3= g_dataBuffer[1202+48];
    DCU_OLD_7A1_4= g_dataBuffer[1203+48];
    DCU_OLD_7A1_5= g_dataBuffer[1204+48];
    DCU_OLD_7A1_6= g_dataBuffer[1205+48];
    DCU_OLD_7A1_7= g_dataBuffer[1206+48];
    DCU_OLD_7A1_8= g_dataBuffer[1207+48];
    DCU_OLD_7A1_9= g_dataBuffer[1208+48];
    DCU_OLD_7A1_10= g_dataBuffer[1209+48];
    DCU_OLD_7A1_11= g_dataBuffer[1210+48];
    DCU_OLD_7A1_12= g_dataBuffer[1211+48];
    DCU_OLD_7A1_13= g_dataBuffer[1212+48];
    DCU_OLD_7A1_14= g_dataBuffer[1213+48];
    DCU_OLD_7A1_15= g_dataBuffer[1214+48];
    DCU_OLD_7A1_16= g_dataBuffer[1215+48];

    DCU_OLD_7B0_1= g_dataBuffer[1216+48];
    DCU_OLD_7B0_2= g_dataBuffer[1217+48];
    DCU_OLD_7B0_3= g_dataBuffer[1218+48];
    DCU_OLD_7B0_4= g_dataBuffer[1219+48];
    DCU_OLD_7B0_5= g_dataBuffer[1220+48];
    DCU_OLD_7B0_6= g_dataBuffer[1221+48];
    DCU_OLD_7B0_7= g_dataBuffer[1222+48];
    DCU_OLD_7B0_8= g_dataBuffer[1223+48];
    DCU_OLD_7B0_9= g_dataBuffer[1224+48];
    DCU_OLD_7B0_10= g_dataBuffer[1225+48];
    DCU_OLD_7B0_11= g_dataBuffer[1226+48];
    DCU_OLD_7B0_12= g_dataBuffer[1227+48];
    DCU_OLD_7B0_13= g_dataBuffer[1228+48];
    DCU_OLD_7B0_14= g_dataBuffer[1229+48];
    DCU_OLD_7B0_15= g_dataBuffer[1230+48];
    DCU_OLD_7B0_16= g_dataBuffer[1231+48];

    DCU_OLD_7B1_1= g_dataBuffer[1232+48];
    DCU_OLD_7B1_2= g_dataBuffer[1233+48];
    DCU_OLD_7B1_3= g_dataBuffer[1234+48];
    DCU_OLD_7B1_4= g_dataBuffer[1235+48];
    DCU_OLD_7B1_5= g_dataBuffer[1236+48];
    DCU_OLD_7B1_6= g_dataBuffer[1237+48];
    DCU_OLD_7B1_7= g_dataBuffer[1238+48];
    DCU_OLD_7B1_8= g_dataBuffer[1239+48];
    DCU_OLD_7B1_9= g_dataBuffer[1240+48];
    DCU_OLD_7B1_10= g_dataBuffer[1241+48];
    DCU_OLD_7B1_11= g_dataBuffer[1242+48];
    DCU_OLD_7B1_12= g_dataBuffer[1243+48];
    DCU_OLD_7B1_13= g_dataBuffer[1244+48];
    DCU_OLD_7B1_14= g_dataBuffer[1245+48];
    DCU_OLD_7B1_15= g_dataBuffer[1246+48];
    DCU_OLD_7B1_16= g_dataBuffer[1247+48];

    DCU_OLD_7C0_1= g_dataBuffer[1248+48];
    DCU_OLD_7C0_2= g_dataBuffer[1249+48];
    DCU_OLD_7C0_3= g_dataBuffer[1250+48];
    DCU_OLD_7C0_4= g_dataBuffer[1251+48];
    DCU_OLD_7C0_5= g_dataBuffer[1252+48];
    DCU_OLD_7C0_6= g_dataBuffer[1253+48];
    DCU_OLD_7C0_7= g_dataBuffer[1254+48];
    DCU_OLD_7C0_8= g_dataBuffer[1255+48];
    DCU_OLD_7C0_9= g_dataBuffer[1256+48];
    DCU_OLD_7C0_10= g_dataBuffer[1257+48];
    DCU_OLD_7C0_11= g_dataBuffer[1258+48];
    DCU_OLD_7C0_12= g_dataBuffer[1259+48];
    DCU_OLD_7C0_13= g_dataBuffer[1260+48];
    DCU_OLD_7C0_14= g_dataBuffer[1261+48];
    DCU_OLD_7C0_15= g_dataBuffer[1262+48];
    DCU_OLD_7C0_16= g_dataBuffer[1263+48];

    DCU_OLD_7C1_1= g_dataBuffer[1264+48];
    DCU_OLD_7C1_2= g_dataBuffer[1265+48];
    DCU_OLD_7C1_3= g_dataBuffer[1266+48];
    DCU_OLD_7C1_4= g_dataBuffer[1267+48];
    DCU_OLD_7C1_5= g_dataBuffer[1268+48];
    DCU_OLD_7C1_6= g_dataBuffer[1269+48];
    DCU_OLD_7C1_7= g_dataBuffer[1270+48];
    DCU_OLD_7C1_8= g_dataBuffer[1271+48];
    DCU_OLD_7C1_9= g_dataBuffer[1272+48];
    DCU_OLD_7C1_10= g_dataBuffer[1273+48];
    DCU_OLD_7C1_11= g_dataBuffer[1274+48];
    DCU_OLD_7C1_12= g_dataBuffer[1275+48];
    DCU_OLD_7C1_13= g_dataBuffer[1276+48];
    DCU_OLD_7C1_14= g_dataBuffer[1277+48];
    DCU_OLD_7C1_15= g_dataBuffer[1278+48];
    DCU_OLD_7C1_16= g_dataBuffer[1279+48];


    DCU_OLD_7D0_1= g_dataBuffer[1280+48];
    DCU_OLD_7D0_2= g_dataBuffer[1281+48];
    DCU_OLD_7D0_3= g_dataBuffer[1282+48];
    DCU_OLD_7D0_4= g_dataBuffer[1283+48];
    DCU_OLD_7D0_5= g_dataBuffer[1284+48];
    DCU_OLD_7D0_6= g_dataBuffer[1285+48];
    DCU_OLD_7D0_7= g_dataBuffer[1286+48];
    DCU_OLD_7D0_8= g_dataBuffer[1287+48];
    DCU_OLD_7D0_9= g_dataBuffer[1288+48];
    DCU_OLD_7D0_10= g_dataBuffer[1289+48];
    DCU_OLD_7D0_11= g_dataBuffer[1290+48];
    DCU_OLD_7D0_12= g_dataBuffer[1291+48];
    DCU_OLD_7D0_13= g_dataBuffer[1292+48];
    DCU_OLD_7D0_14= g_dataBuffer[1293+48];
    DCU_OLD_7D0_15= g_dataBuffer[1294+48];
    DCU_OLD_7D0_16= g_dataBuffer[1295+48];

    DCU_OLD_7D1_1= g_dataBuffer[1296+48];
    DCU_OLD_7D1_2= g_dataBuffer[1297+48];
    DCU_OLD_7D1_3= g_dataBuffer[1298+48];
    DCU_OLD_7D1_4= g_dataBuffer[1299+48];
    DCU_OLD_7D1_5= g_dataBuffer[1300+48];
    DCU_OLD_7D1_6= g_dataBuffer[1301+48];
    DCU_OLD_7D1_7= g_dataBuffer[1302+48];
    DCU_OLD_7D1_8= g_dataBuffer[1303+48];
    DCU_OLD_7D1_9= g_dataBuffer[1304+48];
    DCU_OLD_7D1_10= g_dataBuffer[1305+48];
    DCU_OLD_7D1_11= g_dataBuffer[1306+48];
    DCU_OLD_7D1_12= g_dataBuffer[1307+48];
    DCU_OLD_7D1_13= g_dataBuffer[1308+48];
    DCU_OLD_7D1_14= g_dataBuffer[1309+48];
    DCU_OLD_7D1_15= g_dataBuffer[1310+48];
    DCU_OLD_7D1_16= g_dataBuffer[1311+48];


    DCU_OLD_7E0_1= g_dataBuffer[1312+48];
    DCU_OLD_7E0_2= g_dataBuffer[1313+48];
    DCU_OLD_7E0_3= g_dataBuffer[1314+48];
    DCU_OLD_7E0_4= g_dataBuffer[1315+48];
    DCU_OLD_7E0_5= g_dataBuffer[1316+48];
    DCU_OLD_7E0_6= g_dataBuffer[1317+48];
    DCU_OLD_7E0_7= g_dataBuffer[1318+48];
    DCU_OLD_7E0_8= g_dataBuffer[1319+48];
    DCU_OLD_7E0_9= g_dataBuffer[1320+48];
    DCU_OLD_7E0_10= g_dataBuffer[1321+48];
    DCU_OLD_7E0_11= g_dataBuffer[1322+48];
    DCU_OLD_7E0_12= g_dataBuffer[1323+48];
    DCU_OLD_7E0_13= g_dataBuffer[1324+48];
    DCU_OLD_7E0_14= g_dataBuffer[1325+48];
    DCU_OLD_7E0_15= g_dataBuffer[1326+48];
    DCU_OLD_7E0_16= g_dataBuffer[1327+48];

    DCU_OLD_7E1_1= g_dataBuffer[1328+48];
    DCU_OLD_7E1_2= g_dataBuffer[1329+48];
    DCU_OLD_7E1_3= g_dataBuffer[1330+48];
    DCU_OLD_7E1_4= g_dataBuffer[1331+48];
    DCU_OLD_7E1_5= g_dataBuffer[1332+48];
    DCU_OLD_7E1_6= g_dataBuffer[1333+48];
    DCU_OLD_7E1_7= g_dataBuffer[1334+48];
    DCU_OLD_7E1_8= g_dataBuffer[1335+48];
    DCU_OLD_7E1_9= g_dataBuffer[1336+48];
    DCU_OLD_7E1_10= g_dataBuffer[1337+48];
    DCU_OLD_7E1_11= g_dataBuffer[1338+48];
    DCU_OLD_7E1_12= g_dataBuffer[1339+48];
    DCU_OLD_7E1_13= g_dataBuffer[1340+48];
    DCU_OLD_7E1_14= g_dataBuffer[1341+48];
    DCU_OLD_7E1_15= g_dataBuffer[1342+48];
    DCU_OLD_7E1_16= g_dataBuffer[1343+48];

    DCU_OLD_7F0_1= g_dataBuffer[1344+48];
    DCU_OLD_7F0_2= g_dataBuffer[1345+48];
    DCU_OLD_7F0_3= g_dataBuffer[1346+48];
    DCU_OLD_7F0_4= g_dataBuffer[1347+48];
    DCU_OLD_7F0_5= g_dataBuffer[1348+48];
    DCU_OLD_7F0_6= g_dataBuffer[1349+48];
    DCU_OLD_7F0_7= g_dataBuffer[1350+48];
    DCU_OLD_7F0_8= g_dataBuffer[1351+48];
    DCU_OLD_7F0_9= g_dataBuffer[1352+48];
    DCU_OLD_7F0_10= g_dataBuffer[1353+48];
    DCU_OLD_7F0_11= g_dataBuffer[1354+48];
    DCU_OLD_7F0_12= g_dataBuffer[1355+48];
    DCU_OLD_7F0_13= g_dataBuffer[1356+48];
    DCU_OLD_7F0_14= g_dataBuffer[1357+48];
    DCU_OLD_7F0_15= g_dataBuffer[1358+48];
    DCU_OLD_7F0_16= g_dataBuffer[1359+48];

    DCU_OLD_7F1_1= g_dataBuffer[1360+48];
    DCU_OLD_7F1_2= g_dataBuffer[1361+48];
    DCU_OLD_7F1_3= g_dataBuffer[1362+48];
    DCU_OLD_7F1_4= g_dataBuffer[1363+48];
    DCU_OLD_7F1_5= g_dataBuffer[1364+48];
    DCU_OLD_7F1_6= g_dataBuffer[1365+48];
    DCU_OLD_7F1_7= g_dataBuffer[1366+48];
    DCU_OLD_7F1_8= g_dataBuffer[1367+48];
    DCU_OLD_7F1_9= g_dataBuffer[1368+48];
    DCU_OLD_7F1_10= g_dataBuffer[1369+48];
    DCU_OLD_7F1_11= g_dataBuffer[1370+48];
    DCU_OLD_7F1_12= g_dataBuffer[1371+48];
    DCU_OLD_7F1_13= g_dataBuffer[1372+48];
    DCU_OLD_7F1_14= g_dataBuffer[1373+48];
    DCU_OLD_7F1_15= g_dataBuffer[1374+48];
    DCU_OLD_7F1_16= g_dataBuffer[1375+48];

    DCU_710_1= g_dataBuffer[896+2264];
    DCU_710_2= g_dataBuffer[897+2264];
    DCU_710_3= g_dataBuffer[898+2264];
    DCU_710_4= g_dataBuffer[899+2264];
    DCU_710_5= g_dataBuffer[900+2264];
    DCU_710_6= g_dataBuffer[901+2264];
    DCU_710_7= g_dataBuffer[902+2264];
    DCU_710_8= g_dataBuffer[903+2264];
    DCU_710_9= g_dataBuffer[904+2264];
    DCU_710_10= g_dataBuffer[905+2264];
    DCU_710_11= g_dataBuffer[906+2264];
    DCU_710_12= g_dataBuffer[907+2264];
    DCU_710_13= g_dataBuffer[908+2264];
    DCU_710_14= g_dataBuffer[909+2264];
    DCU_710_15= g_dataBuffer[910+2264];
    DCU_710_16= g_dataBuffer[911+2264];

    DCU_711_1= g_dataBuffer[912+2264];
    DCU_711_2= g_dataBuffer[913+2264];
    DCU_711_3= g_dataBuffer[914+2264];
    DCU_711_4= g_dataBuffer[915+2264];
    DCU_711_5= g_dataBuffer[916+2264];
    DCU_711_6= g_dataBuffer[917+2264];
    DCU_711_7= g_dataBuffer[918+2264];
    DCU_711_8= g_dataBuffer[919+2264];
    DCU_711_9= g_dataBuffer[920+2264];
    DCU_711_10= g_dataBuffer[921+2264];
    DCU_711_11= g_dataBuffer[922+2264];
    DCU_711_12= g_dataBuffer[923+2264];
    DCU_711_13= g_dataBuffer[924+2264];
    DCU_711_14= g_dataBuffer[925+2264];
    DCU_711_15= g_dataBuffer[926+2264];
    DCU_711_16= g_dataBuffer[927+2264];


    DCU_720_1= g_dataBuffer[928+2264];
    DCU_720_2= g_dataBuffer[929+2264];
    DCU_720_3= g_dataBuffer[930+2264];
    DCU_720_4= g_dataBuffer[931+2264];
    DCU_720_5= g_dataBuffer[932+2264];
    DCU_720_6= g_dataBuffer[933+2264];
    DCU_720_7= g_dataBuffer[934+2264];
    DCU_720_8= g_dataBuffer[935+2264];
    DCU_720_9= g_dataBuffer[936+2264];
    DCU_720_10= g_dataBuffer[937+2264];
    DCU_720_11= g_dataBuffer[938+2264];
    DCU_720_12= g_dataBuffer[939+2264];
    DCU_720_13= g_dataBuffer[940+2264];
    DCU_720_14= g_dataBuffer[941+2264];
    DCU_720_15= g_dataBuffer[942+2264];
    DCU_720_16= g_dataBuffer[943+2264];

    DCU_721_1= g_dataBuffer[944+2264];
    DCU_721_2= g_dataBuffer[945+2264];
    DCU_721_3= g_dataBuffer[946+2264];
    DCU_721_4= g_dataBuffer[947+2264];
    DCU_721_5= g_dataBuffer[948+2264];
    DCU_721_6= g_dataBuffer[949+2264];
    DCU_721_7= g_dataBuffer[950+2264];
    DCU_721_8= g_dataBuffer[951+2264];
    DCU_721_9= g_dataBuffer[952+2264];
    DCU_721_10= g_dataBuffer[953+2264];
    DCU_721_11= g_dataBuffer[954+2264];
    DCU_721_12= g_dataBuffer[955+2264];
    DCU_721_13= g_dataBuffer[956+2264];
    DCU_721_14= g_dataBuffer[957+2264];
    DCU_721_15= g_dataBuffer[958+2264];
    DCU_721_16= g_dataBuffer[959+2264];

    DCU_730_1= g_dataBuffer[960+2264];
    DCU_730_2= g_dataBuffer[961+2264];
    DCU_730_3= g_dataBuffer[962+2264];
    DCU_730_4= g_dataBuffer[963+2264];
    DCU_730_5= g_dataBuffer[964+2264];
    DCU_730_6= g_dataBuffer[965+2264];
    DCU_730_7= g_dataBuffer[966+2264];
    DCU_730_8= g_dataBuffer[967+2264];
    DCU_730_9= g_dataBuffer[968+2264];
    DCU_730_10= g_dataBuffer[969+2264];
    DCU_730_11= g_dataBuffer[970+2264];
    DCU_730_12= g_dataBuffer[971+2264];
    DCU_730_13= g_dataBuffer[972+2264];
    DCU_730_14= g_dataBuffer[973+2264];
    DCU_730_15= g_dataBuffer[974+2264];
    DCU_730_16= g_dataBuffer[975+2264];

    DCU_731_1= g_dataBuffer[976+2264];
    DCU_731_2= g_dataBuffer[977+2264];
    DCU_731_3= g_dataBuffer[978+2264];
    DCU_731_4= g_dataBuffer[979+2264];
    DCU_731_5= g_dataBuffer[980+2264];
    DCU_731_6= g_dataBuffer[981+2264];
    DCU_731_7= g_dataBuffer[982+2264];
    DCU_731_8= g_dataBuffer[983+2264];
    DCU_731_9= g_dataBuffer[984+2264];
    DCU_731_10= g_dataBuffer[985+2264];
    DCU_731_11= g_dataBuffer[986+2264];
    DCU_731_12= g_dataBuffer[987+2264];
    DCU_731_13= g_dataBuffer[988+2264];
    DCU_731_14= g_dataBuffer[989+2264];
    DCU_731_15= g_dataBuffer[990+2264];
    DCU_731_16= g_dataBuffer[991+2264];

    DCU_740_1= g_dataBuffer[992+2264];
    DCU_740_2= g_dataBuffer[993+2264];
    DCU_740_3= g_dataBuffer[994+2264];
    DCU_740_4= g_dataBuffer[995+2264];
    DCU_740_5= g_dataBuffer[996+2264];
    DCU_740_6= g_dataBuffer[997+2264];
    DCU_740_7= g_dataBuffer[998+2264];
    DCU_740_8= g_dataBuffer[999+2264];
    DCU_740_9= g_dataBuffer[1000+2264];
    DCU_740_10= g_dataBuffer[1001+2264];
    DCU_740_11= g_dataBuffer[1002+2264];
    DCU_740_12= g_dataBuffer[1003+2264];
    DCU_740_13= g_dataBuffer[1004+2264];
    DCU_740_14= g_dataBuffer[1005+2264];
    DCU_740_15= g_dataBuffer[1006+2264];
    DCU_740_16= g_dataBuffer[1007+2264];

    DCU_741_1= g_dataBuffer[1008+2264];
    DCU_741_2= g_dataBuffer[1009+2264];
    DCU_741_3= g_dataBuffer[1010+2264];
    DCU_741_4= g_dataBuffer[1011+2264];
    DCU_741_5= g_dataBuffer[1012+2264];
    DCU_741_6= g_dataBuffer[1013+2264];
    DCU_741_7= g_dataBuffer[1014+2264];
    DCU_741_8= g_dataBuffer[1015+2264];
    DCU_741_9= g_dataBuffer[1016+2264];
    DCU_741_10= g_dataBuffer[1017+2264];
    DCU_741_11= g_dataBuffer[1018+2264];
    DCU_741_12= g_dataBuffer[1019+2264];
    DCU_741_13= g_dataBuffer[1020+2264];
    DCU_741_14= g_dataBuffer[1021+2264];
    DCU_741_15= g_dataBuffer[1022+2264];
    DCU_741_16= g_dataBuffer[1023+2264];

    DCU_750_1= g_dataBuffer[1024+2264];
    DCU_750_2= g_dataBuffer[1025+2264];
    DCU_750_3= g_dataBuffer[1026+2264];
    DCU_750_4= g_dataBuffer[1027+2264];
    DCU_750_5= g_dataBuffer[1028+2264];
    DCU_750_6= g_dataBuffer[1029+2264];
    DCU_750_7= g_dataBuffer[1030+2264];
    DCU_750_8= g_dataBuffer[1031+2264];
    DCU_750_9= g_dataBuffer[1032+2264];
    DCU_750_10= g_dataBuffer[1033+2264];
    DCU_750_11= g_dataBuffer[1034+2264];
    DCU_750_12= g_dataBuffer[1035+2264];
    DCU_750_13= g_dataBuffer[1036+2264];
    DCU_750_14= g_dataBuffer[1037+2264];
    DCU_750_15= g_dataBuffer[1038+2264];
    DCU_750_16= g_dataBuffer[1039+2264];

    DCU_751_1= g_dataBuffer[1040+2264];
    DCU_751_2= g_dataBuffer[1041+2264];
    DCU_751_3= g_dataBuffer[1042+2264];
    DCU_751_4= g_dataBuffer[1043+2264];
    DCU_751_5= g_dataBuffer[1044+2264];
    DCU_751_6= g_dataBuffer[1045+2264];
    DCU_751_7= g_dataBuffer[1046+2264];
    DCU_751_8= g_dataBuffer[1047+2264];
    DCU_751_9= g_dataBuffer[1048+2264];
    DCU_751_10= g_dataBuffer[1049+2264];
    DCU_751_11= g_dataBuffer[1050+2264];
    DCU_751_12= g_dataBuffer[1051+2264];
    DCU_751_13= g_dataBuffer[1052+2264];
    DCU_751_14= g_dataBuffer[1053+2264];
    DCU_751_15= g_dataBuffer[1054+2264];
    DCU_751_16= g_dataBuffer[1055+2264];


    DCU_760_1= g_dataBuffer[1056+2264];
    DCU_760_2= g_dataBuffer[1057+2264];
    DCU_760_3= g_dataBuffer[1058+2264];
    DCU_760_4= g_dataBuffer[1059+2264];
    DCU_760_5= g_dataBuffer[1060+2264];
    DCU_760_6= g_dataBuffer[1061+2264];
    DCU_760_7= g_dataBuffer[1062+2264];
    DCU_760_8= g_dataBuffer[1063+2264];
    DCU_760_9= g_dataBuffer[1064+2264];
    DCU_760_10= g_dataBuffer[1065+2264];
    DCU_760_11= g_dataBuffer[1066+2264];
    DCU_760_12= g_dataBuffer[1067+2264];
    DCU_760_13= g_dataBuffer[1068+2264];
    DCU_760_14= g_dataBuffer[1069+2264];
    DCU_760_15= g_dataBuffer[1070+2264];
    DCU_760_16= g_dataBuffer[1071+2264];

    DCU_761_1= g_dataBuffer[1072+2264];
    DCU_761_2= g_dataBuffer[1073+2264];
    DCU_761_3= g_dataBuffer[1074+2264];
    DCU_761_4= g_dataBuffer[1075+2264];
    DCU_761_5= g_dataBuffer[1076+2264];
    DCU_761_6= g_dataBuffer[1077+2264];
    DCU_761_7= g_dataBuffer[1078+2264];
    DCU_761_8= g_dataBuffer[1079+2264];
    DCU_761_9= g_dataBuffer[872+2264];
    DCU_761_10= g_dataBuffer[873+2264];
    DCU_761_11= g_dataBuffer[874+2264];
    DCU_761_12= g_dataBuffer[875+2264];
    DCU_761_13= g_dataBuffer[876+2264];
    DCU_761_14= g_dataBuffer[877+2264];
    DCU_761_15= g_dataBuffer[878+2264];
    DCU_761_16= g_dataBuffer[879+2264];


    DCU_770_1= g_dataBuffer[1088+2264];
    DCU_770_2= g_dataBuffer[1089+2264];
    DCU_770_3= g_dataBuffer[1090+2264];
    DCU_770_4= g_dataBuffer[1091+2264];
    DCU_770_5= g_dataBuffer[1092+2264];
    DCU_770_6= g_dataBuffer[1093+2264];
    DCU_770_7= g_dataBuffer[1094+2264];
    DCU_770_8= g_dataBuffer[1095+2264];
    DCU_770_9= g_dataBuffer[1096+2264];
    DCU_770_10= g_dataBuffer[1097+2264];
    DCU_770_11= g_dataBuffer[1098+2264];
    DCU_770_12= g_dataBuffer[1099+2264];
    DCU_770_13= g_dataBuffer[1100+2264];
    DCU_770_14= g_dataBuffer[1101+2264];
    DCU_770_15= g_dataBuffer[1102+2264];
    DCU_770_16= g_dataBuffer[1103+2264];

    DCU_771_1= g_dataBuffer[1104+2264];
    DCU_771_2= g_dataBuffer[1105+2264];
    DCU_771_3= g_dataBuffer[1106+2264];
    DCU_771_4= g_dataBuffer[1107+2264];
    DCU_771_5= g_dataBuffer[1108+2264];
    DCU_771_6= g_dataBuffer[1109+2264];
    DCU_771_7= g_dataBuffer[1110+2264];
    DCU_771_8= g_dataBuffer[1111+2264];
    DCU_771_9= g_dataBuffer[1112+2264];
    DCU_771_10= g_dataBuffer[1113+2264];
    DCU_771_11= g_dataBuffer[1114+2264];
    DCU_771_12= g_dataBuffer[1115+2264];
    DCU_771_13= g_dataBuffer[1116+2264];
    DCU_771_14= g_dataBuffer[1117+2264];
    DCU_771_15= g_dataBuffer[1118+2264];
    DCU_771_16= g_dataBuffer[1119+2264];

    DCU_780_1= g_dataBuffer[1120+2264];
    DCU_780_2= g_dataBuffer[1121+2264];
    DCU_780_3= g_dataBuffer[1122+2264];
    DCU_780_4= g_dataBuffer[1123+2264];
    DCU_780_5= g_dataBuffer[1124+2264];
    DCU_780_6= g_dataBuffer[1125+2264];
    DCU_780_7= g_dataBuffer[1126+2264];
    DCU_780_8= g_dataBuffer[1127+2264];
    DCU_780_9= g_dataBuffer[1128+2264];
    DCU_780_10= g_dataBuffer[1129+2264];
    DCU_780_11= g_dataBuffer[1130+2264];
    DCU_780_12= g_dataBuffer[1131+2264];
    DCU_780_13= g_dataBuffer[1132+2264];
    DCU_780_14= g_dataBuffer[1133+2264];
    DCU_780_15= g_dataBuffer[1134+2264];
    DCU_780_16= g_dataBuffer[1135+2264];

    DCU_781_1= g_dataBuffer[1136+2264];
    DCU_781_2= g_dataBuffer[1137+2264];
    DCU_781_3= g_dataBuffer[1138+2264];
    DCU_781_4= g_dataBuffer[1139+2264];
    DCU_781_5= g_dataBuffer[1140+2264];
    DCU_781_6= g_dataBuffer[1141+2264];
    DCU_781_7= g_dataBuffer[1142+2264];
    DCU_781_8= g_dataBuffer[1143+2264];
    DCU_781_9= g_dataBuffer[1144+2264];
    DCU_781_10= g_dataBuffer[1145+2264];
    DCU_781_11= g_dataBuffer[1146+2264];
    DCU_781_12= g_dataBuffer[1147+2264];
    DCU_781_13= g_dataBuffer[1148+2264];
    DCU_781_14= g_dataBuffer[1149+2264];
    DCU_781_15= g_dataBuffer[1150+2264];
    DCU_781_16= g_dataBuffer[1151+2264];



    HVAC_810_1= g_dataBuffer[1232+208];
    HVAC_810_2= g_dataBuffer[1233+208];
    HVAC_810_3= g_dataBuffer[1234+208];
    HVAC_810_4= g_dataBuffer[1235+208];
    HVAC_810_5= g_dataBuffer[1236+208];
    HVAC_810_6= g_dataBuffer[1237+208];
    HVAC_810_7= g_dataBuffer[1238+208];
    HVAC_810_8= g_dataBuffer[1239+208];
    HVAC_810_9= g_dataBuffer[1240+208];
    HVAC_810_10= g_dataBuffer[1241+208];
    HVAC_810_11= g_dataBuffer[1242+208];
    HVAC_810_12= g_dataBuffer[1243+208];
    HVAC_810_13= g_dataBuffer[1244+208];
    HVAC_810_14= g_dataBuffer[1245+208];
    HVAC_810_15= g_dataBuffer[1246+208];
    HVAC_810_16= g_dataBuffer[1247+208];

    HVAC_820_1= g_dataBuffer[1248+208];
    HVAC_820_2= g_dataBuffer[1249+208];
    HVAC_820_3= g_dataBuffer[1250+208];
    HVAC_820_4= g_dataBuffer[1251+208];
    HVAC_820_5= g_dataBuffer[1252+208];
    HVAC_820_6= g_dataBuffer[1253+208];
    HVAC_820_7= g_dataBuffer[1254+208];
    HVAC_820_8= g_dataBuffer[1255+208];
    HVAC_820_9= g_dataBuffer[1256+208];
    HVAC_820_10= g_dataBuffer[1257+208];
    HVAC_820_11= g_dataBuffer[1258+208];
    HVAC_820_12= g_dataBuffer[1259+208];
    HVAC_820_13= g_dataBuffer[1260+208];
    HVAC_820_14= g_dataBuffer[1261+208];
    HVAC_820_15= g_dataBuffer[1262+208];
    HVAC_820_16= g_dataBuffer[1263+208];

    HVAC_830_1= g_dataBuffer[1264+208];
    HVAC_830_2= g_dataBuffer[1265+208];
    HVAC_830_3= g_dataBuffer[1266+208];
    HVAC_830_4= g_dataBuffer[1267+208];
    HVAC_830_5= g_dataBuffer[1268+208];
    HVAC_830_6= g_dataBuffer[1269+208];
    HVAC_830_7= g_dataBuffer[1270+208];
    HVAC_830_8= g_dataBuffer[1271+208];
    HVAC_830_9= g_dataBuffer[1272+208];
    HVAC_830_10= g_dataBuffer[1273+208];
    HVAC_830_11= g_dataBuffer[1274+208];
    HVAC_830_12= g_dataBuffer[1275+208];
    HVAC_830_13= g_dataBuffer[1276+208];
    HVAC_830_14= g_dataBuffer[1277+208];
    HVAC_830_15= g_dataBuffer[1278+208];
    HVAC_830_16= g_dataBuffer[1279+208];

    HVAC_840_1= g_dataBuffer[1280+208];
    HVAC_840_2= g_dataBuffer[1281+208];
    HVAC_840_3= g_dataBuffer[1282+208];
    HVAC_840_4= g_dataBuffer[1283+208];
    HVAC_840_5= g_dataBuffer[1284+208];
    HVAC_840_6= g_dataBuffer[1285+208];
    HVAC_840_7= g_dataBuffer[1286+208];
    HVAC_840_8= g_dataBuffer[1287+208];
    HVAC_840_9= g_dataBuffer[1288+208];
    HVAC_840_10= g_dataBuffer[1289+208];
    HVAC_840_11= g_dataBuffer[1290+208];
    HVAC_840_12= g_dataBuffer[1291+208];
    HVAC_840_13= g_dataBuffer[1292+208];
    HVAC_840_14= g_dataBuffer[1293+208];
    HVAC_840_15= g_dataBuffer[1294+208];
    HVAC_840_16= g_dataBuffer[1295+208];

    HVAC_850_1= g_dataBuffer[1296+208];
    HVAC_850_2= g_dataBuffer[1297+208];
    HVAC_850_3= g_dataBuffer[1298+208];
    HVAC_850_4= g_dataBuffer[1299+208];
    HVAC_850_5= g_dataBuffer[1300+208];
    HVAC_850_6= g_dataBuffer[1301+208];
    HVAC_850_7= g_dataBuffer[1302+208];
    HVAC_850_8= g_dataBuffer[1303+208];
    HVAC_850_9= g_dataBuffer[1304+208];
    HVAC_850_10= g_dataBuffer[1305+208];
    HVAC_850_11= g_dataBuffer[1306+208];
    HVAC_850_12= g_dataBuffer[1307+208];
    HVAC_850_13= g_dataBuffer[1308+208];
    HVAC_850_14= g_dataBuffer[1309+208];
    HVAC_850_15= g_dataBuffer[1310+208];
    HVAC_850_16= g_dataBuffer[1311+208];

    HVAC_860_1= g_dataBuffer[1312+208];
    HVAC_860_2= g_dataBuffer[1313+208];
    HVAC_860_3= g_dataBuffer[1314+208];
    HVAC_860_4= g_dataBuffer[1315+208];
    HVAC_860_5= g_dataBuffer[1316+208];
    HVAC_860_6= g_dataBuffer[1317+208];
    HVAC_860_7= g_dataBuffer[1318+208];
    HVAC_860_8= g_dataBuffer[1319+208];
    HVAC_860_9= g_dataBuffer[1320+208];
    HVAC_860_10= g_dataBuffer[1321+208];
    HVAC_860_11= g_dataBuffer[1322+208];
    HVAC_860_12= g_dataBuffer[1323+208];
    HVAC_860_13= g_dataBuffer[1324+208];
    HVAC_860_14= g_dataBuffer[1325+208];
    HVAC_860_15= g_dataBuffer[1326+208];
    HVAC_860_16= g_dataBuffer[1327+208];

    HVAC_870_1= g_dataBuffer[1328+208];
    HVAC_870_2= g_dataBuffer[1329+208];
    HVAC_870_3= g_dataBuffer[1330+208];
    HVAC_870_4= g_dataBuffer[1331+208];
    HVAC_870_5= g_dataBuffer[1332+208];
    HVAC_870_6= g_dataBuffer[1333+208];
    HVAC_870_7= g_dataBuffer[1334+208];
    HVAC_870_8= g_dataBuffer[1335+208];
    HVAC_870_9= g_dataBuffer[1336+208];
    HVAC_870_10= g_dataBuffer[1337+208];
    HVAC_870_11= g_dataBuffer[1338+208];
    HVAC_870_12= g_dataBuffer[1339+208];
    HVAC_870_13= g_dataBuffer[1340+208];
    HVAC_870_14= g_dataBuffer[1341+208];
    HVAC_870_15= g_dataBuffer[1342+208];
    HVAC_870_16= g_dataBuffer[1343+208];

    HVAC_880_1= g_dataBuffer[1344+208];
    HVAC_880_2= g_dataBuffer[1345+208];
    HVAC_880_3= g_dataBuffer[1346+208];
    HVAC_880_4= g_dataBuffer[1347+208];
    HVAC_880_5= g_dataBuffer[1348+208];
    HVAC_880_6= g_dataBuffer[1349+208];
    HVAC_880_7= g_dataBuffer[1350+208];
    HVAC_880_8= g_dataBuffer[1351+208];
    HVAC_880_9= g_dataBuffer[1352+208];
    HVAC_880_10= g_dataBuffer[1353+208];
    HVAC_880_11= g_dataBuffer[1354+208];
    HVAC_880_12= g_dataBuffer[1355+208];
    HVAC_880_13= g_dataBuffer[1356+208];
    HVAC_880_14= g_dataBuffer[1357+208];
    HVAC_880_15= g_dataBuffer[1358+208];
    HVAC_880_16= g_dataBuffer[1359+208];

    PIS_910_1= g_dataBuffer[1360+224];
    PIS_910_2= g_dataBuffer[1361+224];
    PIS_910_3= g_dataBuffer[1362+224];
    PIS_910_4= g_dataBuffer[1363+224];
    PIS_910_5= g_dataBuffer[1364+224];
    PIS_910_6= g_dataBuffer[1365+224];
    PIS_910_7= g_dataBuffer[1366+224];
    PIS_910_8= g_dataBuffer[1367+224];
    PIS_910_9= g_dataBuffer[1368+224];
    PIS_910_10= g_dataBuffer[1369+224];
    PIS_910_11= g_dataBuffer[1370+224];
    PIS_910_12= g_dataBuffer[1371+224];
    PIS_910_13= g_dataBuffer[1372+224];
    PIS_910_14= g_dataBuffer[1373+224];
    PIS_910_15= g_dataBuffer[1374+224];
    PIS_910_16= g_dataBuffer[1375+224];

    PIS_911_1= g_dataBuffer[1376+224];
    PIS_911_2= g_dataBuffer[1377+224];
    PIS_911_3= g_dataBuffer[1378+224];
    PIS_911_4= g_dataBuffer[1379+224];
    PIS_911_5= g_dataBuffer[1380+224];
    PIS_911_6= g_dataBuffer[1381+224];
    PIS_911_7= g_dataBuffer[1382+224];
    PIS_911_8= g_dataBuffer[1383+224];
    PIS_911_9= g_dataBuffer[1384+224];
    PIS_911_10= g_dataBuffer[1385+224];
    PIS_911_11= g_dataBuffer[1386+224];
    PIS_911_12= g_dataBuffer[1387+224];
    PIS_911_13= g_dataBuffer[1388+224];
    PIS_911_14= g_dataBuffer[1389+224];
    PIS_911_15= g_dataBuffer[1390+224];
    PIS_911_16= g_dataBuffer[1391+224];

    PIS_920_1= g_dataBuffer[1392+224];
    PIS_920_2= g_dataBuffer[1393+224];
    PIS_920_3= g_dataBuffer[1394+224];
    PIS_920_4= g_dataBuffer[1395+224];
    PIS_920_5= g_dataBuffer[1396+224];
    PIS_920_6= g_dataBuffer[1397+224];
    PIS_920_7= g_dataBuffer[1398+224];
    PIS_920_8= g_dataBuffer[1399+224];
    PIS_920_9= g_dataBuffer[1400+224];
    PIS_920_10= g_dataBuffer[1401+224];
    PIS_920_11= g_dataBuffer[1402+224];
    PIS_920_12= g_dataBuffer[1403+224];
    PIS_920_13= g_dataBuffer[1404+224];
    PIS_920_14= g_dataBuffer[1405+224];
    PIS_920_15= g_dataBuffer[1406+224];
    PIS_920_16= g_dataBuffer[1407+224];

    PIS_921_1= g_dataBuffer[1408+224];
    PIS_921_2= g_dataBuffer[1409+224];
    PIS_921_3= g_dataBuffer[1410+224];
    PIS_921_4= g_dataBuffer[1411+224];
    PIS_921_5= g_dataBuffer[1412+224];
    PIS_921_6= g_dataBuffer[1413+224];
    PIS_921_7= g_dataBuffer[1414+224];
    PIS_921_8= g_dataBuffer[1415+224];
    PIS_921_9= g_dataBuffer[1416+224];
    PIS_921_10= g_dataBuffer[1417+224];
    PIS_921_11= g_dataBuffer[1418+224];
    PIS_921_12= g_dataBuffer[1419+224];
    PIS_921_13= g_dataBuffer[1420+224];
    PIS_921_14= g_dataBuffer[1421+224];
    PIS_921_15= g_dataBuffer[1422+224];
    PIS_921_16= g_dataBuffer[1423+224];

    ATC_A10_1= g_dataBuffer[1424+240];
    ATC_A10_2= g_dataBuffer[1425+240];
    ATC_A10_3= g_dataBuffer[1426+240];
    ATC_A10_4= g_dataBuffer[1427+240];
    ATC_A10_5= g_dataBuffer[1428+240];
    ATC_A10_6= g_dataBuffer[1429+240];
    ATC_A10_7= g_dataBuffer[1430+240];
    ATC_A10_8= g_dataBuffer[1431+240];
    ATC_A10_9= g_dataBuffer[1432+240];
    ATC_A10_10= g_dataBuffer[1433+240];
    ATC_A10_11= g_dataBuffer[1434+240];
    ATC_A10_12= g_dataBuffer[1435+240];
    ATC_A10_13= g_dataBuffer[1436+240];
    ATC_A10_14= g_dataBuffer[1437+240];
    ATC_A10_15= g_dataBuffer[1438+240];
    ATC_A10_16= g_dataBuffer[1439+240];

    ATC_A11_1= g_dataBuffer[1440+240];
    ATC_A11_2= g_dataBuffer[1441+240];
    ATC_A11_3= g_dataBuffer[1442+240];
    ATC_A11_4= g_dataBuffer[1443+240];
    ATC_A11_5= g_dataBuffer[1444+240];
    ATC_A11_6= g_dataBuffer[1445+240];
    ATC_A11_7= g_dataBuffer[1446+240];
    ATC_A11_8= g_dataBuffer[1447+240];
    ATC_A11_9= g_dataBuffer[1448+240];
    ATC_A11_10= g_dataBuffer[1449+240];
    ATC_A11_11= g_dataBuffer[1450+240];
    ATC_A11_12= g_dataBuffer[1451+240];
    ATC_A11_13= g_dataBuffer[1452+240];
    ATC_A11_14= g_dataBuffer[1453+240];
    ATC_A11_15= g_dataBuffer[1454+240];
    ATC_A11_16= g_dataBuffer[1455+240];

    FAS_B10_1= g_dataBuffer[1456+256];
    FAS_B10_2= g_dataBuffer[1457+256];
    FAS_B10_3= g_dataBuffer[1458+256];
    FAS_B10_4= g_dataBuffer[1459+256];
    FAS_B10_5= g_dataBuffer[1460+256];
    FAS_B10_6= g_dataBuffer[1461+256];
    FAS_B10_7= g_dataBuffer[1462+256];
    FAS_B10_8= g_dataBuffer[1463+256];
    FAS_B10_9= g_dataBuffer[1464+256];
    FAS_B10_10= g_dataBuffer[1465+256];
    FAS_B10_11= g_dataBuffer[1466+256];
    FAS_B10_12= g_dataBuffer[1467+256];
    FAS_B10_13= g_dataBuffer[1468+256];
    FAS_B10_14= g_dataBuffer[1469+256];
    FAS_B10_15= g_dataBuffer[1470+256];
    FAS_B10_16= g_dataBuffer[1471+256];

    FAS_B20_1= g_dataBuffer[1472+256];
    FAS_B20_2= g_dataBuffer[1473+256];
    FAS_B20_3= g_dataBuffer[1474+256];
    FAS_B20_4= g_dataBuffer[1475+256];
    FAS_B20_5= g_dataBuffer[1476+256];
    FAS_B20_6= g_dataBuffer[1477+256];
    FAS_B20_7= g_dataBuffer[1478+256];
    FAS_B20_8= g_dataBuffer[1479+256];
    FAS_B20_9= g_dataBuffer[1480+256];
    FAS_B20_10= g_dataBuffer[1481+256];
    FAS_B20_11= g_dataBuffer[1482+256];
    FAS_B20_12= g_dataBuffer[1483+256];
    FAS_B20_13= g_dataBuffer[1484+256];
    FAS_B20_14= g_dataBuffer[1485+256];
    FAS_B20_15= g_dataBuffer[1486+256];
    FAS_B20_16= g_dataBuffer[1487+256];

    ERM_F00_1= g_dataBuffer[1744];
    ERM_F00_2= g_dataBuffer[1745];
    ERM_F00_3= g_dataBuffer[1746];
    ERM_F00_4= g_dataBuffer[1747];
    ERM_F00_5= g_dataBuffer[1748];
    ERM_F00_6= g_dataBuffer[1749];
    ERM_F00_7= g_dataBuffer[1750];
    ERM_F00_8= g_dataBuffer[1751];
    ERM_F00_9= g_dataBuffer[1752];
    ERM_F00_10= g_dataBuffer[1753];
    ERM_F00_11= g_dataBuffer[1754];
    ERM_F00_12= g_dataBuffer[1755];
    ERM_F00_13= g_dataBuffer[1756];
    ERM_F00_14= g_dataBuffer[1757];
    ERM_F00_15= g_dataBuffer[1758];
    ERM_F00_16= g_dataBuffer[1759];

    ERM_F01_1= g_dataBuffer[1760];
    ERM_F01_2= g_dataBuffer[1761];
    ERM_F01_3= g_dataBuffer[1762];
    ERM_F01_4= g_dataBuffer[1763];
    ERM_F01_5= g_dataBuffer[1764];
    ERM_F01_6= g_dataBuffer[1765];
    ERM_F01_7= g_dataBuffer[1766];
    ERM_F01_8= g_dataBuffer[1767];
    ERM_F01_9= g_dataBuffer[1768];
    ERM_F01_10= g_dataBuffer[1769];
    ERM_F01_11= g_dataBuffer[1770];
    ERM_F01_12= g_dataBuffer[1771];
    ERM_F01_13= g_dataBuffer[1772];
    ERM_F01_14= g_dataBuffer[1773];
    ERM_F01_15= g_dataBuffer[1774];
    ERM_F01_16= g_dataBuffer[1775];

    ERM_F02_1= g_dataBuffer[1776];
    ERM_F02_2= g_dataBuffer[1777];
    ERM_F02_3= g_dataBuffer[1778];
    ERM_F02_4= g_dataBuffer[1779];
    ERM_F02_5= g_dataBuffer[1780];
    ERM_F02_6= g_dataBuffer[1781];
    ERM_F02_7= g_dataBuffer[1782];
    ERM_F02_8= g_dataBuffer[1783];
    ERM_F02_9= g_dataBuffer[1784];
    ERM_F02_10= g_dataBuffer[1785];
    ERM_F02_11= g_dataBuffer[1786];
    ERM_F02_12= g_dataBuffer[1787];
    ERM_F02_13= g_dataBuffer[1788];
    ERM_F02_14= g_dataBuffer[1789];
    ERM_F02_15= g_dataBuffer[1790];
    ERM_F02_16= g_dataBuffer[1791];

    ERM_F03_1= g_dataBuffer[1792];
    ERM_F03_2= g_dataBuffer[1793];
    ERM_F03_3= g_dataBuffer[1794];
    ERM_F03_4= g_dataBuffer[1795];
    ERM_F03_5= g_dataBuffer[1796];
    ERM_F03_6= g_dataBuffer[1797];
    ERM_F03_7= g_dataBuffer[1798];
    ERM_F03_8= g_dataBuffer[1799];
    ERM_F03_9= g_dataBuffer[1800];
    ERM_F03_10= g_dataBuffer[1801];
    ERM_F03_11= g_dataBuffer[1802];
    ERM_F03_12= g_dataBuffer[1803];
    ERM_F03_13= g_dataBuffer[1804];
    ERM_F03_14= g_dataBuffer[1805];
    ERM_F03_15= g_dataBuffer[1806];
    ERM_F03_16= g_dataBuffer[1807];

    ERM_F10_1= g_dataBuffer[1744+64];
    ERM_F10_2= g_dataBuffer[1745+64];
    ERM_F10_3= g_dataBuffer[1746+64];
    ERM_F10_4= g_dataBuffer[1747+64];
    ERM_F10_5= g_dataBuffer[1748+64];
    ERM_F10_6= g_dataBuffer[1749+64];
    ERM_F10_7= g_dataBuffer[1750+64];
    ERM_F10_8= g_dataBuffer[1751+64];
    ERM_F10_9= g_dataBuffer[1752+64];
    ERM_F10_10= g_dataBuffer[1753+64];
    ERM_F10_11= g_dataBuffer[1754+64];
    ERM_F10_12= g_dataBuffer[1755+64];
    ERM_F10_13= g_dataBuffer[1756+64];
    ERM_F10_14= g_dataBuffer[1757+64];
    ERM_F10_15= g_dataBuffer[1758+64];
    ERM_F10_16= g_dataBuffer[1759+64];

    ERM_F11_1= g_dataBuffer[1760+64];
    ERM_F11_2= g_dataBuffer[1761+64];
    ERM_F11_3= g_dataBuffer[1762+64];
    ERM_F11_4= g_dataBuffer[1763+64];
    ERM_F11_5= g_dataBuffer[1764+64];
    ERM_F11_6= g_dataBuffer[1765+64];
    ERM_F11_7= g_dataBuffer[1766+64];
    ERM_F11_8= g_dataBuffer[1767+64];
    ERM_F11_9= g_dataBuffer[1768+64];
    ERM_F11_10= g_dataBuffer[1769+64];
    ERM_F11_11= g_dataBuffer[1770+64];
    ERM_F11_12= g_dataBuffer[1771+64];
    ERM_F11_13= g_dataBuffer[1772+64];
    ERM_F11_14= g_dataBuffer[1773+64];
    ERM_F11_15= g_dataBuffer[1774+64];
    ERM_F11_16= g_dataBuffer[1775+64];

    ERM_F12_1= g_dataBuffer[1776+64];
    ERM_F12_2= g_dataBuffer[1777+64];
    ERM_F12_3= g_dataBuffer[1778+64];
    ERM_F12_4= g_dataBuffer[1779+64];
    ERM_F12_5= g_dataBuffer[1780+64];
    ERM_F12_6= g_dataBuffer[1781+64];
    ERM_F12_7= g_dataBuffer[1782+64];
    ERM_F12_8= g_dataBuffer[1783+64];
    ERM_F12_9= g_dataBuffer[1784+64];
    ERM_F12_10= g_dataBuffer[1785+64];
    ERM_F12_11= g_dataBuffer[1786+64];
    ERM_F12_12= g_dataBuffer[1787+64];
    ERM_F12_13= g_dataBuffer[1788+64];
    ERM_F12_14= g_dataBuffer[1789+64];
    ERM_F12_15= g_dataBuffer[1790+64];
    ERM_F12_16= g_dataBuffer[1791+64];

    ERM_F13_1= g_dataBuffer[1792+64];
    ERM_F13_2= g_dataBuffer[1793+64];
    ERM_F13_3= g_dataBuffer[1794+64];
    ERM_F13_4= g_dataBuffer[1795+64];
    ERM_F13_5= g_dataBuffer[1796+64];
    ERM_F13_6= g_dataBuffer[1797+64];
    ERM_F13_7= g_dataBuffer[1798+64];
    ERM_F13_8= g_dataBuffer[1799+64];
    ERM_F13_9= g_dataBuffer[1800+64];
    ERM_F13_10= g_dataBuffer[1801+64];
    ERM_F13_11= g_dataBuffer[1802+64];
    ERM_F13_12= g_dataBuffer[1803+64];
    ERM_F13_13= g_dataBuffer[1804+64];
    ERM_F13_14= g_dataBuffer[1805+64];
    ERM_F13_15= g_dataBuffer[1806+64];
    ERM_F13_16= g_dataBuffer[1807+64];

    DO_118_1= g_dataBuffer[2016];
    DO_118_2= g_dataBuffer[2017];
    DO_118_3= g_dataBuffer[2018];
    DO_118_4= g_dataBuffer[2019];
    DO_118_5= g_dataBuffer[2020];
    DO_118_6= g_dataBuffer[2021];
    DO_118_7= g_dataBuffer[2022];
    DO_118_8= g_dataBuffer[2023];

    DO_128_1= g_dataBuffer[2024];
    DO_128_2= g_dataBuffer[2025];
    DO_128_3= g_dataBuffer[2026];
    DO_128_4= g_dataBuffer[2027];
    DO_128_5= g_dataBuffer[2028];
    DO_128_6= g_dataBuffer[2029];
    DO_128_7= g_dataBuffer[2030];
    DO_128_8= g_dataBuffer[2031];

    DO_138_1= g_dataBuffer[2032];
    DO_138_2= g_dataBuffer[2033];
    DO_138_3= g_dataBuffer[2034];
    DO_138_4= g_dataBuffer[2035];
    DO_138_5= g_dataBuffer[2036];
    DO_138_6= g_dataBuffer[2037];
    DO_138_7= g_dataBuffer[2038];
    DO_138_8= g_dataBuffer[2039];

    DO_148_1= g_dataBuffer[2040];
    DO_148_2= g_dataBuffer[2041];
    DO_148_3= g_dataBuffer[2042];
    DO_148_4= g_dataBuffer[2043];
    DO_148_5= g_dataBuffer[2044];
    DO_148_6= g_dataBuffer[2045];
    DO_148_7= g_dataBuffer[2046];
    DO_148_8= g_dataBuffer[2047];

    DO_158_1= g_dataBuffer[2048];
    DO_158_2= g_dataBuffer[2049];
    DO_158_3= g_dataBuffer[2050];
    DO_158_4= g_dataBuffer[2051];
    DO_158_5= g_dataBuffer[2052];
    DO_158_6= g_dataBuffer[2053];
    DO_158_7= g_dataBuffer[2054];
    DO_158_8= g_dataBuffer[2055];

    DO_168_1= g_dataBuffer[2056];
    DO_168_2= g_dataBuffer[2057];
    DO_168_3= g_dataBuffer[2058];
    DO_168_4= g_dataBuffer[2059];
    DO_168_5= g_dataBuffer[2060];
    DO_168_6= g_dataBuffer[2061];
    DO_168_7= g_dataBuffer[2062];
    DO_168_8= g_dataBuffer[2063];

    DO_178_1= g_dataBuffer[2064];
    DO_178_2= g_dataBuffer[2065];
    DO_178_3= g_dataBuffer[2066];
    DO_178_4= g_dataBuffer[2067];
    DO_178_5= g_dataBuffer[2068];
    DO_178_6= g_dataBuffer[2069];
    DO_178_7= g_dataBuffer[2070];
    DO_178_8= g_dataBuffer[2071];

    DO_188_1= g_dataBuffer[2072];
    DO_188_2= g_dataBuffer[2073];
    DO_188_3= g_dataBuffer[2074];
    DO_188_4= g_dataBuffer[2075];
    DO_188_5= g_dataBuffer[2076];
    DO_188_6= g_dataBuffer[2077];
    DO_188_7= g_dataBuffer[2078];
    DO_188_8= g_dataBuffer[2079];


    CCU_HMI_220_1= g_dataBuffer[2080];
    CCU_HMI_220_2= g_dataBuffer[2081];
    CCU_HMI_220_3= g_dataBuffer[2082];
    CCU_HMI_220_4= g_dataBuffer[2083];
    CCU_HMI_220_5= g_dataBuffer[2084];
    CCU_HMI_220_6= g_dataBuffer[2085];
    CCU_HMI_220_7= g_dataBuffer[2086];
    CCU_HMI_220_8= g_dataBuffer[2087];
    CCU_HMI_220_9= g_dataBuffer[2088];
    CCU_HMI_220_10= g_dataBuffer[2089];
    CCU_HMI_220_11= g_dataBuffer[2090];
    CCU_HMI_220_12= g_dataBuffer[2091];
    CCU_HMI_220_13= g_dataBuffer[2092];
    CCU_HMI_220_14= g_dataBuffer[2093];
    CCU_HMI_220_15= g_dataBuffer[2094];
    CCU_HMI_220_16= g_dataBuffer[2095];

    CCU_HMI_221_1=g_dataBuffer[2096];
    CCU_HMI_221_2= g_dataBuffer[2097];
    CCU_HMI_221_3= g_dataBuffer[2098];
    CCU_HMI_221_4= g_dataBuffer[2099];
    CCU_HMI_221_5= g_dataBuffer[2100];
    CCU_HMI_221_6= g_dataBuffer[2101];
    CCU_HMI_221_7= g_dataBuffer[2102];
    CCU_HMI_221_8= g_dataBuffer[2103];
    CCU_HMI_221_9= g_dataBuffer[2104];
    CCU_HMI_221_10= g_dataBuffer[2105];
    CCU_HMI_221_11= g_dataBuffer[2106];
    CCU_HMI_221_12= g_dataBuffer[2107];
    CCU_HMI_221_13= g_dataBuffer[2108];
    CCU_HMI_221_14= g_dataBuffer[2109];
    CCU_HMI_221_15= g_dataBuffer[2110];
    CCU_HMI_221_16= g_dataBuffer[2111];

    CCU_HMI_222_1= g_dataBuffer[2112];
    CCU_HMI_222_2= g_dataBuffer[2113];
    CCU_HMI_222_3= g_dataBuffer[2114];
    CCU_HMI_222_4= g_dataBuffer[2115];
    CCU_HMI_222_5= g_dataBuffer[2116];
    CCU_HMI_222_6= g_dataBuffer[2117];
    CCU_HMI_222_7= g_dataBuffer[2118];
    CCU_HMI_222_8= g_dataBuffer[2119];
    CCU_HMI_222_9= g_dataBuffer[2120];
    CCU_HMI_222_10= g_dataBuffer[2121];
    CCU_HMI_222_11= g_dataBuffer[2122];
    CCU_HMI_222_12= g_dataBuffer[2123];
    CCU_HMI_222_13= g_dataBuffer[2124];
    CCU_HMI_222_14= g_dataBuffer[2125];
    CCU_HMI_222_15= g_dataBuffer[2126];
    CCU_HMI_222_16= g_dataBuffer[2127];

    CCU_HMI_223_1= g_dataBuffer[2128];
    CCU_HMI_223_2= g_dataBuffer[2129];
    CCU_HMI_223_3= g_dataBuffer[2130];
    CCU_HMI_223_4= g_dataBuffer[2131];
    CCU_HMI_223_5= g_dataBuffer[2132];
    CCU_HMI_223_6= g_dataBuffer[2133];
    CCU_HMI_223_7= g_dataBuffer[2134];
    CCU_HMI_223_8= g_dataBuffer[2135];
    CCU_HMI_223_9= g_dataBuffer[2136];
    CCU_HMI_223_10= g_dataBuffer[2137];
    CCU_HMI_223_11= g_dataBuffer[2138];
    CCU_HMI_223_12= g_dataBuffer[2139];
    CCU_HMI_223_13= g_dataBuffer[2140];
    CCU_HMI_223_14= g_dataBuffer[2141];
    CCU_HMI_223_15= g_dataBuffer[2142];
    CCU_HMI_223_16= g_dataBuffer[2143];

    BCU_TC1_410_420_1= g_dataBuffer[3000];
    BCU_TC1_410_420_2= g_dataBuffer[3001];
    BCU_TC1_410_420_3= g_dataBuffer[3002];
    BCU_TC1_410_420_4= g_dataBuffer[3003];
    BCU_TC1_410_420_5= g_dataBuffer[3004];
    BCU_TC1_410_420_6= g_dataBuffer[3005];
    BCU_TC1_410_420_7= g_dataBuffer[3006];
    BCU_TC1_410_420_8= g_dataBuffer[3007];
    BCU_TC1_410_420_9= g_dataBuffer[3008];
    BCU_TC1_410_420_10= g_dataBuffer[3009];
    BCU_TC1_410_420_11= g_dataBuffer[3010];
    BCU_TC1_410_420_12= g_dataBuffer[3011];
    BCU_TC1_410_420_13= g_dataBuffer[3012];
    BCU_TC1_410_420_14= g_dataBuffer[3013];
    BCU_TC1_410_420_15= g_dataBuffer[3014];
    BCU_TC1_410_420_16= g_dataBuffer[3015];

    BCU_TC1_411_421_1= g_dataBuffer[3016];
    BCU_TC1_411_421_2= g_dataBuffer[3017];
    BCU_TC1_411_421_3= g_dataBuffer[3018];
    BCU_TC1_411_421_4= g_dataBuffer[3019];
    BCU_TC1_411_421_5= g_dataBuffer[3020];
    BCU_TC1_411_421_6= g_dataBuffer[3021];
    BCU_TC1_411_421_7= g_dataBuffer[3022];
    BCU_TC1_411_421_8= g_dataBuffer[3023];
    BCU_TC1_411_421_9= g_dataBuffer[3024];
    BCU_TC1_411_421_10= g_dataBuffer[3025];
    BCU_TC1_411_421_11= g_dataBuffer[3026];
    BCU_TC1_411_421_12= g_dataBuffer[3027];
    BCU_TC1_411_421_13= g_dataBuffer[3028];
    BCU_TC1_411_421_14= g_dataBuffer[3029];
    BCU_TC1_411_421_15= g_dataBuffer[3030];
    BCU_TC1_411_421_16= g_dataBuffer[3031];

    BCU_TC1_412_422_1= g_dataBuffer[3032];
    BCU_TC1_412_422_2= g_dataBuffer[3033];
    BCU_TC1_412_422_3= g_dataBuffer[3034];
    BCU_TC1_412_422_4= g_dataBuffer[3035];
    BCU_TC1_412_422_5= g_dataBuffer[3036];
    BCU_TC1_412_422_6= g_dataBuffer[3037];
    BCU_TC1_412_422_7= g_dataBuffer[3038];
    BCU_TC1_412_422_8= g_dataBuffer[3039];
    BCU_TC1_412_422_9= g_dataBuffer[3040];
    BCU_TC1_412_422_10= g_dataBuffer[3041];
    BCU_TC1_412_422_11= g_dataBuffer[3042];
    BCU_TC1_412_422_12= g_dataBuffer[3043];
    BCU_TC1_412_422_13= g_dataBuffer[3044];
    BCU_TC1_412_422_14= g_dataBuffer[3045];
    BCU_TC1_412_422_15= g_dataBuffer[3046];
    BCU_TC1_412_422_16= g_dataBuffer[3047];

    BCU_TC1_413_423_1= g_dataBuffer[3048];
    BCU_TC1_413_423_2= g_dataBuffer[3049];
    BCU_TC1_413_423_3= g_dataBuffer[3050];
    BCU_TC1_413_423_4= g_dataBuffer[3051];
    BCU_TC1_413_423_5= g_dataBuffer[3052];
    BCU_TC1_413_423_6= g_dataBuffer[3053];
    BCU_TC1_413_423_7= g_dataBuffer[3054];
    BCU_TC1_413_423_8= g_dataBuffer[3055];
    BCU_TC1_413_423_9= g_dataBuffer[3056];
    BCU_TC1_413_423_10= g_dataBuffer[3057];
    BCU_TC1_413_423_11= g_dataBuffer[3058];
    BCU_TC1_413_423_12= g_dataBuffer[3059];
    BCU_TC1_413_423_13= g_dataBuffer[3060];
    BCU_TC1_413_423_14= g_dataBuffer[3061];
    BCU_TC1_413_423_15= g_dataBuffer[3062];
    BCU_TC1_413_423_16= g_dataBuffer[3063];

    BCU_TC1_414_424_1= g_dataBuffer[3064];
    BCU_TC1_414_424_2= g_dataBuffer[3065];
    BCU_TC1_414_424_3= g_dataBuffer[3066];
    BCU_TC1_414_424_4= g_dataBuffer[3067];
    BCU_TC1_414_424_5= g_dataBuffer[3068];
    BCU_TC1_414_424_6= g_dataBuffer[3069];
    BCU_TC1_414_424_7= g_dataBuffer[3070];
    BCU_TC1_414_424_8= g_dataBuffer[3071];
    BCU_TC1_414_424_9= g_dataBuffer[3072];
    BCU_TC1_414_424_10= g_dataBuffer[3073];
    BCU_TC1_414_424_11= g_dataBuffer[3074];
    BCU_TC1_414_424_12= g_dataBuffer[3075];
    BCU_TC1_414_424_13= g_dataBuffer[3076];
    BCU_TC1_414_424_14= g_dataBuffer[3077];
    BCU_TC1_414_424_15= g_dataBuffer[3078];
    BCU_TC1_414_424_16= g_dataBuffer[3079];

    BCU_TC2_430_440_1= g_dataBuffer[3080];
    BCU_TC2_430_440_2= g_dataBuffer[3081];
    BCU_TC2_430_440_3= g_dataBuffer[3082];
    BCU_TC2_430_440_4= g_dataBuffer[3083];
    BCU_TC2_430_440_5= g_dataBuffer[3084];
    BCU_TC2_430_440_6= g_dataBuffer[3085];
    BCU_TC2_430_440_7= g_dataBuffer[3086];
    BCU_TC2_430_440_8= g_dataBuffer[3087];
    BCU_TC2_430_440_9= g_dataBuffer[3088];
    BCU_TC2_430_440_10= g_dataBuffer[3089];
    BCU_TC2_430_440_11= g_dataBuffer[3090];
    BCU_TC2_430_440_12= g_dataBuffer[3091];
    BCU_TC2_430_440_13= g_dataBuffer[3092];
    BCU_TC2_430_440_14= g_dataBuffer[3093];
    BCU_TC2_430_440_15= g_dataBuffer[3094];
    BCU_TC2_430_440_16= g_dataBuffer[3095];

    BCU_TC2_431_441_1= g_dataBuffer[3096];
    BCU_TC2_431_441_2= g_dataBuffer[3097];
    BCU_TC2_431_441_3= g_dataBuffer[3098];
    BCU_TC2_431_441_4= g_dataBuffer[3099];
    BCU_TC2_431_441_5= g_dataBuffer[3100];
    BCU_TC2_431_441_6= g_dataBuffer[3101];
    BCU_TC2_431_441_7= g_dataBuffer[3102];
    BCU_TC2_431_441_8= g_dataBuffer[3103];
    BCU_TC2_431_441_9= g_dataBuffer[3104];
    BCU_TC2_431_441_10= g_dataBuffer[3105];
    BCU_TC2_431_441_11= g_dataBuffer[3106];
    BCU_TC2_431_441_12= g_dataBuffer[3107];
    BCU_TC2_431_441_13= g_dataBuffer[3108];
    BCU_TC2_431_441_14= g_dataBuffer[3109];
    BCU_TC2_431_441_15= g_dataBuffer[3110];
    BCU_TC2_431_441_16= g_dataBuffer[3111];

    BCU_TC2_432_442_1= g_dataBuffer[3112];
    BCU_TC2_432_442_2= g_dataBuffer[3113];
    BCU_TC2_432_442_3= g_dataBuffer[3114];
    BCU_TC2_432_442_4= g_dataBuffer[3115];
    BCU_TC2_432_442_5= g_dataBuffer[3116];
    BCU_TC2_432_442_6= g_dataBuffer[3117];
    BCU_TC2_432_442_7= g_dataBuffer[3118];
    BCU_TC2_432_442_8= g_dataBuffer[3119];
    BCU_TC2_432_442_9= g_dataBuffer[3120];
    BCU_TC2_432_442_10= g_dataBuffer[3121];
    BCU_TC2_432_442_11= g_dataBuffer[3122];
    BCU_TC2_432_442_12= g_dataBuffer[3123];
    BCU_TC2_432_442_13= g_dataBuffer[3124];
    BCU_TC2_432_442_14= g_dataBuffer[3125];
    BCU_TC2_432_442_15= g_dataBuffer[3126];
    BCU_TC2_432_442_16= g_dataBuffer[3127];

    BCU_TC2_433_443_1= g_dataBuffer[3128];
    BCU_TC2_433_443_2= g_dataBuffer[3129];
    BCU_TC2_433_443_3= g_dataBuffer[3130];
    BCU_TC2_433_443_4= g_dataBuffer[3131];
    BCU_TC2_433_443_5= g_dataBuffer[3132];
    BCU_TC2_433_443_6= g_dataBuffer[3133];
    BCU_TC2_433_443_7= g_dataBuffer[3134];
    BCU_TC2_433_443_8= g_dataBuffer[3135];
    BCU_TC2_433_443_9= g_dataBuffer[3136];
    BCU_TC2_433_443_10= g_dataBuffer[3137];
    BCU_TC2_433_443_11= g_dataBuffer[3138];
    BCU_TC2_433_443_12= g_dataBuffer[3139];
    BCU_TC2_433_443_13= g_dataBuffer[3140];
    BCU_TC2_433_443_14= g_dataBuffer[3141];
    BCU_TC2_433_443_15= g_dataBuffer[3142];
    BCU_TC2_433_443_16= g_dataBuffer[3143];

    BCU_TC2_434_444_1= g_dataBuffer[3144];
    BCU_TC2_434_444_2= g_dataBuffer[3145];
    BCU_TC2_434_444_3= g_dataBuffer[3146];
    BCU_TC2_434_444_4= g_dataBuffer[3147];
    BCU_TC2_434_444_5= g_dataBuffer[3148];
    BCU_TC2_434_444_6= g_dataBuffer[3149];
    BCU_TC2_434_444_7= g_dataBuffer[3150];
    BCU_TC2_434_444_8= g_dataBuffer[3151];
    BCU_TC2_434_444_9= g_dataBuffer[3152];
    BCU_TC2_434_444_10= g_dataBuffer[3153];
    BCU_TC2_434_444_11= g_dataBuffer[3154];
    BCU_TC2_434_444_12= g_dataBuffer[3155];
    BCU_TC2_434_444_13= g_dataBuffer[3156];
    BCU_TC2_434_444_14= g_dataBuffer[3157];
    BCU_TC2_434_444_15= g_dataBuffer[3158];
    BCU_TC2_434_444_16= g_dataBuffer[3159];
    //B05.01隔离转向架1 ,B05.02隔离转向架2 故障处理逻辑
    {
        // CTHM_Tc1DI1On_B1  TC1车DI1在线  CTHM_BCU1On_B1  BCU1在线  CTHM_BCU2On_B1	BCU2在线

            if (Bit( BCU_TC1_413_423_13, 13)||Bit( DI_110_1, 4) == 1)
            {
                BitSet(g_dataBuffer[3999],1,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],1,0);
            }

            if (Bit( BCU_TC1_413_423_13, 12) ||Bit( DI_110_1, 5)== 1)
            {
                BitSet(g_dataBuffer[3999],2,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],2,0);
            }


            if (Bit( BCU_TC1_413_423_13, 11) ||Bit( DI_120_3, 10)== 1)
            {
                BitSet(g_dataBuffer[3999],3,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],3,0);
            }

            if (Bit( BCU_TC1_413_423_13, 10) ||Bit( DI_120_3, 11)== 1)
            {
                BitSet(g_dataBuffer[3999],4,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],4,0);
            }


            if (Bit( BCU_TC1_413_423_13, 9) ||Bit( DI_130_3, 10)== 1)
            {
                BitSet(g_dataBuffer[3999],5,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],5,0);
            }

            if (Bit( BCU_TC1_413_423_14, 8) ||Bit( DI_130_3, 11)== 1)
            {
                BitSet(g_dataBuffer[3999],6,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],6,0);
            }


            if (Bit( BCU_TC1_413_423_14, 7) ||Bit( DI_140_3, 10)== 1)
            {
                BitSet(g_dataBuffer[3999],7,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],7,0);
            }

            if (Bit( BCU_TC1_413_423_14, 6) ||Bit( DI_140_3, 11)== 1)
            {
                BitSet(g_dataBuffer[3999],8,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],8,0);
            }


            if (Bit( BCU_TC2_433_443_14, 6) ||Bit( DI_150_3, 11)== 1)
            {
                BitSet(g_dataBuffer[3999],10,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],10,0);
            }

            if (Bit( BCU_TC2_433_443_14, 7) ||Bit( DI_150_3, 10)== 1)
            {
                BitSet(g_dataBuffer[3999],9,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],9,0);
            }




            if (Bit( BCU_TC2_433_443_14, 8 )||Bit( DI_160_3, 11)== 1)
            {
                BitSet(g_dataBuffer[3999],12,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],12,0);
            }

            if (Bit( BCU_TC2_433_443_13, 9) ||Bit( DI_160_3, 10)== 1)
            {
                BitSet(g_dataBuffer[3999],11,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],11,0);
            }




            if (Bit( BCU_TC2_433_443_13, 10) ||Bit( DI_170_3, 11)== 1)
            {
                BitSet(g_dataBuffer[3999],14,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],14,0);
            }
            if (Bit( BCU_TC2_433_443_13, 11) ||Bit( DI_170_3, 10)== 1)
            {
                BitSet(g_dataBuffer[3999],13,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],13,0);
            }


            if (Bit( BCU_TC2_433_443_13, 12)||Bit( DI_180_1, 5)== 1 )
            {
                BitSet(g_dataBuffer[3999],16,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],16,0);
            }
            if (Bit( BCU_TC2_433_443_13, 13) ||Bit( DI_180_1, 4)== 1)
            {
                BitSet(g_dataBuffer[3999],15,1);
            }
            else
            {
                BitSet(g_dataBuffer[3999],15,0);
            }

    }


    //CTHM_CarNumber_U16	列车号	由显示屏设定
    if (CCU_HMI_221_9<10)
    {
        che1_num="00"+StrFromInt( CCU_HMI_221_9, 10 )+"1";
        che2_num="00"+StrFromInt( CCU_HMI_221_9, 10 )+"2";
        che3_num="00"+StrFromInt( CCU_HMI_221_9, 10 )+"3";
        che4_num="00"+StrFromInt( CCU_HMI_221_9, 10 )+"4";
        che5_num="00"+StrFromInt( CCU_HMI_221_9, 10 )+"5";
        che6_num="00"+StrFromInt( CCU_HMI_221_9, 10 )+"6";
        che7_num="00"+StrFromInt( CCU_HMI_221_9, 10 )+"7";
        che8_num="00"+StrFromInt( CCU_HMI_221_9, 10 )+"8";

    }
    else
    {
        if (CCU_HMI_221_9<100)
        {
            che1_num="0"+StrFromInt( CCU_HMI_221_9, 10 )+"1";
            che2_num="0"+StrFromInt( CCU_HMI_221_9, 10 )+"2";
            che3_num="0"+StrFromInt( CCU_HMI_221_9, 10 )+"3";
            che4_num="0"+StrFromInt( CCU_HMI_221_9, 10 )+"4";
            che5_num="0"+StrFromInt( CCU_HMI_221_9, 10 )+"5";
            che6_num="0"+StrFromInt( CCU_HMI_221_9, 10 )+"6";
            che7_num="0"+StrFromInt( CCU_HMI_221_9, 10 )+"7";
            che8_num="0"+StrFromInt( CCU_HMI_221_9, 10 )+"8";

        }
        else
        {
            che1_num=StrFromInt( CCU_HMI_221_9, 10 )+"1";
            che2_num=StrFromInt( CCU_HMI_221_9, 10 )+"2";
            che3_num=StrFromInt( CCU_HMI_221_9, 10 )+"3";
            che4_num=StrFromInt( CCU_HMI_221_9, 10 )+"4";
            che5_num=StrFromInt( CCU_HMI_221_9, 10 )+"5";
            che6_num=StrFromInt( CCU_HMI_221_9, 10 )+"6";
            che7_num=StrFromInt( CCU_HMI_221_9, 10 )+"7";
            che8_num=StrFromInt( CCU_HMI_221_9, 10 )+"8";
        }
    }


}

void Dialog::createSendData()
{
    uchar tmpChar1,tmpChar2,tmpChar3;
    //显示屏发送的生命信号
    if (HMI_send_data1 == 65535)
    {
        HMI_send_data1 = 0;
    }
    else
    {
       HMI_send_data1=HMI_send_data1+1;
       tmpChar1=0;
       tmpChar2=0;
       tmpChar3=1;

    }
    if(g_TimeSettingState)
    {
        BitSet(HMI_send_data28,16,1);
    }
    else
    {
        BitSet(HMI_send_data28,16,0);
    }

    //显示屏发送所有 字变量高8位低八位交换
    sendData[1]  = HMI_send_data1&0x00FF;
    sendData[0]  = HMI_send_data1>>8;
    sendData[3]  = HMI_send_data2&0x00FF;
    sendData[2]  = HMI_send_data2>>8;
    sendData[5]  = HMI_send_data3&0x00FF;
    sendData[4]  = HMI_send_data3>>8;
    sendData[7] = HMI_send_data4&0x00FF;
    sendData[6] = HMI_send_data4>>8;
    sendData[9] = HMI_send_data5&0x00FF;
    sendData[8] = HMI_send_data5>>8;
    sendData[11] = HMI_send_data6&0x00FF;
    sendData[10] = HMI_send_data6>>8;
    sendData[13] = HMI_send_data7&0x00FF;
    sendData[12] = HMI_send_data7>>8;
    sendData[15] = HMI_send_data8&0x00FF;
    sendData[14] = HMI_send_data8>>8;
    sendData[17] = HMI_send_data9&0x00FF;
    sendData[16] = HMI_send_data9>>8;
    sendData[19] = HMI_send_data10&0x00FF;
    sendData[18] = HMI_send_data10>>8;
    sendData[21] = HMI_send_data11&0x00FF;
    sendData[20] = HMI_send_data11>>8;
    sendData[23] = HMI_send_data12&0x00FF;
    sendData[22] = HMI_send_data12>>8;
    sendData[25] = HMI_send_data13&0x00FF;
    sendData[24] = HMI_send_data13>>8;
    sendData[27] = HMI_send_data14&0x00FF;
    sendData[26] = HMI_send_data14>>8;
    sendData[29] = HMI_send_data15&0x00FF;
    sendData[28] = HMI_send_data15>>8;
    sendData[30] = HMI_send_data16&0x00FF;
    sendData[31] = HMI_send_data16>>8;
    sendData[33] = HMI_send_data17&0x00FF;
    sendData[32] = HMI_send_data17>>8;
    sendData[35] = HMI_send_data18&0x00FF;
    sendData[34] = HMI_send_data18>>8;
    sendData[37] = HMI_send_data19&0x00FF;
    sendData[36] = HMI_send_data19>>8;
    sendData[39] = HMI_send_data20&0x00FF;
    sendData[38] = HMI_send_data20>>8;
    sendData[41] = HMI_send_data21&0x00FF;
    sendData[40] = HMI_send_data21>>8;
    sendData[43] = HMI_send_data22&0x00FF;
    sendData[42] = HMI_send_data22>>8;
    sendData[45] = HMI_send_data23&0x00FF;
    sendData[44] = HMI_send_data23>>8;
    sendData[47] = HMI_send_data24&0x00FF;
    sendData[46] = HMI_send_data24>>8;
    sendData[49] = HMI_send_data25&0x00FF;
    sendData[48] = HMI_send_data25>>8;
    sendData[50] = HMI_send_data26&0x00FF;
    sendData[51] = HMI_send_data26>>8;
    sendData[52] = HMI_send_data27&0x00FF;
    sendData[53] = HMI_send_data27>>8;
    sendData[54] = HMI_send_data28&0x00FF;
    sendData[55] = HMI_send_data28>>8;
    sendData[56] = HMI_send_data29&0x00FF;
    sendData[57] = HMI_send_data29>>8;
    sendData[58] = HMI_send_data30&0x00FF;
    sendData[59] = HMI_send_data30>>8;
    sendData[60] = HMI_send_data31&0x00FF;
    sendData[61] = HMI_send_data31>>8;
    sendData[62] = HMI_send_data32&0x00FF;
    sendData[63] = HMI_send_data32>>8;

    // The HMI Version
    sendData[64]  = 5;  // day
    sendData[65]  = 2;  // month
    sendData[66]  = 1;
}

void Dialog::OnTimer4s()
{
    // ccu LifeSignal
    if(CCU_life_temp_MVB==g_dataBuffer_MVB[2080])
    {
        BitSet(hmi_485_error,5,1);
    }
    else
    {
            CCU_life_temp_MVB=g_dataBuffer_MVB[2080];
            BitSet(hmi_485_error,5,0);       

    }
    if(CCU_life_temp_UDP==g_dataBuffer_UDP[2080])
    {
        BitSet(hmi_485_error,6,1);
    }
    else
    {
            CCU_life_temp_UDP=g_dataBuffer_UDP[2080];
            BitSet(hmi_485_error,6,0);

    }

    if(HMI_life_temp==g_dataBuffer_UDP_2[0])
    {
        BitSet(hmi_485_error,7,0);
    }
    else
    {
            HMI_life_temp=g_dataBuffer_UDP_2[0];
            BitSet(hmi_485_error,7,1);

    }

    CheckLifeSignalChange();
}

void Dialog::ShowFaultPage()
{
//    CPage* pPage = g_PageVec[CGlobal::m_nCurPageIndex];
//    pPage->ChangePage(PAGE_INDEX_FAULTINFO);
}

// call this function when serial have data.
void Dialog::getRevDataSlot( int const pageNo, const QByteArray data, int const length )
{
    //debug mode
    if(serialDebugDlg.serialSetList.length() == 0)
    {
        uchar tmpChar[length];
        for (int i=0; i<length; i++ )
            tmpChar[i] = data.at(i);

        if ( pageNo == 0 ){
            if ( ( tmpChar[0] == 0x01 ) && ( tmpChar[1] == 0x03 ) && ( tmpChar[2] == 0xFA ) ){
                unsigned short CRC16;
                CRC16 = m_serialThread->GetCRC16( tmpChar, 253  );
                uchar CRC16Char1 = (unsigned char)(CRC16 >> 8 & 0x00FF);
                uchar CRC16Char2 = (unsigned char)(CRC16 & 0x00FF);
                if ( CRC16Char1==tmpChar[length-2] && CRC16Char2==tmpChar[length-1] ){
                    for (int i=0; i<125; i++)
                        g_dataBuffer[i] = (tmpChar[3+i*2]<<8) | tmpChar[3+i*2+1];
                 }//end
            }//end
        }
        else if ( pageNo == 1 )
        {
            if ( ( tmpChar[0] == 0x01 ) && ( tmpChar[1] == 0x03 ) && ( tmpChar[2] == 0xFA ) ){
                unsigned short CRC16;
                CRC16 = m_serialThread->GetCRC16( tmpChar, 253  );
                uchar CRC16Char1 = (unsigned char)(CRC16 >> 8 & 0x00FF);
                uchar CRC16Char2 = (unsigned char)(CRC16 & 0x00FF);
                if ( CRC16Char1==tmpChar[length-2] && CRC16Char2==tmpChar[length-1] ){
                    for (int i=0; i<125; i++)
                        g_dataBuffer[i+125] = (tmpChar[3+i*2]<<8) | tmpChar[3+i*2+1];
                 }//end
            }//end
        }else if ( pageNo == 2 ){
            if ( ( tmpChar[0] == 0x01 ) && ( tmpChar[1] == 0x03 ) && ( tmpChar[2] == 0xFA ) ){
                unsigned short CRC16;
                CRC16 = m_serialThread->GetCRC16( tmpChar, 253  );
                uchar CRC16Char1 = (unsigned char)(CRC16 >> 8 & 0x00FF);
                uchar CRC16Char2 = (unsigned char)(CRC16 & 0x00FF);
                if ( CRC16Char1==tmpChar[length-2] && CRC16Char2==tmpChar[length-1] ){
                    for (int i=0; i<125; i++)
                        g_dataBuffer[i+250] = (tmpChar[3+i*2]<<8) | tmpChar[3+i*2+1];
                 }//end
            }//end
        }else if ( pageNo == 3 ){
            if ( ( tmpChar[0] == 0x01 ) && ( tmpChar[1] == 0x03 ) && ( tmpChar[2] == 0xCC ) ){
                unsigned short CRC16;
                CRC16 = m_serialThread->GetCRC16( tmpChar, 207  );
                uchar CRC16Char1 = (unsigned char)(CRC16 >> 8 & 0x00FF);
                uchar CRC16Char2 = (unsigned char)(CRC16 & 0x00FF);
                if ( CRC16Char1==tmpChar[length-2] && CRC16Char2==tmpChar[length-1] ){
                    for (int i=0; i<102; i++)
                        g_dataBuffer[i+375] = (tmpChar[3+i*2]<<8) | tmpChar[3+i*2+1];
                 }//end
            }//end
        }else if ( pageNo == 4 ){
            if ( ( tmpChar[0] == 0x01 ) && ( tmpChar[1] == 0x03 ) && ( tmpChar[2] == 0xFA ) ){
                unsigned short CRC16;
                CRC16 = m_serialThread->GetCRC16( tmpChar, 253  );
                uchar CRC16Char1 = (unsigned char)(CRC16 >> 8 & 0x00FF);
                uchar CRC16Char2 = (unsigned char)(CRC16 & 0x00FF);
                if ( CRC16Char1==tmpChar[length-2] && CRC16Char2==tmpChar[length-1] ){
                    for (int i=0; i<125; i++)
                        g_dataBuffer[i+529] = (tmpChar[3+i*2]<<8) | tmpChar[3+i*2+1];
                 }//end
            }//end
        }else if ( pageNo == 5 ){
            if ( ( tmpChar[0] == 0x01 ) && ( tmpChar[1] == 0x03 ) && ( tmpChar[2] == 0xF8 ) ){
                unsigned short CRC16;
                CRC16 = m_serialThread->GetCRC16( tmpChar, 251  );
                uchar CRC16Char1 = (unsigned char)(CRC16 >> 8 & 0x00FF);
                uchar CRC16Char2 = (unsigned char)(CRC16 & 0x00FF);
                if ( CRC16Char1==tmpChar[length-2] && CRC16Char2==tmpChar[length-1] ){
                    for (int i=0; i<124; i++)
                        g_dataBuffer[i+654] = (tmpChar[3+i*2]<<8) | tmpChar[3+i*2+1];
                 }//end
            }//end
        }
    }

    //currency_data
    switch(pageNo)
    {
    case 1://word153~159
        {
            currency_data1 = g_dataBuffer[152];
            currency_data2 = g_dataBuffer[153];
            currency_data3 = g_dataBuffer[154];
            currency_data4 = g_dataBuffer[155];
            currency_data5 = g_dataBuffer[156];
            currency_data6 = g_dataBuffer[157];
            currency_data7 = g_dataBuffer[158];
            break;
        }
    case 3://word472~478
        {
            currency_data1 = g_dataBuffer[471];
            currency_data2 = g_dataBuffer[472];
            currency_data3 = g_dataBuffer[473];
            currency_data4 = g_dataBuffer[474];
            currency_data5 = g_dataBuffer[475];
            currency_data6 = g_dataBuffer[476];
            currency_data7 = g_dataBuffer[477];
            break;
        }
    case 5://word772~778
        {
            currency_data1 = g_dataBuffer[771];
            currency_data2 = g_dataBuffer[772];
            currency_data3 = g_dataBuffer[773];
            currency_data4 = g_dataBuffer[774];
            currency_data5 = g_dataBuffer[775];
            currency_data6 = g_dataBuffer[776];
            currency_data7 = g_dataBuffer[777];
            break;
        }
    }
}

void Dialog::CheckLifeSignalChange()
{
    //TC1_HMI=1;
    //当处于TC1端时弹出TC1端以太网通信异常故障
    if (Bit(hmi_485_error,5) && (TC1_HMI==1))
        g_485_comm_err_flg1 = true;
    else
        g_485_comm_err_flg1 = false;

    if (Bit(hmi_485_error,5) && (TC2_HMI==1))
        g_485_comm_err_flg2 = true;
    else
        g_485_comm_err_flg2 = false;

    if (Bit(hmi_485_error,6) && (TC1_HMI==1))
        g_udp_comm_err_flg1 = true;
    else
        g_udp_comm_err_flg1 = false;

    if (Bit(hmi_485_error,6) && (TC2_HMI==1))
        g_udp_comm_err_flg2 = true;
    else
        g_udp_comm_err_flg2 = false;


   // if 485 error ,no more deal with other errors.
    if((g_485_comm_err_flg1  || g_485_comm_err_flg2)&&(g_udp_comm_err_flg1  || g_udp_comm_err_flg2))
    {

        return;
    }

        g_riom1_gw123_comm_err_flg
                =Bit(~CCU_HMI_222_11, 16 );
        g_riom1_di1_comm_err_flg
                = Bit(~CCU_HMI_222_11, 15 );
        g_riom1_di2_comm_err_flg
                =Bit(~CCU_HMI_222_11, 14 );
        g_riom1_di3_comm_err_flg
                = Bit(~CCU_HMI_222_11, 13 );
        g_riom1_di4_comm_err_flg
                = Bit(~CCU_HMI_222_11, 12 );
        g_riom1_do1_comm_err_flg
                = Bit(~CCU_HMI_222_11, 11 );
        g_riom1_do2_comm_err_flg
                = Bit(~CCU_HMI_222_11, 10 );
        g_riom1_ai1_comm_err_flg
                = Bit(~CCU_HMI_222_11, 9 );

        g_riom2_gw123_comm_err_flg
                = Bit(~CCU_HMI_222_12, 8 );
        g_riom2_di1_comm_err_flg
                = Bit(~CCU_HMI_222_12, 7 );
        g_riom2_di2_comm_err_flg
                = Bit(~CCU_HMI_222_12, 6 );
    //    g_riom2_di3_comm_err_flg
    //            = CheckLifeSignalValue(riom2_di3_lifesignal_temp,
    //                                   comm_status_data16);
    //    g_riom2_di4_comm_err_flg
    //            = CheckLifeSignalValue(riom2_di4_lifesignal_temp,
    //                                   comm_status_data17);
        g_riom2_do1_comm_err_flg
                = Bit(~CCU_HMI_222_12, 3 );
    //    g_riom2_do2_comm_err_flg
    //            = CheckLifeSignalValue(riom2_do2_lifesignal_temp,
    //                                   comm_status_data19);
        g_riom2_ai1_comm_err_flg
                = Bit(~CCU_HMI_222_12, 1 );

        g_riom3_gw123_comm_err_flg
                = Bit(~CCU_HMI_222_12, 16 );
        g_riom3_di1_comm_err_flg
                = Bit(~CCU_HMI_222_12, 15 );
        g_riom3_di2_comm_err_flg
                = Bit(~CCU_HMI_222_12, 14 );
    //    g_riom3_di3_comm_err_flg
    //            = CheckLifeSignalValue(riom3_di3_lifesignal_temp,
    //                                   comm_status_data24);
    //    g_riom3_di4_comm_err_flg
    //            = CheckLifeSignalValue(riom3_di4_lifesignal_temp,
    //                                   comm_status_data25);
        g_riom3_do1_comm_err_flg
                = Bit(~CCU_HMI_222_12, 11 );
    //    g_riom3_do2_comm_err_flg
    //            = CheckLifeSignalValue(riom3_do2_lifesignal_temp,
    //                                   comm_status_data27);
    //    g_riom3_ai1_comm_err_flg
    //            = CheckLifeSignalValue(riom3_ai1_lifesignal_temp,
    //                                   comm_status_data28);

        g_riom4_gw123_comm_err_flg
                = Bit(~CCU_HMI_222_13, 8 );
        g_riom4_di1_comm_err_flg
                = Bit(~CCU_HMI_222_13, 7 );
        g_riom4_di2_comm_err_flg
                = Bit(~CCU_HMI_222_13, 6 );
    //    g_riom4_di3_comm_err_flg
    //            = CheckLifeSignalValue(riom4_di3_lifesignal_temp,
    //                                   comm_status_data32);
    //    g_riom4_di4_comm_err_flg
    //            = CheckLifeSignalValue(riom4_di4_lifesignal_temp,
    //                                   comm_status_data33);
        g_riom4_do1_comm_err_flg
                = Bit(~CCU_HMI_222_13, 3 );
    //    g_riom4_do2_comm_err_flg
    //            = CheckLifeSignalValue(riom4_do2_lifesignal_temp,
    //                                   comm_status_data35);
        g_riom4_ai1_comm_err_flg
                = Bit(~CCU_HMI_222_13, 1 );

        g_riom5_gw123_comm_err_flg
                = Bit(~CCU_HMI_222_13, 16 );
        g_riom5_di1_comm_err_flg
                = Bit(~CCU_HMI_222_13, 15 );
        g_riom5_di2_comm_err_flg
                = Bit(~CCU_HMI_222_13, 14 );
    //    g_riom5_di3_comm_err_flg
    //            = CheckLifeSignalValue(riom5_di3_lifesignal_temp,
    //                                   comm_status_data40);
    //    g_riom5_di4_comm_err_flg
    //            = CheckLifeSignalValue(riom5_di4_lifesignal_temp,
    //                                   comm_status_data41);
        g_riom5_do1_comm_err_flg
                = Bit(~CCU_HMI_222_13, 11 );
    //    g_riom5_do2_comm_err_flg
    //            = CheckLifeSignalValue(riom5_do2_lifesignal_temp,
    //                                   comm_status_data43);
    //    g_riom5_ai1_comm_err_flg
    //            = CheckLifeSignalValue(riom5_ai1_lifesignal_temp,
    //                                   comm_status_data44);

        g_riom6_gw123_comm_err_flg
                = Bit(~CCU_HMI_222_14, 8 );
        g_riom6_di1_comm_err_flg
                = Bit(~CCU_HMI_222_14, 7 );
        g_riom6_di2_comm_err_flg
                = Bit(~CCU_HMI_222_14, 6 );
    //    g_riom6_di3_comm_err_flg
    //            = CheckLifeSignalValue(riom6_di3_lifesignal_temp,
    //                                   comm_status_data48);
    //    g_riom6_di4_comm_err_flg
    //            = CheckLifeSignalValue(riom6_di4_lifesignal_temp,
    //                                   comm_status_data49);
        g_riom6_do1_comm_err_flg
                = Bit(~CCU_HMI_222_14, 3 );
    //    g_riom6_do2_comm_err_flg
    //            = CheckLifeSignalValue(riom6_do2_lifesignal_temp,
    //                                   comm_status_data51);
    //    g_riom6_ai1_comm_err_flg
    //            = CheckLifeSignalValue(riom6_ai1_lifesignal_temp,
    //                                   comm_status_data52);


        g_riom7_gw123_comm_err_flg
                = Bit(~CCU_HMI_222_14, 16 );
        g_riom7_di1_comm_err_flg
                = Bit(~CCU_HMI_222_14, 15 );
        g_riom7_di2_comm_err_flg
                = Bit(~CCU_HMI_222_14, 14 );
    //    g_riom7_di3_comm_err_flg
    //            = CheckLifeSignalValue(riom7_di3_lifesignal_temp,
    //                                   comm_status_data48);
    //    g_riom7_di4_comm_err_flg
    //            = CheckLifeSignalValue(riom7_di4_lifesignal_temp,
    //                                   comm_status_data49);
        g_riom7_do1_comm_err_flg
                = Bit(~CCU_HMI_222_14, 11 );
    //    g_riom7_do2_comm_err_flg
    //            = CheckLifeSignalValue(riom7_do2_lifesignal_temp,
    //                                   comm_status_data51);
        g_riom7_ai1_comm_err_flg
                = Bit(~CCU_HMI_222_14, 9 );

        g_riom8_gw123_comm_err_flg
                = Bit(~CCU_HMI_222_15, 8 );
        g_riom8_di1_comm_err_flg
                = Bit(~CCU_HMI_222_15, 7 );
        g_riom8_di2_comm_err_flg
                = Bit(~CCU_HMI_222_15, 6 );
        g_riom8_di3_comm_err_flg
                = Bit(~CCU_HMI_222_15, 5 );
        g_riom8_di4_comm_err_flg
                = Bit(~CCU_HMI_222_15, 4 );
        g_riom8_do1_comm_err_flg
                = Bit(~CCU_HMI_222_15, 3 );
        g_riom8_do2_comm_err_flg
                = Bit(~CCU_HMI_222_15, 2 );
        g_riom8_ai1_comm_err_flg
                = Bit(~CCU_HMI_222_15, 1 );

        g_acu1_comm_err_flg
                = Bit(~CCU_HMI_222_9, 6 );
        g_acu2_comm_err_flg
                = Bit(~CCU_HMI_222_9, 5 );
        g_tcu1_comm_err_flg
                = Bit(~CCU_HMI_222_9, 2 );
        g_tcu2_comm_err_flg
                = Bit(~CCU_HMI_222_9, 1 );
        g_tcu3_comm_err_flg
                = Bit(~CCU_HMI_222_9, 16 );
        g_tcu4_comm_err_flg
                = Bit(~CCU_HMI_222_9, 15 );
        g_tcu5_comm_err_flg
                = Bit(~CCU_HMI_222_9, 14 );
        g_tcu6_comm_err_flg
                = Bit(~CCU_HMI_222_9, 13 );
        g_bcu1_comm_err_flg
                = Bit(~CCU_HMI_222_9, 12 );
        g_bcu2_comm_err_flg
                = Bit(~CCU_HMI_222_9, 11 );
        g_bcu3_comm_err_flg
                = Bit(~CCU_HMI_222_9, 10 );
        g_bcu4_comm_err_flg
                = Bit(~CCU_HMI_222_9, 9 );
        g_hvac1_comm_err_flg
                = Bit(~CCU_HMI_222_10, 8 );
        g_hvac2_comm_err_flg
                = Bit(~CCU_HMI_222_10, 7 );
        g_hvac3_comm_err_flg
                = Bit(~CCU_HMI_222_10, 6 );
        g_hvac4_comm_err_flg
                = Bit(~CCU_HMI_222_10, 5 );
        g_hvac5_comm_err_flg
                = Bit(~CCU_HMI_222_10, 4 );
        g_hvac6_comm_err_flg
                = Bit(~CCU_HMI_222_10, 3 );
        g_hvac7_comm_err_flg
                = Bit(~CCU_HMI_222_10, 2 );
        g_hvac8_comm_err_flg
                = Bit(~CCU_HMI_222_10, 1 );
        g_door1_comm_err_flg
                = (Bit(~CCU_HMI_222_10, 16 ))&&(Bit(~CCU_HMI_222_11, 8 ));
        g_door2_comm_err_flg
                = (Bit(~CCU_HMI_222_10, 15 ))&&(Bit(~CCU_HMI_222_11, 7 ));
        g_door3_comm_err_flg
                = (Bit(~CCU_HMI_222_10, 14 ))&&(Bit(~CCU_HMI_222_11, 6 ));
        g_door4_comm_err_flg
                = (Bit(~CCU_HMI_222_10, 13 ))&&(Bit(~CCU_HMI_222_11, 5 ));
        g_door5_comm_err_flg
                = (Bit(~CCU_HMI_222_10, 12 ))&&(Bit(~CCU_HMI_222_11, 4 ));
        g_door6_comm_err_flg
                = (Bit(~CCU_HMI_222_10, 11 ))&&(Bit(~CCU_HMI_222_11, 3 ));
        g_door7_comm_err_flg
                = (Bit(~CCU_HMI_222_10, 10 ))&&(Bit(~CCU_HMI_222_11, 2 ));
        g_door8_comm_err_flg
                = (Bit(~CCU_HMI_222_10, 9 ))&&(Bit(~CCU_HMI_222_11, 1 ));
        g_pis1_comm_err_flg
                = Bit(~CCU_HMI_222_16, 8 );
        g_pis2_comm_err_flg
                = Bit(~CCU_HMI_222_16, 7 );
        g_atc1_comm_err_flg
                = Bit(~CCU_HMI_222_9, 4 );
        g_fas1_comm_err_flg
                = Bit(~CCU_HMI_222_16, 4 );
        g_fas2_comm_err_flg
                = Bit(~CCU_HMI_222_16, 3 );

        g_CCU1_comm_err_flg
                = Bit(~CCU_HMI_222_9, 8 );
        g_CCU2_comm_err_flg
                = Bit(~CCU_HMI_222_9, 7 );
}

bool Dialog::CheckLifeSignalValue(WORD &temp, WORD data)
{
    bool ret;
    if (temp == data)
    {
        ret = true;
    }
    else
    {
        ret = false;
    }
    temp = data;
    return ret;
}

// deleted by Deng Ran on the 07th of July 2017.
// void Dialog::SerialDebug()

// deleted by Deng Ran on the 07th of July 2017
// int Dialog::InitSerialPort()

// deleted by Deng Ran on the 07th of July 2017.
// void Dialog::CloseSerialPort()

// deleted by Deng Ran on the 07th of July 2017.
// int Dialog::ComWrite(char *writeData, int len)

// set HMI in Tc1 or Tc2 ? and set IP address
// changed by Deng Ran on the 03rd of 2017 for there is no io signal used for judging which side it is.
void Dialog::HMI_Initial_Set()
{
    if(1 == TC1_HMI_ini)
    {
        TC1_HMI = 1;
        TC2_HMI = 0;
        system("ifconfig eth0 10.10.25.21");
    }
    else if (1 == TC2_HMI_ini)
    {
        TC2_HMI=1;
        TC1_HMI=0;
        system("ifconfig eth0 10.10.25.23");
    }
    else // default setting is tc1
    {
        TC1_HMI = 1;
        TC2_HMI = 0;
        system("ifconfig eth0 10.10.25.21");
    }
}

// its function is reading the temperature of hmi, deleted by Deng Ran on the 31st of July 2017.
// void Dialog::OnTimer30s()

void Dialog::OnLogTimer()
{
#ifdef LOG_OPEN
    m_log.Begin();

    m_log.Log("Time:" + GetDateStr() + " " + GetTimeStr() + "\n");
    m_log.Log("CommunicateErr:" + QString::number(CLog::m_nCommErr) + "\n");
    m_log.Log("ErrPackageNum:"+ QString::number(CLog::m_nErrPackage) + "\n");
    m_log.Log("TimeSkipNum:" + QString::number(CLog::m_nTimeSkip) + "\n");
    if(UpdateDataTimer.isActive())
        m_log.Log("UpdateDataTimer is Active.\n");
    else
        m_log.Log("UpdateDataTimer is Dead.\n");
    m_log.Log("Memory info:\n");
    system("vmstat>>/root/mem.txt");
    string memInfoStr, tmpstr;
    fstream fs;
    fs.open("/root/mem.txt",ios_base::in);
    while(!fs.eof())
    {
        getline(fs, tmpstr, '\n');
        memInfoStr += tmpstr + "\n";
    }
    fs.close();
    system("rm -f /root/mem.txt");

    m_log.Log(QString(memInfoStr.c_str()) + "\n\n");

    m_log.End();
#endif
}

// deleted by Deng Ran on the 31st of July 2017.
// int Dialog::read_h8_response(int fd)
