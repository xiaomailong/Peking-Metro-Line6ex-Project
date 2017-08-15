 #include "CTrainCtrl.h"

CTrainCtrl::CTrainCtrl()
{
    m_typestr = "CTrainCtrl";
    m_pPainter = NULL;
    m_bIsEnable = true;
}

void CTrainCtrl::Create(
                           __in QString& btn_str,     //button string
                           __in QRect& btn_rc,        //button rect
                           __in QColor& btn_txtcolor, //button text color
                           __in QFont& btn_font,      //button text font
                           __in QColor& btn_bkcolor,  //button bk color
                           __in QPainter* btn_painter,//which picture to draw
                           __in int btn_ID            //button id
                          )
{
    m_txtcolor = btn_txtcolor;
    m_font     = btn_font;
    m_bkcolor  = btn_bkcolor;
    m_rect     = btn_rc;
    m_nID      = btn_ID;
    m_pPainter = btn_painter;
    m_str      = btn_str;
    ASSERT(m_pPainter != NULL);
    m_pPainter->setFont(m_font);
    m_pPainter->setPen(m_txtcolor);
    m_pPainter->setBrush(m_bkcolor);

    DrawTrainCtrl();
}


void CTrainCtrl::SetCtrlText(
                                __in QString btn_str //ctrl text
                               )
{
    btn_str.trimmed();
    m_str = btn_str;
}

void  CTrainCtrl::SetTxtFont(
                                __in QFont /*btn_font*/ // ctrl font
                               )
{
}

void CTrainCtrl::SetTxtColor(
                                __in QColor /*btn_txtcolor*/ //ctrl text color
                               )
{
}

void CTrainCtrl::SetCtrlBKColor(
                                   __in QColor /*btn_bkcolor*/ //ctrl bk color
                                  )
{
}

void CTrainCtrl::SetCtrlRect(
                                __in QRect /*btn_rect*/ //ctrl rect
                               )
{
}

void CTrainCtrl::SetHeadCarColor(
                                    __in int nCarID,
                                    __in QColor color
                                   )
{
    ASSERT((nCarID == 1) || (nCarID == 8));
    m_carriage[nCarID-1].SetHeadCarColor(color);
}

void CTrainCtrl::SetEscapeDoorColor(
                                    __in int nCarID,
                                    __in QColor color
                                   )
{
    ASSERT((nCarID == 1) || (nCarID == 8));
    m_carriage[nCarID-1].SetEscapeDoorColor(color);
}

void CTrainCtrl::SetPantograph(
                                    __in int nCarID,
                                    int up, bool isolated
                                   )
{
    ASSERT((nCarID == 2) || (nCarID == 4)|| (nCarID == 7));
    m_carriage[nCarID-1].SetPantograph(nCarID,up, isolated);
}
void CTrainCtrl::SetPassengerWarningColor( __in int nCarID,int num,bool warning2,QColor color)
{
   m_carriage[nCarID-1].SetPassengerWarningColor(nCarID,num,warning2, color);
}
//bool up, bool isolated


void CTrainCtrl::DrawTrainCtrl()
{
    QRect rc;
//    int a,b,c,d;
//    m_rect.getRect(&a,&b,&c,&d);
//    if(c>1){c=0.8*c;}
//    if(d>1){d=0.8*d;}
//    m_rect.setRect(a*0.8,b*0.8,c,d);
    int nCarWidth = m_rect.width()*58/60/8;
    int nBlackWidth = m_rect.width()*2/60/7;

    for (int i=0; i<8; i++)
    {
        rc.setRect(m_rect.x()+(nCarWidth+nBlackWidth)*(i-1),m_rect.y(),nCarWidth,m_rect.height());
        if (i == 0)
        {
            m_carriage[i].SetCarType(CARRIAGETYPE_LEFT);
        }
        if (i == 7)
        {
            m_carriage[i].SetCarType(CARRIAGETYPE_RIGHT);
        }
        m_carriage[i].Create(m_str,rc,m_txtcolor,m_font,m_bkcolor,m_pPainter,0xFFFF);
        m_carriage[i].SetCtrlText(QString::number(1441+i));
    }
}

void CTrainCtrl::SetCarText(
                            __in int nCarid,
                            __in QString nTextStr
                            )
{
    m_carriage[nCarid].SetCtrlText(nTextStr);
}

