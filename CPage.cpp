#include "CPage.h"
#include  <qdatetime.h>
#include "dialog.h"

extern vector<CPage*>  g_PageVec;

extern int g_RealTimeFaultsNum;

CPage::CPage()
{
}

CPage::~CPage()
{
    m_painter.end();
    for_each(m_ctrlmap.begin(), m_ctrlmap.end(), DELMAPOBJ<CONTROLPAIR>());
    SAFE_DELETE(m_pixmap);
}

void CPage::InitPage(
                      __in int nWidth,     //pixmap width
                      __in int nHeight,    //pixmap height
                      __in int nPageIndex, //page index
                      __in QDialog* pParent//parent pointer
                     )
{
    m_nWidth     = nWidth;
    m_nHeight    = nHeight;
    m_nPageIndex = nPageIndex;
    m_pDlg       = pParent;
    m_pixmap = new QPixmap(nWidth,nHeight);
    m_painter.begin(m_pixmap);
    m_painter.setRenderHint(QPainter::SmoothPixmapTransform);
    //set pixmap bk color to black.
    m_painter.fillRect(0,0,m_nWidth,m_nHeight, Qt::black);
}

void  CPage::InitCommonLabel(
                             __in int nID,
                             __in int nType
                            )
{
    if (nType == CONTROL_LABEL )
    {
        switch(nID)
        {
        case IDLB_COM_DATE:
        case IDLB_COM_TIME:
            ((CLabel*)GetDlgItem(nID))->SetAlignment(Qt::AlignLeft);
            break;
        default:
            break;
        }
        if (nID == IDLB_COM_DATE)
        {
            QDate date = QDate::currentDate();
            QString str;
            str = QString::number(date.year()) + QSTR("年")+
                  QString::number(date.month()) + QSTR("月")+
                  QString::number(date.day()) + QSTR("日");
            GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);
        }
    }
}

void CPage::DrawByRom(ROMINFO pRomInfo)
{
    int nRomSize = pRomInfo.nRomSize;

    for (int i=0; i<nRomSize; i++)
    {
        AddControl(pRomInfo.pRom[i]->showStr,
                   pRomInfo.pRom[i]->rc,
                   pRomInfo.pRom[i]->fgColor,
                   pRomInfo.pRom[i]->font,
                   pRomInfo.pRom[i]->bkColor,
                   pRomInfo.pRom[i]->nID,
                   pRomInfo.pRom[i]->nControlType);

        InitCommonLabel(pRomInfo.pRom[i]->nID,pRomInfo.pRom[i]->nControlType);
    }
    OnInitPage();
}

void CPage::AddControl(
                        __in QString ctrl_str,     //ctrl string
                        __in QRect ctrl_rc,        //ctrl rect
                        __in QColor ctrl_txtcolor, //ctrl text color
                        __in QFont ctrl_font,      //ctrl text font
                        __in QColor ctrl_bkcolor,  //ctrl bk color
                        __in int ctrl_id,          //ctrl id
                        __in int ctrl_type         //ctrl type
                       )
{

    int a,b,c,d;
    ctrl_rc.getRect(&a,&b,&c,&d);
    if(c>1){c=SCREEN_factor*c;}
    if(d>1){d=SCREEN_factor*d;}
    ctrl_rc.setRect(a*SCREEN_factor,b*SCREEN_factor,c,d);

    if (m_ctrlmap[ctrl_id] != NULL)
    {
        SAFE_DELETE(m_ctrlmap[ctrl_id]);
    }

    switch(ctrl_type)
    {
    case CONTROL_BUTTON:
        {

            CButton* pBtn = new CButton();
            pBtn->Create(ctrl_str,
                         ctrl_rc,
                         ctrl_txtcolor,
                         ctrl_font,
                         ctrl_bkcolor,
                         &m_painter,
                         ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pBtn);
            break;
        }
     case CONTROL_EDIT:
        {

            CEdit* pEdit = new CEdit();
            pEdit->Create(ctrl_str,
                          ctrl_rc,
                          ctrl_txtcolor,
                          ctrl_font,
                          ctrl_bkcolor,
                          &m_painter,
                          ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pEdit);
            break;
        }
    case CONTROL_LABEL:
        {

            CLabel* pLabel = new CLabel();
            pLabel->Create(ctrl_str,
                           ctrl_rc,
                           ctrl_txtcolor,
                           ctrl_font,
                           ctrl_bkcolor,
                           &m_painter,
                           ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pLabel);
            break;
        }
    case CONTROL_IMAGE:     
        {

            CImageCtrl* pImageCtrl = new CImageCtrl();
            pImageCtrl->Create(ctrl_str,
                               ctrl_rc,
                               ctrl_txtcolor,
                               ctrl_font,
                               ctrl_bkcolor,
                               &m_painter,
                               ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pImageCtrl);
            break;
        }
    case CONTROL_LINE:
        {
            CLine* pLineCtrl = new CLine();
            pLineCtrl->Create(ctrl_str,
                              ctrl_rc,
                              ctrl_txtcolor,
                              ctrl_font,
                              ctrl_bkcolor,
                              &m_painter,
                              ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pLineCtrl);
            break;
        }
    case CONTROL_CIRCLE:
        {

            CCircle* pCircleCtrl = new CCircle();
            pCircleCtrl->Create(ctrl_str,
                                ctrl_rc,
                                ctrl_txtcolor,
                                ctrl_font,
                                ctrl_bkcolor,
                                &m_painter,
                                ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pCircleCtrl);
            break;
        }
    case CONTROL_SCROLL:
        {
            CScrollCtrl* pScrollCtrl = new CScrollCtrl();
            pScrollCtrl->Create(ctrl_str,
                              ctrl_rc,
                              ctrl_txtcolor,
                              ctrl_font,
                              ctrl_bkcolor,
                              &m_painter,
                              ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pScrollCtrl);
            break;
        }
    case CONTROL_TRAIN:
        {

            CTrainCtrl* pTrainCtrl = new CTrainCtrl();
            pTrainCtrl->Create(ctrl_str,
                              ctrl_rc,
                              ctrl_txtcolor,
                              ctrl_font,
                              ctrl_bkcolor,
                              &m_painter,
                              ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pTrainCtrl);
            break;
        }
    case CONTROL_ARROW:
        {

            CArrowCtrl* pArrowCtrl = new CArrowCtrl();
            pArrowCtrl->Create(ctrl_str,
                              ctrl_rc,
                              ctrl_txtcolor,
                              ctrl_font,
                              ctrl_bkcolor,
                              &m_painter,
                              ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pArrowCtrl);
            break;
        }
    case CONTROL_TRAINDIAGRAM:
        {
            CTrainDiagramCtrl* pTrainDiagramCtrl = new CTrainDiagramCtrl();
            pTrainDiagramCtrl->Create(ctrl_str,
                                      ctrl_rc,
                                      ctrl_txtcolor,
                                      ctrl_font,
                                      ctrl_bkcolor,
                                      &m_painter,
                                      ctrl_id);
             m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pTrainDiagramCtrl);
            break;
        }
    default:
        ASSERT(false); //error:unkown control type.
        break;
    }
}

