#include "CRealTimeFaultsWarnningDialog.h"
#include "ui_CRealTimeFaultsWarnningDialog.h"
#include "CGlobal.h"

CRealTimeFaultsWarnningDialog::CRealTimeFaultsWarnningDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CRealTimeFaultsWarnningDialog)
{
    ui->setupUi(this);
    setWindowFlags( Qt::FramelessWindowHint  | Qt::WindowStaysOnTopHint);
    setStyleSheet(
        "QPushButton { color: rgb(0, 0, 0);background-color:rgb(255,255,255); }"
        "QLabel { font-family: \"SimHei\"; font-size: 24px; }"
    );
   //     "QLabel { font-family: \"SimHei\"; font-size: 24px; color: rgb(0, 0, 0);}"
}

CRealTimeFaultsWarnningDialog::~CRealTimeFaultsWarnningDialog()
{
    delete ui;
}

void CRealTimeFaultsWarnningDialog::changeEvent(QEvent *e)
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




void CRealTimeFaultsWarnningDialog::paintEvent(QPaintEvent* /*e*/)
{
}

void CRealTimeFaultsWarnningDialog::on_pushButton_clicked()
{
    g_popup_exist_flg = false;
    g_faultsrom[m_romidx].confirm = true;
    this->hide();
   // this->accept();
}

void CRealTimeFaultsWarnningDialog::on_pushButton_2_clicked()
{
    g_popup_exist_flg = false;
    g_faultsrom[m_romidx].confirm = true;
    FAULTS_ROM_DATA *pdata = &g_faultsrom[0];
    for (int i=0; i<g_faultsRomLen; i++)
    {
        if (pdata->flg && (3 != pdata->level) && !pdata->confirm)
        {
            pdata->confirm = true;
        }
        pdata++;
    }
    this->hide();
  //  this->accept();

}

void CRealTimeFaultsWarnningDialog::SetRomIdx(int rom_idx)
{
    QString str = "";
    ASSERT((rom_idx >= 0) && (rom_idx < g_faultsRomLen));
    m_romidx = rom_idx;
    str.sprintf("%4x", g_faultsrom[m_romidx].code);
    int code = g_faultsrom[m_romidx].code;
    int nameidx = FindFaultsNameTableIndex(code);

    if (1 == g_faultsrom[m_romidx].level)
    {
        QPalette palette;
        palette.setColor(ui->label->foregroundRole(),Qt::red);
        ui->label->setPalette(palette);
    }
    else if (2 == g_faultsrom[m_romidx].level)
    {
        QPalette palette;
        palette.setColor(ui->label->foregroundRole(),Qt::darkRed);
        ui->label->setPalette(palette);
    }
    else
    {
        QPalette palette;
        palette.setColor(ui->label->foregroundRole(),Qt::black);
        ui->label->setPalette(palette);
    }

    ui->label->setText(" "+GetCarriageString(g_faultsrom[m_romidx].pos)+str+"  "+g_faultsinforom[nameidx].name);
}

QString CRealTimeFaultsWarnningDialog::GetCarriageString(char position)
{
    QString str = "- ";
    switch (position)
    {
    case D_POS_A:
        str = QSTR("1车 ");
        break;
    case D_POS_B:
        str = QSTR("2车  ");
        break;
    case D_POS_C:
        str = QSTR("3车  ");
        break;
    case D_POS_D:
        str = QSTR("4车  ");
        break;
    case D_POS_E:
        str = QSTR("5车  ");
        break;
    case D_POS_F:
        str = QSTR("6车 ");
        break;
    case D_POS_G:
        str = QSTR("7车 ");
        break;
    case D_POS_H:
        str = QSTR("8车 ");
        break;

    default:
        break;
    }

    return str;
}

