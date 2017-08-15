#include "pmsstatepage.h"

ROMDATA g_PicRom_PmsStatePage[] =
{
    D_COMMON_PAGE_HEADER(QSTR("弓网监测系统"))

    {"1-1", D_FONT_BOLD(6), QRect(40, 80 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE11},
    {"1-2", D_DEFAULT_FONT, QRect(40 + 180, 80 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE12},
    {"1-3", D_DEFAULT_FONT, QRect(40 + 180 * 2, 80 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE13},
    {"1-4", D_DEFAULT_FONT, QRect(40 + 180 * 3, 80 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE14},

    {"2-1", D_FONT_BOLD(6), QRect(40, 120 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE21},
    {"2-2", D_DEFAULT_FONT, QRect(40 + 180, 120 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE22},
    {"2-3", D_DEFAULT_FONT, QRect(40 + 180 * 2, 120 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE23},
    {"2-4", D_DEFAULT_FONT, QRect(40 + 180 * 3, 120 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE24},

    {"3-1", D_FONT_BOLD(6), QRect(40, 160 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE31},
    {"3-2", D_DEFAULT_FONT, QRect(40 + 180, 160 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE32},
    {"3-3", D_DEFAULT_FONT, QRect(40 + 180 * 2, 160 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE33},
    {"3-4", D_DEFAULT_FONT, QRect(40 + 180 * 3, 160 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE34},

    {"4-1", D_FONT_BOLD(6), QRect(40, 200 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE41},
    {"4-2", D_DEFAULT_FONT, QRect(40 + 180, 200 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE42},
    {"4-3", D_DEFAULT_FONT, QRect(40 + 180 * 2, 200 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE43},
    {"4-4", D_DEFAULT_FONT, QRect(40 + 180 * 3, 200 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE44},

    {"5-1", D_FONT_BOLD(6), QRect(40, 240 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE51},
    {"5-2", D_DEFAULT_FONT, QRect(40 + 180, 240 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE52},
    {"5-3", D_DEFAULT_FONT, QRect(40 + 180 * 2, 240 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE53},
    {"5-4", D_DEFAULT_FONT, QRect(40 + 180 * 3, 240 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE54},

    {"6-1", D_FONT_BOLD(6), QRect(40, 280 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE61},
    {"6-2", D_DEFAULT_FONT, QRect(40 + 180, 280 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE62},
    {"6-3", D_DEFAULT_FONT, QRect(40 + 180 * 2, 280 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE63},
    {"6-4", D_DEFAULT_FONT, QRect(40 + 180 * 3, 280 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE64},

    {"7-1", D_FONT_BOLD(6), QRect(40, 320 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE71},
    {"7-2", D_DEFAULT_FONT, QRect(40 + 180, 320 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE72},
    {"7-3", D_DEFAULT_FONT, QRect(40 + 180 * 2, 320 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE73},
    {"7-4", D_DEFAULT_FONT, QRect(40 + 180 * 3, 320 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE74},

    {"8-1", D_FONT_BOLD(6), QRect(40, 360 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE81},
    {"8-2", D_DEFAULT_FONT, QRect(40 + 180, 360 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE82},
    {"8-3", D_DEFAULT_FONT, QRect(40 + 180 * 2, 360 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE83},
    {"8-4", D_DEFAULT_FONT, QRect(40 + 180 * 3, 360 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE84},

    {"9-1", D_FONT_BOLD(6), QRect(40, 400 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE91},
    {"9-2", D_DEFAULT_FONT, QRect(40 + 180, 400 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE92},
    {"9-3", D_DEFAULT_FONT, QRect(40 + 180 * 2, 400 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE93},
    {"9-4", D_DEFAULT_FONT, QRect(40 + 180 * 3, 400 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINE94},

    {"10-1", D_FONT_BOLD(6), QRect(40, 440 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEA1},
    {"10-2", D_DEFAULT_FONT, QRect(40 + 180, 440  - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEA2},
    {"10-3", D_DEFAULT_FONT, QRect(40 + 180 * 2, 440  - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEA3},
    {"10-4", D_DEFAULT_FONT, QRect(40 + 180 * 3, 440 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEA4},

    {"11-1", D_FONT_BOLD(6), QRect(40, 480 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEB1},
    {"11-2", D_DEFAULT_FONT, QRect(40 + 180, 480 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEB2},
    {"11-3", D_DEFAULT_FONT, QRect(40 + 180 * 2, 480 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEB3},
    {"11-4", D_DEFAULT_FONT, QRect(40 + 180 * 3, 480 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEB4},

    {"12-1", D_FONT_BOLD(6), QRect(40, 520 - 20, 180, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC1},

    {"1", D_DEFAULT_FONT, QRect(40 + 180, 520 - 20, 22, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC11},
    {"2", D_DEFAULT_FONT, QRect(40 + 180 + 22, 520 - 20, 23, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC12},
    {"3", D_DEFAULT_FONT, QRect(40 + 180 + 45, 520 - 20, 22, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC13},
    {"4", D_DEFAULT_FONT, QRect(40 + 180 + 45 + 22, 520 - 20, 23, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC14},
    {"5", D_DEFAULT_FONT, QRect(40 + 180 + 45 * 2, 520 - 20, 22, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC15},
    {"6", D_DEFAULT_FONT, QRect(40 + 180 + 45 * 2 + 22, 520 - 20, 23, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC16},
    {"7", D_DEFAULT_FONT, QRect(40 + 180 + 45 * 3, 520 - 20, 22, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC17},
    {"8", D_DEFAULT_FONT, QRect(40 + 180 + 45 * 3 + 22, 520 - 20, 23, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC18},

    {"1", D_DEFAULT_FONT, QRect(40 + 180 * 2, 520 - 20, 22, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC21},
    {"2", D_DEFAULT_FONT, QRect(40 + 180 * 2 + 22, 520 - 20, 23, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC22},
    {"3", D_DEFAULT_FONT, QRect(40 + 180 * 2 + 45, 520 - 20, 22, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC23},
    {"4", D_DEFAULT_FONT, QRect(40 + 180 * 2 + 45 + 22, 520 - 20, 23, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC24},
    {"5", D_DEFAULT_FONT, QRect(40 + 180 * 2 + 45 * 2, 520 - 20, 22, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC25},
    {"6", D_DEFAULT_FONT, QRect(40 + 180 * 2 + 45 * 2 + 22, 520 - 20, 23, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC26},
    {"7", D_DEFAULT_FONT, QRect(40 + 180 * 2 + 45 * 3, 520 - 20, 22, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC27},
    {"8", D_DEFAULT_FONT, QRect(40 + 180 * 2 + 45 * 3 + 22, 520 - 20, 23, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC28},

    {"1", D_DEFAULT_FONT, QRect(40 + 180 * 3, 520 - 20, 22, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC31},
    {"2", D_DEFAULT_FONT, QRect(40 + 180 * 3 + 22, 520 - 20, 23, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC32},
    {"3", D_DEFAULT_FONT, QRect(40 + 180 * 3 + 45, 520 - 20, 22, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC33},
    {"4", D_DEFAULT_FONT, QRect(40 + 180 * 3 + 45 + 22, 520 - 20, 23, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC34},
    {"5", D_DEFAULT_FONT, QRect(40 + 180 * 3 + 45 * 2, 520 - 20, 22, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC35},
    {"6", D_DEFAULT_FONT, QRect(40 + 180 * 3 + 45 * 2 + 22, 520 - 20, 23, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC36},
    {"7", D_DEFAULT_FONT, QRect(40 + 180 * 3 + 45 * 3, 520 - 20, 22, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC37},
    {"8", D_DEFAULT_FONT, QRect(40 + 180 * 3 + 45 * 3 + 22, 520 - 20, 23, 40), Qt::white, Qt::black, CONTROL_LABEL, _PMS_LABEL_LINEC38},

    D_COMMON_PAGE_BUTTON_BAR
};

int g_PmsStatePageRomLen = sizeof(g_PicRom_PmsStatePage) / sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(PmsStatePage, CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
END_MESSAGE_MAP()

PmsStatePage::PmsStatePage()
{

}

void PmsStatePage::OnUpdatePage()
{
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE11))->SetCtrlText(QSTR("受电弓羊角缺失"));
    this->setControlState(_PMS_LABEL_LINE12, pmsPantographCleatDeficiencyCar2, QString(""));
    this->setControlState(_PMS_LABEL_LINE13, pmsPantographCleatDeficiencyCar4, QString(""));
    this->setControlState(_PMS_LABEL_LINE14, pmsPantographCleatDeficiencyCar7, QString(""));

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE21))->SetCtrlText(QSTR("受电弓羊角变形"));
    this->setControlState(_PMS_LABEL_LINE22, pmsPantographCleatOutOfShapeCar2, QString(""));
    this->setControlState(_PMS_LABEL_LINE23, pmsPantographCleatOutOfShapeCar4, QString(""));
    this->setControlState(_PMS_LABEL_LINE24, pmsPantographCleatOutOfShapeCar7, QString(""));

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE31))->SetCtrlText(QSTR("受电弓羊角轻微变形"));
    this->setControlState(_PMS_LABEL_LINE32, pmsPantographlittleOutOfShapeCar2, QString(""));
    this->setControlState(_PMS_LABEL_LINE33, pmsPantographlittleOutOfShapeCar4, QString(""));
    this->setControlState(_PMS_LABEL_LINE34, pmsPantographlittleOutOfShapeCar7, QString(""));

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE41))->SetCtrlText(QSTR("受电弓夹杂异物"));
    this->setControlState(_PMS_LABEL_LINE42, pmsPantographBlockCar2, QString(""));
    this->setControlState(_PMS_LABEL_LINE43, pmsPantographBlockCar4, QString(""));
    this->setControlState(_PMS_LABEL_LINE44, pmsPantographBlockCar7, QString(""));

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE51))->SetCtrlText(QSTR("受电弓滑板磨耗临界"));
    this->setControlState(_PMS_LABEL_LINE52, pmsPantographSlideAbrasionCar2, QString(""));
    this->setControlState(_PMS_LABEL_LINE53, pmsPantographSlideAbrasionCar4, QString(""));
    this->setControlState(_PMS_LABEL_LINE54, pmsPantographSlideAbrasionCar7, QString(""));

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE61))->SetCtrlText(QSTR("受电弓滑板严重缺口"));
    this->setControlState(_PMS_LABEL_LINE62, pmsPantographSlideMajorGapCar2, QString(""));
    this->setControlState(_PMS_LABEL_LINE63, pmsPantographSlideMajorGapCar4, QString(""));
    this->setControlState(_PMS_LABEL_LINE64, pmsPantographSlideMajorGapCar7, QString(""));

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE71))->SetCtrlText(QSTR("碳滑板脱落"));
    this->setControlState(_PMS_LABEL_LINE72, pmsCarbonFallOffCar2, QString(""));
    this->setControlState(_PMS_LABEL_LINE73, pmsCarbonFallOffCar4, QString(""));
    this->setControlState(_PMS_LABEL_LINE74, pmsCarbonFallOffCar7, QString(""));

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE81))->SetCtrlText(QSTR("弓网严重拉弧"));
    this->setControlState(_PMS_LABEL_LINE82, pmsPantographArcCar2, QString(""));
    this->setControlState(_PMS_LABEL_LINE83, pmsPantographArcCar4, QString(""));
    this->setControlState(_PMS_LABEL_LINE84, pmsPantographArcCar7, QString(""));

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE91))->SetCtrlText(QSTR("受电弓温度异常"));
    this->setControlState(_PMS_LABEL_LINE92, pmsPantographTemperatureAbnormalCar2, QString(""));
    this->setControlState(_PMS_LABEL_LINE93, pmsPantographTemperatureAbnormalCar4, QString(""));
    this->setControlState(_PMS_LABEL_LINE94, pmsPantographTemperatureAbnormalCar7, QString(""));

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEA1))->SetCtrlText(QSTR("弓网监测设备温度异常"));
    this->setControlState(_PMS_LABEL_LINEA2, pmsDeviceTemperatureAbnormalCar2, QString(""));
    this->setControlState(_PMS_LABEL_LINEA3, pmsDeviceTemperatureAbnormalCar4, QString(""));
    this->setControlState(_PMS_LABEL_LINEA4, pmsDeviceTemperatureAbnormalCar7, QString(""));

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEB1))->SetCtrlText(QSTR("弓网监测设备主控系统异常"));
    this->setControlState(_PMS_LABEL_LINEB2, pmsControlSystemTemperatureAbnormalCar2, QString(""));
    this->setControlState(_PMS_LABEL_LINEB3, pmsControlSystemTemperatureAbnormalCar4, QString(""));
    this->setControlState(_PMS_LABEL_LINEB4, pmsControlSystemTemperatureAbnormalCar7, QString(""));


    // line 12
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC1))->SetCtrlText(QSTR("弓网监测设备相机异常"));

    this->setControlState(_PMS_LABEL_LINEC11, pmsPantographCamera1AbnormalCar2);
    this->setControlState(_PMS_LABEL_LINEC12, pmsPantographCamera2AbnormalCar2);
    this->setControlState(_PMS_LABEL_LINEC13, pmsPantographCamera3AbnormalCar2);
    this->setControlState(_PMS_LABEL_LINEC14, pmsPantographCamera4AbnormalCar2);
    this->setControlState(_PMS_LABEL_LINEC15, pmsPantographCamera5AbnormalCar2);
    this->setControlState(_PMS_LABEL_LINEC16, pmsPantographCamera6AbnormalCar2);
    this->setControlState(_PMS_LABEL_LINEC17, pmsPantographCamera7AbnormalCar2);
    this->setControlState(_PMS_LABEL_LINEC18, pmsPantographCamera8AbnormalCar2);

    this->setControlState(_PMS_LABEL_LINEC21, pmsPantographCamera1AbnormalCar4);
    this->setControlState(_PMS_LABEL_LINEC22, pmsPantographCamera2AbnormalCar4);
    this->setControlState(_PMS_LABEL_LINEC23, pmsPantographCamera3AbnormalCar4);
    this->setControlState(_PMS_LABEL_LINEC24, pmsPantographCamera4AbnormalCar4);
    this->setControlState(_PMS_LABEL_LINEC25, pmsPantographCamera5AbnormalCar4);
    this->setControlState(_PMS_LABEL_LINEC26, pmsPantographCamera6AbnormalCar4);
    this->setControlState(_PMS_LABEL_LINEC27, pmsPantographCamera7AbnormalCar4);
    this->setControlState(_PMS_LABEL_LINEC28, pmsPantographCamera8AbnormalCar4);

    this->setControlState(_PMS_LABEL_LINEC31, pmsPantographCamera1AbnormalCar7);
    this->setControlState(_PMS_LABEL_LINEC32, pmsPantographCamera2AbnormalCar7);
    this->setControlState(_PMS_LABEL_LINEC33, pmsPantographCamera3AbnormalCar7);
    this->setControlState(_PMS_LABEL_LINEC34, pmsPantographCamera4AbnormalCar7);
    this->setControlState(_PMS_LABEL_LINEC35, pmsPantographCamera5AbnormalCar7);
    this->setControlState(_PMS_LABEL_LINEC36, pmsPantographCamera6AbnormalCar7);
    this->setControlState(_PMS_LABEL_LINEC37, pmsPantographCamera7AbnormalCar7);
    this->setControlState(_PMS_LABEL_LINEC38, pmsPantographCamera8AbnormalCar7);
}

void PmsStatePage::OnInitPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE11))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE11))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE12))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE12))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE13))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE13))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE14))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE14))->setBorderWidth(2);

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE21))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE21))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE22))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE22))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE23))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE23))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE24))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE24))->setBorderWidth(2);

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE31))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE31))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE32))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE32))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE33))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE33))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE34))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE34))->setBorderWidth(2);

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE41))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE41))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE42))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE42))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE43))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE43))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE44))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE44))->setBorderWidth(2);

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE51))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE51))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE52))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE52))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE53))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE53))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE54))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE54))->setBorderWidth(2);

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE61))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE61))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE62))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE62))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE63))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE63))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE64))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE64))->setBorderWidth(2);

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE71))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE71))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE72))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE72))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE73))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE73))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE74))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE74))->setBorderWidth(2);

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE81))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE81))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE82))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE82))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE83))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE83))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE84))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE84))->setBorderWidth(2);

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE91))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE91))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE92))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE92))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE93))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE93))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE94))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINE94))->setBorderWidth(2);

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEA1))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEA1))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEA2))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEA2))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEA3))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEA3))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEA4))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEA4))->setBorderWidth(2);

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEB1))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEB1))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEB2))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEB2))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEB3))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEB3))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEB4))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEB4))->setBorderWidth(2);

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC1))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC1))->setBorderWidth(2);

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC11))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC11))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC12))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC12))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC13))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC13))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC14))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC14))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC15))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC15))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC16))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC16))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC17))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC17))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC18))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC18))->setBorderWidth(2);

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC21))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC21))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC22))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC22))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC23))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC23))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC24))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC24))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC25))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC25))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC26))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC26))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC27))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC27))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC28))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC28))->setBorderWidth(2);

    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC31))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC31))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC32))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC32))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC33))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC33))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC34))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC34))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC35))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC35))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC36))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC36))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC37))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC37))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC38))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_PMS_LABEL_LINEC38))->setBorderWidth(2);
}

void PmsStatePage::OnShowPage()
{

}

void PmsStatePage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_MAINTAIN);
}

void PmsStatePage::setControlState(unsigned short int controlId, bool state)
{
    if (state)
    {
        ((CLabel *)GetDlgItem(controlId))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(controlId))->SetCtrlBKColor(Qt::green);
    }
}

void PmsStatePage::setControlState(unsigned short int controlId, bool state, QString text)
{
    if (state)
    {
        ((CLabel *)GetDlgItem(controlId))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(controlId))->SetCtrlBKColor(Qt::green);
    }

    ((CLabel *)GetDlgItem(controlId))->SetCtrlText(text);
}