void CPage::RemoveControl(
                           __in int ctrl_id
                          )
{
    if (m_ctrlmap.find(ctrl_id) != m_ctrlmap.end())
    {
        m_painter.setBrush(Qt::black);
        m_painter.setPen(Qt::black);
        m_painter.drawRect(GetDlgItem(ctrl_id)->GetCtrlRect());
        SAFE_DELETE(m_ctrlmap[ctrl_id]);
        m_ctrlmap.erase(ctrl_id);
    }
}

void CPage::ResetButtonState()
{
    for (CONTROLMAP::iterator it = m_ctrlmap.begin(); it != m_ctrlmap.end(); ++it)
    {
        if (it->second->IsKindOf("CButton"))
        {
            CButton* pButton = (CButton*)it->second;
            if (pButton->m_bAutoUpState)
            {
               pButton->ChangeButtonState(LBUTTON_UP);

            }
        }
//        else if (it->second->IsKindOf("CScrollCtrl"))
//        {
//            CScrollCtrl* pScrollCtrl = (CScrollCtrl*)it->second;
//            pScrollCtrl->SetSelectedPos(false,pScrollCtrl->m_LButtonDownPos);
//        }
    }
}

bool CPage::TestControlExists(
                              __in int ctrl_id
                             )
{
    if (find_if (m_ctrlmap.begin(), m_ctrlmap.end(), bind2nd(FINDKEY<CONTROLPAIR>(),ctrl_id)) == m_ctrlmap.end())
    {
        return false;
    }
    return true;
}

CControlInterface* CPage::GetDlgItem(
                                     __in int ctrl_id // control id
                                    )
{
    if (!TestControlExists(ctrl_id))
    {
        QMessageBox::warning(NULL,
                             "error",
                             "page index: "+QString::number(m_nPageIndex) +"\ncontrol id: 0x"+
                             QString::number(ctrl_id,16)+ "not found!",
                             QMessageBox::Ok,QMessageBox::Ok);
        assert(false);  //error: cant find control
    }

    return m_ctrlmap[ctrl_id];
}

void CPage::ChangePage(
                       __in int PageIndex // page index
                      )
{
  //  PageIndex=PAGE_INDEX_COMMSTATUS;
    CPage* pPage = NULL;
    Dialog* pDlg = (Dialog*)GetParentDlg();

    CGlobal::m_nPrePageIndex = CGlobal::m_nCurPageIndex;
    CGlobal::m_nNextPageIndex = PICTURE_INDEX(PageIndex);
    pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    pPage->ConnectEvent(WM_LEAVEPAGE);

    CGlobal::m_nCurPageIndex = PICTURE_INDEX(PageIndex);

    if (g_PageVec[CGlobal::m_nCurPageIndex] == NULL)
        CREATE_PAGE(CGlobal::m_nCurPageIndex,pDlg)

    pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    pPage->OnUpdatePage();
    pPage->ConnectEvent(WM_SHOWPAGE);
}

CPage* CPage::GetPage(
                       __in int PageIndex
                     )
{
    Dialog* pDlg = (Dialog*)GetParentDlg();
    if (g_PageVec[PageIndex] == NULL)
        CREATE_PAGE(PageIndex,pDlg)

    return g_PageVec[PageIndex];
}

void CPage::UpdateVoltage(int id)
{
    //CCU_HMI_222_4 =CTHM_LineVoltage_U16	网压	6节动车的网压区最大值

    if (Bit(CCU_HMI_222_9, 8 )||Bit(CCU_HMI_222_9, 7 ) == 1)
    {
        if ( CCU_HMI_222_4 == 0)
        {
            voltage_color = 3;
        }
        else if (CCU_HMI_222_4 < 1000)
        {
            voltage_color = 2;
        }
        else if (1800 < CCU_HMI_222_4)
        {
            voltage_color = 2;
        }
        else if ((1000<CCU_HMI_222_4) && (CCU_HMI_222_4<1800))
        {
            voltage_color = 0;
        }
    }
    else
    {
        voltage_color = 4;
    }


    SetVoltageLabelColor(id, voltage_color);

    SetVoltageValue(id, CCU_HMI_222_4);
    SetVoltageFontColor(id, voltage_color);

   // ((CLabel *) GetDlgItem(id))->SetBorderColor(Qt::white);

}

