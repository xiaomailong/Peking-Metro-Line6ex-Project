#include "CHVACSettingPage.h"
#include <qdebug.h>

ROMDATA g_PicRom_HVACSetting[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    D_COMMON_PAGE_HEADER(QSTR("空调设置"))

    {QSTR("通信中断"),       D_FONT_BOLD(8),      QRect( 20,   6, 162,  30),            Qt::red,                 Qt::white,                CONTROL_LABEL,          ID_CHVACSET_COMMINTERRUPT                 },

    {"",                   D_FONT_BOLD(5),      QRect(178, 108, 600,  70),            Qt::black,                Qt::gray,                CONTROL_TRAIN,          ID_CHVACSET_TRAIN                         },
    {"RIGHT",              D_FONT_BOLD(6),      QRect(700, 140,  45,  20),            Qt::white,                Qt::white,               CONTROL_ARROW,          ID_CHVACSET_ARROW_RIGHT                   },
    {"LEFT",               D_FONT_BOLD(6),      QRect( 58, 140,  45,  20),            Qt::white,                Qt::white,               CONTROL_ARROW,          ID_CHVACSET_ARROW_LEFT                    },

    {"",                   D_FONT_BOLD(6),      QRect( 10, 180, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 210, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 240, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 270, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 300, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 330, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 360, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 390, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 420, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 459, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },

    {"",                   D_FONT_BOLD(6),      QRect( 10, 180,   1, 279),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(100, 180,   1, 279),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(175, 180,   1, 279),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(250, 180,   1, 279),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(325, 180,   1, 279),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(400, 180,   1, 279),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(475, 180,   1, 279),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(550, 180,   1, 279),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(625, 180,   1, 279),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(700, 180,   1, 279),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },

    {QSTR("运行模式"),       D_FONT_BOLD(8),      QRect( 40,  66,  80,  30),            Qt::white,                Qt::black,               CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("自动制冷"),             D_FONT_BOLD(8),      QRect(130,  66, 115,  30),            Qt::white,                Qt::black,               CONTROL_LABEL,          ID_CHVACSET_LABEL_RUNMODEL                },

    {QSTR("设置温度"),      D_FONT_BOLD(8),      QRect(250,  66,  80,  30),             Qt::white,                Qt::black,              CONTROL_LABEL,           ID_IGNORE         },
    {QSTR(""),            D_FONT_BOLD(8),      QRect(340,  66, 100,  30),             Qt::white,                Qt::black,              CONTROL_LABEL,           ID_CHVACSET_LABEL_TEMPV                   },

    {QSTR("▼"),                D_FONT_BOLD(8),      QRect( 460,  66,  60,  30),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_TEMPDOWN               },
    {QSTR("▲"),                D_FONT_BOLD(8),      QRect( 540,  66,  60,  30),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_TEMPUP                 },
    {QSTR("确   定"),      D_FONT_BOLD(8),      QRect( 640,  66, 100,  30),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_CONFIRM                },

    {QSTR("全   冷"),      D_FONT_BOLD(8),      QRect( 212, 455+8, 85,  38),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_STRONGCOLD             },
    {QSTR("半   冷"),      D_FONT_BOLD(8),      QRect( 309, 455+8, 85,  38),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_WEAKCOLD               },
    {QSTR("自动制冷"),      D_FONT_BOLD(8),      QRect( 406, 455+8, 85,  38),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_AUTOCOLD               },
    {QSTR("预   冷"),      D_FONT_BOLD(8),      QRect( 503, 455+8, 85,  38),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_PRECOOL             },
 //   {QSTR("紧急通风\n停止"),  D_FONT_BOLD(6),      QRect( 697, 455+8, 85,  38),            Qt::black,                Qt::green,               CONTROL_LABEL,          ID_CHVACSET_LABEL_EmergencyModeStatus             },


//    {QSTR("全   暖"),      D_FONT_BOLD(8),      QRect( 155, 500, 100,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_FULLWARM               },
    {QSTR("紧急通风\n测试"),   D_FONT_BOLD(6),      QRect( 309, 500+8, 85,  38),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_HALFWARM               },
    {QSTR("紧急通风\n停止"),   D_FONT_BOLD(5),      QRect( 697, 500+8, 85,  38),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_AMERGEWIND               },
    {QSTR("通   风"),      D_FONT_BOLD(8),      QRect( 406, 500+8, 85,  38),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_WIND                   },
    {QSTR("停   止"),      D_FONT_BOLD(8),      QRect( 503, 500+8, 85,  38),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_STOP                   },

    {QSTR("全车"),         D_FONT_BOLD(6),      QRect( 13, 182,  86,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR                     },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(103, 182,  70,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1                    },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(178, 182,  70,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2                    },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(253, 182,  70,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3                    },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(328, 182,  70,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4                    },
    {QSTR("5"),           D_FONT_BOLD(6),      QRect(403, 182,  70,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5                    },
    {QSTR("6"),           D_FONT_BOLD(6),      QRect(478, 182,  70,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6                    },
    {QSTR("7"),           D_FONT_BOLD(6),      QRect(553, 182,  70,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7                    },
    {QSTR("8"),           D_FONT_BOLD(6),      QRect(628, 182,  70,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8                    },

    {QSTR("设置温度"),      D_FONT_BOLD(6),      QRect( 13, 212,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("23 ℃"),            D_FONT_BOLD(6),      QRect(103, 212,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR1     },
    {QSTR("23 ℃"),            D_FONT_BOLD(6),      QRect(178, 212,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR2     },
    {QSTR("23 ℃"),            D_FONT_BOLD(6),      QRect(253, 212,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR3     },
    {QSTR("23 ℃"),            D_FONT_BOLD(6),      QRect(328, 212,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR4     },
    {QSTR("23 ℃"),            D_FONT_BOLD(6),      QRect(403, 212,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR5     },
    {QSTR("23 ℃"),            D_FONT_BOLD(6),      QRect(478, 212,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR6     },
    {QSTR("23 ℃"),            D_FONT_BOLD(6),      QRect(553, 212,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR7     },
    {QSTR("23 ℃"),            D_FONT_BOLD(6),      QRect(628, 212,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR8     },

    {QSTR("车内温度"),      D_FONT_BOLD(6),      QRect( 13, 242,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("25 ℃"),            D_FONT_BOLD(6),      QRect(103, 242,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR1        },
    {QSTR("25 ℃"),            D_FONT_BOLD(6),      QRect(178, 242,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR2        },
    {QSTR("25 ℃"),            D_FONT_BOLD(6),      QRect(253, 242,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR3        },
    {QSTR("25 ℃"),            D_FONT_BOLD(6),      QRect(328, 242,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR4        },
    {QSTR("25 ℃"),            D_FONT_BOLD(6),      QRect(403, 242,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR5        },
    {QSTR("25 ℃"),            D_FONT_BOLD(6),      QRect(478, 242,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR6        },
    {QSTR("25 ℃"),            D_FONT_BOLD(6),      QRect(553, 242,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR7        },
    {QSTR("25 ℃"),            D_FONT_BOLD(6),      QRect(628, 242,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR8        },

    {QSTR("压缩机"),       D_FONT_BOLD(6),      QRect( 13, 272,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(103, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COMPRESS1          },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(121, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COMPRESS2          },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(139, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COMPRESS3          },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(157, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COMPRESS4          },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(178, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COMPRESS1          },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(196, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COMPRESS2          },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(214, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COMPRESS3          },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(232, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COMPRESS4          },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(253, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COMPRESS1          },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(271, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COMPRESS2          },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(289, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COMPRESS3          },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(307, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COMPRESS4          },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(328, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COMPRESS1          },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(346, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COMPRESS2          },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(364, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COMPRESS3          },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(382, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COMPRESS4          },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(403, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COMPRESS1          },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(421, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COMPRESS2          },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(439, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COMPRESS3          },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(457, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COMPRESS4          },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(478, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COMPRESS1          },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(496, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COMPRESS2          },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(514, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COMPRESS3          },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(532, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COMPRESS4          },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(553, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COMPRESS1          },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(571, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COMPRESS2          },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(589, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COMPRESS3          },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(607, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COMPRESS4          },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(628, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COMPRESS4          },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(646, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COMPRESS3          },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(664, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COMPRESS2          },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(682, 274,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COMPRESS1          },
    {QSTR("冷凝机"),       D_FONT_BOLD(6),      QRect( 13, 302,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(103, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COLD1             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(121, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COLD2             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(139, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COLD3             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(157, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COLD4             },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(178, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COLD1             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(196, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COLD2             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(214, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COLD3             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(232, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COLD4             },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(253, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COLD1             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(271, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COLD2             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(289, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COLD3             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(307, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COLD4             },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(328, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COLD1             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(346, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COLD2             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(364, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COLD3             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(382, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COLD4             },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(403, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COLD1             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(421, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COLD2             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(439, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COLD3             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(457, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COLD4             },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(478, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COLD1             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(496, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COLD2             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(514, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COLD3             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(532, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COLD4             },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(553, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COLD1             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(571, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COLD2             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(589, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COLD3             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(607, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COLD4             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(628, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COLD4             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(646, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COLD3             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(664, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COLD2             },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(682, 304,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COLD1             },
    {QSTR("通风机"),       D_FONT_BOLD(6),      QRect( 13, 332,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(103, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1WIND1             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(121, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1WIND2             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(139, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1WIND3             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(157, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1WIND4             },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(178, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2WIND1             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(196, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2WIND2             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(214, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2WIND3             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(232, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2WIND4             },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(253, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3WIND1             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(271, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3WIND2             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(289, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3WIND3             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(307, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3WIND4             },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(328, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4WIND1             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(346, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4WIND2             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(364, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4WIND3             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(382, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4WIND4             },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(403, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5WIND1             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(421, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5WIND2             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(439, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5WIND3             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(457, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5WIND4             },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(478, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6WIND1             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(496, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6WIND2             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(514, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6WIND3             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(532, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6WIND4             },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(553, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7WIND1             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(571, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7WIND2             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(589, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7WIND3             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(607, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7WIND4             },
    {QSTR("4"),           D_FONT_BOLD(6),      QRect(628, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8WIND4             },
    {QSTR("3"),           D_FONT_BOLD(6),      QRect(646, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8WIND3             },
    {QSTR("2"),           D_FONT_BOLD(6),      QRect(664, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8WIND2             },
    {QSTR("1"),           D_FONT_BOLD(6),      QRect(682, 334,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8WIND1             },

    {QSTR("电热"),         D_FONT_BOLD(6),      QRect( 13, 392,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(103, 394,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM1          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(139, 394,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM2          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(178, 394,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM1          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(214, 394,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM2          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(253, 394,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM1          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(289, 394,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM2          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(328, 394,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM1          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(364, 394,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM2          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(403, 394,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM1          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(439, 394,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM2          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(478, 394,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM1          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(514, 394,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM2          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(553, 394,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM1          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(589, 394,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM2          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(628, 394,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM2          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(664, 394,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM1          },


//    {QSTR("1"),           D_FONT_BOLD(6),      QRect(103, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM1          },
//    {QSTR("2"),           D_FONT_BOLD(6),      QRect(121, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM2          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(139, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM3          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(157, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM4          },
//    {QSTR("1"),           D_FONT_BOLD(6),      QRect(178, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM1          },
//    {QSTR("2"),           D_FONT_BOLD(6),      QRect(196, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM2          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(214, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM3          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(232, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM4          },
//    {QSTR("1"),           D_FONT_BOLD(6),      QRect(253, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM1          },
//    {QSTR("2"),           D_FONT_BOLD(6),      QRect(271, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM2          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(289, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM3          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(307, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM4          },
//    {QSTR("1"),           D_FONT_BOLD(6),      QRect(328, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM1          },
//    {QSTR("2"),           D_FONT_BOLD(6),      QRect(346, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM2          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(364, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM3          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(382, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM4          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(403, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM1          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(421, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM2          },
//    {QSTR("2"),           D_FONT_BOLD(6),      QRect(439, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM3          },
//    {QSTR("1"),           D_FONT_BOLD(6),      QRect(457, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM4          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(478, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM1          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(496, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM2          },
//    {QSTR("2"),           D_FONT_BOLD(6),      QRect(514, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM3          },
//    {QSTR("1"),           D_FONT_BOLD(6),      QRect(532, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM4          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(553, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM1          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(571, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM2          },
//    {QSTR("2"),           D_FONT_BOLD(6),      QRect(589, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM3          },
//    {QSTR("1"),           D_FONT_BOLD(6),      QRect(607, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM4          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(628, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM1          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(646, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM2          },
//    {QSTR("2"),           D_FONT_BOLD(6),      QRect(664, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM3          },
//    {QSTR("1"),           D_FONT_BOLD(6),      QRect(682, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM4          },

    {QSTR("新风阀"),       D_FONT_BOLD(6),      QRect( 13, 362 ,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(103, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1NEWWIND1          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(139, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1NEWWIND2          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(139, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM3          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(157, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM4          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(178, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2NEWWIND1          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(214, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2NEWWIND2          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(214, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM3          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(232, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM4          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(253, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3NEWWIND1          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(289, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3NEWWIND2          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(289, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM3          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(307, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM4          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(328, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4NEWWIND1          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(364, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4NEWWIND2          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(364, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM3          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(382, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM4          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(403, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM1          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(421, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM2          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(403, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5NEWWIND1          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(439, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5NEWWIND2          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(478, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM1          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(496, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM2          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(478, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6NEWWIND1          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(514, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6NEWWIND2          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(553, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM1          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(571, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM2          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(553, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7NEWWIND1          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(589, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7NEWWIND2          },
//    {QSTR("4"),           D_FONT_BOLD(6),      QRect(628, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM1          },
//    {QSTR("3"),           D_FONT_BOLD(6),      QRect(646, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM2          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(628, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8NEWWIND2          },
    {QSTR(""),           D_FONT_BOLD(6),      QRect(664, 364 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8NEWWIND1          },

//    {QSTR("运行模式"),      D_FONT_BOLD(6),      QRect( 13, 392 ,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
//    {QSTR("通  风"),            D_FONT_BOLD(6),      QRect(103, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1RUNMODEL      },
//    {QSTR("通  风"),            D_FONT_BOLD(6),      QRect(178, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2RUNMODEL      },
//    {QSTR("通  风"),            D_FONT_BOLD(6),      QRect(253, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3RUNMODEL      },
//    {QSTR("通  风"),            D_FONT_BOLD(6),      QRect(328, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4RUNMODEL      },
//    {QSTR("通  风"),            D_FONT_BOLD(6),      QRect(403, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5RUNMODEL      },
//    {QSTR("通  风"),            D_FONT_BOLD(6),      QRect(478, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6RUNMODEL      },
//    {QSTR("通  风"),            D_FONT_BOLD(6),      QRect(553, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7RUNMODEL      },
//    {QSTR("通  风"),            D_FONT_BOLD(6),      QRect(628, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8RUNMODEL      },


    {QSTR("控制模式\n运行模式"),      D_FONT_BOLD(6),      QRect( 13, 422 ,  86,  36),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QSTR("集控\n自动制冷"),            D_FONT_BOLD(5),      QRect(103, 422 ,  70,  36),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR1      },
    {QSTR("集控\n自动制冷"),            D_FONT_BOLD(5),      QRect(178, 422 ,  70,  36),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR2      },
    {QSTR("集控\n自动制冷"),            D_FONT_BOLD(5),      QRect(253, 422 ,  70,  36),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR3      },
    {QSTR("集控\n自动制冷"),            D_FONT_BOLD(5),      QRect(328, 422 ,  70,  36),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR4      },
    {QSTR("集控\n自动制冷"),            D_FONT_BOLD(5),      QRect(403, 422 ,  70,  36),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR5      },
    {QSTR("集控\n自动制冷"),            D_FONT_BOLD(5),      QRect(478, 422 ,  70,  36),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR6      },
    {QSTR("集控\n自动制冷"),            D_FONT_BOLD(5),      QRect(553, 422 ,  70,  36),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR7      },
    {QSTR("集控\n自动制冷"),            D_FONT_BOLD(5),      QRect(628, 422 ,  70,  36),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR8      },


};
int g_HVACSettingRomLen = sizeof(g_PicRom_HVACSetting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CHVACSettingPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()

        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
#ifdef PAGE_BUTTON_BAR_NEW
        ON_BTNCLK(IDLB_COM_BTN7, OnComBtn7Clk)
        ON_BTNCLK(IDLB_COM_BTN8, OnComBtn8Clk)
#endif

        ON_BTNCLK(ID_CHVACSET_BUTTON_STRONGCOLD,OnSTRONGCOLDClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_WEAKCOLD, OnWEAKCOLDClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_AUTOCOLD, OnAUTOCOLDClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_AMERGEWIND, OnAMERGEWINDClk)
//        ON_BTNCLK(ID_CHVACSET_BUTTON_FULLWARM, OnFULLWARMClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_HALFWARM, OnHALFWARMClk)
//        ON_BTNCLK(ID_CHVACSET_BUTTON_AUTOWARM, OnAUTOWARMClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_WIND, OnWINDClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_STOP, OnSTOPClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_TEMPDOWN, OnThempDownClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_TEMPUP, OnThempUpClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_CONFIRM, OnConfirmClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_PRECOOL, OnPRECOOLClk)

        ON_BTNCLK(ID_CHVACSET_LABEL_CAR,OnCarClk);
        ON_BTNCLK(ID_CHVACSET_LABEL_CAR1,OnCar1Clk);
        ON_BTNCLK(ID_CHVACSET_LABEL_CAR2,OnCar2Clk);
        ON_BTNCLK(ID_CHVACSET_LABEL_CAR3,OnCar3Clk);
        ON_BTNCLK(ID_CHVACSET_LABEL_CAR4,OnCar4Clk);
        ON_BTNCLK(ID_CHVACSET_LABEL_CAR5,OnCar5Clk);
        ON_BTNCLK(ID_CHVACSET_LABEL_CAR6,OnCar6Clk);
        ON_BTNCLK(ID_CHVACSET_LABEL_CAR7,OnCar7Clk);
        ON_BTNCLK(ID_CHVACSET_LABEL_CAR8,OnCar8Clk);

END_MESSAGE_MAP()

CHVACSettingPage::CHVACSettingPage()
{
    m_bpreAutoTempV = false;
    m_bAutoTempV = false;
    m_bBtnPress=false;
}

void CHVACSettingPage::OnUpdatePage()
{

    updateTrain(ID_CHVACSET_TRAIN);
    updateArrow(ID_CHVACSET_ARROW_LEFT,ID_CHVACSET_ARROW_RIGHT);

    updateErrorLine(ID_CHVACSET_TRAIN);

    UpdateCommInterrupt(ID_CHVACSET_COMMINTERRUPT);


    UpdateCarTem();
    UpdateIndoorCarTem();

    UpdateHMIActive();
    UpdateHVAC_mode();
    UpdateHVAC_RUNmode();
    UpdateHVACState();
    UpdateHVAC_Compressor();
    UpdateHVAC_Condenser();
    UpdateHVAC_EvaporatorFan();
    UpdateHVAC_HotElectricity();
    UpdateHVAC_NewWind();
    updateTempV();
    UpdateEmergencyMode();

    if (m_bBtnPress==false)
    {
        updateCtrl();
    }



    //((CButton*)GetDlgItem(nIDArray[i]))->SetCtrlEnable(false);

//    if (Bit( CCU_HMI_221_16, 12))
//    {
//        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AMERGEWIND))->ChangeButtonState(LBUTTON_DOWN);
//    }

    if (m_bBtnPress==false)
    {
        static int preHide = Bit(HVAC_command_hide,1);
        if(preHide != Bit(HVAC_command_hide,1))
        {
            updateCtrl();
            preHide = Bit(HVAC_command_hide,1);
        }
    }
    if (m_bBtnPress)
    {
        static int times = 0;
        times++;
        if (times%times_n == 0)
        {
            HVAC_valid_timer--;
            if (HVAC_valid_timer==0)
            {
                m_bBtnPress = false;
                BitSet( HMI_send_data28, 6, 0);//空调模式保存命令标志位
                BitSet( HMI_send_data28, 7, 0);//空调温度保存命令标志位

            //    HMI_send_data24=HMI_send_data24&255;
                HVAC_button_color=0;
                HVAC_mode_se1ect=0;

                ReSetCtrlButtonState();
            }
        }
    }
}

void CHVACSettingPage::OnInitPage()
{
    #ifdef USE_RAND_DATA
        TC1_HMI = 1;

    #endif
  // TC1_HMI = 1;
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1LIGHTEM1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1LIGHTEM4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2LIGHTEM1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2LIGHTEM4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3LIGHTEM1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3LIGHTEM4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4LIGHTEM1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4LIGHTEM4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_RUNMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetBorderColor(Qt::white);

    int nIDArray[] =
    {
      ID_CHVACSET_BUTTON_STRONGCOLD,
      ID_CHVACSET_BUTTON_WEAKCOLD,
      ID_CHVACSET_BUTTON_AUTOCOLD,
      ID_CHVACSET_BUTTON_PRECOOL,
 //     ID_CHVACSET_BUTTON_AMERGEWIND,
//      ID_CHVACSET_BUTTON_FULLWARM,
      ID_CHVACSET_BUTTON_HALFWARM,
//      ID_CHVACSET_BUTTON_AUTOWARM,
      ID_CHVACSET_BUTTON_WIND,
      ID_CHVACSET_BUTTON_CONFIRM,
      ID_CHVACSET_BUTTON_STOP,
    };
    for (int i = 0; i < 8; i++)
    {
        ((CButton*)GetDlgItem(nIDArray[i]))->m_bAutoUpState = false;
        //((CButton*)GetDlgItem(nIDArray[i]))->HideButton();
        ((CButton*)GetDlgItem(nIDArray[i]))->SetCtrlEnable(false);
    }
//    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->HideButton();
//    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->HideButton();
//    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->HideButton();
    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->SetCtrlEnable(false);
    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->SetCtrlEnable(false);
//    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->SetCtrlEnable(false);

    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AMERGEWIND))->SetButtonType(BUTTON_STATION);

//    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_EmergencyModeStatus))->SetBorderColor(Qt::white);

//     ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AMERGEWIND))->m_bAutoUpState = false;

    OnCarClk();
}

void CHVACSettingPage::OnShowPage()
{


#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR("运   行"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR("辅助状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QSTR("牵引状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR("旁路状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("空调设置"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QSTR("故   障"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("帮   助"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR("运   行"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR("车辆状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QSTR("故   障"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("帮   助"));
#endif

    //update ctrl
    updateCtrl();

 //   HVAC_valid_timer = 4;
}

void CHVACSettingPage::updateCtrl()
{
    int nIDArray[] =
    {
 //     ID_CHVACSET_BUTTON_CONFIRM,
      ID_CHVACSET_BUTTON_STRONGCOLD,
      ID_CHVACSET_BUTTON_WEAKCOLD,
      ID_CHVACSET_BUTTON_AUTOCOLD,
      ID_CHVACSET_BUTTON_PRECOOL,
 //     ID_CHVACSET_BUTTON_AMERGEWIND,
//      ID_CHVACSET_BUTTON_FULLWARM,
      ID_CHVACSET_BUTTON_HALFWARM,
//      ID_CHVACSET_BUTTON_AUTOWARM,
      ID_CHVACSET_BUTTON_WIND,
      ID_CHVACSET_BUTTON_STOP,
    };

   for (int i = 0; i < 7; i++)
   {
       if (Bit(HVAC_command_hide,1))
       {
//         if(((CButton*)GetDlgItem(nIDArray[i]))->IsHide())
//            ((CButton*)GetDlgItem(nIDArray[i]))->ShowButton();
           ((CButton*)GetDlgItem(nIDArray[i]))->SetCtrlEnable(true);
       }
       else
       {
          //((CButton*)GetDlgItem(nIDArray[i]))->HideButton();

           ((CButton*)GetDlgItem(nIDArray[i]))->SetCtrlEnable(false);
       }
   }
}

#ifdef PAGE_BUTTON_BAR_NEW
    void CHVACSettingPage::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CHVACSettingPage::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CHVACSettingPage::OnComBtn3Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void CHVACSettingPage::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS2);
    }

    void CHVACSettingPage::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS3);
    }

    void CHVACSettingPage::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_HVACSETTING);
    }
    void CHVACSettingPage::OnComBtn7Clk()
    {
         ChangePage(PAGE_INDEX_FAULT);
    }

    void CHVACSettingPage::OnComBtn8Clk()
    {
        ChangePage(PAGE_INDEX_HVACSETTINGHELP);
    }
#else
    void CHVACSettingPage::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CHVACSettingPage::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CHVACSettingPage::OnComBtn3Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void CHVACSettingPage::OnComBtn4Clk()
    {

    }

    void CHVACSettingPage::OnComBtn5Clk()
    {
        ChangePage(PAGE_INDEX_FAULT);
    }

    void CHVACSettingPage::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_HVACSETTINGHELP);
    }
#endif



void CHVACSettingPage::OnCarClk()
{
    HVAC_select_color = 0;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,0);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);
}

void CHVACSettingPage::OnCar1Clk()
{
    HVAC_select_color = 1;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,0);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);
}

void CHVACSettingPage::OnCar2Clk()
{
    HVAC_select_color = 2;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,0);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);

}

void CHVACSettingPage::OnCar3Clk()
{
    HVAC_select_color = 3;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,0);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);

}

void CHVACSettingPage::OnCar4Clk()
{
    HVAC_select_color = 4;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,0);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);

}

void CHVACSettingPage::OnCar5Clk()
{
    HVAC_select_color = 5;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,0);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);
}

void CHVACSettingPage::OnCar6Clk()
{
    HVAC_select_color = 6;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,0);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);
}

void CHVACSettingPage::OnCar7Clk()
{
    HVAC_select_color = 7;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,0);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);
}

void CHVACSettingPage::OnCar8Clk()
{
    HVAC_select_color = 8;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,0);
}

void CHVACSettingPage::SetLabelBkColorCar(int id, int colorVal)
{
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
}


void CHVACSettingPage::UpdateHMIActive()
{
    if (TC1_HMI == 1)
    {

            if (Bit(DI_110_1,9)  == 1)
            {
                HVAC_command_hide=1;
            }
            else
            {
                HVAC_command_hide=0;
            }

    }
    if (TC2_HMI == 1)
    {  
            if (Bit(DI_180_1,9)  == 1)
            {
                HVAC_command_hide=1;
            }
            else
            {
                HVAC_command_hide=0;
            }    
    }
    static int preHide = -1;
    if(preHide !=  Bit(HVAC_command_hide,1))
    {
        updateCtrl();
        if(Bit(HVAC_command_hide,1))
        {
//            if(((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->IsHide())
//                ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->ShowButton();
//            if(((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->IsHide())
//                ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->ShowButton();
//            if(((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->IsHide())
//                ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->ShowButton();


                ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->SetCtrlEnable(true);
                ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->SetCtrlEnable(true);
                ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->SetCtrlEnable(true);
        }
        else
        {
//            ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->HideButton();
//            ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->HideButton();
//            ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->HideButton();
            ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->SetCtrlEnable(false);
            ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->SetCtrlEnable(false);
            ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->SetCtrlEnable(false);



        }
        preHide = Bit(HVAC_command_hide,1);
    }
}



void CHVACSettingPage::OnSTRONGCOLDClk()
{
    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_STRONGCOLD;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_se1ect=1;
        BitSet( HMI_send_data28, 6, 1);//命令标志位
        HVAC_valid_timer=4;
        HMI_send_data27=HMI_send_data27&32512;
        BitSet( HMI_send_data27, 8, 1);//强冷

        SetCtrlButtonState(ID_CHVACSET_BUTTON_STRONGCOLD);
    }
}

void CHVACSettingPage::OnWEAKCOLDClk()
{
    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_WEAKCOLD;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_se1ect=2;

        BitSet( HMI_send_data28, 6, 1);
        HVAC_valid_timer=4;
        HMI_send_data27=HMI_send_data27&32512;
        BitSet( HMI_send_data27, 7, 1);

        SetCtrlButtonState(ID_CHVACSET_BUTTON_WEAKCOLD);
    }
}

void CHVACSettingPage::OnAUTOCOLDClk()
{
    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_AUTOCOLD;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_se1ect=3;

        BitSet( HMI_send_data28, 6, 1);
        HVAC_valid_timer=4;
        HMI_send_data27=HMI_send_data27&32512;
        BitSet( HMI_send_data27, 6, 1);

        SetCtrlButtonState(ID_CHVACSET_BUTTON_AUTOCOLD);
    }
}

void CHVACSettingPage::OnPRECOOLClk()
{
    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_PRECOOL;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_se1ect=4;
        BitSet( HMI_send_data28, 6, 1);//命令标志位
        HVAC_valid_timer=4;
        HMI_send_data27=HMI_send_data27&32512;
        BitSet( HMI_send_data27, 5, 1);//

        SetCtrlButtonState(ID_CHVACSET_BUTTON_PRECOOL);
    }
}

void CHVACSettingPage::OnAMERGEWINDClk()
{
    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_AMERGEWIND;
    {
        HVAC_mode_se1ect=6;
        BitSet( HMI_send_data28, 6, 1);//命令标志位
        HVAC_valid_timer=4;
        HMI_send_data27=HMI_send_data27&32512;
        BitSet( HMI_send_data27, 4, 1);//空调模式
        SetCtrlButtonState(ID_CHVACSET_BUTTON_AMERGEWIND);
//        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AMERGEWIND))->ChangeButtonState(LBUTTON_UP);

    }

}

void CHVACSettingPage::OnFULLWARMClk()
{

}

void CHVACSettingPage::OnHALFWARMClk()
{
    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_HALFWARM;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_se1ect=5;
        BitSet( HMI_send_data28, 6, 1);//命令标志位
        HVAC_valid_timer=4;
        HMI_send_data27=HMI_send_data27&32512;
        BitSet( HMI_send_data27, 16, 1);//紧急通风测试

        SetCtrlButtonState(ID_CHVACSET_BUTTON_HALFWARM);
    }

}

void CHVACSettingPage::OnAUTOWARMClk()
{

}

void CHVACSettingPage::OnWINDClk()
{
    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_WIND;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_se1ect=8;

        BitSet( HMI_send_data28, 6, 1);
        HVAC_valid_timer=4;
        HMI_send_data27=HMI_send_data27&32512;
        BitSet( HMI_send_data27, 2, 1);

       SetCtrlButtonState(ID_CHVACSET_BUTTON_WIND);
    }
}

void CHVACSettingPage::OnSTOPClk()
{
    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_STOP;
    if (HVAC_valid_timer==0)
    {
        HVAC_mode_se1ect=9;

        BitSet( HMI_send_data28, 6, 1);
        HVAC_valid_timer=4;
        HMI_send_data27=HMI_send_data27&32512;
        BitSet( HMI_send_data27, 1, 1);

        SetCtrlButtonState(ID_CHVACSET_BUTTON_STOP);
    }
}

void CHVACSettingPage::OnThempDownClk()
{  
    if (Bit(CCU_HMI_221_16,11))
    {
        if (setting_temp2 > 12)
        {
            setting_temp2 -= 0.5;
        }
    }
    if (Bit(CCU_HMI_221_16,14))
    {
        if (setting_temp > 19)
        {
            setting_temp -= 0.5;
        }
    }
}

void CHVACSettingPage::OnThempUpClk()
{
    if (Bit(CCU_HMI_221_16,11))
    {
        if (setting_temp2 < 18)
        {
            setting_temp2 += 0.5;
        }
    }
    if (Bit(CCU_HMI_221_16,14))
    {
      if (setting_temp < 28)
      {
        setting_temp += 0.5;
      }
    }
}

void CHVACSettingPage::OnConfirmClk()
{
    m_bBtnPress = true;
    m_PressBtnID = ID_CHVACSET_BUTTON_CONFIRM;
    if (HVAC_valid_timer==0)
    {

        HVAC_button_color=1;
        HVAC_valid_timer=4;
        if (HVAC_select_color==0)
        {
//            if (Bit(CCU_HMI_221_16,11))//制热
//            {
//                  HMI_send_data17=setting_temp2*10;
//                  HMI_send_data18=setting_temp2*10;
//                  HMI_send_data19=setting_temp2*10;
//                  HMI_send_data20=setting_temp2*10;
//                  HMI_send_data21=setting_temp2*10;
//                  HMI_send_data22=setting_temp2*10;
//                  HMI_send_data23=setting_temp2*10;
//                  HMI_send_data24=setting_temp2*10;

//            }
            if (Bit( CCU_HMI_221_16, 14 ))//制冷
            {
                HMI_send_data17=setting_temp*10;
                HMI_send_data18=setting_temp*10;
                HMI_send_data19=setting_temp*10;
                HMI_send_data20=setting_temp*10;
                HMI_send_data21=setting_temp*10;
                HMI_send_data22=setting_temp*10;
                HMI_send_data23=setting_temp*10;
                HMI_send_data24=setting_temp*10;
            }
        }
        else
        {
            if (HVAC_select_color==1)
            {
    //            if (Bit(CCU_HMI_221_16,11))//制热
    //            {
    //                HMI_send_data17=setting_temp2*10;
    //            }
                if (Bit(CCU_HMI_221_16,14))//制冷
                {
                    HMI_send_data17=setting_temp*10;
                }
            }
            else
            {
                HMI_send_data17 = HVAC_810_2;

            }
            if (HVAC_select_color==2)
            {
    //            if (Bit(CCU_HMI_221_16,11))//制热
    //            {
    //                  HMI_send_data18=setting_temp2*10;

    //            }
                if (Bit(CCU_HMI_221_16,14))//制冷
                {
                      HMI_send_data18=setting_temp*10;
                }
            }
            else
            {
                HMI_send_data18 = HVAC_820_2;

            }
            if (HVAC_select_color==3)
            {
    //            if (Bit(CCU_HMI_221_16,11))//制热
    //            {
    //                  HMI_send_data19=setting_temp2*10;
    //            }
                if (Bit(CCU_HMI_221_16,14))//制冷
                {
                      HMI_send_data19=setting_temp*10;
                }
            }
            else
            {
                HMI_send_data19 = HVAC_830_2;

            }
            if (HVAC_select_color==4)
            {
    //            if (Bit(CCU_HMI_221_16,11))//制热
    //            {
    //                  HMI_send_data20=setting_temp2*10;
    //            }
                if (Bit(CCU_HMI_221_16,14))//制冷
                {
                      HMI_send_data20=setting_temp*10;
                }
            }
            else
            {

                HMI_send_data20 = HVAC_840_2;

            }
            if (HVAC_select_color==5)
            {
    //            if (Bit(CCU_HMI_221_16,11))//制热
    //            {
    //                  HMI_send_data21=setting_temp2*10;
    //            }
                if (Bit(CCU_HMI_221_16,14))//制冷
                {
                      HMI_send_data21=setting_temp*10;
                }
            }
            else
            {

                HMI_send_data21 = HVAC_850_2;

            }
            if (HVAC_select_color==6)
            {
    //            if (Bit(CCU_HMI_221_16,11))//制热
    //            {
    //                  HMI_send_data22=setting_temp2*10;
    //            }
                if (Bit(CCU_HMI_221_16,14))//制冷
                {
                      HMI_send_data22=setting_temp*10;
                }
            }
            else
            {

                HMI_send_data22 = HVAC_860_2;

            }
            if (HVAC_select_color==7)
            {
    //            if (Bit(CCU_HMI_221_16,11))//制热
    //            {
    //                  HMI_send_data23=setting_temp2*10;
    //            }
                if (Bit(CCU_HMI_221_16,14))//制冷
                {
                      HMI_send_data23=setting_temp*10;
                }
            }
            else
            {

                HMI_send_data23 = HVAC_870_2;

            }
            if (HVAC_select_color==8)
            {
    //            if (Bit(CCU_HMI_221_16,11))//制热
    //            {
    //                  HMI_send_data24=setting_temp2*10;
    //            }
                if (Bit(CCU_HMI_221_16,14))//制冷
                {
                      HMI_send_data24=setting_temp*10;
                }
            }
            else
            {

                HMI_send_data24 = HVAC_880_2;
            }
        }

        BitSet( HMI_send_data28, 7, 1);

        SetCtrlButtonState(ID_CHVACSET_BUTTON_CONFIRM);
    }
}

void CHVACSettingPage::UpdateHVACState()
{

    if (Bit( CCU_HMI_221_16, 9))
    {
        HVAC_state = QSTR("停  止");

        m_bAutoTempV = false;
    }
    if (Bit( CCU_HMI_221_16, 10))
    {
        HVAC_state = QSTR("通  风");

        m_bAutoTempV = false;
    }
//    if (Bit( CCU_HMI_221_16, 11 ))
//    {
//        HVAC_state = QSTR("自动制暖");

//        m_bAutoTempV = true;
//    }
//    if (Bit( CCU_HMI_221_16, 12))
//    {
//        HVAC_state = QSTR("半暖");

//        m_bAutoTempV = false;
//    }
    if (Bit( CCU_HMI_221_16, 13))
    {
        HVAC_state = QSTR("预  冷");

        m_bAutoTempV = false;
    }
    if (Bit( CCU_HMI_221_16, 14 ))
    {
        HVAC_state = QSTR("自动制冷");

        m_bAutoTempV = true;
    }
    if (Bit( CCU_HMI_221_16, 15 ))
    {
        HVAC_state = QSTR("半   冷");

        m_bAutoTempV = false;
    }
    if (Bit( CCU_HMI_221_16, 16 ))
    {
        HVAC_state = QSTR("全   冷");

        m_bAutoTempV = false;
    }
    if (Bit( CCU_HMI_221_16, 12 ))
    {
        HVAC_state = QSTR("紧急通风");
        m_bAutoTempV = false;
    }

    if (Bit( CCU_HMI_221_16, 11 ))
    {
        HVAC_state = QSTR("紧急通风停止");
        m_bAutoTempV = false;
    }

//    if(m_bpreAutoTempV != m_bAutoTempV)
//    {
//        m_bpreAutoTempV = m_bAutoTempV;
//        SpecialButtonState();
//    }
    if (m_bBtnPress==false)
    {
        SpecialButtonState();
    }
    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_RUNMODEL))->SetCtrlText(HVAC_state);
}

void CHVACSettingPage::UpdateCarTem()
{

    che1_setting_temp = DivNum(HVAC_810_2,10);
    che2_setting_temp = DivNum(HVAC_820_2,10);
    che3_setting_temp = DivNum(HVAC_830_2,10);
    che4_setting_temp = DivNum(HVAC_840_2,10);
    che5_setting_temp = DivNum(HVAC_850_2,10);
    che6_setting_temp = DivNum(HVAC_860_2,10);
    che7_setting_temp = DivNum(HVAC_870_2,10);
    che8_setting_temp = DivNum(HVAC_880_2,10);

    SetCarTem(ID_CHVACSET_LABEL_SETTEMPERATURECAR1,che1_setting_temp);
    SetCarTem(ID_CHVACSET_LABEL_SETTEMPERATURECAR2,che2_setting_temp);
    SetCarTem(ID_CHVACSET_LABEL_SETTEMPERATURECAR3,che3_setting_temp);
    SetCarTem(ID_CHVACSET_LABEL_SETTEMPERATURECAR4,che4_setting_temp);
    SetCarTem(ID_CHVACSET_LABEL_SETTEMPERATURECAR5,che5_setting_temp);
    SetCarTem(ID_CHVACSET_LABEL_SETTEMPERATURECAR6,che6_setting_temp);
    SetCarTem(ID_CHVACSET_LABEL_SETTEMPERATURECAR7,che7_setting_temp);
    SetCarTem(ID_CHVACSET_LABEL_SETTEMPERATURECAR8,che8_setting_temp);
}

void CHVACSettingPage::UpdateIndoorCarTem()
{
    if (Bit(CCU_HMI_222_10, 8 )  == 1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR1))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_810_3, 16 ))
//        {
//            che1_indoor_temp=DivNum(32768-HVAC_810_3,10);
//        }
//        else
//        {
//            che1_indoor_temp=DivNum(HVAC_810_3,10);
//        }
        che1_indoor_temp=DivNum((int16_t)HVAC_810_3,10);

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR1))->SetCtrlBKColor(Qt::white);
    }

    if (Bit(CCU_HMI_222_10, 7 )  == 1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR2))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_820_3, 16 ))
//        {
//            che2_indoor_temp=DivNum(32768-HVAC_820_3,10);
//        }
//        else
//        {
//            che2_indoor_temp=DivNum(HVAC_820_3,10);
//        }
        che2_indoor_temp=DivNum((int16_t)HVAC_820_3,10);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR2))->SetCtrlBKColor(Qt::white);
    }

    if (Bit(CCU_HMI_222_10, 6 )  == 1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR3))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_830_3, 16 ))
//        {
//            che3_indoor_temp=DivNum(32768-HVAC_830_3,10);

//        }
//        else
//        {
//            che3_indoor_temp=DivNum(HVAC_830_3,10);
//        }
        che3_indoor_temp=DivNum((int16_t)HVAC_830_3,10);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR3))->SetCtrlBKColor(Qt::white);
    }

    if (Bit(CCU_HMI_222_10, 5 )  == 1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR4))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_840_3, 16 ))
//        {
//            che4_indoor_temp=DivNum(32768-HVAC_840_3,10);
//        }
//        else
//        {
//            che4_indoor_temp=DivNum(HVAC_840_3,10);
//        }
        che4_indoor_temp=DivNum((int16_t)HVAC_840_3,10);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR4))->SetCtrlBKColor(Qt::white);
    }

    if (Bit(CCU_HMI_222_10, 4 )  == 1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR5))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_850_3, 16 ))
//        {
//            che5_indoor_temp=DivNum(32768-HVAC_850_3,10);
//        }
//        else
//        {
//            che5_indoor_temp=DivNum(HVAC_850_3,10);
//        }
        che5_indoor_temp=DivNum((int16_t)HVAC_850_3,10);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR5))->SetCtrlBKColor(Qt::white);
    }

    if (Bit(CCU_HMI_222_10, 3 )  == 1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR6))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_860_3, 16 ))
//        {
//            che6_indoor_temp=DivNum(32768-HVAC_860_3,10);
//        }
//        else
//        {
//            che6_indoor_temp=DivNum(HVAC_860_3,10);
//        }
        che6_indoor_temp=DivNum((int16_t)HVAC_860_3,10);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR6))->SetCtrlBKColor(Qt::white);
    }

    if (Bit(CCU_HMI_222_10, 2 )  == 1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR7))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_870_3, 16 ))
//        {
//            che7_indoor_temp=DivNum(32768-HVAC_870_3,10);
//        }
//        else
//        {
//            che7_indoor_temp=DivNum(HVAC_870_3,10);
//        }
        che7_indoor_temp=DivNum((int16_t)HVAC_870_3,10);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR7))->SetCtrlBKColor(Qt::white);
    }

    if (Bit(CCU_HMI_222_10, 1 )  == 1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR8))->SetCtrlBKColor(Qt::black);
//        if(Bit( HVAC_880_3, 16 ))
//        {
//            che8_indoor_temp=DivNum(32768-HVAC_880_3,10);
//        }
//        else
//        {
//            che8_indoor_temp=DivNum(HVAC_880_3,10);
//        }
        che8_indoor_temp=DivNum((int16_t)HVAC_880_3,10);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR8))->SetCtrlBKColor(Qt::white);
    }

    SetCarTem(ID_CHVACSET_LABEL_TEMPERATURECAR1,che1_indoor_temp);
    SetCarTem(ID_CHVACSET_LABEL_TEMPERATURECAR2,che2_indoor_temp);
    SetCarTem(ID_CHVACSET_LABEL_TEMPERATURECAR3,che3_indoor_temp);
    SetCarTem(ID_CHVACSET_LABEL_TEMPERATURECAR4,che4_indoor_temp);
    SetCarTem(ID_CHVACSET_LABEL_TEMPERATURECAR5,che5_indoor_temp);
    SetCarTem(ID_CHVACSET_LABEL_TEMPERATURECAR6,che6_indoor_temp);
    SetCarTem(ID_CHVACSET_LABEL_TEMPERATURECAR7,che7_indoor_temp);
    SetCarTem(ID_CHVACSET_LABEL_TEMPERATURECAR8,che8_indoor_temp);
}


void CHVACSettingPage::SetCarTem(int lableId,qreal temperature)
{
    char buff[10] = {'\0'};
    sprintf(buff, "%.1f", temperature);
    ((CLabel *)GetDlgItem(lableId))->SetCtrlText(QString(buff).append(QSTR("℃")));
}

void CHVACSettingPage::UpdateHVAC_mode()
{
    if (Bit( HVAC_810_12, 1 ))
    {
        HVAC_mode1=QSTR("集控");
    }
    if (Bit( HVAC_810_12, 2 ))
    {
        HVAC_mode1=QSTR("本控");
    }

    if (Bit( HVAC_820_12, 1 ))
    {
        HVAC_mode2=QSTR("集控");
    }
    if (Bit( HVAC_820_12, 2 ))
    {
        HVAC_mode2=QSTR("本控");
    }
    if (Bit( HVAC_830_12, 1 ))
    {
        HVAC_mode3=QSTR("集控");
    }
    if (Bit( HVAC_830_12, 2 ))
    {
        HVAC_mode3=QSTR("本控");
    }
    if (Bit( HVAC_840_12, 1 ))
    {
        HVAC_mode4=QSTR("集控");
    }
    if (Bit( HVAC_840_12, 2 ))
    {
        HVAC_mode4=QSTR("本控");
    }
    if (Bit( HVAC_850_12, 1 ))
    {
        HVAC_mode5=QSTR("集控");
    }
    if (Bit( HVAC_850_12, 2 ))
    {
        HVAC_mode5=QSTR("本控");
    }
    if (Bit( HVAC_860_12, 1 ))
    {
        HVAC_mode6=QSTR("集控");
    }
    if (Bit( HVAC_860_12, 2 ))
    {
        HVAC_mode6=QSTR("本控");
    }
    if (Bit( HVAC_870_12, 1 ))
    {
        HVAC_mode7=QSTR("集控");
    }
    if (Bit( HVAC_870_12, 2 ))
    {
        HVAC_mode7=QSTR("本控");
    }
    if (Bit( HVAC_880_12, 1 ))
    {
        HVAC_mode8=QSTR("集控");
    }
    if (Bit( HVAC_880_12, 2 ))
    {
        HVAC_mode8=QSTR("本控");
    }
    if (Bit( HVAC_810_9, 8))
    {
        HVAC_RUNmode1 = QSTR("预  冷");
    }
    if (Bit( HVAC_810_9, 7 ))
    {
        HVAC_RUNmode1 = QSTR("全   冷");
    }
    if (Bit( HVAC_810_9, 6 ))
    {
        HVAC_RUNmode1 = QSTR("半   冷");
    }
    if (Bit( HVAC_810_9, 5 ))
    {
        HVAC_RUNmode1 = QSTR("自动制冷");
    }
    if (Bit( HVAC_810_9, 4))
    {
        HVAC_RUNmode1 = QSTR("通  风");
    }
    if (Bit( HVAC_810_9, 3))
    {
        HVAC_RUNmode1 = QSTR("停  止");
    }
    if (Bit( HVAC_810_12, 15 ))
    {
        HVAC_RUNmode1 = QSTR("紧急通风");
    }

    if (Bit( HVAC_820_9, 8))
    {
        HVAC_RUNmode2 = QSTR("预  冷");
    }
    if (Bit( HVAC_820_9, 7 ))
    {
        HVAC_RUNmode2 = QSTR("全   冷");
    }
    if (Bit( HVAC_820_9, 6 ))
    {
        HVAC_RUNmode2 = QSTR("半   冷");
    }
    if (Bit( HVAC_820_9, 5 ))
    {
        HVAC_RUNmode2 = QSTR("自动制冷");
    }
    if (Bit( HVAC_820_9, 4))
    {
        HVAC_RUNmode2= QSTR("通  风");
    }
    if (Bit( HVAC_820_9, 3))
    {
        HVAC_RUNmode2 = QSTR("停  止");
    }
    if (Bit( HVAC_820_12, 15 ))
    {
        HVAC_RUNmode2 = QSTR("紧急通风");
    }

    if (Bit( HVAC_830_9, 8))
    {
        HVAC_RUNmode3 = QSTR("预  冷");
    }
    if (Bit( HVAC_830_9, 7 ))
    {
        HVAC_RUNmode3 = QSTR("全   冷");
    }
    if (Bit( HVAC_830_9, 6 ))
    {
        HVAC_RUNmode3 = QSTR("半   冷");
    }
    if (Bit( HVAC_830_9, 5 ))
    {
        HVAC_RUNmode3 = QSTR("自动制冷");
    }
    if (Bit( HVAC_830_9, 4))
    {
        HVAC_RUNmode3 = QSTR("通  风");
    }
    if (Bit( HVAC_830_9, 3))
    {
        HVAC_RUNmode3 = QSTR("停  止");
    }
    if (Bit( HVAC_830_12, 15 ))
    {
        HVAC_RUNmode3 = QSTR("紧急通风");
    }

    if (Bit( HVAC_840_9, 8))
    {
        HVAC_RUNmode4 = QSTR("预  冷");
    }
    if (Bit( HVAC_840_9, 7 ))
    {
        HVAC_RUNmode4 = QSTR("全   冷");
    }
    if (Bit( HVAC_840_9, 6 ))
    {
        HVAC_RUNmode4 = QSTR("半   冷");
    }
    if (Bit( HVAC_840_9, 5 ))
    {
        HVAC_RUNmode4 = QSTR("自动制冷");
    }
    if (Bit( HVAC_840_9, 4))
    {
        HVAC_RUNmode4 = QSTR("通  风");
    }
    if (Bit( HVAC_840_9, 3))
    {
        HVAC_RUNmode4 = QSTR("停  止");
    }
    if (Bit( HVAC_840_12, 15 ))
    {
        HVAC_RUNmode4 = QSTR("紧急通风");
    }

    if (Bit( HVAC_850_9, 8))
    {
        HVAC_RUNmode5 = QSTR("预  冷");
    }
    if (Bit( HVAC_850_9, 7 ))
    {
        HVAC_RUNmode5 = QSTR("全   冷");
    }
    if (Bit( HVAC_850_9, 6 ))
    {
        HVAC_RUNmode5 = QSTR("半   冷");
    }
    if (Bit( HVAC_850_9, 5 ))
    {
        HVAC_RUNmode5 = QSTR("自动制冷");
    }
    if (Bit( HVAC_850_9, 4))
    {
        HVAC_RUNmode5 = QSTR("通  风");
    }
    if (Bit( HVAC_850_9, 3))
    {
        HVAC_RUNmode5 = QSTR("停  止");
    }
    if (Bit( HVAC_850_12, 15 ))
    {
        HVAC_RUNmode5 = QSTR("紧急通风");
    }

    if (Bit( HVAC_860_9, 8))
    {
        HVAC_RUNmode6 = QSTR("预  冷");
    }
    if (Bit( HVAC_860_9, 7 ))
    {
        HVAC_RUNmode6 = QSTR("全   冷");
    }
    if (Bit( HVAC_860_9, 6 ))
    {
        HVAC_RUNmode6 = QSTR("半   冷");
    }
    if (Bit( HVAC_860_9, 5 ))
    {
        HVAC_RUNmode6 = QSTR("自动制冷");
    }
    if (Bit( HVAC_860_9, 4))
    {
        HVAC_RUNmode6 = QSTR("通  风");
    }
    if (Bit( HVAC_860_9, 3))
    {
        HVAC_RUNmode6 = QSTR("停  止");
    }
    if (Bit( HVAC_860_12, 15 ))
    {
        HVAC_RUNmode6 = QSTR("紧急通风");
    }

    if (Bit( HVAC_870_9, 8))
    {
        HVAC_RUNmode7 = QSTR("预  冷");
    }
    if (Bit( HVAC_870_9, 7 ))
    {
        HVAC_RUNmode7 = QSTR("全   冷");
    }
    if (Bit( HVAC_870_9, 6 ))
    {
        HVAC_RUNmode7 = QSTR("半   冷");
    }
    if (Bit( HVAC_870_9, 5 ))
    {
        HVAC_RUNmode7 = QSTR("自动制冷");
    }
    if (Bit( HVAC_870_9, 4))
    {
        HVAC_RUNmode7 = QSTR("通  风");
    }
    if (Bit( HVAC_870_9, 3))
    {
        HVAC_RUNmode7 = QSTR("停  止");
    }
    if (Bit( HVAC_870_12, 15 ))
    {
        HVAC_RUNmode7 = QSTR("紧急通风");
    }

    if (Bit( HVAC_880_9, 8))
    {
        HVAC_RUNmode8 = QSTR("预  冷");
    }
    if (Bit( HVAC_880_9, 7 ))
    {
        HVAC_RUNmode8 = QSTR("全   冷");
    }
    if (Bit( HVAC_880_9, 6 ))
    {
        HVAC_RUNmode8 = QSTR("半   冷");
    }
    if (Bit( HVAC_880_9, 5 ))
    {
        HVAC_RUNmode8 = QSTR("自动制冷");
    }
    if (Bit( HVAC_880_9, 4))
    {
        HVAC_RUNmode8 = QSTR("通  风");
    }
    if (Bit( HVAC_880_9, 3))
    {
        HVAC_RUNmode8 = QSTR("停  止");
    }
    if (Bit( HVAC_880_12, 15 ))
    {
        HVAC_RUNmode8 = QSTR("紧急通风");
    }

    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR1,HVAC_mode1+"\n"+HVAC_RUNmode1);
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR2,HVAC_mode2+"\n"+HVAC_RUNmode2);
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR3,HVAC_mode3+"\n"+HVAC_RUNmode3);
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR4,HVAC_mode4+"\n"+HVAC_RUNmode4);
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR5,HVAC_mode5+"\n"+HVAC_RUNmode5);
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR6,HVAC_mode6+"\n"+HVAC_RUNmode6);
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR7,HVAC_mode7+"\n"+HVAC_RUNmode7);
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR8,HVAC_mode8+"\n"+HVAC_RUNmode8);
}

void CHVACSettingPage::UpdateHVAC_RUNmode()
{

//    SetHVAC_mode(ID_CHVACSET_LABEL_CAR1RUNMODEL,HVAC_RUNmode1);
//    SetHVAC_mode(ID_CHVACSET_LABEL_CAR2RUNMODEL,HVAC_RUNmode2);
//    SetHVAC_mode(ID_CHVACSET_LABEL_CAR3RUNMODEL,HVAC_RUNmode3);
//    SetHVAC_mode(ID_CHVACSET_LABEL_CAR4RUNMODEL,HVAC_RUNmode4);
//    SetHVAC_mode(ID_CHVACSET_LABEL_CAR5RUNMODEL,HVAC_RUNmode5);
//    SetHVAC_mode(ID_CHVACSET_LABEL_CAR6RUNMODEL,HVAC_RUNmode6);
//    SetHVAC_mode(ID_CHVACSET_LABEL_CAR7RUNMODEL,HVAC_RUNmode7);
//    SetHVAC_mode(ID_CHVACSET_LABEL_CAR8RUNMODEL,HVAC_RUNmode8);
}
void CHVACSettingPage::SetHVAC_mode(int lableId, QString modeValue)
{
    ((CLabel *)GetDlgItem(lableId))->SetCtrlText(modeValue);

}

void CHVACSettingPage::UpdateHVAC_Compressor()
{
    if(Bit( HVAC_810_10, 2 )){car1_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS1))->SetTxtColor(Qt::black);} else{car1_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_810_10, 1 )){car1_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS2))->SetTxtColor(Qt::black);} else{car1_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_810_10, 16 )){car1_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS3))->SetTxtColor(Qt::black);} else{car1_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_810_10, 15 )){car1_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS4))->SetTxtColor(Qt::black);} else{car1_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_10, 2 )){car2_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS1))->SetTxtColor(Qt::black);} else{car2_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_10, 1 )){car2_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS2))->SetTxtColor(Qt::black);} else{car2_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_10, 16 )){car2_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS3))->SetTxtColor(Qt::black);} else{car2_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_10, 15 )){car2_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS4))->SetTxtColor(Qt::black);} else{car2_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_10, 2 )){car3_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS1))->SetTxtColor(Qt::black);} else{car3_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_10, 1 )){car3_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS2))->SetTxtColor(Qt::black);} else{car3_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_10, 16 )){car3_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS3))->SetTxtColor(Qt::black);} else{car3_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_10, 15 )){car3_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS4))->SetTxtColor(Qt::black);} else{car3_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_10, 2 )){car4_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS1))->SetTxtColor(Qt::black);} else{car4_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_10, 1 )){car4_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS2))->SetTxtColor(Qt::black);} else{car4_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_10, 16 )){car4_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS3))->SetTxtColor(Qt::black);} else{car4_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_10, 15 )){car4_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS4))->SetTxtColor(Qt::black);} else{car4_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_10, 2 )){car5_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS1))->SetTxtColor(Qt::black);} else{car5_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_10, 1 )){car5_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS2))->SetTxtColor(Qt::black);} else{car5_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_10, 16 )){car5_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS3))->SetTxtColor(Qt::black);} else{car5_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_10, 15 )){car5_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS4))->SetTxtColor(Qt::black);} else{car5_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_10, 2 )){car6_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS1))->SetTxtColor(Qt::black);} else{car6_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_10, 1 )){car6_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS2))->SetTxtColor(Qt::black);} else{car6_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_10, 16 )){car6_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS3))->SetTxtColor(Qt::black);} else{car6_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_10, 15 )){car6_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS4))->SetTxtColor(Qt::black);} else{car6_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_870_10, 2 )){car7_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS1))->SetTxtColor(Qt::black);} else{car7_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_870_10, 1 )){car7_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS2))->SetTxtColor(Qt::black);} else{car7_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_870_10, 16 )){car7_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS3))->SetTxtColor(Qt::black);} else{car7_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_870_10, 15 )){car7_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS4))->SetTxtColor(Qt::black);} else{car7_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_10, 2 )){car8_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS1))->SetTxtColor(Qt::black);} else{car8_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_10, 1 )){car8_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS2))->SetTxtColor(Qt::black);} else{car8_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_10, 16 )){car8_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS3))->SetTxtColor(Qt::black);} else{car8_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_10, 15 )){car8_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS4))->SetTxtColor(Qt::black);} else{car8_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS4))->SetTxtColor(Qt::white);}

    if(Bit( HVAC_810_10, 10)||Bit( HVAC_810_11, 6 )||Bit( HVAC_810_11, 2 )||Bit( HVAC_810_11, 10 )){car1_Compressor1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_810_10,  9)||Bit( HVAC_810_11, 5 )||Bit( HVAC_810_11, 1 )||Bit( HVAC_810_11, 9 )){car1_Compressor2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_810_11,  8)||Bit( HVAC_810_11, 4 )||Bit( HVAC_810_11, 16 )||Bit( HVAC_810_12, 8 )){car1_Compressor3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_810_11,  7)||Bit( HVAC_810_11, 3 )||Bit( HVAC_810_11, 15 )||Bit( HVAC_810_12, 7 )){car1_Compressor4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_10, 10 )||Bit( HVAC_820_11, 6 )||Bit( HVAC_820_11, 2 )||Bit( HVAC_820_11, 10 )){car2_Compressor1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_10, 9 )||Bit( HVAC_820_11, 5)||Bit( HVAC_820_11, 1 )||Bit( HVAC_820_11, 9 )){car2_Compressor2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_11, 8 )||Bit( HVAC_820_11, 4 )||Bit( HVAC_820_11, 16 )||Bit( HVAC_820_12, 8 )){car2_Compressor3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_11,  7 )||Bit( HVAC_820_11, 3 )||Bit( HVAC_820_11, 15 )||Bit( HVAC_820_12, 7)){car2_Compressor4=2;((CLabel *)  GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_10, 10 )||Bit( HVAC_830_11, 6 )||Bit( HVAC_830_11, 2)||Bit( HVAC_830_11, 10 )){car3_Compressor1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_10, 9 )||Bit( HVAC_830_11, 5 )||Bit( HVAC_830_11, 1 )||Bit( HVAC_830_11, 9 )){car3_Compressor2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_11, 8 )||Bit( HVAC_830_11, 4 )||Bit( HVAC_830_11, 16 )||Bit( HVAC_830_12, 8 )){car3_Compressor3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_11, 7  )||Bit( HVAC_830_11, 3 )||Bit( HVAC_830_11, 15 )||Bit( HVAC_830_12, 7)){car3_Compressor4=2;((CLabel *)  GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_10, 10 )||Bit( HVAC_840_11, 6 )||Bit( HVAC_840_11, 2 )||Bit( HVAC_840_11, 10 )){car4_Compressor1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_10, 9 )||Bit( HVAC_840_11, 5 )||Bit( HVAC_840_11, 1 )||Bit( HVAC_840_11, 9 )){car4_Compressor2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_11, 8 )||Bit( HVAC_840_11, 4 )||Bit( HVAC_840_11, 16 )||Bit( HVAC_840_12, 8 )){car4_Compressor3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_11,  7 )||Bit( HVAC_840_11, 3 )||Bit( HVAC_840_11, 15 )||Bit( HVAC_840_12, 7)){car4_Compressor4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_10, 10 )||Bit( HVAC_850_11, 6 )||Bit( HVAC_850_11, 2 )||Bit( HVAC_850_11, 10 )){car5_Compressor1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_10, 9 )||Bit( HVAC_850_11, 5 )||Bit( HVAC_850_11, 1 )||Bit( HVAC_850_11, 9 )){car5_Compressor2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_11, 8 )||Bit( HVAC_850_11, 4 )||Bit( HVAC_850_11, 16 )||Bit( HVAC_850_12, 8 )){car5_Compressor3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_11, 7  )||Bit( HVAC_850_11, 3 )||Bit( HVAC_850_11, 15 )||Bit( HVAC_850_12, 7)){car5_Compressor4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_10, 10 )||Bit( HVAC_860_11, 6 )||Bit( HVAC_860_11, 2 )||Bit( HVAC_860_11, 10 )){car6_Compressor1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_10, 9 )||Bit( HVAC_860_11, 5 )||Bit( HVAC_860_11, 1 )||Bit( HVAC_860_11, 9 )){car6_Compressor2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_11, 8 )||Bit( HVAC_860_11, 4 )||Bit( HVAC_860_11, 16 )||Bit( HVAC_860_12, 8 )){car6_Compressor3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_11, 7 )||Bit( HVAC_860_11, 3 )||Bit( HVAC_860_11, 15 )||Bit( HVAC_860_12, 7 )){car6_Compressor4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_870_10, 10 )||Bit( HVAC_870_11, 6 )||Bit( HVAC_870_11, 2 )||Bit( HVAC_870_11, 10 )){car7_Compressor1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_870_10, 9 )||Bit( HVAC_870_11, 5 )||Bit( HVAC_870_11, 1 )||Bit( HVAC_870_11, 9 )){car7_Compressor2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_870_11, 8 )||Bit( HVAC_870_11, 4 )||Bit( HVAC_870_11, 16 )||Bit( HVAC_870_12, 8 )){car7_Compressor3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_870_11, 7  )||Bit( HVAC_870_11, 3 )||Bit( HVAC_870_11, 15 )||Bit( HVAC_870_12, 7)){car7_Compressor4=2;((CLabel *)  GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_10, 10 )||Bit( HVAC_880_11, 6 )||Bit( HVAC_880_11, 2)||Bit( HVAC_880_11, 10 )){car8_Compressor1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_10, 9 )||Bit( HVAC_880_11, 5 )||Bit( HVAC_880_11, 1 )||Bit( HVAC_880_11, 9 )){car8_Compressor2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_11, 8 )||Bit( HVAC_880_11, 4 )||Bit( HVAC_880_11, 16 )||Bit( HVAC_880_12, 8 )){car8_Compressor3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_11,  7 )||Bit( HVAC_880_11, 3 )||Bit( HVAC_880_11, 15 )||Bit( HVAC_880_12, 7 )){car8_Compressor4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS4))->SetTxtColor(Qt::white);}

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COMPRESS1,car1_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COMPRESS2, car1_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COMPRESS3, car1_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COMPRESS4, car1_Compressor4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COMPRESS1, car2_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COMPRESS2, car2_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COMPRESS3, car2_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COMPRESS4, car2_Compressor4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COMPRESS1, car3_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COMPRESS2, car3_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COMPRESS3, car3_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COMPRESS4, car3_Compressor4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COMPRESS1, car4_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COMPRESS2, car4_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COMPRESS3, car4_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COMPRESS4, car4_Compressor4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COMPRESS1, car5_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COMPRESS2, car5_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COMPRESS3, car5_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COMPRESS4, car5_Compressor4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COMPRESS1, car6_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COMPRESS2, car6_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COMPRESS3, car6_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COMPRESS4, car6_Compressor4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7COMPRESS1, car7_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7COMPRESS2, car7_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7COMPRESS3, car7_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7COMPRESS4, car7_Compressor4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8COMPRESS1, car8_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8COMPRESS2, car8_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8COMPRESS3, car8_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8COMPRESS4, car8_Compressor4);

}


