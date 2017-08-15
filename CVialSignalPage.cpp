#include "CVialSignalPage.h"

ROMDATA g_PicRom_VialSignal[] =
{
    D_COMMON_PAGE_HEADER(QSTR("生命信号"))
    {"",                            D_FONT_BOLD(5),      QRect(150, 44, 720, 70),           Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBVSP_TRAIN               },
//    {"RIGHT",                       D_FONT_BOLD(6),      QRect(710, 75, 45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBVIP_RIGHTARROW          },
//    {"LEFT",                        D_FONT_BOLD(6),      QRect(70,  75, 45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBVIP_LEFTARROW           },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 120, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 150, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 180, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 210, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 240, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 270, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 300, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 330, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 360, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 390, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 420, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 450, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 480, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 510, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 540, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                       D_FONT_BOLD(6),      QRect( 5, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(60, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(150, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(240, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(330, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(420, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(510, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(600, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(690, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(780, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QSTR("CCU"),        D_FONT_BOLD(6),      QRect( 6, 121,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("IO-GW"),      D_FONT_BOLD(6),      QRect( 6, 151,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("BCU"),        D_FONT_BOLD(6),      QRect( 6, 181,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("TCU"),          D_FONT_BOLD(6),      QRect( 6, 211,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("DOOR"),            D_FONT_BOLD(6),      QRect( 6, 241,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("HVAC"),            D_FONT_BOLD(6),      QRect( 6, 271,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("PIS"),        D_FONT_BOLD(6),      QRect( 6, 301,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("FAS"),           D_FONT_BOLD(6),      QRect( 6, 331,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("ATC"),          D_FONT_BOLD(6),      QRect( 6, 361,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("ACU"),          D_FONT_BOLD(6),      QRect( 6, 391,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("HMI"),          D_FONT_BOLD(6),      QRect( 6, 421,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },

//    {QSTR(""),                      D_FONT_BOLD(4),      QRect( 61,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_CCU1            },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect( 691,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_CCU2            },


    {QSTR(""),                      D_FONT_BOLD(6),      QRect(  61,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_CCU1            },
    {QSTR("ERM"),                   D_FONT_BOLD(6),      QRect( 151,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 241,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DCCU1            },
    {QSTR("- -"),                      D_FONT_BOLD(6),      QRect( 331,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("- -"),                      D_FONT_BOLD(6),      QRect( 421,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("ERM"),                   D_FONT_BOLD(6),      QRect( 511,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 601,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DCCU2            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 691,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_CCU2            },

    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 61,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_IO_GW11            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW22            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 241,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW33            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 331,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW44            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 421,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW55            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 511,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW66            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 601,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW77            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 691,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW88            },

    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 61,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_BCU11            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 151,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 241,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 331,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCU44            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 421,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCU55            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 511,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 601,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 691,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCU88           },

    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 61,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU22            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 241,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU33            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 331,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU44            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 421,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU55            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 511,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU66            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 601,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU77            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 691,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },

    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 61,241, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_DOORGWTOP1            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 151,241, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP2            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 241,241, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP3            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 331,241, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP4            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 421,241, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP5            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 511,241, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP6            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 601,241, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP7            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 691,241, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP8            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 61,256, 88, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_DOORGW1            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 151,256, 88, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW2            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 241,256, 88, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW3            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 331,256, 88, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW4            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 421,256, 88, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW5            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 511,256, 88, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW6            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 601,256, 88, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW7            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 691,256, 88, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW8            },

    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 61,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_HVAC11            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC22            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 241,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC33            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 331,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC44            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 421,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC55            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 511,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC66            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 601,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC77            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 691,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC88            },


    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 61,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_PA11            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 151,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 241,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 331,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 421,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 511,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 601,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 691,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_PA88            },

    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 61,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_FAS1            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 151,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 241,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 331,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 421,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 511,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 601,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 691,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_FAS8            },

    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 61,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 151,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 241,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 331,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 421,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 511,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 601,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 691,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ATC10            },

    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 61,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_ACU11            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 151,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 241,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 331,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 421,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 511,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 601,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 691,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ACU88            },

    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 61, 421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_HMI1            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 151,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 241,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 331,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 421,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 511,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 601,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 691,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HMI2            },

    //    {QSTR("CCU1"),                  D_FONT_BOLD(5),      QRect( 50,122, 60, 30),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(690,107, 60, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_CCU2            },