void CPage::UpdateTractionLevel(int id)
{
//    //CTHM_EmBke_B1	紧急制动
//    if (Bit(CCU_HMI_222_15,13)==1)
//    {
//        Traction_brake_select=3;
//        pull_brake_hide =0;
//        BitSet( pull_brake_hide, 4, 1);
//    }
//    else
//    {
//        if (Bit(CCU_HMI_222_15,14)==1)
//        {
//            Traction_brake_select=0;
//            pull_brake_hide =0;
//            BitSet( pull_brake_hide, 3, 1);
//        }
//        if (Bit(CCU_HMI_222_15,15)==1)
//        {
//            Traction_brake_select=1;
//            pull_brake_hide =0;
//            BitSet( pull_brake_hide, 2, 1);
//        }
//        if (Bit(CCU_HMI_222_15,16)==1)
//        {
//            Traction_brake_select=2;
//            pull_brake_hide =0;
//            BitSet( pull_brake_hide, 1, 1);
//        }
//    }

//    if (Bit(pull_brake_hide, 1))
//    {
//        SetTractionBrakeLabelColor(id, Traction_brake_select);

//        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("牵引 ").append(QString::number(CCU_HMI_221_14%256)).append("%"));

//        SetTractionBrakeFontColor(id, 1);

//    }
//    else if (Bit(pull_brake_hide, 2))
//    {
//        SetTractionBrakeLabelColor(id, Traction_brake_select);

//        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("制动 ").append(QString::number(CCU_HMI_221_14%256)).append("%"));

//        SetTractionBrakeFontColor(id, 1);
//     }
//    else if (Bit(pull_brake_hide, 3))
//    {
//        SetTractionBrakeLabelColor(id, Traction_brake_select);
//        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("惰行 ").append(QString::number(CCU_HMI_221_14%256)).append("%"));

//         SetTractionBrakeFontColor(id, 0);
//    }
//    else if (Bit(pull_brake_hide, 4))
//    {
//        SetTractionBrakeLabelColor(id, Traction_brake_select);
//        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("紧急制动"));

//         SetTractionBrakeFontColor(id, 0);
//    }
    if (Bit(CCU_HMI_222_9, 8 )||Bit(CCU_HMI_222_9, 7 ) == 1)
    {
        SetTractionBrakeLabelColor(id, 0);
        //CTHM_EmBke_B1	紧急制动
        if (Bit(CCU_HMI_222_15,13)==1)
        {

            SetTractionBrakeLabelColor(id, 3);
            SetTractionBrakeFontColor(id, 0);
            ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("紧急制动"));

        }
        else
        {
            //CTHM_Sliding_B1	惰行
            if (Bit(CCU_HMI_222_15,14)==1)
            {

                SetTractionBrakeLabelColor(id, 0);
                ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("惰行 ").append(QString::number(CCU_HMI_221_14%256)).append("%"));
                SetTractionBrakeFontColor(id, 0);
            }
            // CTHM_Braking_B1	制动指令
            if (Bit(CCU_HMI_222_15,15)==1)
            {
                SetTractionBrakeLabelColor(id, 1);
                ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("制动 ").append(QString::number(CCU_HMI_221_14%256)).append("%"));
                SetTractionBrakeFontColor(id, 0);
            }
            //CTHM_Driving_B1	牵引指令
            if (Bit(CCU_HMI_222_15,16)==1)
            {
                SetTractionBrakeLabelColor(id, 2);
                ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("牵引 ").append(QString::number(CCU_HMI_221_14%256)).append("%"));
                SetTractionBrakeFontColor(id, 1);
            }
        }
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR(""));
        SetTractionBrakeLabelColor(id, 5);
        SetTractionBrakeFontColor(id, 1);
    }




   // ((CLabel *) GetDlgItem(id))->SetBorderColor(Qt::white);
}

void CPage::UpdateCarSpeedMode(int id)
{
    //CTHM_ATCOn_B1	ATC在线
    if (Bit(CCU_HMI_222_9, 4 ) == 1)
    {
        //ATCT_CBTC_B1	ATC运营模式-基于无线列车运营
        if(Bit(ATC_A10_2, 16))
        {
            //ATCT_Fast_B1	快慢车
            if(Bit(ATC_A10_4, 11))
            {
                ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
                ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("快车"));
            }else
            {
                ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
                ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("慢车"));
            }
        }
        else
        {
            if ((Bit(CCU_HMI_222_16, 8 )) ||(Bit(CCU_HMI_222_16, 7 ))== 1)   //PIS1 PIS2
            {
                   if(Bit(PIS_Master_9i0_7, 11))
                   {
                       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
                       ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("快车"));
                   }
                   else
                   {
                       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(id))->SetCtrlText(QSTR("慢车"));
                   }

            }

        }
    }

}

void CPage::SetVoltageValue(int id, int aValue)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(aValue).append(" V"));
}



void CPage::SetAValue(int id, int16_t aValue)
{

    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(aValue).append(" A"));
    if (Bit(CCU_HMI_222_9, 8 )||Bit(CCU_HMI_222_9, 7 ) == 1)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
	
}




// set V label back ground color
void CPage::SetVoltageLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 4));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

// Set V Font color
void CPage::SetVoltageFontColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 4));
    if (2 <= colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
    }
}