void CHVACSettingPage::UpdateHVAC_Condenser()
{
    if(Bit( HVAC_810_9, 10 )){car1_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD1))->SetTxtColor(Qt::black);} else{car1_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_810_9, 9 )){car1_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD2))->SetTxtColor(Qt::black);} else{car1_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_810_10, 8 )){car1_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD3))->SetTxtColor(Qt::black);} else{car1_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_810_10, 7 )){car1_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD4))->SetTxtColor(Qt::black);} else{car1_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_9, 10 )){car2_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD1))->SetTxtColor(Qt::black);} else{car2_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_9, 9 )){car2_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD2))->SetTxtColor(Qt::black);} else{car2_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_10, 8 )){car2_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD3))->SetTxtColor(Qt::black);} else{car2_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_10, 7 )){car2_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD4))->SetTxtColor(Qt::black);} else{car2_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_9, 10 )){car3_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD1))->SetTxtColor(Qt::black);} else{car3_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_9, 9 )){car3_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD2))->SetTxtColor(Qt::black);} else{car3_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_10, 8 )){car3_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD3))->SetTxtColor(Qt::black);} else{car3_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_10, 7 )){car3_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD4))->SetTxtColor(Qt::black);} else{car3_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_9, 10 )){car4_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD1))->SetTxtColor(Qt::black);} else{car4_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_9, 9 )){car4_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD2))->SetTxtColor(Qt::black);} else{car4_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_10, 8)){car4_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD3))->SetTxtColor(Qt::black);} else{car4_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_10, 7 )){car4_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD4))->SetTxtColor(Qt::black);} else{car4_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_9, 10 )){car5_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD1))->SetTxtColor(Qt::black);} else{car5_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_9, 9 )){car5_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD2))->SetTxtColor(Qt::black);} else{car5_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_10, 8 )){car5_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD3))->SetTxtColor(Qt::black);} else{car5_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_10, 7 )){car5_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD4))->SetTxtColor(Qt::black);} else{car5_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_9, 10 )){car6_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD1))->SetTxtColor(Qt::black);} else{car6_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_9, 9 )){car6_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD2))->SetTxtColor(Qt::black);} else{car6_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_10, 8 )){car6_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD3))->SetTxtColor(Qt::black);} else{car6_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_10, 7 )){car6_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD4))->SetTxtColor(Qt::black);} else{car6_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD4))->SetTxtColor(Qt::white);}

    if(Bit( HVAC_870_9, 10 )){car7_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD1))->SetTxtColor(Qt::black);} else{car7_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_870_9, 9 )){car7_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD2))->SetTxtColor(Qt::black);} else{car7_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_870_10, 8 )){car7_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD3))->SetTxtColor(Qt::black);} else{car7_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_870_10, 7 )) {car7_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD4))->SetTxtColor(Qt::black);} else{car7_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_9, 10 )){car8_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD1))->SetTxtColor(Qt::black);} else{car8_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_9, 9 )){car8_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD2))->SetTxtColor(Qt::black);} else{car8_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_10, 8 )){car8_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD3))->SetTxtColor(Qt::black);} else{car8_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_10, 7 )) {car8_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD4))->SetTxtColor(Qt::black);}  else{car8_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD4))->SetTxtColor(Qt::white);}

    if(Bit( HVAC_810_10, 14 )){car1_Condenser1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_810_10, 13 )){car1_Condenser2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_810_10, 12 )){car1_Condenser3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_810_10, 11 )){car1_Condenser4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_10, 14 )){car2_Condenser1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_10, 13 )){car2_Condenser2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_10, 12 )){car2_Condenser3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_10, 11 )){car2_Condenser4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_10, 14 )){car3_Condenser1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_10, 13 )){car3_Condenser2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_10, 12 )){car3_Condenser3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_10, 11 )){car3_Condenser4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_10, 14 )){car4_Condenser1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_10, 13 )){car4_Condenser2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_10, 12 )){car4_Condenser3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_10, 11 )){car4_Condenser4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_10, 14 )){car5_Condenser1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_10, 13 )){car5_Condenser2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_10, 12 )){car5_Condenser3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_10, 11 )){car5_Condenser4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_10, 14 )){car6_Condenser1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_10, 13 )){car6_Condenser2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_10, 12 )){car6_Condenser3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_10, 11 )){car6_Condenser4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_870_10, 14 )){car7_Condenser1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_870_10, 13 )){car7_Condenser2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_870_10, 12 )){car7_Condenser3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_870_10, 11 )){car7_Condenser4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_10, 14 )){car8_Condenser1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_10, 13 )){car8_Condenser2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_10, 12 )){car8_Condenser3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_10, 11 )){car8_Condenser4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD4))->SetTxtColor(Qt::white);}

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COLD1, car1_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COLD2, car1_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COLD3, car1_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COLD4, car1_Condenser4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COLD1, car2_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COLD2, car2_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COLD3, car2_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COLD4, car2_Condenser4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COLD1, car3_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COLD2, car3_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COLD3, car3_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COLD4, car3_Condenser4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COLD1, car4_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COLD2, car4_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COLD3, car4_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COLD4, car4_Condenser4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COLD1, car5_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COLD2, car5_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COLD3, car5_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COLD4, car5_Condenser4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COLD1, car6_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COLD2, car6_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COLD3, car6_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COLD4, car6_Condenser4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7COLD1, car7_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7COLD2, car7_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7COLD3, car7_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7COLD4, car7_Condenser4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8COLD1, car8_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8COLD2, car8_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8COLD3, car8_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8COLD4, car8_Condenser4);

}

