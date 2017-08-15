#include "CVersionInfoPage.h"

ROMDATA g_PicRom_VersionInfo[] =
{
    D_COMMON_PAGE_HEADER(QSTR("版本信息"))
    {"",                            D_FONT_BOLD(5),      QRect(150, 44, 720, 70),           Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBVIP_TRAIN               },
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
    {QSTR("DI"),        D_FONT_BOLD(6),      QRect( 6, 181,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("DO"),          D_FONT_BOLD(6),      QRect( 6, 211,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("AX"),            D_FONT_BOLD(6),      QRect( 6, 241,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("PWM"),            D_FONT_BOLD(6),      QRect( 6, 271,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("ACU"),        D_FONT_BOLD(6),      QRect( 6, 301,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("BCU"),           D_FONT_BOLD(6),      QRect( 6, 331,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("TCU"),          D_FONT_BOLD(6),      QRect( 6, 361,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("HVAC"),          D_FONT_BOLD(6),      QRect( 6, 391,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("DOOR"),        D_FONT_BOLD(6),      QRect( 6, 421,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("PIS1"),           D_FONT_BOLD(6),      QRect( 6, 451,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("ATC"),          D_FONT_BOLD(6),      QRect( 6, 481,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QSTR("HMI"),          D_FONT_BOLD(6),      QRect( 6, 511,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },

    {QSTR(""),                      D_FONT_BOLD(6),      QRect(   61,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_CCU2            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect(  151,121, 178, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_CCU1            },
    {QSTR("ERM"),                   D_FONT_BOLD(6),      QRect( 331,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 421,121, 178, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DCCU1            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 601,121, 178, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DCCU2            },
//    {QSTR("- -"),                      D_FONT_BOLD(4),      QRect( 421,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR("ERM"),                   D_FONT_BOLD(6),      QRect( 511,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 601,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DCCU2            },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 691,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_CCU2            },

    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 61,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW1            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW2            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 241,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW3            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 331,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW4            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 421,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW5            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 511,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW6            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 601,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW7            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 691,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_GW8            },

    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 61,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI1            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI2            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 241,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI3            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 331,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI4            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 421,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI5            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 511,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI6            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 601,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI7            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 691,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DI8            },


    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 61,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO1            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO2            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 241,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO3            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 331,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO4            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 421,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO5            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 511,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO6            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 601,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO7            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 691,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_DO8            },

    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 61,241, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_AX1            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151,241, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_AX2            },
    {QSTR("- -"),                      D_FONT_BOLD(6),      QRect( 241,241, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 331,241, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_AX4            },
    {QSTR("- -"),                      D_FONT_BOLD(6),      QRect( 421,241, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("- -"),                      D_FONT_BOLD(6),      QRect( 511,241, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 601,241, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_AX7            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 691,241, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_AX8            },

    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 61,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_PWM1            },
    {QSTR("- -"),                      D_FONT_BOLD(6),      QRect( 151,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("- -"),                      D_FONT_BOLD(6),      QRect( 241,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("- -"),                      D_FONT_BOLD(6),      QRect( 331,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("- -"),                      D_FONT_BOLD(6),      QRect( 421,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("- -"),                      D_FONT_BOLD(6),      QRect( 511,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("- -"),                      D_FONT_BOLD(6),      QRect( 601,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 691,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_IO_PWM8            },

    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 61,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_ACU11            },
    {QSTR("- -"),                      D_FONT_BOLD(6),      QRect( 151,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("- -"),                      D_FONT_BOLD(6),      QRect( 241,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("- -"),                      D_FONT_BOLD(6),      QRect( 331,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("- -"),                      D_FONT_BOLD(6),      QRect( 421,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("- -"),                      D_FONT_BOLD(6),      QRect( 511,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("- -"),                      D_FONT_BOLD(6),      QRect( 601,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 691,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_ACU88            },

    {QSTR(""),                         D_FONT_BOLD(6),      QRect( 61,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_BCU11            },
    {QSTR("- -"),                      D_FONT_BOLD(6),      QRect( 151,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("- -"),                      D_FONT_BOLD(6),      QRect( 241,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 331,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_BCU44            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 421,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_BCU55            },
    {QSTR("- -"),                      D_FONT_BOLD(6),      QRect( 511,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("- -"),                      D_FONT_BOLD(6),      QRect( 601,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                         D_FONT_BOLD(6),      QRect( 691,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_BCU88            },

    {QSTR("- -"),                         D_FONT_BOLD(6),      QRect( 61,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TCU22            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 241,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TCU33            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 331,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TCU44            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 421,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TCU55            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 511,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TCU66            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 601,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_TCU77            },
    {QSTR("- -"),                         D_FONT_BOLD(6),      QRect( 691,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },

    {QSTR(""),                         D_FONT_BOLD(5),      QRect( 61,391, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC11            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 151,391, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC22            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 241,391, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC33            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 331,391, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC44            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 421,391, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC55            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 511,391, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC66            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 601,391, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC77            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 691,391, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC88            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 61,405, 88, 15),           Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW1            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 151,405, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW2            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 241,405, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW3            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 331,405, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW4            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 421,405, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW5            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 511,405, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW6            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 601,405, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW7            },
    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 691,405, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC_GW8            },

//    {QSTR(""),                         D_FONT_BOLD(6),      QRect( 61,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC11            },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC22            },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 241,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC33            },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 331,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC44            },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 421,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC55            },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 511,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC66            },
//    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 601,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC77            },
//    {QSTR(""),                         D_FONT_BOLD(6),      QRect( 691,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HVAC88            },


    {QSTR(""),                         D_FONT_BOLD(6),      QRect( 61,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR1            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 151,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR2            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 241,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR3            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 331,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR4            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 421,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR5            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 511,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR6            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 601,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR7            },
    {QSTR(""),                         D_FONT_BOLD(6),      QRect( 691,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR8            },
//    {QSTR(""),                         D_FONT_BOLD(5),      QRect( 61,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR1            },
//    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 151,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR2            },
//    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 241,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR3            },
//    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 331,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR4            },
//    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 421,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR5            },
//    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 511,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR6            },
//    {QSTR(""),                      D_FONT_BOLD(5),      QRect( 601,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR7            },
//    {QSTR(""),                         D_FONT_BOLD(5),      QRect( 691,435, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_DOOR8            },


    {QSTR(""),                         D_FONT_BOLD(6),      QRect( 61,451, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_PIS1            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 151,451, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("FAS1"),                      D_FONT_BOLD(6),      QRect( 241,451, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 331,451, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_FAS1            },
    {QSTR("FAS2"),                      D_FONT_BOLD(6),      QRect( 421,451, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 511,451, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_FAS8            },
    {QSTR("PIS2"),                      D_FONT_BOLD(6),      QRect( 601,451, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                         D_FONT_BOLD(6),      QRect( 691,451, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_PIS8            },

    {QSTR("--"),                         D_FONT_BOLD(6),      QRect( 61,481, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 151,481, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 241,481, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 331,481, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 421,481, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 511,481, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                      D_FONT_BOLD(6),      QRect( 601,481, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,              ID_PIBVIP_LABEL_ATC11            },
    {QSTR(""),                         D_FONT_BOLD(6),      QRect( 691,481, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_ATC10            },

    {QSTR(""),                         D_FONT_BOLD(6),      QRect( 61,511, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HMI1            },
    {QSTR("1.2.5 200ms "),            D_FONT_BOLD(6),      QRect( 151,511, 160, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
  //  {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 241,511, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 331,511, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 421,511, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 511,511, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR("--"),                      D_FONT_BOLD(6),      QRect( 601,511, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QSTR(""),                         D_FONT_BOLD(6),      QRect( 691,511, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVIP_LABEL_HMI2            },

//    {QSTR(""),                      D_FONT_BOLD(4),      QRect( 45,107, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_CCU1          },
//    {QSTR("CCU1"),                  D_FONT_BOLD(5),      QRect( 50,122, 60, 30),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(685,107, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_CCU2          },
//    {QSTR("CCU2"),                  D_FONT_BOLD(5),      QRect(690,122, 60, 30),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(685,172, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_DCCU2         },
//    {QSTR("DCCU2"),                 D_FONT_BOLD(5),      QRect(690,187, 60, 30),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect( 45,172, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_DCCU1         },
//    {QSTR("DCCU1"),                 D_FONT_BOLD(5),      QRect( 50,187, 60, 30),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(  5,235, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_HMI1          },
//    {QSTR("HMI"),                   D_FONT_BOLD(5),      QRect( 20,255, 35, 30),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(730,235, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_HMI2          },
//    {QSTR("HMI"),                   D_FONT_BOLD(5),      QRect(750,255, 35, 30),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect( 70,248, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GW1           },
//    {QSTR("GW"),                    D_FONT_BOLD(5),      QRect( 70,263, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(675,248, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GW2           },
//    {QSTR("GW"),                    D_FONT_BOLD(5),      QRect(680,263, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect( 60,310, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_ATC10         },
//    {QSTR("ATC10"),                 D_FONT_BOLD(5),      QRect( 70,325, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect( 60,360, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_ATC11         },
//    {QSTR("ATC11"),                 D_FONT_BOLD(5),      QRect( 70,375, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(690,310, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_ATC20         },
//    {QSTR("ATC20"),                 D_FONT_BOLD(5),      QRect(700,325, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(690,355, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_ATC21         },
//    {QSTR("ATC21"),                 D_FONT_BOLD(5),      QRect(700,370, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(172,150, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_IO_GW11       },
//    {QSTR("IO-GW"),                 D_FONT_BOLD(5),      QRect(172,167, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(165,220, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_ACU11         },
//    {QSTR("ACU"),                   D_FONT_BOLD(5),      QRect(172,237, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(165,280, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_BCU11         },
//    {QSTR("BCU"),                   D_FONT_BOLD(5),      QRect(172,297, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(172,335, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GW11          },
//    {QSTR("GW"),                    D_FONT_BOLD(5),      QRect(172,352, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(160,380, 75, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_HVAC11        },
//    {QSTR("HVAC"),                  D_FONT_BOLD(5),      QRect(172,397, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(165,420, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_PA11          },
//    {QSTR("PA"),                    D_FONT_BOLD(5),      QRect(172,437, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(165,460, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_TV11          },
//    {QSTR("TV"),                    D_FONT_BOLD(5),      QRect(172,477, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(262,150, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_IO_GW22       },
//    {QSTR("IO-GW"),                 D_FONT_BOLD(5),      QRect(262,167, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(257,220, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_TCU22         },
//    {QSTR("TCU"),                   D_FONT_BOLD(5),      QRect(262,237, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(262,335, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GW22          },
//    {QSTR("GW"),                    D_FONT_BOLD(5),      QRect(262,352, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(252,380, 75, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_HVAC22        },
//    {QSTR("HVAC"),                  D_FONT_BOLD(5),      QRect(262,397, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(257,420, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_AU_DB22       },
//    {QSTR("AU_DB"),                 D_FONT_BOLD(5),      QRect(262,437, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(352,150, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_IO_GW33       },
//    {QSTR("IO-GW"),                 D_FONT_BOLD(5),      QRect(352,167, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(347,280, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_BCU33         },
//    {QSTR("BCU"),                   D_FONT_BOLD(5),      QRect(352,297, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(347,220, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_TCU33         },
//    {QSTR("TCU"),                   D_FONT_BOLD(5),      QRect(352,237, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(352,335, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GW33          },
//    {QSTR("GW"),                    D_FONT_BOLD(5),      QRect(352,352, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(342,380, 75, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_HVAC33        },
//    {QSTR("HVAC"),                  D_FONT_BOLD(5),      QRect(352,397, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(347,420, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_ST_DB33       },
//    {QSTR("ST_DB"),                 D_FONT_BOLD(5),      QRect(352,437, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(442,150, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_IO_GW44       },
//    {QSTR("IO-GW"),                 D_FONT_BOLD(5),      QRect(442,167, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(435,220, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_TCU44         },
//    {QSTR("TCU"),                   D_FONT_BOLD(5),      QRect(442,237, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(435,280, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_BCU44       },
//    {QSTR("BCU"),                   D_FONT_BOLD(5),      QRect(442,297, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(442,335, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GW44          },
//    {QSTR("GW"),                    D_FONT_BOLD(5),      QRect(442,352, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(430,380, 75, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_HVAC44        },
//    {QSTR("HVAC"),                  D_FONT_BOLD(5),      QRect(442,397, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(435,420, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_ST_DB44       },
//    {QSTR("ST_DB"),                 D_FONT_BOLD(5),      QRect(442,437, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(532,150, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_IO_GW55       },
//    {QSTR("IO-GW"),                 D_FONT_BOLD(5),      QRect(532,167, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(527,220, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_TCU55         },
//    {QSTR("TCU"),                   D_FONT_BOLD(5),      QRect(532,237, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(532,335, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GW55          },
//    {QSTR("GW"),                    D_FONT_BOLD(5),      QRect(532,352, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(520,380, 75, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_HVAC55        },
//    {QSTR("HVAC"),                  D_FONT_BOLD(5),      QRect(532,397, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(527,420, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_AU_DB55       },
//    {QSTR("AU_DB"),                 D_FONT_BOLD(5),      QRect(532,437, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(622,150, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_IO_GW66       },
//    {QSTR("IO-GW"),                 D_FONT_BOLD(5),      QRect(622,167, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(615,220, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_ACU66         },
//    {QSTR("ACU"),                   D_FONT_BOLD(5),      QRect(622,237, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(610,280, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_BCU66         },
//    {QSTR("BCU"),                   D_FONT_BOLD(5),      QRect(622,297, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(622,338, 50, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GW66          },
//    {QSTR("GW"),                    D_FONT_BOLD(5),      QRect(622,352, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(610,382, 75, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_HVAC66        },
//    {QSTR("HVAC"),                  D_FONT_BOLD(5),      QRect(622,397, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(615,420, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_PA66          },
//    {QSTR("PA"),                    D_FONT_BOLD(5),      QRect(622,437, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(615,460, 70, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_TV66          },
//    {QSTR("TV"),                    D_FONT_BOLD(5),      QRect(622,477, 50, 20),            Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect( 99, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GWDOOR1       },
//    {QSTR("GW"),                    D_FONT_BOLD(5),      QRect( 99, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(150, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_DOOR1         },
//    {QSTR("DOOR"),                  D_FONT_BOLD(5),      QRect(150, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(210, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GWDOOR2       },
//    {QSTR("GW"),                    D_FONT_BOLD(5),      QRect(210, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(261, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_DOOR2         },
//    {QSTR("DOOR"),                  D_FONT_BOLD(5),      QRect(261, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(321, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GWDOOR3       },
//    {QSTR("GW"),                    D_FONT_BOLD(5),      QRect(321, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(372, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_DOOR3         },
//    {QSTR("DOOR"),                  D_FONT_BOLD(5),      QRect(372, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(432, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GWDOOR4       },
//    {QSTR("GW"),                    D_FONT_BOLD(5),      QRect(432, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(483, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_DOOR4         },
//    {QSTR("DOOR"),                  D_FONT_BOLD(5),      QRect(483, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(543, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GWDOOR5       },
//    {QSTR("GW"),                    D_FONT_BOLD(5),      QRect(543, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(594, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_DOOR5         },
//    {QSTR("DOOR"),                  D_FONT_BOLD(5),      QRect(594, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(654, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_GWDOOR6       },
//    {QSTR("GW"),                    D_FONT_BOLD(5),      QRect(654, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR(""),                      D_FONT_BOLD(4),      QRect(705, 500, 50, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBVIP_LABEL_DOOR6         },
//    {QSTR("DOOR"),                  D_FONT_BOLD(5),      QRect(705, 515, 50, 20),           Qt::black,                Qt::green,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("当前显示屏软件版本：V1.10.31"), D_FONT_BOLD(5),   QRect( 5, 535,270, 15),            Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },

    D_COMMON_PAGE_BUTTON_BAR
};
int g_VersionInfoRomLen = sizeof(g_PicRom_VersionInfo)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CVersionInfoPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
END_MESSAGE_MAP()

CVersionInfoPage::CVersionInfoPage()
{
}

void CVersionInfoPage::OnUpdatePage()
{
    UpdateVersionIofo();
    updateTrain(ID_PIBVIP_TRAIN);

    updateErrorLine(ID_PIBVIP_TRAIN);
  //  updateArrow(ID_PIBVIP_LEFTARROW,ID_PIBVIP_RIGHTARROW);
}

void CVersionInfoPage::OnInitPage()
{

}

void CVersionInfoPage::OnShowPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
}

void CVersionInfoPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_DEBUGMAIN);
}

void CVersionInfoPage::OnComBtn2Clk()
{

}

void CVersionInfoPage::OnComBtn3Clk()
{

}

void CVersionInfoPage::OnComBtn4Clk()
{

}

void CVersionInfoPage::OnComBtn5Clk()
{

}

void CVersionInfoPage::OnComBtn6Clk()
{

}

void CVersionInfoPage::UpdateVersionIofo()
{

    qreal Version_IO_GW1 = 0;
    qreal Version_IO_GW2 = 0;
    qreal Version_IO_GW3 = 0;
    qreal Version_IO_GW4 = 0;
    qreal Version_IO_GW5 = 0;
    qreal Version_IO_GW6 = 0;
    qreal Version_IO_GW7 = 0;
    qreal Version_IO_GW8 = 0;

    qreal Version_IO_DI1 = 0;
    qreal Version_IO_DI2 = 0;
    qreal Version_IO_DI3 = 0;
    qreal Version_IO_DI4 = 0;
    qreal Version_IO_DI5 = 0;
    qreal Version_IO_DI6 = 0;
    qreal Version_IO_DI7 = 0;
    qreal Version_IO_DI8 = 0;

    qreal Version_IO_DO1 = 0;
    qreal Version_IO_DO2 = 0;
    qreal Version_IO_DO3 = 0;
    qreal Version_IO_DO4 = 0;
    qreal Version_IO_DO5 = 0;
    qreal Version_IO_DO6 = 0;
    qreal Version_IO_DO7 = 0;
    qreal Version_IO_DO8 = 0;

    qreal Version_IO_AX1 = 0;
    qreal Version_IO_AX2 = 0;
    qreal Version_IO_AX4 = 0;
    qreal Version_IO_AX7 = 0;
    qreal Version_IO_AX8 = 0;

    qreal Version_IO_PWM1 = 0;
    qreal Version_IO_PWM8 = 0;

    Version_IO_GW1=DivNum(DI_110_13%256,10);
    Version_IO_GW2=DivNum(DI_120_13%256,10);
    Version_IO_GW3=DivNum(DI_130_13%256,10);
    Version_IO_GW4=DivNum(DI_140_13%256,10);
    Version_IO_GW5=DivNum(DI_150_13%256,10);
    Version_IO_GW6=DivNum(DI_160_13%256,10);
    Version_IO_GW7=DivNum(DI_170_13%256,10);
    Version_IO_GW8=DivNum(DI_180_13%256,10);

    Version_IO_DI1=DivNum(DI_110_13/256,10);
    Version_IO_DI2=DivNum(DI_120_13/256,10);
    Version_IO_DI3=DivNum(DI_130_13/256,10);
    Version_IO_DI4=DivNum(DI_140_13/256,10);
    Version_IO_DI5=DivNum(DI_150_13/256,10);
    Version_IO_DI6=DivNum(DI_160_13/256,10);
    Version_IO_DI7=DivNum(DI_170_13/256,10);
    Version_IO_DI8=DivNum(DI_180_13/256,10);

    Version_IO_DO1=DivNum(DI_110_14%256,10);
    Version_IO_DO2=DivNum(DI_120_14%256,10);
    Version_IO_DO3=DivNum(DI_130_14%256,10);
    Version_IO_DO4=DivNum(DI_140_14%256,10);
    Version_IO_DO5=DivNum(DI_150_14%256,10);
    Version_IO_DO6=DivNum(DI_160_14%256,10);
    Version_IO_DO7=DivNum(DI_170_14%256,10);
    Version_IO_DO8=DivNum(DI_180_14%256,10);


    Version_IO_AX1=DivNum(DI_110_14/256,10);
    Version_IO_AX2=DivNum(DI_120_14/256,10);
    Version_IO_AX4=DivNum(DI_140_14/256,10);
    Version_IO_AX7=DivNum(DI_170_14/256,10);
    Version_IO_AX8=DivNum(DI_180_14/256,10);

    Version_IO_PWM1=DivNum(DI_110_15%256,10);
    Version_IO_PWM8=DivNum(DI_180_15%256,10);
    char buff[10];

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_GW1);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_GW1))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_GW2);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_GW2))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_GW3);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_GW3))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_GW4);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_GW4))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_GW5);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_GW5))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_GW6);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_GW6))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_GW7);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_GW7))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_GW8);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_GW8))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_DI1);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DI1))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_DI2);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DI2))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_DI3);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DI3))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_DI4);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DI4))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_DI5);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DI5))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_DI6);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DI6))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_DI7);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DI7))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_DI8);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DI8))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_DO1);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DO1))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_DO2);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DO2))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_DO3);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DO3))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_DO4);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DO4))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_DO5);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DO5))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_DO6);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DO6))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_DO7);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DO7))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_DO8);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_DO8))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_AX1);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_AX1))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_AX2);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_AX2))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_AX4);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_AX4))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_AX7);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_AX7))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_AX8);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_AX8))->SetCtrlText(buff);

    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_PWM1);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_PWM1))->SetCtrlText(buff);
    memset(buff, '\0', 10);
    sprintf(buff, "%.1f", Version_IO_PWM8);
    ((CLabel *)GetDlgItem(ID_PIBVIP_LABEL_IO_PWM8))->SetCtrlText(buff);

    ACU__version1=StrFromInt( ACU_611_3/256, 10 )+"."+StrFromInt( ACU_611_4%256, 10 )+"."+StrFromInt( ACU_611_4/256, 10 );
    ACU__version2=StrFromInt( ACU_621_3/256, 10 )+"."+StrFromInt( ACU_621_4%256, 10 )+"."+StrFromInt( ACU_621_4/256, 10 );
    BCU__version1=StrFromInt( BCU_TC1_414_424_1%256, 10 )+"."+StrFromInt( BCU_TC1_414_424_1/256, 10 )+"."+StrFromInt( BCU_TC1_414_424_2%256, 10 );
    BCU__version2=StrFromInt( BCU_TC1_414_424_2/256, 10 )+"."+StrFromInt( BCU_TC1_414_424_3%256, 10 )+"."+StrFromInt( BCU_TC1_414_424_3/256, 10 );
    BCU__version3=StrFromInt( BCU_TC2_434_444_1%256, 10 )+"."+StrFromInt( BCU_TC2_434_444_1/256, 10 )+"."+StrFromInt( BCU_TC2_434_444_2%256, 10 );
    BCU__version4=StrFromInt( BCU_TC2_434_444_2/256, 10 )+"."+StrFromInt( BCU_TC2_434_444_3%256, 10 )+"."+StrFromInt( BCU_TC2_434_444_3/256, 10 );
    TCU__version1=StrFromInt( TCU_511_1%256, 10 )+"."+StrFromInt( TCU_511_1/256, 10 )+"."+StrFromInt( TCU_511_2%256, 10 );
    TCU__version2=StrFromInt( TCU_521_1%256, 10 )+"."+StrFromInt( TCU_521_1/256, 10 )+"."+StrFromInt( TCU_521_2%256, 10 );
    TCU__version3=StrFromInt( TCU_531_1%256, 10 )+"."+StrFromInt( TCU_531_1/256, 10 )+"."+StrFromInt( TCU_531_2%256, 10 );
    TCU__version4=StrFromInt( TCU_541_1%256, 10 )+"."+StrFromInt( TCU_541_1/256, 10 )+"."+StrFromInt( TCU_541_2%256, 10 );
    TCU__version5=StrFromInt( TCU_551_1%256, 10 )+"."+StrFromInt( TCU_551_1/256, 10 )+"."+StrFromInt( TCU_551_2%256, 10 );
    TCU__version6=StrFromInt( TCU_561_1%256, 10 )+"."+StrFromInt( TCU_561_1/256, 10 )+"."+StrFromInt( TCU_561_2%256, 10 );

     ATC__version1="Soft "+StrFromInt( soft_version21/256, 10 );
     ATC__version2="Data "+StrFromInt( soft_version23/256, 10 );