void CPage::SetTractionBrakeLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 5));
    // 黑 橘红  绿 红 黑 0—4
    if (0 == colorVal || 4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::darkRed);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (5 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void CPage::SetTractionBrakeFontColor(int id, int colorVal)
{
    if (1 == colorVal || 2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
}

//tain common function.
void CPage::updateTrain(int nTrainID)
{
    //CTHM_Tc1DI1On_B1 TC1车DI1在线 && CTHM_Tc1GWOn_B1TC1车GW在线
    if ( (Bit(CCU_HMI_222_11, 15 ))&&(Bit(CCU_HMI_222_11, 16 ))== 1)
    {
        //DICT_Cab KeyActiveTci_B1    	Cab KeyActive	TC1司机室激活
        if (Bit(DI_110_1,9) == 0)
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(1, Qt::gray);
        else
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(1, Qt::green);
    }
    else
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(1, Qt::white);
    }
   //CTHM_Tc2DI1On_B1	TC2车DI1在线 && CTHM_Tc2GWOn_B1	TC2车GW在线
    if (  (Bit(CCU_HMI_222_15, 7 )) &&(Bit(CCU_HMI_222_15, 8 ))== 1 )
    {
        //DICT_Cab KeyActiveTci_B1    	Cab KeyActive	TC2司机室激活
        if (Bit(DI_180_1,9) == 0)
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(8, Qt::gray);
        else
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(8, Qt::green);
    }
    else
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(8, Qt::white);
    }


    //CTHM_Tc1DI3On_B1 TC1车DI3在线 && CTHM_Tc1GWOn_B1TC1车GW在线
    if ( (Bit(CCU_HMI_222_11, 13 ))&&(Bit(CCU_HMI_222_11, 16 ))== 1)
    {
        //DICT_EmergencyDoorOpenTci_B1    	Emergency door open	逃生门监视
        if (1 == Bit(DI_110_5,4) )
        {
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(1, Qt::green);
        }
        else
        {
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(1, Qt::red);
        }
    }
    else
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(1, Qt::white);
    }
    if (  (Bit(CCU_HMI_222_15, 8 )) &&(Bit(CCU_HMI_222_15, 5 ))== 1 )
    {
        if (1 == Bit(DI_180_5,4) )
        {
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(8, Qt::green);

        }
        else
        {
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(8, Qt::red);
        }
    }
    else
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(8, Qt::white);
    }

    // changed by Deng Ran on the 14th of August 2017.
    // 0: down 1: up 2: white block 3: blue block
    // if there is no up and down, the pantograph would be drawed as up.
    if (ccuPantographUpStateCar2)
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(2, 1, 0);
    }
    else if (riomPantographDownStateCar2)
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(2, 0, 0);
    }
    else
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(2, 1, 0);
    }

    if (ccuPantographUpStateCar4)
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(4, 1, 0);
    }
    else if (riomPantographDownStateCar4)
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(4, 0, 0);
    }
    else
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(4, 1, 0);
    }

    if (ccuPantographUpStateCar7)
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(7, 1, 0);
    }
    else if (riomPantographDownStateCar7)
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(7, 0, 0);
    }
    else
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(7, 1, 0);
    }

    UpdateWarning(nTrainID);
   // ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 2,1,Qt::red);

    //car num
    QString nCarNum[] =
    {
        che1_num,
        che2_num,
        che3_num,
        che4_num,
        che5_num,
        che6_num,
        che7_num,
        che8_num,
    };
    for (int i=0; i<8; i++)
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetCarText(i,nCarNum[i]);
    }

}

void CPage::updateArrow(int nLeftArrowID,int nRightArrowID)
{
    //left
   // DICT_Cab KeyActiveTci_B1    	Cab KeyActive	司机室激活
    if (Bit(DI_110_1,9)==1 )
    {
        //DICT_DirectionBTci_B1    后退方向  DICT_DirectionFTci_B1   前进方向
        if ( (Bit(DI_110_1,12)==1)&&(Bit(DI_110_1,11)==0))
        {
            ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->DrawArrowCtrl(ARROW_RIGHT);
        }
        if ( (Bit(DI_110_1,12)==0)&&(Bit(DI_110_1,11)==1))
        {
            ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->DrawArrowCtrl(ARROW_LEFT);
        }
        if ( (Bit(DI_110_1,12)==1)&&(Bit(DI_110_1,11)==1))
        {
            ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->DrawArrowCtrl(ARROW_RIGHT_LEFT);
        }
        if ( (Bit(DI_110_1,12)==0)&&(Bit(DI_110_1,11)==0))
        {
            ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->HideArrow();
        }
    }
    else
    {
        ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->HideArrow();
    }

    //right
    //DI_180_1=0;
    if (Bit(DI_180_1,9)==1 )
    {
        if ( (Bit(DI_180_1,12)==1)&&(Bit(DI_180_1,11)==0))
        {
            ((CArrowCtrl*)GetDlgItem(nRightArrowID))->DrawArrowCtrl(ARROW_LEFT);
        }
        if ( (Bit(DI_180_1,12)==0)&&(Bit(DI_180_1,11)==1))
        {
            ((CArrowCtrl*)GetDlgItem(nRightArrowID))->DrawArrowCtrl(ARROW_RIGHT);
        }
        if ( (Bit(DI_180_1,12)==1)&&(Bit(DI_180_1,11)==1))
        {
            ((CArrowCtrl*)GetDlgItem(nRightArrowID))->DrawArrowCtrl(ARROW_RIGHT_LEFT);
        }
        if ( (Bit(DI_180_1,12)==0)&&(Bit(DI_180_1,11)==0))
        {
            ((CArrowCtrl*)GetDlgItem(nRightArrowID))->HideArrow();
        }
    }
    else
    {
        ((CArrowCtrl*)GetDlgItem(nRightArrowID))->HideArrow();
    }

}

void CPage::updateFault(int nFaultID)
{
    if (g_RealTimeFaultsNum)
    {
        ((CImageCtrl*)GetDlgItem(nFaultID))->ShowImage();
    }
    else
    {
        ((CImageCtrl*)GetDlgItem(nFaultID))->HideImage();
    }
}