void CHVACSettingPage::UpdateHVAC_EvaporatorFan()
{
    if(Bit( HVAC_810_10, 6 )){car1_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND1))->SetTxtColor(Qt::black);} else{car1_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_810_10, 5 )){car1_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND2))->SetTxtColor(Qt::black);} else{car1_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_810_10, 4 )){car1_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND3))->SetTxtColor(Qt::black);} else{car1_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_810_10, 3 )){car1_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND4))->SetTxtColor(Qt::black);} else{car1_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_10, 6 )){car2_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND1))->SetTxtColor(Qt::black);} else{car2_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_10, 5 )){car2_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND2))->SetTxtColor(Qt::black);} else{car2_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_10, 4 )){car2_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND3))->SetTxtColor(Qt::black);} else{car2_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_10, 3 )){car2_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND4))->SetTxtColor(Qt::black);} else{car2_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_10, 6 )){car3_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND1))->SetTxtColor(Qt::black);} else{car3_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_10, 5 )){car3_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND2))->SetTxtColor(Qt::black);} else{car3_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_10, 4 )){car3_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND3))->SetTxtColor(Qt::black);} else{car3_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_10, 3 )){car3_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND4))->SetTxtColor(Qt::black);} else{car3_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_10, 6 )){car4_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND1))->SetTxtColor(Qt::black);} else{car4_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_10, 5 )){car4_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND2))->SetTxtColor(Qt::black);} else{car4_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_10, 4 )){car4_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND3))->SetTxtColor(Qt::black);} else{car4_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_10, 3 )){car4_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND4))->SetTxtColor(Qt::black);} else{car4_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_10, 6 )){car5_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND1))->SetTxtColor(Qt::black);} else{car5_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_10, 5 )){car5_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND2))->SetTxtColor(Qt::black);} else{car5_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_10, 4 )){car5_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND3))->SetTxtColor(Qt::black);} else{car5_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_10, 3 )){car5_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND4))->SetTxtColor(Qt::black);} else{car5_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_10, 6 )){car6_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND1))->SetTxtColor(Qt::black);} else{car6_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_10, 5 )){car6_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND2))->SetTxtColor(Qt::black);} else{car6_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_10, 4 )){car6_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND3))->SetTxtColor(Qt::black);} else{car6_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_10, 3 )){car6_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND4))->SetTxtColor(Qt::black);} else{car6_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_870_10, 6 )){car7_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND1))->SetTxtColor(Qt::black);} else{car7_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_870_10, 5 )){car7_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND2))->SetTxtColor(Qt::black);} else{car7_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_870_10, 4 )){car7_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND3))->SetTxtColor(Qt::black);} else{car7_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_870_10, 3 )){car7_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND4))->SetTxtColor(Qt::black);} else{car7_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_10, 6 )){car8_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND1))->SetTxtColor(Qt::black);} else{car8_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_10, 5 )){car8_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND2))->SetTxtColor(Qt::black);} else{car8_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_10, 4 )){car8_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND3))->SetTxtColor(Qt::black);} else{car8_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_10, 3 )){car8_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND4))->SetTxtColor(Qt::black);} else{car8_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND4))->SetTxtColor(Qt::white);}


    if(Bit( HVAC_810_11, 14 )){car1_EvaporatorFan1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_810_11, 13 )){car1_EvaporatorFan2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_810_11, 12 )){car1_EvaporatorFan3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_810_11, 11 )){car1_EvaporatorFan4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_11, 14 )){car2_EvaporatorFan1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_11, 13 )){car2_EvaporatorFan2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_11, 12 )){car2_EvaporatorFan3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_820_11, 11 )){car2_EvaporatorFan4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_11, 14 )){car3_EvaporatorFan1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_11, 13 )){car3_EvaporatorFan2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_11, 12 )){car3_EvaporatorFan3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_830_11, 11 )){car3_EvaporatorFan4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_11, 14 )){car4_EvaporatorFan1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_11, 13 )){car4_EvaporatorFan2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_11, 12 )){car4_EvaporatorFan3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_840_11, 11 )){car4_EvaporatorFan4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_11, 14 )){car5_EvaporatorFan1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_11, 13 )){car5_EvaporatorFan2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_11, 12 )){car5_EvaporatorFan3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_850_11, 11 )){car5_EvaporatorFan4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_11, 14 )){car6_EvaporatorFan1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_11, 13 )){car6_EvaporatorFan2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_11, 12 )){car6_EvaporatorFan3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_860_11, 11 )){car6_EvaporatorFan4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_870_11, 14 )){car7_EvaporatorFan1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_870_11, 13 )){car7_EvaporatorFan2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_870_11, 12 )){car7_EvaporatorFan3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_870_11, 11 )){car7_EvaporatorFan4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND4))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_11, 14 )){car8_EvaporatorFan1=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND1))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_11, 13 )){car8_EvaporatorFan2=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND2))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_11, 12 )){car8_EvaporatorFan3=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND3))->SetTxtColor(Qt::white);}
    if(Bit( HVAC_880_11, 11 )){car8_EvaporatorFan4=2;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND4))->SetTxtColor(Qt::white);}

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1WIND1, car1_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1WIND2, car1_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1WIND3, car1_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1WIND4, car1_EvaporatorFan4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2WIND1, car2_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2WIND2, car2_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2WIND3, car2_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2WIND4, car2_EvaporatorFan4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3WIND1, car3_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3WIND2, car3_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3WIND3, car3_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3WIND4, car3_EvaporatorFan4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4WIND1, car4_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4WIND2, car4_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4WIND3, car4_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4WIND4, car4_EvaporatorFan4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5WIND1, car5_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5WIND2, car5_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5WIND3, car5_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5WIND4, car5_EvaporatorFan4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6WIND1, car6_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6WIND2, car6_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6WIND3, car6_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6WIND4, car6_EvaporatorFan4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7WIND1, car7_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7WIND2, car7_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7WIND3, car7_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7WIND4, car7_EvaporatorFan4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8WIND1, car8_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8WIND2, car8_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8WIND3, car8_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8WIND4, car8_EvaporatorFan4);
}