//    ATC__version3=StrFromInt( soft_version25/256, 10 )+"."+StrFromInt( soft_version25%256, 10 )+"."+StrFromInt( soft_version26/256, 10 );
//    ATC__version4=StrFromInt( soft_version27/256, 10 )+"."+StrFromInt( soft_version27%256, 10 )+"."+StrFromInt( soft_version28/256, 10 );
    PIS_PA_version1=StrFromInt( PIS_910_2%256, 10 )+"."+StrFromInt( PIS_910_2/256, 10 )+"."+StrFromInt( PIS_910_3%256, 10 );
    PIS_PA_version2=StrFromInt( PIS_920_2%256, 10 )+"."+StrFromInt( PIS_920_2/256, 10 )+"."+StrFromInt( PIS_920_3%256, 10 );

    FAS_version1="1."+StrFromInt( FAS_B10_16/256, 10 );
    FAS_version2="1."+StrFromInt( FAS_B20_16/256, 10 );

    Door_GW_Version1=StrFromInt( soft_version45/256, 10 )+"."+StrFromInt( soft_version45%256, 10 );
    Door_GW_Version2=StrFromInt( soft_version47/256, 10 )+"."+StrFromInt( soft_version47%256, 10 );
    Door_GW_Version3=StrFromInt( soft_version49/256, 10 )+"."+StrFromInt( soft_version49%256, 10 );
    Door_GW_Version4=StrFromInt( soft_version51/256, 10 )+"."+StrFromInt( soft_version51%256, 10 );
    Door_GW_Version5=StrFromInt( soft_version53/256, 10 )+"."+StrFromInt( soft_version53%256, 10 );
    Door_GW_Version6=StrFromInt( soft_version55/256, 10 )+"."+StrFromInt( soft_version55%256, 10 );


    Door_Ctr_Version1=StrFromInt( DCU_711_1/256, 10 )+"."+StrFromInt( DCU_711_1%256, 10 );
    Door_Ctr_Version2=StrFromInt( DCU_721_1/256, 10 )+"."+StrFromInt( DCU_721_1%256, 10 );
    Door_Ctr_Version3=StrFromInt( DCU_731_1/256, 10 )+"."+StrFromInt( DCU_731_1%256, 10 );
    Door_Ctr_Version4=StrFromInt( DCU_741_1/256, 10 )+"."+StrFromInt( DCU_741_1%256, 10 );
    Door_Ctr_Version5=StrFromInt( DCU_751_1/256, 10 )+"."+StrFromInt( DCU_751_1%256, 10 );
    Door_Ctr_Version6=StrFromInt( DCU_761_1/256, 10 )+"."+StrFromInt( DCU_761_1%256, 10 );
    Door_Ctr_Version7=StrFromInt( DCU_771_1/256, 10 )+"."+StrFromInt( DCU_771_1%256, 10 );
    Door_Ctr_Version8=StrFromInt( DCU_781_1/256, 10 )+"."+StrFromInt( DCU_781_1%256, 10 );

    HVAC_Versino1=StrFromInt( HVAC_810_7%256, 10 )+"."+StrFromInt( HVAC_810_7/256, 10 )+"."+StrFromInt( HVAC_810_8%256, 10 )+"."+StrFromInt( HVAC_810_8/256, 10 );
    HVAC_Versino2=StrFromInt( HVAC_820_7%256, 10 )+"."+StrFromInt( HVAC_820_7/256, 10 )+"."+StrFromInt( HVAC_820_8%256, 10 )+"."+StrFromInt( HVAC_820_8/256, 10 );
    HVAC_Versino3=StrFromInt( HVAC_830_7%256, 10 )+"."+StrFromInt( HVAC_830_7/256, 10 )+"."+StrFromInt( HVAC_830_8%256, 10 )+"."+StrFromInt( HVAC_830_8/256, 10 );
    HVAC_Versino4=StrFromInt( HVAC_840_7%256, 10 )+"."+StrFromInt( HVAC_840_7/256, 10 )+"."+StrFromInt( HVAC_840_8%256, 10 )+"."+StrFromInt( HVAC_840_8/256, 10 );
    HVAC_Versino5=StrFromInt( HVAC_850_7%256, 10 )+"."+StrFromInt( HVAC_850_7/256, 10 )+"."+StrFromInt( HVAC_850_8%256, 10 )+"."+StrFromInt( HVAC_850_8/256, 10 );
    HVAC_Versino6=StrFromInt( HVAC_860_7%256, 10 )+"."+StrFromInt( HVAC_860_7/256, 10 )+"."+StrFromInt( HVAC_860_8%256, 10 )+"."+StrFromInt( HVAC_860_8/256, 10 );
    HVAC_Versino7=StrFromInt( HVAC_870_7%256, 10 )+"."+StrFromInt( HVAC_870_7/256, 10 )+"."+StrFromInt( HVAC_870_8%256, 10 )+"."+StrFromInt( HVAC_870_8/256, 10 );
    HVAC_Versino8=StrFromInt( HVAC_880_7%256, 10 )+"."+StrFromInt( HVAC_880_7/256, 10 )+"."+StrFromInt( HVAC_880_8%256, 10 )+"."+StrFromInt( HVAC_880_8/256, 10 );

    HVAC_GW_Versino1="GW "+StrFromInt( HVAC_810_16/256, 10 )+"."+StrFromInt( HVAC_810_16%256, 10 );
    HVAC_GW_Versino2="GW "+StrFromInt( HVAC_820_16/256, 10 )+"."+StrFromInt( HVAC_820_16%256, 10 );
    HVAC_GW_Versino3="GW "+StrFromInt( HVAC_830_16/256, 10 )+"."+StrFromInt( HVAC_830_16%256, 10 );
    HVAC_GW_Versino4="GW "+StrFromInt( HVAC_840_16/256, 10 )+"."+StrFromInt( HVAC_840_16%256, 10 );
    HVAC_GW_Versino5="GW "+StrFromInt( HVAC_850_16/256, 10 )+"."+StrFromInt( HVAC_850_16%256, 10 );
    HVAC_GW_Versino6="GW "+StrFromInt( HVAC_860_16/256, 10 )+"."+StrFromInt( HVAC_860_16%256, 10 );
    HVAC_GW_Versino7="GW "+StrFromInt( HVAC_870_16/256, 10 )+"."+StrFromInt( HVAC_870_16%256, 10 );
    HVAC_GW_Versino8="GW "+StrFromInt( HVAC_880_16/256, 10 )+"."+StrFromInt( HVAC_880_16%256, 10 );

    HMI_version1 = StrFromInt( HMI_202_2%256, 10 )+"."+StrFromInt( HMI_202_1/256, 10 )+"."+StrFromInt( HMI_202_1%256, 10 );
    HMI_version2=  StrFromInt( HMI_282_2%256, 10 )+"."+StrFromInt( HMI_282_1/256, 10 )+"."+StrFromInt( HMI_282_1%256, 10 );