void CPage::UpdateCommInterrupt(int nInteruptID)
{
    static quint32 times = 0;
 //   BitSet(hmi_485_error,5,1);
    if (Bit(hmi_485_error,5)==1 )
    {
        ((CLabel *)GetDlgItem(nInteruptID))->SetCtrlBKColor(Qt::white);
        if (times%times_n == 0)
        {
            QColor txtcolor = ((CLabel *)GetDlgItem(nInteruptID))->GetTxtColor();
            if (txtcolor == Qt::red)
                ((CLabel *)GetDlgItem(nInteruptID))->SetTxtColor(Qt::white);
            else
                ((CLabel *)GetDlgItem(nInteruptID))->SetTxtColor(Qt::red);
        }
        times++;
    }
    else
    {
        ((CLabel *)GetDlgItem(nInteruptID))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(nInteruptID))->SetTxtColor(Qt::black);
        times = 0;
    }
    ((CLabel *)GetDlgItem(nInteruptID))->SetCtrlBKColor(Qt::black);
    ((CLabel *)GetDlgItem(nInteruptID))->SetTxtColor(Qt::black);
    times = 0;
}

void CPage::OnTitleCLK()
{
   if(((Dialog*)GetParentDlg())->serialDebugDlg.isHidden())
       ((Dialog*)GetParentDlg())->serialDebugDlg.show();
}

void CPage::updateErrorLine(int nTrainID)
{
    static quint32 times = 0;
    int x,y;
    x=((CTrainCtrl*)GetDlgItem(nTrainID))->GetCtrlRect().x()+GetParentDlg()->x()-120;
    y=((CTrainCtrl*)GetDlgItem(nTrainID))->GetCtrlRect().y()+GetParentDlg()->y()+33;
    if ( g_realtimeFaultsList.size()>0)
    {
       int j=g_realtimeFaultsList.size()-1;
       int confirm_num=0;
       for (int i=j; i >= 0; i--)
       {
                FAULTS_ROM_DATA *pdata = &g_faultsrom[g_realtimeFaultsList[i].nRomIndex];


                if (pdata->flg && (3 != pdata->level) && !pdata->confirm)
                {

                    if(((Dialog*)GetParentDlg())->dlg.isHidden())
                    {
                        ((Dialog*)GetParentDlg())->dlg.show();
                         error_turnoff_timer=3;
                        ((Dialog*)GetParentDlg())->dlg.SetRomIdx(g_realtimeFaultsList[i].nRomIndex);
                        ((Dialog*)GetParentDlg())->dlg.move(x,y);


                       // ((Dialog*)GetParentDlg())->dlg.exec();
                        confirm_num=1;
                        break;
                    }
                    else
                    {

                        if(((Dialog*)GetParentDlg())->dlg.m_romidx==g_realtimeFaultsList[i].nRomIndex)
                        {
                            if(g_faultsrom[g_realtimeFaultsList[i].nRomIndex].confirm_flg==false)
                            {
                                times++;
                                if (times%times_n == 0)
                                {
                                    error_turnoff_timer--;
                                    if (error_turnoff_timer <= 0)
                                    {
                                        g_faultsrom[g_realtimeFaultsList[i].nRomIndex].confirm = true;
                                        ((Dialog*)GetParentDlg())->dlg.hide();
                                        error_turnoff_timer=0;
                                    }

                                }
                                confirm_num=1;
                                break;
                            }
                            else
                            {
                                confirm_num=1;
                                break;
                            }

                        }
                        else
                        {
                            //之前弹出的故障消失但还有需要确认的故障
//                           ((Dialog*)GetParentDlg())->dlg.SetRomIdx(g_realtimeFaultsList[i].nRomIndex);
                            confirm_num=1;
                            ((Dialog*)GetParentDlg())->dlg.hide();
                            error_turnoff_timer=0;
                            break;
                        }

                    }
                }//if (pdata->confirm==false)
        }//for (int i=j; i >= 0; i--)
        //之前弹出的故障消失且没有需要确认的故障
        if(confirm_num==0)
        {
            ((Dialog*)GetParentDlg())->dlg.hide();
            error_turnoff_timer=0;
        }

    }
    else  //if ( g_realtimeFaultsList.size()>0)
    {
        ((Dialog*)GetParentDlg())->dlg.hide();
    }


}

