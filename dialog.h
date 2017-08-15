#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "CGlobal.h"
#include <qevent.h>
#include <qmutex.h>
#include <qtimer.h>
#include "CPage.h"
#include "CLog.h"
//common dialog
#include "cdebugdialog.h"

//page head file
#include "CCommStatusPage.h"
#include "CCommStatusHelpPage.h"
#include "CMainPage.h"
#include "CInitialSettingPage.h"
#include "CReserveSettingPage.h"
#include "CStationSettingPage.h"
#include "CDirectionConfirmPage.h"
#include "CRunStatePage.h"
#include "CRunHelp1Page.h"
#include "CRunHelp2Page.h"
#include "CRunHelp3Page.h"
#include "CRunHelp4Page.h"
#include "CCarStatus1Page.h"
#include "CCarStatus1Help1Page.h"
#include "CCarStatus1Help2Page.h"
#include "CCarStatus1Help3Page.h"
#include "CCarStatus2Page.h"
#include "CCarStatusHelpPage.h"
#include "CCarStatus3Page.h"
#include "CCarStatus3HelpPage.h"
#include "CFaultPage.h"
#include "CHVACSettingPage.h"
#include "CHVACSettingHelpPage.h"
#include "CMaintainPage.h"
#include "CParameterSettingPage1.h"
#include "CParameterSettingPage2.h"
#include "CWheelDiaRecordPage.h"
#include "CDoorTestPage.h"
#include "CDoorTestHelpPage.h"
#include "CTractionSystemTestPage.h"
#include "CTractionSystemTestHelpPage.h"
#include "CAccessorySystemTestPage.h"
#include "CAccessorySystemTestHelpPage.h"
#include "CBrakeTestPage.h"
#include "CBrakeTestHelpPage.h"
#include "CBrakeSelfTestPage.h"
#include "CBrakeSelfTestHelpPage.h"
#include "CTodayFaultPage.h"
#include "CRunRecordPage.h"
#include "CTryRunTestPage.h"
#include "CPasswordPage.h"
#include "CResetRunRecordPage.h"
#include "CInstancyBroadcastPage.h"
#include "hmipositionsetpage.h"
#include "CRealTimeFaultPage.h"
#include "CHistoryFaultPage.h"
#include "CTractionSystemFaultPage.h"
#include "CDebugMainPage.h"
#include "CVersionInfoPage.h"
#include "CVialSignalPage.h"
#include "CRIOMDebugPage.h"
#include "CRefreshTimePage.h"

#include "cpasswordmodifypage.h"
#include "ctimesettingpage.h"
#include "CFaultInfoPage.h"
#include "CWheelDiaRecordSelectPage.h"

#include "CIOTCTablePage.h"
#include "CIOMTablePage.h"
#include "CDOTablePage.h"
#include "cwarningdialog.h"
#include "cfaultscommonprocess.h"
#include "serialthread.h"
#include "CRealTimeFaultsWarnningDialog.h"
#include "CSerialDebugDialog.h"
#include "cudpdatapage1.h"
#include "CAW0Setting.h"
#include "FASPage.h"
#include "CRefreshTimePage2.h"
#include "CFaultPageHelp.h"
#ifdef USE_MVB_DATA
#include "mvbthread.h"



#endif

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog {
    Q_OBJECT
    DECLEAR_PAGE_MANAGE()
public:
    Dialog(QWidget *parent = 0);
    ~Dialog();

public:
     CSerialDebugDialog serialDebugDlg;
     CRealTimeFaultsWarnningDialog dlg;

private:
    SerialThread* m_serialThread;
#ifdef USE_MVB_DATA
    MvbThread *m_mvbthread;
#endif
    CLog m_log;
    QTimer m_logTimer;
    QTimer dateTimer;
    QTimer UpdateDataTimer;
    QTimer timer4s;
    QTimer timer30s;
    void ShowFaultPage();

    void SerialDebug();
    bool bSerialDebug;

    void updateSignals();

    //screen serial
        int fd;
        int InitSerialPort();
        void CloseSerialPort();
        int ComWrite(char *writeData, int len);
        int ComRead(char *readData);
        void BackLightCtrl(bool bOpen);
        void SetWarningTemperature();
        bool isOpen;
        int BAUDRATE;
        const char *MODEMDEVICE;
        int DATABITS;
        int PARITYTYPE;
        int STOPBITS;
        QMutex mutexRead, mutexWrite;
        void HMI_Initial_Set();
        int read_h8_response(int fd);

protected:
    void keyPressEvent( QKeyEvent * event );
    void mouseMoveEvent( QMouseEvent * event);
    void mousePressEvent(QMouseEvent* event);
    void mouseReleaseEvent(QMouseEvent* event);
    void changeEvent(QEvent *e);
    void paintEvent(QPaintEvent* e);
    void closeEvent (QCloseEvent* e);
    void reject();
    void globalDataInit();
    void initReceiveData();
    void createSendData();
    void CheckLifeSignalChange();
    bool CheckLifeSignalValue(WORD &temp, WORD data);

signals:
    void setDataSignal( uchar *data, int len );

protected slots:
    void OnLogTimer();
    void OnUpdateData();
    void OnUpdateDate();
    void OnTimer4s();

    // deleted by Deng Ran on the 31st of July 2017.
    // void OnTimer30s();

    void getRevDataSlot( int const pageNo, const QByteArray data, int const length );

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