void CHVACSettingPage::UpdateHVAC_HotElectricity()
{
    if(Bit(DI_110_6, 10))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1LIGHTEM1))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1LIGHTEM1))->SetCtrlBKColor(Qt::black);;
    }
    if(Bit(DI_110_6, 11))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1LIGHTEM2))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1LIGHTEM2))->SetCtrlBKColor(Qt::black);;
    }

    if(Bit(DI_120_1, 10))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2LIGHTEM1))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2LIGHTEM1))->SetCtrlBKColor(Qt::black);;
    }
    if(Bit(DI_120_1, 11))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2LIGHTEM2))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2LIGHTEM2))->SetCtrlBKColor(Qt::black);;
    }

    if(Bit(DI_130_1, 10))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3LIGHTEM1))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3LIGHTEM1))->SetCtrlBKColor(Qt::black);;
    }
    if(Bit(DI_130_1, 11))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3LIGHTEM2))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3LIGHTEM2))->SetCtrlBKColor(Qt::black);;
    }

    if(Bit(DI_140_1, 10))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4LIGHTEM1))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4LIGHTEM1))->SetCtrlBKColor(Qt::black);;
    }
    if(Bit(DI_140_1, 11))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4LIGHTEM2))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4LIGHTEM2))->SetCtrlBKColor(Qt::black);;
    }

    if(Bit(DI_150_1, 10))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM1))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM1))->SetCtrlBKColor(Qt::black);;
    }
    if(Bit(DI_150_1, 11))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM2))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM2))->SetCtrlBKColor(Qt::black);;
    }

    if(Bit(DI_160_1, 10))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM1))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM1))->SetCtrlBKColor(Qt::black);;
    }
    if(Bit(DI_160_1, 11))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM2))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM2))->SetCtrlBKColor(Qt::black);;
    }

    if(Bit(DI_170_1, 10))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM1))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM1))->SetCtrlBKColor(Qt::black);;
    }
    if(Bit(DI_170_1, 11))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM2))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM2))->SetCtrlBKColor(Qt::black);;
    }


    if(Bit(DI_180_6, 10))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM1))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM1))->SetCtrlBKColor(Qt::black);;
    }
    if(Bit(DI_180_6, 11))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM2))->SetCtrlBKColor(Qt::green);;
    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM2))->SetCtrlBKColor(Qt::black);;
    }


}