void CPage::OnRealTimeFaultsWarnningIconClk_new()
{
    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CPage::UpdateStation()
{

    if ( (PIS_Master_9i1_1/256 > 0) && (PIS_Master_9i1_1/256 < 34) )
    {
        if (PIS_Master_9i1_1/256 == 1)
        {
            DestStation = QSTR("五路居");
        }
        if (PIS_Master_9i1_1/256 == 2)
        {
            DestStation = QSTR("慈寿寺");
        }
        if (PIS_Master_9i1_1/256 == 3)
        {
            DestStation = QSTR("花园桥");
        }
        if (PIS_Master_9i1_1/256 == 4)
        {
            DestStation = QSTR("白石桥南");
        }
        if (PIS_Master_9i1_1/256 == 5)
        {
            DestStation = QSTR("二里沟");
        }
        if (PIS_Master_9i1_1/256 == 6)
        {
            DestStation = QSTR("车公庄西");
        }
        if (PIS_Master_9i1_1/256 == 7)
        {
            DestStation = QSTR("车公庄");
        }
        if (PIS_Master_9i1_1/256 == 8)
        {
            DestStation = QSTR("平安里");
        }
        if (PIS_Master_9i1_1/256 == 9)
        {
            DestStation = QSTR("北海北");
        }
        if (PIS_Master_9i1_1/256 == 10)
        {
            DestStation = QSTR("南锣鼓巷");
        }
        if (PIS_Master_9i1_1/256 == 11)
        {
            DestStation = QSTR("东四");
        }
        if (PIS_Master_9i1_1/256 == 12)
        {
            DestStation = QSTR("朝阳门");
        }
        if (PIS_Master_9i1_1/256 == 13)
        {
            DestStation = QSTR("东大桥");
        }
        if (PIS_Master_9i1_1/256 == 14)
        {
            DestStation = QSTR("呼家楼");
        }
        if (PIS_Master_9i1_1/256 == 15)
        {
            DestStation = QSTR("金台路");
        }
        if (PIS_Master_9i1_1/256 == 16)
        {
            DestStation = QSTR("十里堡");
        }
        if (PIS_Master_9i1_1/256 == 17)
        {
            DestStation = QSTR("青年路");
        }
        if (PIS_Master_9i1_1/256 == 18)
        {
            DestStation = QSTR("褡裢坡");
        }
        if (PIS_Master_9i1_1/256 == 19)
        {
            DestStation = QSTR("黄渠");
        }
        if (PIS_Master_9i1_1/256 == 20)
        {
            DestStation = QSTR("常营");
        }
        if (PIS_Master_9i1_1/256 == 21)
        {
            DestStation = QSTR("草房");
        }
        if (PIS_Master_9i1_1/256 == 22)
        {
            DestStation = QSTR("物资学院路");
        }
        if (PIS_Master_9i1_1/256 == 23)
        {
            DestStation = QSTR("通州北关");
        }
        if (PIS_Master_9i1_1/256 == 24)
        {
            DestStation = QSTR("通运门");
        }
        if (PIS_Master_9i1_1/256 == 25)
        {
            DestStation = QSTR("北运河西");
        }
        if (PIS_Master_9i1_1/256 == 26)
        {
            DestStation = QSTR("郝家府");
        }
        if (PIS_Master_9i1_1/256 == 27)
        {
            DestStation = QSTR("东夏园");
        }
        if (PIS_Master_9i1_1/256 == 28)
        {
            DestStation = QSTR("潞城");
        }
        if (PIS_Master_9i1_1/256 == 29)
        {
            DestStation = QSTR("29");
        }
        if (PIS_Master_9i1_1/256 == 30)
        {
            DestStation = QSTR("30");
        }
        if (PIS_Master_9i1_1/256 == 31)
        {
            DestStation = QSTR("31");
        }
        if (PIS_Master_9i1_1/256 == 32)
        {
            DestStation = QSTR("32");
        }
        if (PIS_Master_9i1_1/256 == 33)
        {
            DestStation = QSTR("北运河东");
        }

    }
    else
    {
        DestStation = QString::number(PIS_Master_9i1_1/256);
    }


    if ( (PIS_Master_9i1_2%256 > 0) && (PIS_Master_9i1_2%256 < 34) )
    {
        if (PIS_Master_9i1_2%256 == 1)
        {
            CurrentStation = QSTR("五路居");
        }
        if (PIS_Master_9i1_2%256 == 2)
        {
            CurrentStation = QSTR("慈寿寺");
        }
        if (PIS_Master_9i1_2%256 == 3)
        {
            CurrentStation = QSTR("花园桥");
        }
        if (PIS_Master_9i1_2%256 == 4)
        {
            CurrentStation = QSTR("白石桥南");
        }
        if (PIS_Master_9i1_2%256 == 5)
        {
            CurrentStation = QSTR("二里沟");
        }
        if (PIS_Master_9i1_2%256 == 6)
        {
            CurrentStation = QSTR("车公庄西");
        }
        if (PIS_Master_9i1_2%256 == 7)
        {
            CurrentStation = QSTR("车公庄");
        }
        if (PIS_Master_9i1_2%256 == 8)
        {
            CurrentStation = QSTR("平安里");
        }
        if (PIS_Master_9i1_2%256 == 9)
        {
            CurrentStation = QSTR("北海北");
        }
        if (PIS_Master_9i1_2%256 == 10)
        {
            CurrentStation = QSTR("南锣鼓巷");
        }
        if (PIS_Master_9i1_2%256 == 11)
        {
            CurrentStation = QSTR("东四");
        }
        if (PIS_Master_9i1_2%256 == 12)
        {
            CurrentStation = QSTR("朝阳门");
        }
        if (PIS_Master_9i1_2%256 == 13)
        {
            CurrentStation = QSTR("东大桥");
        }
        if (PIS_Master_9i1_2%256 == 14)
        {
            CurrentStation = QSTR("呼家楼");
        }
        if (PIS_Master_9i1_2%256 == 15)
        {
            CurrentStation = QSTR("金台路");
        }
        if (PIS_Master_9i1_2%256 == 16)
        {
            CurrentStation = QSTR("十里堡");
        }
        if (PIS_Master_9i1_2%256 == 17)
        {
            CurrentStation = QSTR("青年路");
        }
        if (PIS_Master_9i1_2%256 == 18)
        {
            CurrentStation = QSTR("褡裢坡");
        }
        if (PIS_Master_9i1_2%256 == 19)
        {
            CurrentStation = QSTR("黄渠");
        }
        if (PIS_Master_9i1_2%256 == 20)
        {
            CurrentStation = QSTR("常营");
        }
        if (PIS_Master_9i1_2%256 == 21)
        {
            CurrentStation = QSTR("草房");
        }
        if (PIS_Master_9i1_2%256 == 22)
        {
            CurrentStation = QSTR("物资学院路");
        }
        if (PIS_Master_9i1_2%256 == 23)
        {
            CurrentStation = QSTR("通州北关");
        }
        if (PIS_Master_9i1_2%256 == 24)
        {
            CurrentStation = QSTR("通运门");
        }
        if (PIS_Master_9i1_2%256 == 25)
        {
            CurrentStation = QSTR("北运河西");
        }
        if (PIS_Master_9i1_2%256 == 26)
        {
            CurrentStation = QSTR("郝家府");
        }
        if (PIS_Master_9i1_2%256 == 27)
        {
            CurrentStation = QSTR("东夏园");
        }
        if (PIS_Master_9i1_2%256 == 28)
        {
            CurrentStation = QSTR("潞城");
        }
        if (PIS_Master_9i1_2%256 == 29)
        {
            CurrentStation = QSTR("29");
        }
        if (PIS_Master_9i1_2%256 == 30)
        {
            CurrentStation = QSTR("30");
        }
        if (PIS_Master_9i1_2%256 == 31)
        {
            CurrentStation = QSTR("31");
        }
        if (PIS_Master_9i1_2%256 == 32)
        {
            CurrentStation = QSTR("32");
        }
        if (PIS_Master_9i1_2%256 == 33)
        {
            CurrentStation = QSTR("北运河东");
        }
//        if (PIS_Master_9i1_2%256 == 21)
//        {
//            CurrentStation = QSTR("顺义");
//        }
//        if (PIS_Master_9i1_2%256 == 22)
//        {
//            CurrentStation = QSTR("俸伯");
//        }
    }
    else
    {
        CurrentStation = QString::number(PIS_Master_9i1_2%256);
     //   CurrentStation = QSTR("东小营");
    }


    if ( (PIS_Master_9i1_2/256 > 0) && (PIS_Master_9i1_2/256 < 34) )
    {
        if (PIS_Master_9i1_2/256 == 1)
        {
            NextStation= QSTR("五路居");
        }
        if (PIS_Master_9i1_2/256 == 2)
        {
            NextStation= QSTR("慈寿寺");
        }
        if (PIS_Master_9i1_2/256 == 3)
        {
            NextStation= QSTR("花园桥");
        }
        if (PIS_Master_9i1_2/256 == 4)
        {
            NextStation= QSTR("白石桥南");
        }
        if (PIS_Master_9i1_2/256 == 5)
        {
            NextStation= QSTR("二里沟");
        }
        if (PIS_Master_9i1_2/256 == 6)
        {
            NextStation= QSTR("车公庄西");
        }
        if (PIS_Master_9i1_2/256 == 7)
        {
            NextStation= QSTR("车公庄");
        }
        if (PIS_Master_9i1_2/256 == 8)
        {
            NextStation= QSTR("平安里");
        }
        if (PIS_Master_9i1_2/256 == 9)
        {
            NextStation= QSTR("北海北");
        }
        if (PIS_Master_9i1_2/256 == 10)
        {
            NextStation= QSTR("南锣鼓巷");
        }
        if (PIS_Master_9i1_2/256 == 11)
        {
            NextStation= QSTR("东四");
        }
        if (PIS_Master_9i1_2/256 == 12)
        {
            NextStation= QSTR("朝阳门");
        }
        if (PIS_Master_9i1_2/256 == 13)
        {
            NextStation= QSTR("东大桥");
        }
        if (PIS_Master_9i1_2/256 == 14)
        {
            NextStation= QSTR("呼家楼");
        }
        if (PIS_Master_9i1_2/256 == 15)
        {
            NextStation= QSTR("金台路");
        }
        if (PIS_Master_9i1_2/256 == 16)
        {
            NextStation= QSTR("十里堡");
        }
        if (PIS_Master_9i1_2/256 == 17)
        {
            NextStation= QSTR("青年路");
        }
        if (PIS_Master_9i1_2/256 == 18)
        {
            NextStation= QSTR("褡裢坡");
        }
        if (PIS_Master_9i1_2/256 == 19)
        {
            NextStation= QSTR("黄渠");
        }
        if (PIS_Master_9i1_2/256 == 20)
        {
            NextStation= QSTR("常营");
        }
        if (PIS_Master_9i1_2/256 == 21)
        {
            NextStation= QSTR("草房");
        }
        if (PIS_Master_9i1_2/256 == 22)
        {
            NextStation = QSTR("物资学院路");
        }
        if (PIS_Master_9i1_2/256 == 23)
        {
            NextStation = QSTR("通州北关");
        }
        if (PIS_Master_9i1_2/256 == 24)
        {
            NextStation = QSTR("通运门");
        }
        if (PIS_Master_9i1_2/256 == 25)
        {
            NextStation = QSTR("北运河西");
        }
        if (PIS_Master_9i1_2/256 == 26)
        {
            NextStation = QSTR("郝家府");
        }
        if (PIS_Master_9i1_2/256 == 27)
        {
            NextStation = QSTR("东夏园");
        }
        if (PIS_Master_9i1_2/256 == 28)
        {
            NextStation = QSTR("潞城");
        }
        if (PIS_Master_9i1_2/256 == 29)
        {
            NextStation = QSTR("29");
        }
        if (PIS_Master_9i1_2/256 == 30)
        {
            NextStation = QSTR("30");
        }
        if (PIS_Master_9i1_2/256 == 31)
        {
            NextStation = QSTR("31");
        }
        if (PIS_Master_9i1_2/256 == 32)
        {
            NextStation = QSTR("32");
        }
        if (PIS_Master_9i1_2/256 == 33)
        {
            NextStation = QSTR("北运河东");
        }

    }
    else
    {
        NextStation= QString::number(PIS_Master_9i1_2/256);
     //   NextStation= QSTR("东小营");
    }

    SetStation(IDLB_COM_CurrentStation, CurrentStation);
    SetStation(IDLB_COM_NextStation, NextStation);
    SetStation(IDLB_COM_FinalStation, DestStation);


}
void CPage::SetStation(int id, QString station)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(station);

    return;
}