//    HMI_GW_version1=StrFromInt( soft_version79/256, 10 )+"."+StrFromInt( soft_version79%256, 10 );
//    HMI_GW_version2=StrFromInt( soft_version80/256, 10 )+"."+StrFromInt( soft_version80%256, 10 );
    if (CCU_HMI_221_15/256 == 1)
    {
        CCU_version2="CCU1";
    }
    if (CCU_HMI_221_16%256 == 1)
    {
        CCU_version2="CCU2";
    }
    if ((CCU_HMI_221_15/256 == 0)&&(CCU_HMI_221_16%256 == 0))
    {
        CCU_version2="NULL";
    }
    if ((CCU_HMI_221_15/256 == 1)&&(CCU_HMI_221_16%256 == 1))
    {
        CCU_version2="CCU1&2";
    }
    CCU_version="soft:"+StrFromInt( CCU_HMI_220_16/256, 10 )+"."+StrFromInt( CCU_HMI_220_16%256, 10 )+"  "+"MVB:"+StrFromInt( CCU_HMI_223_3/256, 10 )+"."+StrFromInt( CCU_HMI_223_3%256, 10 )+"\n"+"SDB:"+StrFromInt( CCU_HMI_223_4/256, 10 )+"."+StrFromInt( CCU_HMI_223_4%256, 10 )+"  "+"VXW:"+StrFromInt( CCU_HMI_223_5/256, 10 )+"."+StrFromInt( CCU_HMI_223_5%256, 10 );
    DCCU_version="soft:"+StrFromInt( ERM_F00_16/256, 10 )+"."+StrFromInt( ERM_F00_16%256, 10 )+"  "+"MVB:"+StrFromInt( ERM_F02_2/256, 10 )+"."+StrFromInt( ERM_F02_2%256, 10 )+"\n"+"SDB:"+StrFromInt( ERM_F02_3/256, 10 )+"."+StrFromInt( ERM_F02_3%256, 10 )+"  "+"VXW:"+StrFromInt( ERM_F02_1/256, 10 )+"."+StrFromInt( ERM_F02_1%256, 10 );
    DCCU_version2="soft:"+StrFromInt( ERM_F10_16/256, 10 )+"."+StrFromInt( ERM_F10_16%256, 10 )+"  "+"MVB:"+StrFromInt( ERM_F12_2/256, 10 )+"."+StrFromInt( ERM_F12_2%256, 10 )+"\n"+"SDB:"+StrFromInt( ERM_F12_3/256, 10 )+"."+StrFromInt( ERM_F12_3%256, 10 )+"  "+"VXW:"+StrFromInt( ERM_F12_1/256, 10 )+"."+StrFromInt( ERM_F12_1%256, 10 );

    //    IO_GW_version1=StrFromInt( soft_version85/256, 10 )+"."+StrFromInt( soft_version85%256, 10 );