//    {QSTR("CCU2"),                  D_FONT_BOLD(5),      QRect(690,122, 60, 30),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(690,172, 60, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DCCU2           },
//    {QSTR("DCCU2"),                 D_FONT_BOLD(5),      QRect(690,187, 60, 30),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect( 50,172, 60, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DCCU1           },
//    {QSTR("DCCU1"),                 D_FONT_BOLD(5),      QRect( 50,187, 60, 30),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect( 20,235, 40, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HMI1            },
//    {QSTR("HMI"),                   D_FONT_BOLD(5),      QRect( 20,255, 35, 30),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(750,235, 40, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HMI2            },
//    {QSTR("HMI"),                   D_FONT_BOLD(5),      QRect(750,255, 35, 30),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect( 70,248, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_GW1             },
//    {QSTR("GW"),                    D_FONT_BOLD(5),      QRect( 70,263, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(680,248, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_GW2             },
//    {QSTR("GW"),                    D_FONT_BOLD(5),      QRect(680,263, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect( 70,310, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ATC10           },
//    {QSTR("ATC10"),                 D_FONT_BOLD(5),      QRect( 70,325, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect( 70,360, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ATC11           },
//    {QSTR("ATC11"),                 D_FONT_BOLD(5),      QRect( 70,375, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(700,310, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ATC20           },
//    {QSTR("ATC20"),                 D_FONT_BOLD(5),      QRect(700,325, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(700,355, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ATC21           },
//    {QSTR("ATC21"),                 D_FONT_BOLD(5),      QRect(700,370, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(172,150, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW11         },
//    {QSTR("IO-GW"),                 D_FONT_BOLD(5),      QRect(172,167, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(172,220, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ACU11           },
//    {QSTR("ACU"),                   D_FONT_BOLD(5),      QRect(172,237, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(172,280, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCU11           },
//    {QSTR("BCU"),                   D_FONT_BOLD(5),      QRect(172,297, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(172,335, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC11          },
//    {QSTR("HVAC"),                  D_FONT_BOLD(5),      QRect(172,352, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(172,383, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_PA11            },
//    {QSTR("PA"),                    D_FONT_BOLD(5),      QRect(172,397, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(172,420, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TV11            },
//    {QSTR("TV"),                    D_FONT_BOLD(5),      QRect(172,437, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(262,150, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW22         },
//    {QSTR("IO-GW"),                 D_FONT_BOLD(5),      QRect(262,167, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(262,220, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU22           },
//    {QSTR("TCU"),                   D_FONT_BOLD(5),      QRect(262,237, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(262,335, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC22          },
//    {QSTR("HVAC"),                  D_FONT_BOLD(5),      QRect(262,352, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(262,380, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_AU_DB22         },
//    {QSTR("AU_DB"),                 D_FONT_BOLD(5),      QRect(262,397, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(352,150, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW33         },
//    {QSTR("IO-GW"),                 D_FONT_BOLD(5),      QRect(352,167, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(352,280, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCU33           },
//    {QSTR("BCU"),                   D_FONT_BOLD(5),      QRect(352,297, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(352,220, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU33           },
//    {QSTR("TCU"),                   D_FONT_BOLD(5),      QRect(352,237, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(352,335, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC33          },
//    {QSTR("HVAC"),                  D_FONT_BOLD(5),      QRect(352,352, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(352,380, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ST_DB33         },
//    {QSTR("ST_DB"),                 D_FONT_BOLD(5),      QRect(352,397, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(442,150, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW44         },
//    {QSTR("IO-GW"),                 D_FONT_BOLD(5),      QRect(442,167, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(442,220, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCU44           },
//    {QSTR("TCU"),                   D_FONT_BOLD(5),      QRect(442,237, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(442,280, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU44           },
//    {QSTR("BCU"),                   D_FONT_BOLD(5),      QRect(442,297, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(442,335, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC44          },
//    {QSTR("HVAC"),                  D_FONT_BOLD(5),      QRect(442,352, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(442,380, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ST_DB44         },
//    {QSTR("ST_DB"),                 D_FONT_BOLD(5),      QRect(442,397, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(532,150, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW55         },
//    {QSTR("IO-GW"),                 D_FONT_BOLD(5),      QRect(532,167, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(532,220, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU55           },
//    {QSTR("TCU"),                   D_FONT_BOLD(5),      QRect(532,237, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(532,335, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC55          },
//    {QSTR("HVAC"),                  D_FONT_BOLD(5),      QRect(532,352, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(532,380, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_AU_DB55         },
//    {QSTR("AU_DB"),                 D_FONT_BOLD(5),      QRect(532,397, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(622,150, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW66         },
//    {QSTR("IO-GW"),                 D_FONT_BOLD(5),      QRect(622,167, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(622,220, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ACU66           },
//    {QSTR("ACU"),                   D_FONT_BOLD(5),      QRect(622,237, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(622,280, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCU66           },
//    {QSTR("BCU"),                   D_FONT_BOLD(5),      QRect(622,297, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(622,338, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC66          },
//    {QSTR("HVAC"),                  D_FONT_BOLD(5),      QRect(622,352, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(622,383, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_PA66            },
//    {QSTR("PA"),                    D_FONT_BOLD(5),      QRect(622,397, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(622,420, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TV66            },
//    {QSTR("TV"),                    D_FONT_BOLD(5),      QRect(622,437, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(155, 470, 40, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP1      },
//    {QSTR("DOOR-GW"),               D_FONT_BOLD(5),      QRect(130, 485, 80, 20),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(130, 508, 80, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW1         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(245, 470, 40, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP2      },
//    {QSTR("DOOR-GW"),               D_FONT_BOLD(5),      QRect(220, 485, 80, 20),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(220, 508, 80, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW2         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(335, 470, 40, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP3      },
//    {QSTR("DOOR-GW"),               D_FONT_BOLD(5),      QRect(310, 485, 80, 20),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(310, 508, 80, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW3         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(425, 470, 40, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP4      },
//    {QSTR("DOOR-GW"),               D_FONT_BOLD(5),      QRect(400, 485, 80, 20),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(400, 508, 80, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW4         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(515, 470, 40, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP5      },
//    {QSTR("DOOR-GW"),               D_FONT_BOLD(5),      QRect(490, 485, 80, 20),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(490, 508, 80, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW5         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(605, 470, 40, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP6      },
//    {QSTR("DOOR-GW"),               D_FONT_BOLD(5),      QRect(580, 485, 80, 20),          Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(580, 508, 80, 15),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW6         },

    D_COMMON_PAGE_BUTTON_BAR
};
int g_VialSignalRomLen = sizeof(g_PicRom_VialSignal)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CVialSignalPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
END_MESSAGE_MAP()