void CPage::UpdateWarning(int nTrainID)
{

//#ifdef USE_RAND_DATA
//    PIS_Master_9i1_4=1024;
//    PIS_Master_9i1_5=0;
//#endif

        //PAiCT_PICU11ToCbEmrgncy_B1	#1车-1位侧乘客紧急报警器呼叫司机	1=正在进行
       if (Bit( PIS_Master_9i1_4, 8) == 0)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 1,0,Qt::red);
       }
       else if (Bit( PIS_Master_9i1_4, 8) == 1)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 1,1,Qt::red);
       }

       if (Bit( PIS_Master_9i1_4, 6) == 0)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 2,0,Qt::red);
       }
       else if (Bit( PIS_Master_9i1_4, 6) == 1)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(1, 2,1,Qt::red);
       }

       if (Bit( PIS_Master_9i1_4, 4) == 0)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 1,0,Qt::red);
       }
       else if (Bit( PIS_Master_9i1_4, 4) == 1)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 1,1,Qt::red);
       }

       if (Bit( PIS_Master_9i1_4, 2) == 0)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 2,0,Qt::red);
       }
       else if (Bit( PIS_Master_9i1_4, 2) == 1)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(2, 2,1,Qt::red);
       }

       if (Bit( PIS_Master_9i1_4, 16) == 0)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 1,0,Qt::red);
       }
       else if (Bit( PIS_Master_9i1_4, 16) == 1)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 1,1,Qt::red);
       }

       if (Bit( PIS_Master_9i1_4, 14) == 0)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 2,0,Qt::red);
       }
       else if (Bit( PIS_Master_9i1_4, 14) == 1)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(3, 2,1,Qt::red);
       }

       if (Bit( PIS_Master_9i1_4, 12) == 0)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 1,0,Qt::red);
       }
       else if (Bit( PIS_Master_9i1_4, 12) == 1)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 1,1,Qt::red);
       }

       if (Bit( PIS_Master_9i1_4, 10) == 0)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 2,0,Qt::red);
       }
       else if (Bit( PIS_Master_9i1_4, 10) == 1)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(4, 2,1,Qt::red);
       }

       if (Bit( PIS_Master_9i1_5, 8) == 0)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 1,0,Qt::red);
       }
       else if (Bit( PIS_Master_9i1_5, 8) == 1)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 1,1,Qt::red);
       }

       if (Bit( PIS_Master_9i1_5, 6) == 0)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 2,0,Qt::red);
       }
       else if (Bit( PIS_Master_9i1_5, 6) == 1)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(5, 2,1,Qt::red);
       }

       if (Bit( PIS_Master_9i1_5, 4) == 0)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 1,0,Qt::red);
       }
       else if (Bit( PIS_Master_9i1_5, 4) == 1)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 1,1,Qt::red);
       }

       if (Bit( PIS_Master_9i1_5, 2) == 0)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 2,0,Qt::red);
       }
       else if (Bit( PIS_Master_9i1_5, 2) == 1)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(6, 2,1,Qt::red);
       }
       if (Bit( PIS_Master_9i1_5, 16) == 0)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(7, 1,0,Qt::red);
       }
       else if (Bit( PIS_Master_9i1_5, 16) == 1)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(7, 1,1,Qt::red);
       }
       if (Bit( PIS_Master_9i1_5, 14) == 0)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(7, 2,0,Qt::red);
       }
       else if (Bit( PIS_Master_9i1_5, 14) == 1)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(7, 2,1,Qt::red);
       }
       if (Bit( PIS_Master_9i1_5, 12) == 0)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(8, 2,0,Qt::red);
       }
       else if (Bit( PIS_Master_9i1_5, 12) == 1)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(8, 2,1,Qt::red);
       }
       if (Bit( PIS_Master_9i1_5, 10) == 0)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(8, 1,0,Qt::red);
       }
       else if (Bit( PIS_Master_9i1_5, 10) == 1)
       {
           ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPassengerWarningColor(8, 1,1,Qt::red);
       }

