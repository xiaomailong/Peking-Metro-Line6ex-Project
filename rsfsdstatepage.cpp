#include "rsfsdstatepage.h"
#include <QPainter>

ROMDATA g_PicRom_RsfsdStatePage[] =
{
    D_COMMON_PAGE_HEADER(QSTR("走行部状态"))

    {QSTR("1位温℃"), D_DEFAULT_FONT, QRect(5, 120 - 20, 60, 15), Qt::white, Qt::black, CONTROL_LABEL, ID_IGNORE},
    {QSTR("4位温℃"), D_DEFAULT_FONT, QRect(5, 120 - 40, 60, 15), Qt::white, Qt::black, CONTROL_LABEL, ID_IGNORE},
    {QSTR("7位温℃"), D_DEFAULT_FONT, QRect(5, 120 - 60, 60, 15), Qt::white, Qt::black, CONTROL_LABEL, ID_IGNORE},

    {"", D_FONT_BOLD(6), QRect(80, 120, 160, 120), Qt::blue, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_CARRIAGE1},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 5, 120 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS1_CARRIAGE1},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 5 + 30, 120 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS2_CARRIAGE1},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 5 + 95, 120 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS3_CARRIAGE1},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 5 + 125, 120 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS4_CARRIAGE1},
    {"TC1", D_DEFAULT_FONT, QRect(80 + 80 - 12, 120 + 60 - 12, 25, 25), Qt::white, Qt::red, CONTROL_LABEL, _RSFDS_LABEL_CONTROLLER_CARRIAGE1},
    {"1", D_DEFAULT_FONT, QRect(80 + 5, 120 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE_CARRIAGE1},
    {"2", D_DEFAULT_FONT, QRect(80 + 5 + 30, 120 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE_CARRIAGE1},
    {"3", D_DEFAULT_FONT, QRect(80 + 5 + 95, 120 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE_CARRIAGE1},
    {"4", D_DEFAULT_FONT, QRect(80 + 5 + 125, 120 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE_CARRIAGE1},
    {"1-4", D_DEFAULT_FONT, QRect(80 + 5, 120 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE4_CARRIAGE1},
    {"2-4", D_DEFAULT_FONT, QRect(80 + 5 + 30, 120 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE4_CARRIAGE1},
    {"3-4", D_DEFAULT_FONT, QRect(80 + 5 + 95, 120 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE4_CARRIAGE1},
    {"4-4", D_DEFAULT_FONT, QRect(80 + 5 + 125, 120 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE4_CARRIAGE1},
    {"1-7", D_DEFAULT_FONT, QRect(80 + 5, 120 - 60, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE7_CARRIAGE1},
    {"2-7", D_DEFAULT_FONT, QRect(80 + 5 + 30, 120 - 60, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE7_CARRIAGE1},
    {"3-7", D_DEFAULT_FONT, QRect(80 + 5 + 95, 120 - 60, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE7_CARRIAGE1},
    {"4-7", D_DEFAULT_FONT, QRect(80 + 5 + 125, 120 - 60, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE7_CARRIAGE1},

    {"", D_FONT_BOLD(6), QRect(80 + 160, 120, 160, 120), Qt::blue, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_CARRIAGE2},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 160 + 5, 120 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS1_CARRIAGE2},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 30, 120 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS2_CARRIAGE2},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 95, 120 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS3_CARRIAGE2},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 125, 120 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS4_CARRIAGE2},
    {"MP1", D_DEFAULT_FONT, QRect(80 + 160 + 80 - 12, 120 + 60 - 12, 25, 25), Qt::white, Qt::red, CONTROL_LABEL, _RSFDS_LABEL_CONTROLLER_CARRIAGE2},
    {"1", D_DEFAULT_FONT, QRect(80 + 160 + 5, 120 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE_CARRIAGE2},
    {"2", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 30, 120 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE_CARRIAGE2},
    {"3", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 95, 120 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE_CARRIAGE2},
    {"4", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 125, 120 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE_CARRIAGE2},
    {"1-4", D_DEFAULT_FONT, QRect(80 + 160 + 5, 120 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE4_CARRIAGE2},
    {"2-4", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 30, 120 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE4_CARRIAGE2},
    {"3-4", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 95, 120 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE4_CARRIAGE2},
    {"4-4", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 125, 120 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE4_CARRIAGE2},
    {"1-7", D_DEFAULT_FONT, QRect(80 + 160 + 5, 120 - 60, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE7_CARRIAGE2},
    {"2-7", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 30, 120 - 60, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE7_CARRIAGE2},
    {"3-7", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 95, 120 - 60, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE7_CARRIAGE2},
    {"4-7", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 125, 120 - 60, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE7_CARRIAGE2},

    {"", D_FONT_BOLD(6), QRect(80 + 160 * 2, 120, 160, 120), Qt::blue, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_CARRIAGE3},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5, 120 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS1_CARRIAGE3},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 30, 120 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS2_CARRIAGE3},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 95, 120 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS3_CARRIAGE3},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 125, 120 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS4_CARRIAGE3},
    {"M1", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 80 - 12, 120 + 60 - 12, 25, 25), Qt::white, Qt::red, CONTROL_LABEL, _RSFDS_LABEL_CONTROLLER_CARRIAGE3},
    {"1", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5, 120 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE_CARRIAGE3},
    {"2", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 30, 120 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE_CARRIAGE3},
    {"3", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 95, 120 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE_CARRIAGE3},
    {"4", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 125, 120 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE_CARRIAGE3},
    {"1-4", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5, 120 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE4_CARRIAGE3},
    {"2-4", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 30, 120 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE4_CARRIAGE3},
    {"3-4", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 95, 120 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE4_CARRIAGE3},
    {"4-4", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 125, 120 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE4_CARRIAGE3},
    {"1-7", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5, 120 - 60, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE7_CARRIAGE3},
    {"2-7", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 30, 120 - 60, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE7_CARRIAGE3},
    {"3-7", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 95, 120 - 60, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE7_CARRIAGE3},
    {"4-7", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 125, 120 - 60, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE7_CARRIAGE3},

    {"", D_FONT_BOLD(6), QRect(80 + 160 * 3, 120, 160, 120), Qt::blue, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_CARRIAGE4},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5, 120 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS1_CARRIAGE4},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 30, 120 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS2_CARRIAGE4},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 95, 120 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS3_CARRIAGE4},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 125, 120 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS4_CARRIAGE4},
    {"MP3", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 80 - 12, 120 + 60 - 12, 25, 25), Qt::white, Qt::red, CONTROL_LABEL, _RSFDS_LABEL_CONTROLLER_CARRIAGE4},
    {"1", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5, 120 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE_CARRIAGE4},
    {"2", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 30, 120 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE_CARRIAGE4},
    {"3", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 95, 120 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE_CARRIAGE4},
    {"4", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 125, 120 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE_CARRIAGE4},
    {"1-4", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5, 120 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE4_CARRIAGE4},
    {"2-4", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 30, 120 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE4_CARRIAGE4},
    {"3-4", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 95, 120 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE4_CARRIAGE4},
    {"4-4", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 125, 120 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE4_CARRIAGE4},
    {"1-7", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5, 120 - 60, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE7_CARRIAGE4},
    {"2-7", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 30, 120 - 60, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE7_CARRIAGE4},
    {"3-7", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 95, 120 - 60, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE7_CARRIAGE4},
    {"4-7", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 125, 120 - 60, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE7_CARRIAGE4},

    {QSTR("1位温℃"), D_DEFAULT_FONT, QRect(5, 300 - 20, 60, 15), Qt::white, Qt::black, CONTROL_LABEL, ID_IGNORE},
    {QSTR("4位温℃"), D_DEFAULT_FONT, QRect(5, 300 - 40, 60, 15), Qt::white, Qt::black, CONTROL_LABEL, ID_IGNORE},
    {QSTR("7位温℃"), D_DEFAULT_FONT, QRect(5, 300 - 60, 60, 15), Qt::white, Qt::black, CONTROL_LABEL, ID_IGNORE},

    {"", D_FONT_BOLD(6), QRect(80, 300, 160, 120), Qt::blue, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_CARRIAGE5},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 5, 300 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS4_CARRIAGE5},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 5 + 30, 300 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS3_CARRIAGE5},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 5 + 95, 300 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS2_CARRIAGE5},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 5 + 125, 300 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS1_CARRIAGE5},
    {"M3", D_DEFAULT_FONT, QRect(80 + 80 - 12, 300 + 60 - 12, 25, 25), Qt::white, Qt::red, CONTROL_LABEL, _RSFDS_LABEL_CONTROLLER_CARRIAGE5},
    {"4", D_DEFAULT_FONT, QRect(80 + 5, 300 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE_CARRIAGE5},
    {"3", D_DEFAULT_FONT, QRect(80 + 5 + 30, 300 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE_CARRIAGE5},
    {"2", D_DEFAULT_FONT, QRect(80 + 5 + 95, 300 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE_CARRIAGE5},
    {"1", D_DEFAULT_FONT, QRect(80 + 5 + 125, 300 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE_CARRIAGE5},
    {"4-4", D_DEFAULT_FONT, QRect(80 + 5, 300 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE4_CARRIAGE5},
    {"3-4", D_DEFAULT_FONT, QRect(80 + 5 + 30, 300 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE4_CARRIAGE5},
    {"2-4", D_DEFAULT_FONT, QRect(80 + 5 + 95, 300 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE4_CARRIAGE5},
    {"1-4", D_DEFAULT_FONT, QRect(80 + 5 + 125, 300 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE4_CARRIAGE5},
    {"4-7", D_DEFAULT_FONT, QRect(80 + 5, 300 - 59, 25, 14), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE7_CARRIAGE5},
    {"3-7", D_DEFAULT_FONT, QRect(80 + 5 + 30, 300 - 59, 25, 14), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE7_CARRIAGE5},
    {"2-7", D_DEFAULT_FONT, QRect(80 + 5 + 95, 300 - 59, 25, 14), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE7_CARRIAGE5},
    {"1-7", D_DEFAULT_FONT, QRect(80 + 5 + 125, 300 - 59, 25, 14), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE7_CARRIAGE5},

    {"", D_FONT_BOLD(6), QRect(80 + 160, 300, 160, 120), Qt::blue, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_CARRIAGE6},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 160 + 5, 300 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS4_CARRIAGE6},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 30, 300 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS3_CARRIAGE6},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 95, 300 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS2_CARRIAGE6},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 125, 300 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS1_CARRIAGE6},
    {"M2", D_DEFAULT_FONT, QRect(80 + 160 + 80 - 12, 300 + 60 - 12, 25, 25), Qt::white, Qt::red, CONTROL_LABEL, _RSFDS_LABEL_CONTROLLER_CARRIAGE6},
    {"4", D_DEFAULT_FONT, QRect(80 + 160 + 5, 300 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE_CARRIAGE6},
    {"3", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 30, 300 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE_CARRIAGE6},
    {"2", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 95, 300 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE_CARRIAGE6},
    {"1", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 125, 300 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE_CARRIAGE6},
    {"4-4", D_DEFAULT_FONT, QRect(80 + 160 + 5, 300 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE4_CARRIAGE6},
    {"3-4", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 30, 300 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE4_CARRIAGE6},
    {"2-4", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 95, 300 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE4_CARRIAGE6},
    {"1-4", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 125, 300 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE4_CARRIAGE6},
    {"4-7", D_DEFAULT_FONT, QRect(80 + 160 + 5, 300 - 59, 25, 14), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE7_CARRIAGE6},
    {"3-7", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 30, 300 - 59, 25, 14), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE7_CARRIAGE6},
    {"2-7", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 95, 300 - 59, 25, 14), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE7_CARRIAGE6},
    {"1-7", D_DEFAULT_FONT, QRect(80 + 160 + 5 + 125, 300 - 59, 25, 14), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE7_CARRIAGE6},

    {"", D_FONT_BOLD(6), QRect(80 + 160 * 2, 300, 160, 120), Qt::blue, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_CARRIAGE7},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5, 300 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS4_CARRIAGE7},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 30, 300 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS3_CARRIAGE7},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 95, 300 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS2_CARRIAGE7},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 125, 300 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS1_CARRIAGE7},
    {"MP2", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 80 - 12, 300 + 60 - 12, 25, 25), Qt::white, Qt::red, CONTROL_LABEL, _RSFDS_LABEL_CONTROLLER_CARRIAGE7},
    {"4", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5, 300 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE_CARRIAGE7},
    {"3", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 30, 300 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE_CARRIAGE7},
    {"2", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 95, 300 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE_CARRIAGE7},
    {"1", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 125, 300 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE_CARRIAGE7},
    {"4-4", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5, 300 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE4_CARRIAGE7},
    {"3-4", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 30, 300 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE4_CARRIAGE7},
    {"2-4", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 95, 300 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE4_CARRIAGE7},
    {"1-4", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 125, 300 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE4_CARRIAGE7},
    {"4-7", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5, 300 - 59, 25, 14), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE7_CARRIAGE7},
    {"3-7", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 30, 300 - 59, 25, 14), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE7_CARRIAGE7},
    {"2-7", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 95, 300 - 59, 25, 14), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE7_CARRIAGE7},
    {"1-7", D_DEFAULT_FONT, QRect(80 + 160 * 2 + 5 + 125, 300 - 59, 25, 14), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE7_CARRIAGE7},

    {"", D_FONT_BOLD(6), QRect(80 + 160 * 3, 300, 160, 120), Qt::blue, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_CARRIAGE8},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5, 300 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS4_CARRIAGE8},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 30, 300 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS3_CARRIAGE8},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 95, 300 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS2_CARRIAGE8},
    {"axisNormal.PNG", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 125, 300 + 5, 25, 120 - 10), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS1_CARRIAGE8},
    {"TC2", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 80 - 12, 300 + 60 - 12, 25, 25), Qt::white, Qt::red, CONTROL_LABEL, _RSFDS_LABEL_CONTROLLER_CARRIAGE8},
    {"4", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5, 300 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE_CARRIAGE8},
    {"3", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 30, 300 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE_CARRIAGE8},
    {"2", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 95, 300 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE_CARRIAGE8},
    {"1", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 125, 300 - 20, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE_CARRIAGE8},
    {"4-4", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5, 300 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE4_CARRIAGE8},
    {"3-4", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 30, 300 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE4_CARRIAGE8},
    {"2-4", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 95, 300 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE4_CARRIAGE8},
    {"1-4", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 125, 300 - 40, 25, 15), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE4_CARRIAGE8},
    {"4-7", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5, 300 - 59, 25, 14), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS4_TEMPERATURE7_CARRIAGE8},
    {"3-7", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 30, 300 - 59, 25, 14), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS3_TEMPERATURE7_CARRIAGE8},
    {"2-7", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 95, 300 - 59, 25, 14), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS2_TEMPERATURE7_CARRIAGE8},
    {"1-7", D_DEFAULT_FONT, QRect(80 + 160 * 3 + 5 + 125, 300 - 59, 25, 14), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS1_TEMPERATURE7_CARRIAGE8},

    {"", D_FONT_BOLD(6), QRect(80 + 10, 450, 300, 80), Qt::blue, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS_ILLUSTRATE},
    {"axisMajorFault.PNG", D_DEFAULT_FONT, QRect(80 + 20, 455, 25, 70), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS_ILLUSTRATE_MAJOR},
    {QSTR("中等\n故障"), D_FONT_BOLD(6), QRect(80 + 20 + 30, 450 + 15, 50, 50), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS_ILLUSTRATE_MAJOR1},
    {"axisMinorFault.PNG", D_DEFAULT_FONT, QRect(80 + 20 + 100, 455, 25, 70), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS_ILLUSTRATE_MINOR},
    {QSTR("轻微\n故障"), D_FONT_BOLD(6), QRect(80 + 20 + 100 + 30, 450 + 15, 50, 50), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS_ILLUSTRATE_MINOR1},
    {"axisNormal.PNG", D_DEFAULT_FONT, QRect(80 + 20 + 200, 455, 25, 70), Qt::blue, Qt::black, CONTROL_IMAGE, _RSFDS_LABEL_AXIS_ILLUSTRATE_NORMAL},
    {QSTR("正常"), D_FONT_BOLD(6), QRect(80 + 20 + 200 + 30, 450 + 15, 50, 50), Qt::white, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_AXIS_ILLUSTRATE_NORMAL1},

    {"", D_FONT_BOLD(6), QRect(80 + 10 + 320, 450, 300, 80), Qt::blue, Qt::black, CONTROL_LABEL, _RSFDS_LABEL_CONTROLLER_ILLUSTRATE},
    {QSTR("分机\n故障"), D_FONT_BOLD(6), QRect(80 + 10 + 320 + 50, 450 + 15, 50, 50), Qt::white, Qt::red, CONTROL_LABEL, _RSFDS_LABEL_CONTROLLER_ILLUSTRATE1},
    {QSTR("分机\n正常"), D_FONT_BOLD(6), QRect(80 + 10 + 320 + 160 + 20, 450 + 15, 50, 50), Qt::white, Qt::green, CONTROL_LABEL, _RSFDS_LABEL_CONTROLLER_ILLUSTRATE2},

    D_COMMON_PAGE_BUTTON_BAR
};