void CHVACSettingPage::SetHVACStateColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void CHVACSettingPage::UpdateHVACError()
{

    car1_HVAC_error1=Bit( hvac_status_data20, 16 )||(Bit( hvac_status_data20, 12 ))||(Bit( hvac_status_data20, 8 ))||(Bit( hvac_status_data20, 4 ))||(Bit( hvac_status_data28, 16 ))||(Bit( hvac_status_data28, 12 ))||(Bit( hvac_status_data28, 8 ));
    car1_HVAC_error2=Bit( hvac_status_data20, 15 )||(Bit( hvac_status_data20, 11 ))||(Bit( hvac_status_data20, 7 ))||(Bit( hvac_status_data20, 3 ))||(Bit( hvac_status_data28, 15 ))||(Bit( hvac_status_data28, 11 ))||(Bit( hvac_status_data28, 7 ));
    car1_HVAC_error3=Bit( hvac_status_data20, 14 )||(Bit( hvac_status_data20, 10 ))||(Bit( hvac_status_data20, 6 ))||(Bit( hvac_status_data20, 2 ))||(Bit( hvac_status_data28, 14))||(Bit( hvac_status_data28, 10 ))||(Bit( hvac_status_data28, 6 ));
    car1_HVAC_error4=Bit( hvac_status_data20, 13)||(Bit( hvac_status_data20, 9 ))||(Bit( hvac_status_data20, 5 ))||(Bit( hvac_status_data20, 1 ))||(Bit( hvac_status_data28, 13))||(Bit( hvac_status_data28, 9 ))||(Bit( hvac_status_data28, 5 ));

    car2_HVAC_error1=Bit( hvac_status_data21, 16 )||(Bit( hvac_status_data21, 12 ))||(Bit( hvac_status_data21, 8 ))||(Bit( hvac_status_data21, 4 ))||(Bit( hvac_status_data29, 16 ))||(Bit( hvac_status_data29, 12 ))||(Bit( hvac_status_data29, 8 ));
    car2_HVAC_error2=Bit( hvac_status_data21, 15 )||(Bit( hvac_status_data21, 11 ))||(Bit( hvac_status_data21, 7 ))||(Bit( hvac_status_data21, 3 ))||(Bit( hvac_status_data29, 15 ))||(Bit( hvac_status_data29, 11 ))||(Bit( hvac_status_data29, 7 ));
    car2_HVAC_error3=Bit( hvac_status_data21, 14 )||(Bit( hvac_status_data21, 10 ))||(Bit( hvac_status_data21, 6 ))||(Bit( hvac_status_data21, 2 ))||(Bit( hvac_status_data29, 14))||(Bit( hvac_status_data29, 10 ))||(Bit( hvac_status_data29, 6 ));
    car2_HVAC_error4=Bit( hvac_status_data21, 13)||(Bit( hvac_status_data21, 9 ))||(Bit( hvac_status_data21, 5 ))||(Bit( hvac_status_data21, 1 ))||(Bit( hvac_status_data29, 13))||(Bit( hvac_status_data29, 9 ))||(Bit( hvac_status_data29, 5 ));

    car3_HVAC_error1=Bit( hvac_status_data22, 16 )||(Bit( hvac_status_data22, 12 ))||(Bit( hvac_status_data22, 8 ))||(Bit( hvac_status_data22, 4 ))||(Bit( hvac_status_data30, 16 ))||(Bit( hvac_status_data30, 12 ))||(Bit( hvac_status_data30, 8 ));
    car3_HVAC_error2=Bit( hvac_status_data22, 15 )||(Bit( hvac_status_data22, 11 ))||(Bit( hvac_status_data22, 7 ))||(Bit( hvac_status_data22, 3 ))||(Bit( hvac_status_data30, 15 ))||(Bit( hvac_status_data30, 11 ))||(Bit( hvac_status_data30, 7 ));
    car3_HVAC_error3=Bit( hvac_status_data22, 14 )||(Bit( hvac_status_data22, 10 ))||(Bit( hvac_status_data22, 6 ))||(Bit( hvac_status_data22, 2 ))||(Bit( hvac_status_data30, 14))||(Bit( hvac_status_data30, 10 ))||(Bit( hvac_status_data30, 6 ));
    car3_HVAC_error4=Bit( hvac_status_data22, 13)||(Bit( hvac_status_data22, 9 ))||(Bit( hvac_status_data22, 5 ))||(Bit( hvac_status_data22, 1 ))||(Bit( hvac_status_data30, 13))||(Bit( hvac_status_data30, 9 ))||(Bit( hvac_status_data30, 5 ));

    car4_HVAC_error1=Bit( hvac_status_data23, 16 )||(Bit( hvac_status_data23, 12 ))||(Bit( hvac_status_data23, 8 ))||(Bit( hvac_status_data23, 4 ))||(Bit( hvac_status_data31, 16 ))||(Bit( hvac_status_data31, 12 ))||(Bit( hvac_status_data31, 8 ));
    car4_HVAC_error2=Bit( hvac_status_data23, 15 )||(Bit( hvac_status_data23, 11 ))||(Bit( hvac_status_data23, 7 ))||(Bit( hvac_status_data23, 3 ))||(Bit( hvac_status_data31, 15 ))||(Bit( hvac_status_data31, 11 ))||(Bit( hvac_status_data31, 7 ));
    car4_HVAC_error3=Bit( hvac_status_data23, 14 )||(Bit( hvac_status_data23, 10 ))||(Bit( hvac_status_data23, 6 ))||(Bit( hvac_status_data23, 2 ))||(Bit( hvac_status_data31, 14))||(Bit( hvac_status_data31, 10 ))||(Bit( hvac_status_data31, 6 ));
    car4_HVAC_error4=Bit( hvac_status_data23, 13)||(Bit( hvac_status_data23, 9 ))||(Bit( hvac_status_data23, 5 ))||(Bit( hvac_status_data23, 1 ))||(Bit( hvac_status_data31, 13))||(Bit( hvac_status_data31, 9 ))||(Bit( hvac_status_data31, 5 ));

    car5_HVAC_error1=Bit( hvac_status_data24, 16 )||(Bit( hvac_status_data24, 12 ))||(Bit( hvac_status_data24, 8 ))||(Bit( hvac_status_data24, 4 ))||(Bit( hvac_status_data32, 16 ))||(Bit( hvac_status_data32, 12 ))||(Bit( hvac_status_data32, 8 ));
    car5_HVAC_error2=Bit( hvac_status_data24, 15 )||(Bit( hvac_status_data24, 11 ))||(Bit( hvac_status_data24, 7 ))||(Bit( hvac_status_data24, 3 ))||(Bit( hvac_status_data32, 15 ))||(Bit( hvac_status_data32, 11 ))||(Bit( hvac_status_data32, 7 ));
    car5_HVAC_error3=Bit( hvac_status_data24, 14 )||(Bit( hvac_status_data24, 10 ))||(Bit( hvac_status_data24, 6 ))||(Bit( hvac_status_data24, 2 ))||(Bit( hvac_status_data32, 14))||(Bit( hvac_status_data32, 10 ))||(Bit( hvac_status_data32, 6 ));
    car5_HVAC_error4=Bit( hvac_status_data24, 13)||(Bit( hvac_status_data24, 9 ))||(Bit( hvac_status_data24, 5 ))||(Bit( hvac_status_data24, 1 ))||(Bit( hvac_status_data32, 13))||(Bit( hvac_status_data32, 9 ))||(Bit( hvac_status_data32, 5 ));

    car6_HVAC_error1=Bit( hvac_status_data26, 16 )||(Bit( hvac_status_data26, 12 ))||(Bit( hvac_status_data26, 8 ))||(Bit( hvac_status_data26, 4 ))||(Bit( hvac_status_data33, 16 ))||(Bit( hvac_status_data33, 12 ))||(Bit( hvac_status_data33, 8 ));
    car6_HVAC_error2=Bit( hvac_status_data26, 15 )||(Bit( hvac_status_data26, 11 ))||(Bit( hvac_status_data26, 7 ))||(Bit( hvac_status_data26, 3 ))||(Bit( hvac_status_data33, 15 ))||(Bit( hvac_status_data33, 11 ))||(Bit( hvac_status_data33, 7 ));
    car6_HVAC_error3=Bit( hvac_status_data26, 14 )||(Bit( hvac_status_data26, 10 ))||(Bit( hvac_status_data26, 6 ))||(Bit( hvac_status_data26, 2 ))||(Bit( hvac_status_data33, 14))||(Bit( hvac_status_data33, 10 ))||(Bit( hvac_status_data33, 6 ));
    car6_HVAC_error4=Bit( hvac_status_data26, 13)||(Bit( hvac_status_data26, 9 ))||(Bit( hvac_status_data26, 5 ))||(Bit( hvac_status_data26, 1 ))||(Bit( hvac_status_data33, 13))||(Bit( hvac_status_data33, 9 ))||(Bit( hvac_status_data33, 5 ));
}