//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR1WARNING1, warning1_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR1WARNING2, warning2_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR2WARNING1, warning3_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR2WARNING2, warning4_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR3WARNING1, warning5_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR3WARNING2, warning6_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR4WARNING1, warning7_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR4WARNING2, warning8_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR5WARNING1, warning9_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR5WARNING2, warning10_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR6WARNING1, warning11_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR6WARNING2, warning12_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR7WARNING1, warning13_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR7WARNING2, warning14_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR8WARNING1, warning15_color);
//       SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR8WARNING2, warning16_color);

}

void CPage::InitPageHeader()
{
    if (this->TestControlExists(IDLB_COM_voltage))
    {
        this->UpdateVoltage(IDLB_COM_voltage);
    }

    if (this->TestControlExists(IDLB_COM_CarSpeedMode))
    {
        this->UpdateCarSpeedMode(IDLB_COM_CarSpeedMode);
    }

    if (this->TestControlExists(IDLB_COM_level))
    {
        this->UpdateTractionLevel(IDLB_COM_level);
    }
    if (this->TestControlExists(IDLB_COM_speed))
    {
        this->GetDlgItem(IDLB_COM_speed)->SetCtrlText(QString::number(CCU_HMI_222_3%256).append(" km/h"));
        if (Bit(CCU_HMI_222_9, 8 )||Bit(CCU_HMI_222_9, 7 ) == 1)
        {
            (this->GetDlgItem(IDLB_COM_speed))->SetCtrlBKColor(Qt::black);
        }
        else
        {
            (this->GetDlgItem(IDLB_COM_speed))->SetCtrlBKColor(Qt::white);
        }
    }

    if (this->TestControlExists(IDLB_COM_current))
    {
           webflow=(int16_t)(CCU_HMI_223_1/256+CCU_HMI_223_2%256*256);
//        if ((CCU_HMI_223_2%256)>127)
//        {
//           webflow = 32768-(CCU_HMI_223_1/256+CCU_HMI_223_2%256*256);
//        }
//        else
//        {
//           webflow = CCU_HMI_223_1/256+CCU_HMI_223_2%256*256;
//        }

        this->SetAValue(IDLB_COM_current, webflow);

    }
    if (this->TestControlExists(IDLB_COM_CurrentStation))
    {
        this->UpdateStation();
    }
    if (this->TestControlExists(IDLB_COM_TrainFault))
    {
        this->updateFault(IDLB_COM_TrainFault);
    }
}