//    IO_GW_version2=StrFromInt( soft_version86/256, 10 )+"."+StrFromInt( soft_version86%256, 10 );
//    IO_GW_version3=StrFromInt( soft_version87/256, 10 )+"."+StrFromInt( soft_version87%256, 10 );
//    IO_GW_version4=StrFromInt( soft_version88/256, 10 )+"."+StrFromInt( soft_version88%256, 10 );
//    IO_GW_version5=StrFromInt( soft_version89/256, 10 )+"."+StrFromInt( soft_version89%256, 10 );
//    IO_GW_version6=StrFromInt( soft_version90/256, 10 )+"."+StrFromInt( soft_version90%256, 10 );

        SetVerInfoLabelString(ID_PIBVIP_LABEL_ACU11, ACU__version1);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_ACU88, ACU__version2);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_BCU11, BCU__version1);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_BCU44, BCU__version2);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_BCU55, BCU__version3);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_BCU88, BCU__version4);

        SetVerInfoLabelString(ID_PIBVIP_LABEL_TCU22, TCU__version1);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_TCU33, TCU__version2);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_TCU44, TCU__version3);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_TCU55, TCU__version4);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_TCU66, TCU__version5);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_TCU77, TCU__version6);

        SetVerInfoLabelString(ID_PIBVIP_LABEL_ATC10, ATC__version1);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_ATC11, ATC__version2);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_ATC20, ATC__version3);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_ATC21, ATC__version4);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_PIS1, PIS_PA_version1);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_PIS8, PIS_PA_version2);

        SetVerInfoLabelString(ID_PIBVIP_LABEL_FAS1, FAS_version1);
        SetVerInfoLabelString(ID_PIBVIP_LABEL_FAS8, FAS_version2);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_AU_DB22, PIS_DB_version1);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_ST_DB33, PIS_ST_version1);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_TV11, PIS_TV_version1);