void CHVACSettingPage::SetCtrlButtonState(int nID)
{
    int nIDArray[] =
    {
      ID_CHVACSET_BUTTON_CONFIRM,
      ID_CHVACSET_BUTTON_STRONGCOLD,
      ID_CHVACSET_BUTTON_WEAKCOLD,
      ID_CHVACSET_BUTTON_AUTOCOLD,
      ID_CHVACSET_BUTTON_PRECOOL,
 //     ID_CHVACSET_BUTTON_AMERGEWIND,
//      ID_CHVACSET_BUTTON_FULLWARM,
      ID_CHVACSET_BUTTON_HALFWARM,
 //     ID_CHVACSET_BUTTON_AUTOWARM,
      ID_CHVACSET_BUTTON_WIND,
      ID_CHVACSET_BUTTON_STOP,
    };

   for (int i = 0; i <8; i++)
   {
       if (nID != nIDArray[i])
          ((CButton*)GetDlgItem(nIDArray[i]))->SetCtrlEnable(false);
   }
}

void CHVACSettingPage::ReSetCtrlButtonState()
{
    int nIDArray[] =
    {
 //     ID_CHVACSET_BUTTON_CONFIRM,
      ID_CHVACSET_BUTTON_STRONGCOLD,
      ID_CHVACSET_BUTTON_WEAKCOLD,
      ID_CHVACSET_BUTTON_AUTOCOLD,
      ID_CHVACSET_BUTTON_PRECOOL,
 //     ID_CHVACSET_BUTTON_AMERGEWIND,
//      ID_CHVACSET_BUTTON_FULLWARM,
      ID_CHVACSET_BUTTON_HALFWARM,
  //    ID_CHVACSET_BUTTON_AUTOWARM,
      ID_CHVACSET_BUTTON_WIND,
      ID_CHVACSET_BUTTON_STOP,
    };

   for (int i = 0; i < 7; i++)
   {
      ((CButton*)GetDlgItem(nIDArray[i]))->SetCtrlEnable(true);
   }
   if(m_bAutoTempV && Bit(HVAC_command_hide,1))
   {
       ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->SetCtrlEnable(true);
   }
}

