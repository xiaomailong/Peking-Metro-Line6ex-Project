#include "CTodayFaultPage.h"

ROMDATA g_PicRom_TodayFault[] =
{
    D_COMMON_PAGE_HEADER(QSTR("实时故障"))
    {"",                             D_FONT_BOLD(6),      QRect(  0,   50, 800,  1),           Qt::white,              Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(  0,   90, 800,  1),           Qt::white,              Qt::black,                   CONTROL_LINE,           ID_IGNORE         },

    {"",                             D_FONT_BOLD(6),      QRect( 75,  50,   1,  40),           Qt::white,              Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(150,  50,   1,  40),           Qt::white,              Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(225,  50,   1,  40),           Qt::white,              Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(375,  50,   1,  40),           Qt::white,              Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(450,  50,   1,  40),           Qt::white,              Qt::black,                   CONTROL_LINE,           ID_IGNORE         },

    {QSTR("日期"),                    D_FONT_BOLD(8),      QRect(  0,  50,  75,  40),           Qt::white,              Qt::transparent,             CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("时间"),                    D_FONT_BOLD(8),      QRect( 75,  50,  75,  40),           Qt::white,              Qt::transparent,             CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("故障代码"),                D_FONT_BOLD(8),      QRect(150,  50,  75,  40),           Qt::white,              Qt::transparent,             CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("故障名称"),                D_FONT_BOLD(8),      QRect(225,  50, 150,  40),           Qt::white,              Qt::transparent,             CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("分类"),                    D_FONT_BOLD(8),      QRect(375,  50,  75,  40),           Qt::white,              Qt::transparent,             CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("故障描述与帮助"),           D_FONT_BOLD(8),      QRect(450,  50, 350,  40),           Qt::white,              Qt::transparent,             CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(  0,  91, 800, 420),           Qt::white,              Qt::gray,                    CONTROL_LABEL,          ID_PIBTODAYF_LABEL_FAULTRED         },
    {"",                             D_FONT_BOLD(6),      QRect(  0, 111, 800,   1),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(  0, 131, 800,   1),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(  0, 151, 800,   1),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(  0, 171, 800,   1),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(  0, 191, 800,   1),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(  0, 211, 800,   1),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(  0, 231, 800,   1),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(  0, 251, 800,   1),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(  0, 271, 800,   1),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(  0, 291, 800,   1),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(  0, 311, 800,   1),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(  0, 331, 800,   1),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(  0, 351, 800,   1),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(  0, 371, 800,   1),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(  0, 391, 800,   1),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(  0, 411, 800,   1),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(  0, 431, 800,   1),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(  0, 451, 800,   1),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(  0, 471, 800,   1),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(  0, 491, 800,   1),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(  0, 511, 800,   1),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect( 75,  91,   1, 420),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(150,  91,   1, 420),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(225,  91,   1, 420),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(375,  91,   1, 420),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {"",                             D_FONT_BOLD(6),      QRect(450,  91,   1, 420),           Qt::darkGray,           Qt::black,                   CONTROL_LINE,           ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(  0,  92,  75,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(  0, 112,  75,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(  0, 132,  75,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(  0, 152,  75,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(  0, 172,  75,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(  0, 192,  75,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(  0, 212,  75,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(  0, 232,  75,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(  0, 252,  75,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(  0, 272,  75,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(  0, 292,  75,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(  0, 312,  75,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(  0, 332,  75,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(  0, 352,  75,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(  0, 372,  75,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(  0, 392,  75,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(  0, 412,  75,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(  0, 432,  75,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(  0, 452,  75,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(  0, 472,  75,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(  0, 492,  75,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect( 76,  92,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect( 76, 112,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect( 76, 132,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect( 76, 152,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect( 76, 172,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect( 76, 192,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect( 76, 212,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect( 76, 232,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect( 76, 252,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect( 76, 272,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect( 76, 292,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect( 76, 312,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect( 76, 332,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect( 76, 352,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect( 76, 372,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect( 76, 392,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect( 76, 412,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect( 76, 432,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect( 76, 452,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect( 76, 472,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect( 76, 492,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(151,  92,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(151, 112,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(151, 132,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(151, 152,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(151, 172,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(151, 192,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(151, 212,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(151, 232,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(151, 252,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(151, 272,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(151, 292,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(151, 312,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(151, 332,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(151, 352,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(151, 372,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(151, 392,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(151, 412,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(151, 432,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(151, 452,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(151, 472,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(151, 492,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(226,  92, 149,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(226, 112, 149,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(226, 132, 149,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(226, 152, 149,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(226, 172, 149,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(226, 192, 149,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(226, 212, 149,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(226, 232, 149,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(226, 252, 149,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(226, 272, 149,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(226, 292, 149,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(226, 312, 149,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(226, 332, 149,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(226, 352, 149,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(226, 372, 149,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(226, 392, 149,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(226, 412, 149,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(226, 432, 149,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(226, 452, 149,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(226, 472, 149,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(226, 492, 149,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(376,  92,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(376, 112,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(376, 132,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(376, 152,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(376, 172,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(376, 192,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(376, 212,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(376, 232,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(376, 252,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(376, 272,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(376, 292,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(376, 312,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(376, 332,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(376, 352,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(376, 372,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(376, 392,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(376, 412,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(376, 432,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(376, 452,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(376, 472,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(376, 492,  74,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(451,  92, 349,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(451, 112, 349,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(451, 132, 349,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(451, 152, 349,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(451, 172, 349,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(451, 192, 349,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(451, 212, 349,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(451, 232, 349,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(451, 252, 349,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(451, 272, 349,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(451, 292, 349,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(451, 312, 349,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(451, 332, 349,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(451, 352, 349,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(451, 372, 349,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(451, 392, 349,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(451, 412, 349,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(451, 432, 349,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(451, 452, 349,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(451, 472, 349,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),                       D_FONT_BOLD(8),      QRect(451, 492, 349,  19),           Qt::red,                Qt::white,                   CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("历史记录"),                D_FONT_BOLD(8),      QRect(675, 515, 100,  30),           Qt::black,              Qt::gray,                    CONTROL_BUTTON,         ID_PIBTODAYF_BUTTON_HISTORYRECORD     },

    D_COMMON_PAGE_BUTTON_BAR
};
int g_TodayFaultRomLen = sizeof(g_PicRom_TodayFault)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CTodayFaultPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
END_MESSAGE_MAP()

CTodayFaultPage::CTodayFaultPage()
{
}

void CTodayFaultPage::OnUpdatePage()
{

}

void CTodayFaultPage::OnInitPage()
{

}

void CTodayFaultPage::OnShowPage()
{

}