//    SetVerInfoLabelString(ID_PIBVIP_LABEL_AU_DB55, PIS_DB_version2);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_ST_DB44, PIS_ST_version2);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_TV66, PIS_TV_version2);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_GWDOOR1, Door_GW_Version1);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_GWDOOR2, Door_GW_Version2);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_GWDOOR3, Door_GW_Version3);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_GWDOOR4, Door_GW_Version4);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_GWDOOR5, Door_GW_Version5);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_GWDOOR6, Door_GW_Version6);

    SetVerInfoLabelString(ID_PIBVIP_LABEL_DOOR1, Door_Ctr_Version1);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_DOOR2, Door_Ctr_Version2);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_DOOR3, Door_Ctr_Version3);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_DOOR4, Door_Ctr_Version4);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_DOOR5, Door_Ctr_Version5);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_DOOR6, Door_Ctr_Version6);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_DOOR7, Door_Ctr_Version7);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_DOOR8, Door_Ctr_Version8);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC11, HVAC_Versino1);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC22, HVAC_Versino2);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC33, HVAC_Versino3);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC44, HVAC_Versino4);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC55, HVAC_Versino5);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC66, HVAC_Versino6);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC77, HVAC_Versino7);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC88, HVAC_Versino8);

    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC_GW1, HVAC_GW_Versino1);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC_GW2, HVAC_GW_Versino2);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC_GW3, HVAC_GW_Versino3);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC_GW4, HVAC_GW_Versino4);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC_GW5, HVAC_GW_Versino5);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC_GW6, HVAC_GW_Versino6);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC_GW7, HVAC_GW_Versino7);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_HVAC_GW8, HVAC_GW_Versino8);

    SetVerInfoLabelString(ID_PIBVIP_LABEL_HMI1, HMI_version1);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_HMI2, HMI_version2);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_GW1, HMI_GW_version1);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_GW2, HMI_GW_version2);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_CCU1, CCU_version);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_DCCU1, DCCU_version);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_CCU2, CCU_version2);
    SetVerInfoLabelString(ID_PIBVIP_LABEL_DCCU2, DCCU_version2);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_IO_GW11, IO_GW_version1);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_IO_GW22, IO_GW_version2);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_IO_GW33, IO_GW_version3);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_IO_GW44, IO_GW_version4);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_IO_GW55, IO_GW_version5);
//    SetVerInfoLabelString(ID_PIBVIP_LABEL_IO_GW66, IO_GW_version6);

    return;
}

void CVersionInfoPage::SetVerInfoLabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

    return;
}