void CHVACSettingPage::updateTempV()
{
    if (Bit(HVAC_command_hide,1))
    {
        char buff[10] = {'\0'};
        if (Bit( CCU_HMI_221_16, 14 ))
        {
            sprintf(buff, "%.1f",setting_temp);
            ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QString(buff).append(QSTR("℃")));
        }
//        else if (Bit( CCU_HMI_221_16, 11 ))
//        {
//            sprintf(buff, "%.1f",setting_temp2);
//            ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QString(buff).append(QSTR("℃")));
//        }
        else
        {
            ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QSTR("    ℃"));
        }
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QSTR("    ℃"));
    }
}

void CHVACSettingPage::SpecialButtonState()
{
    if((Bit( CCU_HMI_221_16, 14 ))&&(Bit(HVAC_command_hide,1)))
    {
//        if(((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->IsHide())
//            ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->ShowButton();
//        if(((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->IsHide())
//            ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->ShowButton();
//        if(((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->IsHide())
//            ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->ShowButton();
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->SetCtrlEnable(true);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->SetCtrlEnable(true);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->SetCtrlEnable(true);
    }
    else
    {
//        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->HideButton();
//        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->HideButton();
//        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->HideButton();

        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->SetCtrlEnable(false);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->SetCtrlEnable(false);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->SetCtrlEnable(false);
    }
}


