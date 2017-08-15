#include "CEdit.h"

CEdit::CEdit()
{
    m_typestr = "CEdit";
    m_pPainter = NULL;
    m_bIsSelected = false;
    m_bIsPassWord = false;
    m_bIsEnable = true;
    m_nLimitNum = 65535;
}


void CEdit::Create(__in QString& ctrl_str,
                   __in QRect& ctrl_rc,
                   __in QColor& ctrl_txtcolor,
                   __in QFont& ctrl_font,
                   __in QColor& ctrl_bkcolor,
                   __in QPainter* ctrl_painter,
                   __in int ctrl_ID)
{
    m_txtcolor = ctrl_txtcolor;
    m_font     = ctrl_font;
    m_bkcolor  = ctrl_bkcolor;
    m_rect     = ctrl_rc;
    m_nID      = ctrl_ID;
    m_pPainter = ctrl_painter;
    m_str      = ctrl_str;
    ASSERT(m_pPainter != NULL);

    DrawEdit();
}


void CEdit::SetCtrlText(
                        __in QString ctrl_str // edit text
                       )
{
    m_str = ctrl_str;

    DrawEdit();
}

QString CEdit::GetCtrlText()
{
    return m_str;
}

void  CEdit::SetTxtFont(
                        __in QFont /*ctrl_font*/ // edit font
                       )
{

}

void CEdit::SetTxtColor(
                        __in QColor /*ctrln_color*/ //edit text color
                       )
{

}

void CEdit::SetCtrlBKColor(
                           __in QColor edit_bkcolor /*ctrl_bkcolor*/ //edit bk color
                          )
{
    m_bkcolor = edit_bkcolor; //hunan add
    DrawEdit();
}

void CEdit::SetCtrlRect(
                        __in QRect /*ctrl_rect*/ //edit rect
                       )
{

}

void CEdit::AddEditStr(QString addStr)
{
    QString edit_str;
    edit_str = GetCtrlText();
    if (edit_str.length() >= m_nLimitNum)
    {
        edit_str = "";
        SetCtrlText(edit_str);
    }
    edit_str = edit_str.append(addStr);
    SetCtrlText(edit_str);
}

void CEdit::SetCtrlEnable(bool bEnable)
{
    m_bIsEnable = bEnable;
    DrawEdit();
}

void CEdit::DrawEdit()
{
    ASSERT(m_pPainter != NULL);

    m_pPainter->setFont(m_font);
    m_pPainter->setPen(m_txtcolor);

    if (!m_bIsSelected)
        m_pPainter->setBrush(m_bkcolor);
    else
        m_pPainter->setBrush(Qt::blue);

    m_pPainter->drawRect(m_rect);
    if (m_bIsPassWord)
    {
        QString pwdStr = m_str;
        int i;
        for (i=0; i<pwdStr.length(); i++)
        {
            pwdStr.replace(i, 1, '*');
        }
        m_pPainter->drawText(m_rect, Qt::AlignCenter, pwdStr);
    }
    else
    {
        m_pPainter->drawText(m_rect, Qt::AlignCenter, m_str);
    }

    if (m_bIsSelected)
    {
        QRect rect(m_rect.left() + 1, m_rect.top() + 1,
                   m_rect.width() - 2, m_rect.height() -2);
        m_pPainter->setPen(Qt::yellow);
        m_pPainter->setBrush(Qt::transparent);
        m_pPainter->drawRect(rect);
    }
}

void CEdit::SetSelected(
                        __in bool flg
                       )
{
    if (flg) {
        m_bIsSelected = true;
        DrawEdit();
    } else {
        m_bIsSelected = false;
        DrawEdit();
    }
}

void CEdit::SetLimitNum(int nNum)
{
    m_nLimitNum = nNum;
}