CVialSignalPage::CVialSignalPage()
{
}

void CVialSignalPage::OnUpdatePage()
{
    UpdateVialSignal();
    updateTrain(ID_PIBVSP_TRAIN);

    updateErrorLine(ID_PIBVSP_TRAIN);
   // updateArrow(ID_PIBVSP_LEFTARROW,ID_PIBVSP_RIGHTARROW);
}

void CVialSignalPage::OnInitPage()
{

}

void CVialSignalPage::OnShowPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
}

void CVialSignalPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_DEBUGMAIN);
}

void CVialSignalPage::OnComBtn2Clk()
{

}

void CVialSignalPage::OnComBtn3Clk()
{

}

void CVialSignalPage::OnComBtn4Clk()
{

}

void CVialSignalPage::OnComBtn5Clk()
{

}

void CVialSignalPage::OnComBtn6Clk()
{

}

void CVialSignalPage::UpdateVialSignal()
{

//    QString door_gw1 = 0;
//    QString door_gw2 = 0;
//    QString door_gw3 = 0;
//    QString door_gw4 = 0;
//    QString door_gw5 = 0;
//    QString door_gw6 = 0;

     SetVSDataLabelString(ID_PIBVSP_LABEL_CCU1, CCU_HMI_220_1);

//    // lijian
    SetVSDataLabelString(ID_PIBVSP_LABEL_DCCU1, ERM_F02_7);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DCCU2, ERM_F12_7);


    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW11,DI_110_9%256 );
    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW22,DI_120_9%256 );
    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW33,DI_130_9%256 );
    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW44,DI_140_9%256 );
    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW55,DI_150_9%256 );
    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW66,DI_160_9%256 );
    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW77,DI_170_9%256 );
    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW88,DI_180_9%256 );

    SetVSDataLabelString(ID_PIBVSP_LABEL_BCU11,BCU_410_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_BCU44,BCU_420_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_BCU55,BCU_430_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_BCU88,BCU_440_1);

    SetVSDataLabelString(ID_PIBVSP_LABEL_TCU22,TCU_510_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_TCU33,TCU_520_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_TCU44,TCU_530_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_TCU55,TCU_540_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_TCU66,TCU_550_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_TCU77,TCU_560_1);

    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP1, DCU_OLD_710_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP2, DCU_OLD_720_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP3, DCU_OLD_730_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP4, DCU_OLD_740_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP5, DCU_OLD_750_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP6, DCU_OLD_760_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP7, DCU_OLD_770_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP8, DCU_OLD_780_1);

    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW1, DCU_OLD_790_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW2, DCU_OLD_7A0_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW3, DCU_OLD_7B0_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW4, DCU_OLD_7C0_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW5, DCU_OLD_7D0_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW6, DCU_OLD_7E0_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW7, DCU_OLD_7F0_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW8, DCU_OLD_700_1);

    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC11, HVAC_810_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC22, HVAC_820_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC33, HVAC_830_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC44, HVAC_840_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC55, HVAC_850_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC66, HVAC_860_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC77, HVAC_870_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC88, HVAC_880_1);

    SetVSDataLabelString(ID_PIBVSP_LABEL_PA11, PIS_910_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_PA88, PIS_920_1);

    SetVSDataLabelString(ID_PIBVSP_LABEL_FAS1, FAS_B10_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_FAS8, FAS_B20_1);

    SetVSDataLabelString(ID_PIBVSP_LABEL_ATC10, ATC_A10_1);

    SetVSDataLabelString(ID_PIBVSP_LABEL_ACU11,ACU_610_1);
    SetVSDataLabelString(ID_PIBVSP_LABEL_ACU88,ACU_620_1);

    SetVSDataLabelString(ID_PIBVSP_LABEL_HMI1,CCU_HMI_222_1 );
    SetVSDataLabelString(ID_PIBVSP_LABEL_HMI2,CCU_HMI_222_2);







//    // lijian
//    SetVialSigLabelString(ID_PIBVSP_LABEL_DCCU2, software_version1);

//    SetVSDataLabelString(ID_PIBVSP_LABEL_HMI2, run_status_data97);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_GW2, comm_status_data78);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_ATC20, comm_status_data73);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_ATC21, comm_status_data74);


//    door_gw1 = StrFromInt(comm_status_data79/256, 2);
//    door_gw2 = StrFromInt(comm_status_data80/256, 2);
//    door_gw3 = StrFromInt(comm_status_data81/256, 2);
//    door_gw4 = StrFromInt(comm_status_data82/256, 2);
//    door_gw5 = StrFromInt(comm_status_data83/256, 2);
//    door_gw6 = StrFromInt(comm_status_data84/256, 2);



//    return;
}

void CVialSignalPage::SetVSDataLabelString(int id, int DataVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));

    return;
}

void CVialSignalPage::SetVialSigLabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

    return;
}