void CHVACSettingPage::UpdateHVAC_NewWind()
{
    if(Bit( HVAC_810_9, 2 )||Bit( HVAC_810_9, 16 )||Bit( HVAC_810_9, 14 ))
    {
        car1_NewWind1=1;
        if(Bit( HVAC_810_9, 2 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_810_9, 16 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_810_9, 14 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_810_9, 12 ))
        {
            car1_NewWind1=0;
        }
        else
        {
            car1_NewWind1=3;
        }

    }
    if(Bit( HVAC_810_9, 1 )||Bit( HVAC_810_9, 15 )||Bit( HVAC_810_9, 13 ))
    {
        car1_NewWind2=1;
        if(Bit( HVAC_810_9, 1 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_810_9, 15 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_810_9, 13 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_810_9, 11 ))
        {
            car1_NewWind2=0;
        }
        else
        {
            car1_NewWind2=3;
        }

    }
    if(Bit( HVAC_820_9, 2)||Bit( HVAC_820_9, 16)||Bit( HVAC_820_9, 14 ))
    {
        car2_NewWind1=1;
        if(Bit( HVAC_820_9, 2 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_820_9, 16 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_820_9, 14 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_820_9, 12 ))
        {
            car2_NewWind1=0;
        }
        else
        {
            car2_NewWind1=3;
        }


    }
    if(Bit( HVAC_820_9, 1 )||Bit( HVAC_820_9, 15 )||Bit( HVAC_820_9, 13 ))
    {
        car2_NewWind2=1;
        if(Bit( HVAC_820_9, 1 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_820_9, 15 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_820_9, 13 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_820_9, 11 ))
        {
            car2_NewWind2=0;
        }
        else
        {
            car2_NewWind2=3;
        }


    }
    if(Bit( HVAC_830_9, 2)||Bit( HVAC_830_9, 16 )||Bit( HVAC_830_9, 14 ))
    {
        car3_NewWind1=1;
        if(Bit( HVAC_830_9, 2 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_830_9, 16 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_830_9, 14 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_830_9, 12 ))
        {
            car3_NewWind1=0;
        }
        else
        {
            car3_NewWind1=3;
        }


    }
    if(Bit( HVAC_830_9, 1 )||Bit( HVAC_830_9, 15 )||Bit( HVAC_830_9, 13 ))
    {
        car3_NewWind2=1;
        if(Bit( HVAC_830_9, 1 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_830_9, 15))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_830_9, 13))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_830_9, 11 ))
        {
            car3_NewWind2=0;
        }
        else
        {
            car3_NewWind2=3;
        }


    }
    if(Bit( HVAC_840_9, 16 )||Bit( HVAC_840_9, 14 )||Bit( HVAC_840_9, 2 ))
    {
        car4_NewWind1=1;
        if(Bit( HVAC_840_9, 2 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_840_9, 16 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_840_9, 14 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_840_9, 12 ))
        {
            car4_NewWind1=0;
        }
        else
        {
            car4_NewWind1=3;
        }


    }
    if(Bit( HVAC_840_9, 1 )||Bit( HVAC_840_9, 15 )||Bit( HVAC_840_9, 13 ))
    {
        car4_NewWind2=1;
        if(Bit( HVAC_840_9, 1 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_840_9, 15 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_840_9, 13 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_840_9, 11 ))
        {
            car4_NewWind2=0;
        }
        else
        {
            car4_NewWind2=3;
        }


    }
    if(Bit( HVAC_850_9, 16 )||Bit( HVAC_850_9, 14 )||Bit( HVAC_850_9, 2 ))
    {
        car5_NewWind1=1;
        if(Bit( HVAC_850_9, 2 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_850_9, 16 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_850_9, 14 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_850_9, 12 ))
        {
            car5_NewWind1=0;
        }
        else
        {
            car5_NewWind1=3;
        }


    }
    if(Bit( HVAC_850_9, 1 )||Bit( HVAC_850_9, 15 )||Bit( HVAC_850_9, 13 ))
    {
        car5_NewWind2=1;
        if(Bit( HVAC_850_9, 1))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_850_9, 15 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_850_9, 13 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_850_9, 11 ))
        {
            car5_NewWind2=0;
        }
        else
        {
            car5_NewWind2=3;
        }


    }
    if(Bit( HVAC_860_9, 16 )||Bit( HVAC_860_9, 14 )||Bit( HVAC_860_9, 2 ))
    {
        car6_NewWind1=1;
        if(Bit( HVAC_860_9, 2 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_860_9, 16 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_860_9, 14 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_860_9, 12))
        {
            car6_NewWind1=0;
        }
        else
        {
            car6_NewWind1=3;
        }


    }
    if(Bit( HVAC_860_9, 1 )||Bit( HVAC_860_9, 15 )||Bit( HVAC_860_9, 13 ))
    {
        car6_NewWind2=1;
        if(Bit( HVAC_860_9, 1 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_860_9, 15 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_860_9, 13 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_860_9, 11))
        {
            car6_NewWind2=0;
        }
        else
        {
            car6_NewWind2=3;
        }


    }
    if(Bit( HVAC_870_9, 16 )||Bit( HVAC_870_9, 14 )||Bit( HVAC_870_9, 2 ))
    {
        car7_NewWind1=1;
        if(Bit( HVAC_870_9, 2 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_870_9, 16 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_870_9, 14 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_870_9, 12))
        {
            car7_NewWind1=0;
        }
        else
        {
            car7_NewWind1=3;
        }


    }
    if(Bit( HVAC_870_9, 1 )||Bit( HVAC_870_9, 15 )||Bit( HVAC_870_9, 13 ))
    {
        car7_NewWind2=1;
        if(Bit( HVAC_870_9, 1 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_870_9, 15 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_870_9, 13 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_870_9, 11))
        {
            car7_NewWind2=0;
        }
        else
        {
            car7_NewWind2=3;
        }


    }
    if(Bit( HVAC_880_9, 16 )||Bit( HVAC_880_9, 14 )||Bit( HVAC_880_9, 2 ))
    {
        car8_NewWind1=1;
        if(Bit( HVAC_880_9, 2 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_880_9, 16 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_880_9, 14 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_880_9, 12))
        {
            car8_NewWind1=0;
        }
        else
        {
            car8_NewWind1=3;
        }


    }
    if(Bit( HVAC_880_9, 1 )||Bit( HVAC_880_9, 15 )||Bit( HVAC_880_9, 13 ))
    {
        car8_NewWind2=1;
        if(Bit( HVAC_880_9, 1 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QSTR("100%"));
        }
        if(Bit( HVAC_880_9, 15 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QSTR("30%"));
        }
        if(Bit( HVAC_880_9, 13 ))
        {
            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QSTR("60%"));
        }

    }
    else
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QSTR(""));
        if(Bit( HVAC_880_9, 11))
        {
            car8_NewWind2=0;
        }
        else
        {
            car8_NewWind2=3;
        }


    }
    if(Bit( HVAC_810_12, 4 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QSTR(""));
        car1_NewWind1=2;
    }
    if(Bit( HVAC_810_12, 3 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QSTR(""));
        car1_NewWind2=2;
    }

    if(Bit( HVAC_820_12, 4 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QSTR(""));
        car2_NewWind1=2;
    }
    if(Bit( HVAC_820_12, 3 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QSTR(""));
        car2_NewWind2=2;
    }

    if(Bit( HVAC_830_12, 4 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QSTR(""));
        car3_NewWind1=2;
    }
    if(Bit( HVAC_830_12, 3 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QSTR(""));
        car3_NewWind2=2;
    }

    if(Bit( HVAC_840_12, 4 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetCtrlText(QSTR(""));
        car4_NewWind1=2;
    }
    if(Bit( HVAC_840_12, 3 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QSTR(""));
        car4_NewWind2=2;
    }

    if(Bit( HVAC_850_12, 4 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QSTR(""));
        car5_NewWind1=2;
    }
    if(Bit( HVAC_850_12, 3 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QSTR(""));
        car5_NewWind2=2;
    }

    if(Bit( HVAC_860_12, 4 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QSTR(""));
        car6_NewWind1=2;
    }
    if(Bit( HVAC_860_12, 3 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QSTR(""));
        car6_NewWind2=2;
    }

    if(Bit( HVAC_870_12, 4 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QSTR(""));
        car7_NewWind1=2;
    }
    if(Bit( HVAC_870_12, 3 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QSTR(""));
        car7_NewWind2=2;
    }

    if(Bit( HVAC_880_12, 4 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QSTR(""));
        car8_NewWind1=2;
    }
    if(Bit( HVAC_880_12, 3 ))
    {
        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QSTR(""));
        car8_NewWind2=2;
    }

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1NEWWIND1,car1_NewWind1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1NEWWIND2,car1_NewWind2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2NEWWIND1,car2_NewWind1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2NEWWIND2,car2_NewWind2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3NEWWIND1,car3_NewWind1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3NEWWIND2,car3_NewWind2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4NEWWIND1,car4_NewWind1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4NEWWIND2,car4_NewWind2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5NEWWIND1,car5_NewWind1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5NEWWIND2,car5_NewWind2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6NEWWIND1,car6_NewWind1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6NEWWIND2,car6_NewWind2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7NEWWIND1,car7_NewWind1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7NEWWIND2,car7_NewWind2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8NEWWIND1,car8_NewWind1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8NEWWIND2,car8_NewWind2);
}

void CHVACSettingPage::UpdateEmergencyMode()
{
    //int modecolor = 0;
    if ( Bit( HVAC_810_12, 15) ||Bit( HVAC_820_12, 15)||Bit( HVAC_830_12, 15)||Bit( HVAC_840_12, 15)||Bit( HVAC_850_12, 15)||Bit( HVAC_860_12, 15)||Bit( HVAC_870_12, 15)||Bit( HVAC_880_12, 15)==1)
    {

        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AMERGEWIND))->SetCtrlEnable(true);

    }
    else
    {
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AMERGEWIND))->SetCtrlEnable(false);

    }


}

//void CHVACSettingPage::UpdateHVAC_NewWind()
//{
//    if(Bit( HVAC_810_9, 2 )||Bit( HVAC_810_9, 16 )||Bit( HVAC_810_9, 14 )||Bit( HVAC_810_9, 14 ))
//    {
//        car1_NewWind1=1;
//        if(Bit( HVAC_810_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_810_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car1_NewWind1=0;
//    }
//    if(Bit( HVAC_810_9, 15 )||Bit( HVAC_810_9, 13 )||Bit( HVAC_810_9, 16 )||Bit( HVAC_810_9, 14 ))
//    {
//        car1_NewWind2=1;
//        if(Bit( HVAC_810_7, 15 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_810_7, 13 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car1_NewWind2=0;
//    }
//    if(Bit( HVAC_820_9, 16 )||Bit( HVAC_820_9, 14 )||Bit( HVAC_820_9, 16 )||Bit( HVAC_820_9, 14 ))
//    {
//        car2_NewWind1=1;
//        if(Bit( HVAC_820_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_820_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car2_NewWind1=0;

//    }
//    if(Bit( HVAC_820_9, 16 )||Bit( HVAC_820_9, 14 )||Bit( HVAC_820_9, 16 )||Bit( HVAC_820_9, 14 ))
//    {
//        car2_NewWind2=1;
//        if(Bit( HVAC_820_7, 15 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_820_7, 13 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car2_NewWind2=0;

//    }
//    if(Bit( HVAC_830_9, 16 )||Bit( HVAC_830_9, 14 )||Bit( HVAC_830_9, 16 )||Bit( HVAC_830_9, 14 ))
//    {
//        car3_NewWind1=1;
//        if(Bit( HVAC_830_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_830_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car3_NewWind1=0;

//    }
//    if(Bit( HVAC_830_9, 15 )||Bit( HVAC_830_9, 13 )||Bit( HVAC_830_9, 16 )||Bit( HVAC_830_9, 14 ))
//    {
//        car3_NewWind2=1;
//        if(Bit( HVAC_830_7, 15 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_830_7, 13 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car3_NewWind2=0;

//    }
//    if(Bit( HVAC_840_9, 16 )||Bit( HVAC_840_9, 14 )||Bit( HVAC_840_9, 16 )||Bit( HVAC_840_9, 14 ))
//    {
//        car4_NewWind1=1;
//        if(Bit( HVAC_840_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_810_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car4_NewWind1=0;

//    }
//    if(Bit( HVAC_840_9, 15 )||Bit( HVAC_840_9, 13 )||Bit( HVAC_840_9, 16 )||Bit( HVAC_840_9, 14 ))
//    {
//        car4_NewWind2=1;
//        if(Bit( HVAC_840_7, 15 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_840_7, 13 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car4_NewWind2=0;

//    }
//    if(Bit( HVAC_850_9, 16 )||Bit( HVAC_850_9, 14 )||Bit( HVAC_850_9, 16 )||Bit( HVAC_850_9, 14 ))
//    {
//        car5_NewWind1=1;
//        if(Bit( HVAC_850_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_850_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car5_NewWind1=0;

//    }
//    if(Bit( HVAC_850_9, 16 )||Bit( HVAC_850_9, 14 )||Bit( HVAC_850_9, 16 )||Bit( HVAC_850_9, 14 ))
//    {
//        car5_NewWind2=1;
//        if(Bit( HVAC_850_7, 15))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_850_7, 13 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car5_NewWind2=0;

//    }
//    if(Bit( HVAC_860_9, 16 )||Bit( HVAC_860_9, 14 )||Bit( HVAC_860_9, 16 )||Bit( HVAC_860_9, 14 ))
//    {
//        car6_NewWind1=1;
//        if(Bit( HVAC_860_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_860_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car6_NewWind1=0;

//    }
//    if(Bit( HVAC_860_9, 16 )||Bit( HVAC_860_9, 14 )||Bit( HVAC_860_9, 16 )||Bit( HVAC_860_9, 14 ))
//    {
//        car6_NewWind2=1;
//        if(Bit( HVAC_860_7, 15 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_860_7, 13 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car6_NewWind2=0;

//    }
//    if(Bit( HVAC_870_9, 16 )||Bit( HVAC_870_9, 14 )||Bit( HVAC_870_9, 16 )||Bit( HVAC_870_9, 14 ))
//    {
//        car7_NewWind1=1;
//        if(Bit( HVAC_870_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_870_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car7_NewWind1=0;

//    }
//    if(Bit( HVAC_870_9, 16 )||Bit( HVAC_870_9, 14 )||Bit( HVAC_870_9, 16 )||Bit( HVAC_870_9, 14 ))
//    {
//        car7_NewWind2=1;
//        if(Bit( HVAC_870_7, 15 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_870_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car7_NewWind2=0;

//    }
//    if(Bit( HVAC_880_9, 16 )||Bit( HVAC_880_9, 14 )||Bit( HVAC_880_9, 16 )||Bit( HVAC_880_9, 14 ))
//    {
//        car8_NewWind1=1;
//        if(Bit( HVAC_880_7, 16 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_880_7, 14 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car8_NewWind1=0;

//    }
//    if(Bit( HVAC_880_9, 16 )||Bit( HVAC_880_9, 14 )||Bit( HVAC_880_9, 16 )||Bit( HVAC_880_9, 14 ))
//    {
//        car8_NewWind2=1;
//        if(Bit( HVAC_880_7, 15 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QSTR("全开"));
//        }
//        if(Bit( HVAC_880_7, 13 ))
//        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QSTR("半开"));
//        }

//    }
//    else
//    {
//            car8_NewWind2=0;

//    }

//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1NEWWIND1,car1_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1NEWWIND2,car1_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2NEWWIND1,car2_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2NEWWIND2,car2_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3NEWWIND1,car3_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3NEWWIND2,car3_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4NEWWIND1,car4_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4NEWWIND2,car4_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5NEWWIND1,car5_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5NEWWIND2,car5_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6NEWWIND1,car6_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6NEWWIND2,car6_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7NEWWIND1,car7_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7NEWWIND2,car7_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8NEWWIND1,car8_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8NEWWIND2,car8_NewWind2);
//}

