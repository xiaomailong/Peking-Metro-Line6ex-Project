#include "allportspage.h"
#include <QPainter>

ROMDATA g_PicRom_AllPorts[] =
{
    D_COMMON_PAGE_HEADER(QSTR("全部端口"))

    {QSTR("HMI"), D_FONT_BOLD(8), QRect(750, 42, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_HMI},
    {QSTR("CCU A"), D_FONT_BOLD(8), QRect(750, 42 + 31, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_CCU_A},
    {QSTR("CCU B"), D_FONT_BOLD(8), QRect(750, 42 + 31 * 2, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_CCU_B},
    {QSTR("ERM"), D_FONT_BOLD(8), QRect(750, 42 + 31 * 3, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_ERM},
    {QSTR("RIOM"), D_FONT_BOLD(8), QRect(750, 42 + 31 * 4, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_RIOM},
    {QSTR("BCU A"), D_FONT_BOLD(8), QRect(750, 42 + 31 * 5, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_BCU_A},
    {QSTR("BCU B"), D_FONT_BOLD(8), QRect(750, 42 + 31 * 6, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_BCU_B},
    {QSTR("TCU"), D_FONT_BOLD(8), QRect(750, 42 + 31 * 7, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_TCU},
    {QSTR("EDCU A"), D_FONT_BOLD(8), QRect(750, 42 + 31 * 8, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_EDCU_A},
    {QSTR("EDCU B"), D_FONT_BOLD(8), QRect(750, 42 + 31 * 9, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_EDCU_B},
    {QSTR("ACU"), D_FONT_BOLD(8), QRect(750, 42 + 31 * 10, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_ACU},
    {QSTR("HVAC"), D_FONT_BOLD(8), QRect(750, 42 + 31 * 11, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_HVAC},
    {QSTR("FAS"), D_FONT_BOLD(8), QRect(750, 42 + 31 * 12, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_FAS},
    {QSTR("PA"), D_FONT_BOLD(8), QRect(750, 42 + 31 * 13, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_PA},
    {QSTR("PMS"), D_FONT_BOLD(8), QRect(750, 42 + 31 * 14, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_PMS},
    {QSTR("RSFDS"), D_FONT_BOLD(8), QRect(750, 42 + 31 * 15, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_RSFDS},
    {QSTR("ATC"), D_FONT_BOLD(8), QRect(750, 42 + 31 * 16, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_ATC},

    {QSTR("返回"), D_FONT_BOLD(8), QRect(750, 42 + 31 * 17, 45, 30), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_BACK},
};

int g_AllPortsRomLen = sizeof(g_PicRom_AllPorts) / sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(AllPortsPage, CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(ID_BUTTON_HMI, hmiButtonDown)
        ON_BTNCLK(ID_BUTTON_CCU_A, ccuAButtonDown)
        ON_BTNCLK(ID_BUTTON_CCU_B, ccuBButtonDown)
        ON_BTNCLK(ID_BUTTON_ERM, ermButtonDown)
        ON_BTNCLK(ID_BUTTON_RIOM, riomButtonDown)
        ON_BTNCLK(ID_BUTTON_BCU_A, bcuAButtonDown)
        ON_BTNCLK(ID_BUTTON_BCU_B, bcuBButtonDown)
        ON_BTNCLK(ID_BUTTON_TCU, tcuButtonDown)
        ON_BTNCLK(ID_BUTTON_EDCU_A, edcuAButtonDown)
        ON_BTNCLK(ID_BUTTON_EDCU_B, edcuBButtonDown)
        ON_BTNCLK(ID_BUTTON_ACU, acuButtonDown)
        ON_BTNCLK(ID_BUTTON_HVAC, hvacButtonDown)
        ON_BTNCLK(ID_BUTTON_FAS, fasButtonDown)
        ON_BTNCLK(ID_BUTTON_PA, paButtonDown)
        ON_BTNCLK(ID_BUTTON_PMS, pmsButtonDown)
        ON_BTNCLK(ID_BUTTON_RSFDS, rsfdsButtonDown)
        ON_BTNCLK(ID_BUTTON_ATC, atcButtonDown)
        ON_BTNCLK(ID_BUTTON_BACK, backButtonDown)
END_MESSAGE_MAP()

AllPortsPage::AllPortsPage()
{
    this->ccuAPorts << 0x508 << 0x518 << 0x528 << 0x538 << 0x548 << 0x558 << 0x568 << 0x418 << 0x618 << 0x628
                    << 0x718 << 0x818 << 0x918 << 0x919 << 0xA18 << 0xB18 << 0x118 << 0x188 << 0x128 << 0x138;

    this->ccuBPorts << 0x148 << 0x158 << 0x168 << 0x178 << 0x220 << 0x221 << 0x222 << 0x223 << 0xC10 << 0xC11
                    << 0xC12 << 0xC13 << 0xC14 << 0xC20 << 0xC21 << 0xC22 << 0xC23 << 0xC24 << 0xF20 << 0xF40 << 0xF70;

    this->ermPorts << 0xF00 << 0xF01 << 0xF02 << 0xF03 << 0xF10 << 0xF11  << 0xF12 << 0xF13;

    this->tcuPorts << 0x510 << 0x511 << 0x520 << 0x521  << 0x530 << 0x531 << 0x540 << 0x541 << 0x550 << 0x551 << 0x560 << 0x561;
    this->bcuAPorts << 0x410 << 0x411 << 0x412 << 0x413 << 0x414 << 0x420 << 0x421 << 0x422 << 0x423 << 0x424;
    this->bcuBPorts << 0x430 << 0x431 << 0x432 << 0x433 << 0x434 << 0x440 << 0x441 << 0x442 << 0x443 <<0x444;
    this->acuPorts << 0x610 << 0x611 << 0x620 << 0x621;
    this->edcuAPorts << 0x710 << 0x711 << 0x720 << 0x721 << 0x730 << 0x731 << 0x740 << 0x741 << 0x750 << 0x751
                        << 0x760 << 0x761 << 0x770 << 0x771 << 0x780 << 0x781;
    this->edcuBPorts << 0x790 << 0x791 << 0x7A0 << 0x7A1 << 0x7B0 << 0x7B1 << 0x7C0 << 0x7C1 << 0x7D0 << 0x7D1
                        << 0x7E0 << 0x7E1 << 0x7F0 << 0x7F1 << 0x700 << 0x701;

    this->hvacPorts << 0x810 << 0x820 << 0x830 << 0x840 << 0x850 << 0x860 << 0x870 << 0x880;
    this->paPorts << 0x910 << 0x911 << 0x920 << 0x921;
    this->atcPorts << 0xA10 << 0xA11;
    this->fasPorts << 0xB10 << 0xB11;
    this->riomPorts << 0x110 << 0x180 << 0x120 << 0x170 << 0x130 << 0x160 << 0x140 << 0x150 << 0x114 << 0x184;

    this->hmiPorts << 0x200 << 0x210 << 0x202 << 0x203 << 0x280 << 0x281 << 0x282 << 0x283;

    this->rsfdsPorts << 0xC08 << 0xC09 << 0xC0A;
    this->pmsPorts << 0xD08 << 0xD09;
}

void AllPortsPage::backButtonDown()
{
    this->ChangePage(PAGE_INDEX_DEBUGMAIN);
}

void AllPortsPage::controlButtonDown(unsigned short int controlId)
{
    QList<unsigned short int> buttons;

    buttons << ID_BUTTON_HMI << ID_BUTTON_CCU_A << ID_BUTTON_CCU_B
                << ID_BUTTON_ERM << ID_BUTTON_RIOM << ID_BUTTON_BCU_A
                << ID_BUTTON_BCU_B << ID_BUTTON_TCU << ID_BUTTON_EDCU_A
                << ID_BUTTON_EDCU_B << ID_BUTTON_ACU << ID_BUTTON_HVAC
                << ID_BUTTON_FAS << ID_BUTTON_PA << ID_BUTTON_PMS
                << ID_BUTTON_RSFDS << ID_BUTTON_ATC;

    foreach (unsigned short int id, buttons)
    {
        if (controlId == id)
        {
            ((CButton *)this->GetDlgItem(id))->ChangeButtonState(LBUTTON_DOWN);

            this->currentId = id;
        }
        else
        {
            ((CButton *)this->GetDlgItem(id))->ChangeButtonState(LBUTTON_UP);
        }
    }
}

void AllPortsPage::OnUpdatePage()
{
    mutex.lock();

    QPainter *painter = this->GetPainter();
    QRect rect;

    painter->save();

//    // clear all the screen
    painter->setRenderHint(QPainter::Antialiasing, true);
    rect = QRect(0, 43, 745, 600 - 45);
    painter->setPen(Qt::black);
    painter->setBrush(Qt::black);
    painter->drawRect(rect);

    for (int i = 0; i < 23; i ++)
    {
        for (int j = 0; j < 18; j ++)
        {
            rect = QRect(20 + 40 * j, 55 + 23 * i, 40, 23);

            painter->setPen(Qt::white);
            painter->setBrush(Qt::black);

            QFont font;
            font.setFamily("微软雅黑");
            font.setPixelSize(13);

            painter->setFont(font);
            painter->drawRect(rect);


            if (i % 3 == 0)
            {
                painter->setPen(Qt::yellow);
            }
            else if (i % 3 == 1)
            {
                painter->setPen(Qt::blue);
            }
            else
            {
                painter->setPen(Qt::green);
            }

            if (0 == i && 0 == j)
            {
                painter->drawText(rect, Qt::AlignCenter, QString("port"));
            }
            else if (0 == i && 17 == j)
            {
                painter->drawText(rect, Qt::AlignCenter, QString("cycle"));
            }
            else if (0 == i)
            {
                QString text;

                text.sprintf("%02d %02d", (j - 1) * 2, (j - 1) * 2 + 1);
                painter->drawText(rect, Qt::AlignCenter, text.toUpper());
            }
            else if (0 == j)    // port number
            {
                QString text;

                if (i <= this->currentPorts.size())
                {
                    text.sprintf("%03x", this->currentPorts.at(i - 1));
                }
                else
                {
                    text.clear();
                }

                painter->drawText(rect, Qt::AlignCenter, text.toUpper());
            }
            else if (j == 17)   // delay time
            {
                QString text;

                if (i <= this->currentPorts.size())
                {
                    text = QString::number(getPortRefreshTime(this->currentPorts.at(i - 1)));
                }
                else
                {
                    text.clear();
                }

                painter->drawText(rect, Qt::AlignCenter, text.toUpper());
            }
            else    // mvb data
            {
                QString text;

                if (i <= this->currentPorts.size())
                {
                    text.sprintf("%02X %02X", getUnsignedChar(this->currentPorts.at(i - 1),(j - 1) * 2),
                                                    getUnsignedChar(this->currentPorts.at(i - 1), (j - 1) * 2 + 1));
                }
                else
                {
                    text.clear();
                }

                painter->drawText(rect, Qt::AlignCenter, text.toUpper());
            }
        }
    }

    painter->restore();

    mutex.unlock();
}

void AllPortsPage::OnInitPage()
{
    QList<unsigned short int> buttons;

    buttons << ID_BUTTON_HMI << ID_BUTTON_CCU_A << ID_BUTTON_CCU_B
                << ID_BUTTON_ERM << ID_BUTTON_RIOM << ID_BUTTON_BCU_A
                << ID_BUTTON_BCU_B << ID_BUTTON_TCU << ID_BUTTON_EDCU_A
                << ID_BUTTON_EDCU_B << ID_BUTTON_ACU << ID_BUTTON_HVAC
                << ID_BUTTON_FAS << ID_BUTTON_PA << ID_BUTTON_PMS
                << ID_BUTTON_RSFDS << ID_BUTTON_ATC;

    foreach (unsigned short int id, buttons)
    {
        ((CButton *)this->GetDlgItem(id))->m_bAutoUpState = 0;
    }

    this->controlButtonDown(ID_BUTTON_CCU_A);
    this->currentPorts = this->ccuAPorts;
}

void AllPortsPage::hmiButtonDown()
{
    this->controlButtonDown(ID_BUTTON_HMI);

    this->currentPorts.clear();
    this->currentPorts = this->hmiPorts;
}

void AllPortsPage::ccuAButtonDown()
{
    this->controlButtonDown(ID_BUTTON_CCU_A);

    this->currentPorts.clear();
    this->currentPorts = this->ccuAPorts;
}

void AllPortsPage::ccuBButtonDown()
{
    this->controlButtonDown(ID_BUTTON_CCU_B);

    this->currentPorts.clear();
    this->currentPorts = this->ccuBPorts;
}

void AllPortsPage::ermButtonDown()
{
    this->controlButtonDown(ID_BUTTON_ERM);

    this->currentPorts.clear();
    this->currentPorts = this->ermPorts;
}

void AllPortsPage::riomButtonDown()
{
    this->controlButtonDown(ID_BUTTON_RIOM);

    this->currentPorts.clear();
    this->currentPorts = this->riomPorts;
}

void AllPortsPage::bcuAButtonDown()
{
    this->controlButtonDown(ID_BUTTON_BCU_A);

    this->currentPorts.clear();
    this->currentPorts = this->bcuAPorts;
}

void AllPortsPage::bcuBButtonDown()
{
    this->controlButtonDown(ID_BUTTON_BCU_B);

    this->currentPorts.clear();
    this->currentPorts = this->bcuBPorts;
}

void AllPortsPage::tcuButtonDown()
{
    this->controlButtonDown(ID_BUTTON_TCU);

    this->currentPorts.clear();
    this->currentPorts = this->tcuPorts;
}

void AllPortsPage::edcuAButtonDown()
{
    this->controlButtonDown(ID_BUTTON_EDCU_A);

    this->currentPorts.clear();
    this->currentPorts = this->edcuAPorts;
}

void AllPortsPage::edcuBButtonDown()
{
    this->controlButtonDown(ID_BUTTON_EDCU_B);

    this->currentPorts.clear();
    this->currentPorts = this->edcuBPorts;
}

void AllPortsPage::acuButtonDown()
{
    this->controlButtonDown(ID_BUTTON_ACU);

    this->currentPorts.clear();
    this->currentPorts = this->acuPorts;
}

void AllPortsPage::hvacButtonDown()
{
    this->controlButtonDown(ID_BUTTON_HVAC);

    this->currentPorts.clear();
    this->currentPorts = this->hvacPorts;
}

void AllPortsPage::fasButtonDown()
{
    this->controlButtonDown(ID_BUTTON_FAS);

    this->currentPorts.clear();
    this->currentPorts = this->fasPorts;
}

void AllPortsPage::paButtonDown()
{
    this->controlButtonDown(ID_BUTTON_PA);

    this->currentPorts.clear();
    this->currentPorts = this->paPorts;
}

void AllPortsPage::pmsButtonDown()
{
    this->controlButtonDown(ID_BUTTON_PMS);

    this->currentPorts.clear();
    this->currentPorts = this->pmsPorts;
}

void AllPortsPage::rsfdsButtonDown()
{
    this->controlButtonDown(ID_BUTTON_RSFDS);

    this->currentPorts.clear();
    this->currentPorts = this->rsfdsPorts;
}

void AllPortsPage::atcButtonDown()
{
    this->controlButtonDown(ID_BUTTON_ATC);

    this->currentPorts.clear();
    this->currentPorts = this->atcPorts;
}