int g_RsfdsStatePageRomLen = sizeof(g_PicRom_RsfsdStatePage) / sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(RsfsdStatePage, CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
END_MESSAGE_MAP()

RsfsdStatePage::RsfsdStatePage()
{
}

void RsfsdStatePage::OnUpdatePage()
{
    // axis state
    this->setAxisState(_RSFDS_LABEL_AXIS1_CARRIAGE1, tdsAxis1MajorFaultCar1, tdsAxis1MinorFaultCar1);
    this->setAxisState(_RSFDS_LABEL_AXIS2_CARRIAGE1, tdsAxis2MajorFaultCar1, tdsAxis2MinorFaultCar1);
    this->setAxisState(_RSFDS_LABEL_AXIS3_CARRIAGE1, tdsAxis3MajorFaultCar1, tdsAxis3MinorFaultCar1);
    this->setAxisState(_RSFDS_LABEL_AXIS4_CARRIAGE1, tdsAxis4MajorFaultCar1, tdsAxis4MinorFaultCar1);

    this->setAxisState(_RSFDS_LABEL_AXIS1_CARRIAGE2, tdsAxis1MajorFaultCar2, tdsAxis1MinorFaultCar2);
    this->setAxisState(_RSFDS_LABEL_AXIS2_CARRIAGE2, tdsAxis2MajorFaultCar2, tdsAxis2MinorFaultCar2);
    this->setAxisState(_RSFDS_LABEL_AXIS3_CARRIAGE2, tdsAxis3MajorFaultCar2, tdsAxis3MinorFaultCar2);
    this->setAxisState(_RSFDS_LABEL_AXIS4_CARRIAGE2, tdsAxis4MajorFaultCar2, tdsAxis4MinorFaultCar2);

    this->setAxisState(_RSFDS_LABEL_AXIS1_CARRIAGE3, tdsAxis1MajorFaultCar3, tdsAxis1MinorFaultCar3);
    this->setAxisState(_RSFDS_LABEL_AXIS2_CARRIAGE3, tdsAxis2MajorFaultCar3, tdsAxis2MinorFaultCar3);
    this->setAxisState(_RSFDS_LABEL_AXIS3_CARRIAGE3, tdsAxis3MajorFaultCar3, tdsAxis3MinorFaultCar3);
    this->setAxisState(_RSFDS_LABEL_AXIS4_CARRIAGE3, tdsAxis4MajorFaultCar3, tdsAxis4MinorFaultCar3);

    this->setAxisState(_RSFDS_LABEL_AXIS1_CARRIAGE4, tdsAxis1MajorFaultCar4, tdsAxis1MinorFaultCar4);
    this->setAxisState(_RSFDS_LABEL_AXIS2_CARRIAGE4, tdsAxis2MajorFaultCar4, tdsAxis2MinorFaultCar4);
    this->setAxisState(_RSFDS_LABEL_AXIS3_CARRIAGE4, tdsAxis3MajorFaultCar4, tdsAxis3MinorFaultCar4);
    this->setAxisState(_RSFDS_LABEL_AXIS4_CARRIAGE4, tdsAxis4MajorFaultCar4, tdsAxis4MinorFaultCar4);

    this->setAxisState(_RSFDS_LABEL_AXIS1_CARRIAGE5, tdsAxis1MajorFaultCar5, tdsAxis1MinorFaultCar5);
    this->setAxisState(_RSFDS_LABEL_AXIS2_CARRIAGE5, tdsAxis2MajorFaultCar5, tdsAxis2MinorFaultCar5);
    this->setAxisState(_RSFDS_LABEL_AXIS3_CARRIAGE5, tdsAxis3MajorFaultCar5, tdsAxis3MinorFaultCar5);
    this->setAxisState(_RSFDS_LABEL_AXIS4_CARRIAGE5, tdsAxis4MajorFaultCar5, tdsAxis4MinorFaultCar5);

    this->setAxisState(_RSFDS_LABEL_AXIS1_CARRIAGE6, tdsAxis1MajorFaultCar6, tdsAxis1MinorFaultCar6);
    this->setAxisState(_RSFDS_LABEL_AXIS2_CARRIAGE6, tdsAxis2MajorFaultCar6, tdsAxis2MinorFaultCar6);
    this->setAxisState(_RSFDS_LABEL_AXIS3_CARRIAGE6, tdsAxis3MajorFaultCar6, tdsAxis3MinorFaultCar6);
    this->setAxisState(_RSFDS_LABEL_AXIS4_CARRIAGE6, tdsAxis4MajorFaultCar6, tdsAxis4MinorFaultCar6);

    this->setAxisState(_RSFDS_LABEL_AXIS1_CARRIAGE7, tdsAxis1MajorFaultCar7, tdsAxis1MinorFaultCar7);
    this->setAxisState(_RSFDS_LABEL_AXIS2_CARRIAGE7, tdsAxis2MajorFaultCar7, tdsAxis2MinorFaultCar7);
    this->setAxisState(_RSFDS_LABEL_AXIS3_CARRIAGE7, tdsAxis3MajorFaultCar7, tdsAxis3MinorFaultCar7);
    this->setAxisState(_RSFDS_LABEL_AXIS4_CARRIAGE7, tdsAxis4MajorFaultCar7, tdsAxis4MinorFaultCar7);

    this->setAxisState(_RSFDS_LABEL_AXIS1_CARRIAGE8, tdsAxis1MajorFaultCar8, tdsAxis1MinorFaultCar8);
    this->setAxisState(_RSFDS_LABEL_AXIS2_CARRIAGE8, tdsAxis2MajorFaultCar8, tdsAxis2MinorFaultCar8);
    this->setAxisState(_RSFDS_LABEL_AXIS3_CARRIAGE8, tdsAxis3MajorFaultCar8, tdsAxis3MinorFaultCar8);
    this->setAxisState(_RSFDS_LABEL_AXIS4_CARRIAGE8, tdsAxis4MajorFaultCar8, tdsAxis4MinorFaultCar8);

    // temperature
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE7_CARRIAGE1))->SetCtrlText(QString::number(tdsAxis1Temperature7Car1));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE4_CARRIAGE1))->SetCtrlText(QString("--"));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE_CARRIAGE1))->SetCtrlText(QString::number(tdsAxis1Temperature1Car1));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE7_CARRIAGE1))->SetCtrlText(QString::number(tdsAxis2Temperature7Car1));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE4_CARRIAGE1))->SetCtrlText(QString("--"));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE_CARRIAGE1))->SetCtrlText(QString::number(tdsAxis2Temperature1Car1));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE7_CARRIAGE1))->SetCtrlText(QString::number(tdsAxis3Temperature7Car1));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE4_CARRIAGE1))->SetCtrlText(QString("--"));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE_CARRIAGE1))->SetCtrlText(QString::number(tdsAxis3Temperature1Car1));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE7_CARRIAGE1))->SetCtrlText(QString::number(tdsAxis4Temperature7Car1));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE4_CARRIAGE1))->SetCtrlText(QString("--"));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE_CARRIAGE1))->SetCtrlText(QString::number(tdsAxis4Temperature1Car1));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE7_CARRIAGE2))->SetCtrlText(QString::number(tdsAxis1Temperature7Car2));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE4_CARRIAGE2))->SetCtrlText(QString::number(tdsAxis1Temperature4Car2));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE_CARRIAGE2))->SetCtrlText(QString::number(tdsAxis1Temperature1Car2));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE7_CARRIAGE2))->SetCtrlText(QString::number(tdsAxis2Temperature7Car2));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE4_CARRIAGE2))->SetCtrlText(QString::number(tdsAxis2Temperature4Car2));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE_CARRIAGE2))->SetCtrlText(QString::number(tdsAxis2Temperature1Car2));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE7_CARRIAGE2))->SetCtrlText(QString::number(tdsAxis3Temperature7Car2));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE4_CARRIAGE2))->SetCtrlText(QString::number(tdsAxis3Temperature4Car2));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE_CARRIAGE2))->SetCtrlText(QString::number(tdsAxis3Temperature1Car2));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE7_CARRIAGE2))->SetCtrlText(QString::number(tdsAxis4Temperature7Car2));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE4_CARRIAGE2))->SetCtrlText(QString::number(tdsAxis4Temperature4Car2));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE_CARRIAGE2))->SetCtrlText(QString::number(tdsAxis4Temperature1Car2));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE7_CARRIAGE3))->SetCtrlText(QString::number(tdsAxis1Temperature7Car3));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE4_CARRIAGE3))->SetCtrlText(QString::number(tdsAxis1Temperature4Car3));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE_CARRIAGE3))->SetCtrlText(QString::number(tdsAxis1Temperature1Car3));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE7_CARRIAGE3))->SetCtrlText(QString::number(tdsAxis2Temperature7Car3));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE4_CARRIAGE3))->SetCtrlText(QString::number(tdsAxis2Temperature4Car3));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE_CARRIAGE3))->SetCtrlText(QString::number(tdsAxis2Temperature1Car3));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE7_CARRIAGE3))->SetCtrlText(QString::number(tdsAxis3Temperature7Car3));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE4_CARRIAGE3))->SetCtrlText(QString::number(tdsAxis3Temperature4Car3));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE_CARRIAGE3))->SetCtrlText(QString::number(tdsAxis3Temperature1Car3));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE7_CARRIAGE3))->SetCtrlText(QString::number(tdsAxis4Temperature7Car3));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE4_CARRIAGE3))->SetCtrlText(QString::number(tdsAxis4Temperature4Car3));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE_CARRIAGE3))->SetCtrlText(QString::number(tdsAxis4Temperature1Car3));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE7_CARRIAGE4))->SetCtrlText(QString::number(tdsAxis1Temperature7Car4));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE4_CARRIAGE4))->SetCtrlText(QString::number(tdsAxis1Temperature4Car4));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE_CARRIAGE4))->SetCtrlText(QString::number(tdsAxis1Temperature1Car4));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE7_CARRIAGE4))->SetCtrlText(QString::number(tdsAxis2Temperature7Car4));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE4_CARRIAGE4))->SetCtrlText(QString::number(tdsAxis2Temperature4Car4));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE_CARRIAGE4))->SetCtrlText(QString::number(tdsAxis2Temperature1Car4));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE7_CARRIAGE4))->SetCtrlText(QString::number(tdsAxis3Temperature7Car4));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE4_CARRIAGE4))->SetCtrlText(QString::number(tdsAxis3Temperature4Car4));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE_CARRIAGE4))->SetCtrlText(QString::number(tdsAxis3Temperature1Car4));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE7_CARRIAGE4))->SetCtrlText(QString::number(tdsAxis4Temperature7Car4));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE4_CARRIAGE4))->SetCtrlText(QString::number(tdsAxis4Temperature4Car4));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE_CARRIAGE4))->SetCtrlText(QString::number(tdsAxis4Temperature1Car4));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE7_CARRIAGE5))->SetCtrlText(QString::number(tdsAxis1Temperature7Car5));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE4_CARRIAGE5))->SetCtrlText(QString::number(tdsAxis1Temperature4Car5));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE_CARRIAGE5))->SetCtrlText(QString::number(tdsAxis1Temperature1Car5));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE7_CARRIAGE5))->SetCtrlText(QString::number(tdsAxis2Temperature7Car5));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE4_CARRIAGE5))->SetCtrlText(QString::number(tdsAxis2Temperature4Car5));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE_CARRIAGE5))->SetCtrlText(QString::number(tdsAxis2Temperature1Car5));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE7_CARRIAGE5))->SetCtrlText(QString::number(tdsAxis3Temperature7Car5));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE4_CARRIAGE5))->SetCtrlText(QString::number(tdsAxis3Temperature4Car5));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE_CARRIAGE5))->SetCtrlText(QString::number(tdsAxis3Temperature1Car5));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE7_CARRIAGE5))->SetCtrlText(QString::number(tdsAxis4Temperature7Car5));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE4_CARRIAGE5))->SetCtrlText(QString::number(tdsAxis4Temperature4Car5));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE_CARRIAGE5))->SetCtrlText(QString::number(tdsAxis4Temperature1Car5));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE7_CARRIAGE6))->SetCtrlText(QString::number(tdsAxis1Temperature7Car6));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE4_CARRIAGE6))->SetCtrlText(QString::number(tdsAxis1Temperature4Car6));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE_CARRIAGE6))->SetCtrlText(QString::number(tdsAxis1Temperature1Car6));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE7_CARRIAGE6))->SetCtrlText(QString::number(tdsAxis2Temperature7Car6));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE4_CARRIAGE6))->SetCtrlText(QString::number(tdsAxis2Temperature4Car6));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE_CARRIAGE6))->SetCtrlText(QString::number(tdsAxis2Temperature1Car6));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE7_CARRIAGE6))->SetCtrlText(QString::number(tdsAxis3Temperature7Car6));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE4_CARRIAGE6))->SetCtrlText(QString::number(tdsAxis3Temperature4Car6));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE_CARRIAGE6))->SetCtrlText(QString::number(tdsAxis3Temperature1Car6));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE7_CARRIAGE6))->SetCtrlText(QString::number(tdsAxis4Temperature7Car6));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE4_CARRIAGE6))->SetCtrlText(QString::number(tdsAxis4Temperature4Car6));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE_CARRIAGE6))->SetCtrlText(QString::number(tdsAxis4Temperature1Car6));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE7_CARRIAGE7))->SetCtrlText(QString::number(tdsAxis1Temperature7Car7));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE4_CARRIAGE7))->SetCtrlText(QString::number(tdsAxis1Temperature4Car7));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE_CARRIAGE7))->SetCtrlText(QString::number(tdsAxis1Temperature1Car7));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE7_CARRIAGE7))->SetCtrlText(QString::number(tdsAxis2Temperature7Car7));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE4_CARRIAGE7))->SetCtrlText(QString::number(tdsAxis2Temperature4Car7));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE_CARRIAGE7))->SetCtrlText(QString::number(tdsAxis2Temperature1Car7));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE7_CARRIAGE7))->SetCtrlText(QString::number(tdsAxis3Temperature7Car7));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE4_CARRIAGE7))->SetCtrlText(QString::number(tdsAxis3Temperature4Car7));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE_CARRIAGE7))->SetCtrlText(QString::number(tdsAxis3Temperature1Car7));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE7_CARRIAGE7))->SetCtrlText(QString::number(tdsAxis4Temperature7Car7));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE4_CARRIAGE7))->SetCtrlText(QString::number(tdsAxis4Temperature4Car7));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE_CARRIAGE7))->SetCtrlText(QString::number(tdsAxis4Temperature1Car7));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE7_CARRIAGE8))->SetCtrlText(QString::number(tdsAxis1Temperature7Car8));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE4_CARRIAGE8))->SetCtrlText(QString("--"));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS1_TEMPERATURE_CARRIAGE8))->SetCtrlText(QString::number(tdsAxis1Temperature1Car8));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE7_CARRIAGE8))->SetCtrlText(QString::number(tdsAxis2Temperature7Car8));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE4_CARRIAGE8))->SetCtrlText(QString("--"));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS2_TEMPERATURE_CARRIAGE8))->SetCtrlText(QString::number(tdsAxis2Temperature1Car8));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE7_CARRIAGE8))->SetCtrlText(QString::number(tdsAxis3Temperature7Car8));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE4_CARRIAGE8))->SetCtrlText(QString("--"));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS3_TEMPERATURE_CARRIAGE8))->SetCtrlText(QString::number(tdsAxis3Temperature1Car8));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE7_CARRIAGE8))->SetCtrlText(QString::number(tdsAxis4Temperature7Car8));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE4_CARRIAGE8))->SetCtrlText(QString("--"));
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS4_TEMPERATURE_CARRIAGE8))->SetCtrlText(QString::number(tdsAxis4Temperature1Car8));

    // controller
    this->setControllerState(_RSFDS_LABEL_CONTROLLER_CARRIAGE1, tdsControllerFaultCar1);
    this->setControllerState(_RSFDS_LABEL_CONTROLLER_CARRIAGE2, tdsControllerFaultCar2);
    this->setControllerState(_RSFDS_LABEL_CONTROLLER_CARRIAGE3, tdsControllerFaultCar3);
    this->setControllerState(_RSFDS_LABEL_CONTROLLER_CARRIAGE4, tdsControllerFaultCar4);
    this->setControllerState(_RSFDS_LABEL_CONTROLLER_CARRIAGE5, tdsControllerFaultCar5);
    this->setControllerState(_RSFDS_LABEL_CONTROLLER_CARRIAGE6, tdsControllerFaultCar6);
    this->setControllerState(_RSFDS_LABEL_CONTROLLER_CARRIAGE7, tdsControllerFaultCar7);
    this->setControllerState(_RSFDS_LABEL_CONTROLLER_CARRIAGE8, tdsControllerFaultCar8);

    // illustrate, useless
    ((CImageCtrl*)GetDlgItem(_RSFDS_LABEL_AXIS_ILLUSTRATE_MAJOR))->ShowImage();
    ((CImageCtrl*)GetDlgItem(_RSFDS_LABEL_AXIS_ILLUSTRATE_MINOR))->ShowImage();
    ((CImageCtrl*)GetDlgItem(_RSFDS_LABEL_AXIS_ILLUSTRATE_NORMAL))->ShowImage();

    // paint the head of the metro
    QPainter *painter = this->GetPainter();

    painter->save();

    painter->setRenderHint(QPainter::Antialiasing, true);
    painter->setPen(QPen(Qt::white, 1));
    painter->setBrush(QBrush(Qt::black));

    QPainterPath path;

    path.moveTo(80, 120);
    path.cubicTo(80 - 20, 120 + 30,
                    80 - 20, 120 + 90,
                    80, 120 + 120);

    painter->drawPath(path);

    path.moveTo(80 + 160 * 3 + 160, 300);
    path.cubicTo(80 + 160 * 3 + 160 + 20, 300 + 30,
                    80 + 160 * 3 + 160 + 20, 300 + 90,
                    80 + 160 * 3 + 160, 300 + 120);

    painter->drawPath(path);

    painter->restore();
}

