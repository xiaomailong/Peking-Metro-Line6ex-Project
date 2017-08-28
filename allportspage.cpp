#include "allportspage.h"
#include <QPainter>

ROMDATA g_PicRom_AllPorts[] =
{
    D_COMMON_PAGE_HEADER(QSTR("全部端口"))

    {QSTR("HMI"), D_FONT_BOLD(6), QRect(750, 42, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_HMI},
    {QSTR("CCU A"), D_FONT_BOLD(6), QRect(750, 42 + 31, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_CCU_A},
    {QSTR("CCU B"), D_FONT_BOLD(6), QRect(750, 42 + 31 * 2, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_CCU_B},
    {QSTR("ERM"), D_FONT_BOLD(6), QRect(750, 42 + 31 * 3, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_ERM},
    {QSTR("RIOM"), D_FONT_BOLD(6), QRect(750, 42 + 31 * 4, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_RIOM},
    {QSTR("BCU A"), D_FONT_BOLD(6), QRect(750, 42 + 31 * 5, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_BCU_A},
    {QSTR("BCU B"), D_FONT_BOLD(6), QRect(750, 42 + 31 * 6, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_BCU_B},
    {QSTR("TCU"), D_FONT_BOLD(6), QRect(750, 42 + 31 * 7, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_TCU},
    {QSTR("EDCU A"), D_FONT_BOLD(6), QRect(750, 42 + 31 * 8, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_EDCU_A},
    {QSTR("EDCU B"), D_FONT_BOLD(6), QRect(750, 42 + 31 * 9, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_EDCU_B},
    {QSTR("ACU"), D_FONT_BOLD(6), QRect(750, 42 + 31 * 10, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_ACU},
    {QSTR("HVAC"), D_FONT_BOLD(6), QRect(750, 42 + 31 * 11, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_HVAC},
    {QSTR("FAS"), D_FONT_BOLD(6), QRect(750, 42 + 31 * 12, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_FAS},
    {QSTR("PA"), D_FONT_BOLD(6), QRect(750, 42 + 31 * 13, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_PA},
    {QSTR("PMS"), D_FONT_BOLD(6), QRect(750, 42 + 31 * 14, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_PMS},
    {QSTR("RSFDS"), D_FONT_BOLD(6), QRect(750, 42 + 31 * 15, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_RSFDS},
    {QSTR("ATC"), D_FONT_BOLD(6), QRect(750, 42 + 31 * 16, 45, 27), Qt::black, Qt::white, CONTROL_BUTTON, ID_BUTTON_ATC},

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
    this->ccuAPorts << new mvb_port_type(0x508, 32) << new mvb_port_type(0x518, 64) << new mvb_port_type(0x528, 64)
                    << new mvb_port_type(0x538, 64) << new mvb_port_type(0x548, 64) << new mvb_port_type(0x558, 64)
                    << new mvb_port_type(0x568, 64)
                    << new mvb_port_type(0x418, 64) << new mvb_port_type(0x618, 64) << new mvb_port_type(0x628, 64)
                    << new mvb_port_type(0x718, 64) << new mvb_port_type(0x818, 64) << new mvb_port_type(0x918, 256)
                    << new mvb_port_type(0x919, 256) << new mvb_port_type(0xA18, 128) << new mvb_port_type(0xB18, 256)
                    << new mvb_port_type(0x118, 64) << new mvb_port_type(0x188, 64) << new mvb_port_type(0x128, 64)
                    << new mvb_port_type(0x138, 64);

    this->ccuBPorts << new mvb_port_type(0x148, 64) << new mvb_port_type(0x158, 64) << new mvb_port_type(0x168, 64)
                    << new mvb_port_type(0x178, 64) << new mvb_port_type(0x220, 256) << new mvb_port_type(0x221, 256)
                    << new mvb_port_type(0x222, 256) << new mvb_port_type(0x223, 256)
                    << new mvb_port_type(0xC08, 512) << new mvb_port_type(0xC09, 512) << new mvb_port_type(0xC0A, 512);

    this->ermPorts << new mvb_port_type(0xF00, 256) << new mvb_port_type(0xF01, 256) << new mvb_port_type(0xF02, 256)
                   << new mvb_port_type(0xF03, 256) << new mvb_port_type(0xF10, 256) << new mvb_port_type(0xF11, 256)
                   << new mvb_port_type(0xF12, 256) << new mvb_port_type(0xF13, 256);

    this->tcuPorts << new mvb_port_type(0x510, 256) << new mvb_port_type(0x511, 256) << new mvb_port_type(0x520, 256)
                   << new mvb_port_type(0x521, 256) << new mvb_port_type(0x530, 256) << new mvb_port_type(0x531, 256)
                   << new mvb_port_type(0x540, 256) << new mvb_port_type(0x541, 256) << new mvb_port_type(0x550, 256)
                   << new mvb_port_type(0x551, 256) << new mvb_port_type(0x560, 256) << new mvb_port_type(0x561, 256);

    this->bcuAPorts << new mvb_port_type(0x410, 64) << new mvb_port_type(0x411, 64) << new mvb_port_type(0x412, 64)
                    << new mvb_port_type(0x413, 64) << new mvb_port_type(0x414, 256)
                    << new mvb_port_type(0x420, 64) << new mvb_port_type(0x421, 64) << new mvb_port_type(0x422, 64)
                    << new mvb_port_type(0x423, 64) << new mvb_port_type(0x424, 256);

    this->bcuBPorts << new mvb_port_type(0x430, 64) << new mvb_port_type(0x431, 64) << new mvb_port_type(0x432, 64)
                    << new mvb_port_type(0x433, 64) << new mvb_port_type(0x434, 256)
                    << new mvb_port_type(0x440, 64) << new mvb_port_type(0x441, 64) << new mvb_port_type(0x442, 64)
                    << new mvb_port_type(0x443, 64) << new mvb_port_type(0x444, 256);

    this->acuPorts << new mvb_port_type(0x610, 64) << new mvb_port_type(0x611, 256)
                   << new mvb_port_type(0x620, 64) << new mvb_port_type(0x621, 256);

    this->edcuAPorts << new mvb_port_type(0x710, 256) << new mvb_port_type(0x711, 512)
                     << new mvb_port_type(0x720, 256) << new mvb_port_type(0x721, 512)
                     << new mvb_port_type(0x730, 256) << new mvb_port_type(0x731, 512)
                     << new mvb_port_type(0x740, 256) << new mvb_port_type(0x741, 512)
                     << new mvb_port_type(0x750, 256) << new mvb_port_type(0x751, 512)
                     << new mvb_port_type(0x760, 256) << new mvb_port_type(0x761, 512)
                     << new mvb_port_type(0x770, 256) << new mvb_port_type(0x771, 512)
                     << new mvb_port_type(0x780, 256) << new mvb_port_type(0x781, 512);

    this->edcuBPorts << new mvb_port_type(0x790, 256) << new mvb_port_type(0x791, 512)
                     << new mvb_port_type(0x7A0, 256) << new mvb_port_type(0x7A1, 512)
                     << new mvb_port_type(0x7B0, 256) << new mvb_port_type(0x7B1, 512)
                     << new mvb_port_type(0x7C0, 256) << new mvb_port_type(0x7C1, 512)
                     << new mvb_port_type(0x7D0, 256) << new mvb_port_type(0x7D1, 512)
                     << new mvb_port_type(0x7E0, 256) << new mvb_port_type(0x7E1, 512)
                     << new mvb_port_type(0x7F0, 256) << new mvb_port_type(0x7F1, 512)
                     << new mvb_port_type(0x700, 256) << new mvb_port_type(0x701, 512);

    this->hvacPorts << new mvb_port_type(0x810, 256) << new mvb_port_type(0x820, 256) << new mvb_port_type(0x830, 256)
                    << new mvb_port_type(0x840, 256) << new mvb_port_type(0x850, 256) << new mvb_port_type(0x860, 256)
                    << new mvb_port_type(0x870, 256) << new mvb_port_type(0x880, 256);

    this->paPorts << new mvb_port_type(0x910, 256) << new mvb_port_type(0x911, 256)
                  << new mvb_port_type(0x920, 256) << new mvb_port_type(0x921, 256);

    this->atcPorts << new mvb_port_type(0xA10, 128) << new mvb_port_type(0xA11, 128);

    this->fasPorts << new mvb_port_type(0xB10, 256) << new mvb_port_type(0xB11, 256);

    this->riomPorts << new mvb_port_type(0x110, 64) << new mvb_port_type(0x180, 64) << new mvb_port_type(0x120, 64)
                    << new mvb_port_type(0x170, 64) << new mvb_port_type(0x130, 64) << new mvb_port_type(0x160, 64)
                    << new mvb_port_type(0x140, 64) << new mvb_port_type(0x150, 64) << new mvb_port_type(0x114, 64)
                    << new mvb_port_type(0x184, 64);

    this->hmiPorts << new mvb_port_type(0x200, 256) << new mvb_port_type(0x210, 256) << new mvb_port_type(0x202, 256)
                   << new mvb_port_type(0x203, 256) << new mvb_port_type(0x280, 256) << new mvb_port_type(0x281, 256)
                   << new mvb_port_type(0x282, 256) << new mvb_port_type(0x283, 256);

    this->rsfdsPorts << new mvb_port_type(0xC10, 256) << new mvb_port_type(0xC11, 256) << new mvb_port_type(0xC12, 256)
                     << new mvb_port_type(0xC13, 256) << new mvb_port_type(0xC14, 256) << new mvb_port_type(0xC20, 256)
                     << new mvb_port_type(0xC21, 256) << new mvb_port_type(0xC22, 256) << new mvb_port_type(0xC23, 256)
                     << new mvb_port_type(0xC24, 256);

    this->pmsPorts << new mvb_port_type(0xF20, 1024) << new mvb_port_type(0xF40, 1024) << new mvb_port_type(0xF70, 1024);
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

    // clear all the screen
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
                    text.sprintf("%03x", this->currentPorts.at(i - 1)->port);
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
                    text = QString::number(getPortRefreshTime(this->currentPorts.at(i - 1)->port));
                }
                else
                {
                    text.clear();
                }

                if (i <= this->currentPorts.size() &&
                        getPortRefreshTime(this->currentPorts.at(i - 1)->port) > this->currentPorts.at(i - 1)->refresh)
                {
                    painter->save();

                    painter->setBrush(QBrush(Qt::red));
                    painter->drawRect(rect);

                    painter->restore();
                }

                painter->drawText(rect, Qt::AlignCenter, text.toUpper());
            }
            else    // mvb data
            {
                QString text;

                if (i <= this->currentPorts.size())
                {
                    text.sprintf("%02X %02X", getUnsignedChar(this->currentPorts.at(i - 1)->port,(j - 1) * 2),
                                                    getUnsignedChar(this->currentPorts.at(i - 1)->port, (j - 1) * 2 + 1));
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