void RsfsdStatePage::OnInitPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_CARRIAGE1))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_CARRIAGE1))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_CARRIAGE2))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_CARRIAGE2))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_CARRIAGE3))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_CARRIAGE3))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_CARRIAGE4))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_CARRIAGE4))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_CARRIAGE5))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_CARRIAGE5))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_CARRIAGE6))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_CARRIAGE6))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_CARRIAGE7))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_CARRIAGE7))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_CARRIAGE8))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_CARRIAGE8))->setBorderWidth(2);

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS_ILLUSTRATE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS_ILLUSTRATE))->setBorderWidth(2);
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_CONTROLLER_ILLUSTRATE))->SetBorderColor(Qt::white);
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_CONTROLLER_ILLUSTRATE))->setBorderWidth(2);

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_CONTROLLER_ILLUSTRATE1))->SetTxtColor(Qt::white);
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_CONTROLLER_ILLUSTRATE2))->SetTxtColor(Qt::white);

    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS_ILLUSTRATE_MAJOR1))->SetTxtColor(Qt::white);
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS_ILLUSTRATE_MINOR1))->SetTxtColor(Qt::white);
    ((CLabel *)GetDlgItem(_RSFDS_LABEL_AXIS_ILLUSTRATE_NORMAL1))->SetTxtColor(Qt::white);
}

void RsfsdStatePage::OnShowPage()
{

}

void RsfsdStatePage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_MAINTAIN);
}

void RsfsdStatePage::setAxisState(unsigned short int controlId, bool majorFault, bool minorFault)
{
    if (majorFault)
    {
        ((CImageCtrl*)GetDlgItem(controlId))->SetCtrlText(QString("axisMajorFault.PNG"));
    }
    else if (minorFault)
    {
        ((CImageCtrl*)GetDlgItem(controlId))->SetCtrlText(QString("axisMinorFault.PNG"));
    }
    else
    {
        ((CImageCtrl*)GetDlgItem(controlId))->SetCtrlText(QString("axisNormal.PNG"));
    }
}

void RsfsdStatePage::setControllerState(unsigned short int controlId, bool fault)
{
    if (fault)
    {
        ((CLabel *)GetDlgItem(controlId))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(controlId))->SetCtrlBKColor(Qt::green);
    }
}
