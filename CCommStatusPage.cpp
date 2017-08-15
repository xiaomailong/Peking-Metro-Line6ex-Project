#include "CCommStatusPage.h"

ROMDATA g_PicRom_CommStatus[] =
{

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    D_COMMON_PAGE_HEADER(QSTR("通信状态"))


    {QSTR("通信中断"),      D_FONT_BOLD(8),      QRect( 20,   6, 162,  30),           Qt::red,                  Qt::white,                CONTROL_LABEL,           ID_PIBCOMMINTERRUPT             },
    {"FaultRed.PNG",      D_DEFAULT_FONT,      QRect(735,  50,  65,  65),           Qt::black,                Qt::red,                  CONTROL_IMAGE,           ID_PIBCS_ICON_WARNNING           },
    {"",                  D_FONT_BOLD(6),      QRect(155,  45, 600,  70),           Qt::black,                Qt::gray,                 CONTROL_TRAIN,           ID_PIBCS_TRAIN                   },
    {"RIGHT",             D_FONT_BOLD(6),      QRect(679,  77,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBCS_ARROW_RIGHT             },
    {"LEFT",              D_FONT_BOLD(6),      QRect( 31,  77,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBCS_ARROW_LEFT              },
   // main MVB net
    {"",                  D_FONT_BOLD(6),      QRect( 70, 139, 640,   6),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 70, 138, 640,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 70, 145, 640,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                  D_FONT_BOLD(6),      QRect( 70, 127, 640,   6),           Qt::cyan,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 70, 126, 640,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 70, 133, 640,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    //  vertical MVB net
    {"",                  D_FONT_BOLD(6),      QRect(90, 145,   4, 320),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(89, 145,   1, 320),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94, 145,   1, 320),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(165, 145,   4, 320),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(164, 145,   1, 320),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(169, 145,   1, 320),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(240, 145,   4, 320),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(239, 145,   1, 320),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(244, 145,   1, 320),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(315, 145,   4, 320),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(314, 145,   1, 320),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319, 145,   1, 320),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(390, 145,   4, 320),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(389, 145,   1, 320),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394, 145,   1, 320),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(465, 145,   4, 320),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(464, 145,   1, 320),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(469, 145,   1, 320),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(540, 145,   4, 320),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(539, 145,   1, 320),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544, 145,   1, 320),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(615, 145,   4, 320),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(614, 145,   1, 320),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 145,   1, 320),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
   // door frame
    {"",                  D_FONT_BOLD(6),      QRect( 65, 460,  88,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 65, 530,  88,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 65, 460,   1,  70),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(152, 460,   1,  70),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                  D_FONT_BOLD(6),      QRect(157, 460,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(157, 530,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(157, 460,   1,  70),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(227, 460,   1,  70),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                  D_FONT_BOLD(6),      QRect(232, 460,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(232, 530,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(232, 460,   1,  70),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(302, 460,   1,  70),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                  D_FONT_BOLD(6),      QRect(307, 460,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(307, 530,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(307, 460,   1,  70),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(377, 460,   1,  70),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                  D_FONT_BOLD(6),      QRect(382, 460,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(382, 530,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(382, 460,   1,  70),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(452, 460,   1,  70),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                  D_FONT_BOLD(6),      QRect(457, 460,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(457, 530,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(457, 460,   1,  70),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(527, 460,   1,  70),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                  D_FONT_BOLD(6),      QRect(532, 460,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(532, 530,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(532, 460,   1,  70),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(602, 460,   1,  70),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                  D_FONT_BOLD(6),      QRect(607, 460,  88,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(607, 530,  88,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(607, 460,   1,  70),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(694, 460,   1,  70),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

//    {"",                  D_FONT_BOLD(6),      QRect(142, 509,   1,  22),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(235, 509,   1,  22),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(328, 509,   1,  22),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(421, 509,   1,  22),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(514, 509,   1,  22),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(607, 509,   1,  22),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
      //door
//    {"",                  D_FONT_BOLD(6),      QRect( 82, 508,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(157, 508,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(232, 508,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(307, 508,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(382, 508,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(457, 508,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect( 82, 484,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(157, 484,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(232, 484,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(307, 484,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(382, 484,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(457, 484,  71,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {QSTR("CCU1"),        D_FONT_BOLD(6),      QRect( 15, 120,  60,  30),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CCU1              },
    {QSTR("CCU2"),        D_FONT_BOLD(6),      QRect(685, 120,  60,  30),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBCS_LABEL_CCU2              },
// tcp/ip
    {"",                  D_FONT_BOLD(6),      QRect(51, 150,   6, 28),           Qt::black,                 Qt::cyan,                CONTROL_LABEL,            ID_PIBCS_LABEL_HMI1_UPD         },
    {"",                  D_FONT_BOLD(6),      QRect(50, 150,   1, 28),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(57, 150,   1, 28),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(705, 150,   6, 28),           Qt::black,                 Qt::cyan,                CONTROL_LABEL,            ID_PIBCS_LABEL_HMI2_UPD         },
    {"",                  D_FONT_BOLD(6),      QRect(704, 150,   1, 28),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(711, 150,   1, 28),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {QSTR("0"),           D_FONT_BOLD(5),      QRect(67, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1DOOR9         },
    {QSTR("0"),           D_FONT_BOLD(5),      QRect(67, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1DOOR10         },
    {QSTR("1"),           D_FONT_BOLD(5),      QRect(84, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1DOOR1         },
    {QSTR("2"),           D_FONT_BOLD(5),      QRect(101, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1DOOR3         },
    {QSTR("3"),           D_FONT_BOLD(5),      QRect(118, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1DOOR5         },
    {QSTR("4"),           D_FONT_BOLD(5),      QRect(135, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1DOOR7         },
    {QSTR("1"),           D_FONT_BOLD(5),      QRect(84, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1DOOR2         },
    {QSTR("2"),           D_FONT_BOLD(5),      QRect(101, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1DOOR4         },
    {QSTR("3"),           D_FONT_BOLD(5),      QRect(118, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1DOOR6         },
    {QSTR("4"),           D_FONT_BOLD(5),      QRect(135, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1DOOR8         },
    {QSTR("5"),           D_FONT_BOLD(5),      QRect(159, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2DOOR1         },
    {QSTR("6"),           D_FONT_BOLD(5),      QRect(176, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2DOOR3         },
    {QSTR("7"),           D_FONT_BOLD(5),      QRect(193, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2DOOR5         },
    {QSTR("8"),           D_FONT_BOLD(5),      QRect(210, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2DOOR7         },
    {QSTR("5"),           D_FONT_BOLD(5),      QRect(159, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2DOOR2         },
    {QSTR("6"),           D_FONT_BOLD(5),      QRect(176, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2DOOR4         },
    {QSTR("7"),           D_FONT_BOLD(5),      QRect(193, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2DOOR6         },
    {QSTR("8"),           D_FONT_BOLD(5),      QRect(210, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2DOOR8         },
    {QSTR("9"),           D_FONT_BOLD(5),      QRect(234, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR1         },
    {QSTR("10"),           D_FONT_BOLD(5),      QRect(251, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR3         },
    {QSTR("11"),           D_FONT_BOLD(5),      QRect(268, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR5         },
    {QSTR("12"),           D_FONT_BOLD(5),      QRect(285, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR7         },
    {QSTR("9"),           D_FONT_BOLD(5),      QRect(234, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR2         },
    {QSTR("10"),           D_FONT_BOLD(5),      QRect(251, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR4         },
    {QSTR("11"),           D_FONT_BOLD(5),      QRect(268, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR6         },
    {QSTR("12"),           D_FONT_BOLD(5),      QRect(285, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3DOOR8         },

    {QSTR("13"),           D_FONT_BOLD(5),      QRect(309, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR1         },
    {QSTR("14"),           D_FONT_BOLD(5),      QRect(326, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR3         },
    {QSTR("15"),           D_FONT_BOLD(5),      QRect(343, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR5         },
    {QSTR("16"),           D_FONT_BOLD(5),      QRect(360, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR7         },
    {QSTR("13"),           D_FONT_BOLD(5),      QRect(309, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR2         },
    {QSTR("14"),           D_FONT_BOLD(5),      QRect(326, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR4         },
    {QSTR("15"),           D_FONT_BOLD(5),      QRect(343, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR6         },
    {QSTR("16"),           D_FONT_BOLD(5),      QRect(360, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4DOOR8         },
    {QSTR("17"),           D_FONT_BOLD(5),      QRect(384, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR1         },
    {QSTR("18"),           D_FONT_BOLD(5),      QRect(401, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR3         },
    {QSTR("19"),           D_FONT_BOLD(5),      QRect(418, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR5         },
    {QSTR("20"),           D_FONT_BOLD(5),      QRect(435, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR7         },
    {QSTR("17"),           D_FONT_BOLD(5),      QRect(384, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR2         },
    {QSTR("18"),           D_FONT_BOLD(5),      QRect(401, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR4         },
    {QSTR("19"),           D_FONT_BOLD(5),      QRect(418, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR6         },
    {QSTR("20"),           D_FONT_BOLD(5),      QRect(435, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5DOOR8         },
    {QSTR("21"),           D_FONT_BOLD(5),      QRect(459, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6DOOR1         },
    {QSTR("22"),           D_FONT_BOLD(5),      QRect(476, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6DOOR3         },
    {QSTR("23"),           D_FONT_BOLD(5),      QRect(493, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6DOOR5         },
    {QSTR("24"),           D_FONT_BOLD(5),      QRect(510, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6DOOR7         },
    {QSTR("21"),           D_FONT_BOLD(5),      QRect(459, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6DOOR2         },
    {QSTR("22"),           D_FONT_BOLD(5),      QRect(476, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6DOOR4         },
    {QSTR("23"),           D_FONT_BOLD(5),      QRect(493, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6DOOR6         },
    {QSTR("24"),           D_FONT_BOLD(5),      QRect(510, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6DOOR8         },
    {QSTR("25"),           D_FONT_BOLD(5),      QRect(534, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR1         },
    {QSTR("26"),           D_FONT_BOLD(5),      QRect(551, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR3         },
    {QSTR("27"),           D_FONT_BOLD(5),      QRect(568, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR5         },
    {QSTR("28"),           D_FONT_BOLD(5),      QRect(585, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR7         },
    {QSTR("25"),           D_FONT_BOLD(5),      QRect(534, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR2         },
    {QSTR("26"),           D_FONT_BOLD(5),      QRect(551, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR4         },
    {QSTR("27"),           D_FONT_BOLD(5),      QRect(568, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR6         },
    {QSTR("28"),           D_FONT_BOLD(5),      QRect(585, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7DOOR8         },
    {QSTR("29"),           D_FONT_BOLD(5),      QRect(609, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR1         },
    {QSTR("30"),           D_FONT_BOLD(5),      QRect(626, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR3         },
    {QSTR("31"),           D_FONT_BOLD(5),      QRect(643, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR5         },
    {QSTR("32"),           D_FONT_BOLD(5),      QRect(660, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR7         },
    {QSTR("29"),           D_FONT_BOLD(5),      QRect(609, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR2         },
    {QSTR("30"),           D_FONT_BOLD(5),      QRect(626, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR4         },
    {QSTR("31"),           D_FONT_BOLD(5),      QRect(643, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR6         },
    {QSTR("32"),           D_FONT_BOLD(5),      QRect(660, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR8         },
    {QSTR("0"),           D_FONT_BOLD(5),      QRect(677, 463,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR10         },
    {QSTR("0"),           D_FONT_BOLD(5),      QRect(677, 487,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8DOOR9         },



    {QSTR("GW1"),         D_FONT_BOLD(6),      QRect(67, 510,   41,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_GW1          },
    {QSTR("GW2"),         D_FONT_BOLD(6),      QRect(110, 510,  41,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_GW2          },
    {QSTR("GW1"),         D_FONT_BOLD(6),      QRect(159, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2_GW1          },
    {QSTR("GW2"),         D_FONT_BOLD(6),      QRect(193, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2_GW2          },
    {QSTR("GW1"),         D_FONT_BOLD(6),      QRect(234, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3_GW1          },
    {QSTR("GW2"),         D_FONT_BOLD(6),      QRect(268, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3_GW2          },
    {QSTR("GW1"),         D_FONT_BOLD(6),      QRect(309, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4_GW1          },
    {QSTR("GW2"),         D_FONT_BOLD(6),      QRect(343, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4_GW2          },
    {QSTR("GW1"),         D_FONT_BOLD(6),      QRect(384, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5_GW1          },
    {QSTR("GW2"),         D_FONT_BOLD(6),      QRect(418, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5_GW2          },
    {QSTR("GW1"),         D_FONT_BOLD(6),      QRect(459, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6_GW1          },
    {QSTR("GW2"),         D_FONT_BOLD(6),      QRect(493, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6_GW2          },
    {QSTR("GW1"),         D_FONT_BOLD(6),      QRect(534, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7_GW1          },
    {QSTR("GW2"),         D_FONT_BOLD(6),      QRect(568, 510,  33,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7_GW2          },
    {QSTR("GW1"),         D_FONT_BOLD(6),      QRect(609, 510,  41,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8_GW1          },
    {QSTR("GW2"),         D_FONT_BOLD(6),      QRect(652, 510,  41,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8_GW2          },
    // MVB horizontal NET

//    {"",                  D_FONT_BOLD(6),      QRect(94, 260,  10,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(94, 259,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(94, 264,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94, 295,  10,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94, 294,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94, 299,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94, 340,  10,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94, 339,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94, 344,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94, 430,  10,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94, 429,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94, 434,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {QSTR("RIOM"),        D_FONT_BOLD(6),      QRect(104, 162,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_RIOM         },
    {QSTR("ACU"),         D_FONT_BOLD(6),      QRect(104, 207,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_ACU          },
  //  {QSTR("ATC"),       D_FONT_BOLD(6),      QRect(104, 252,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_ATC10             },
    {QSTR("FAS"),       D_FONT_BOLD(6),      QRect(104, 287,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_FAS1             },
    {QSTR("BCU"),         D_FONT_BOLD(6),      QRect(104, 332,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_BCU          },
    {QSTR("HVAC"),        D_FONT_BOLD(6),      QRect(104, 382,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_HVAC         },
    {QSTR("PA"),         D_FONT_BOLD(6),      QRect(104, 422,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_PIS          },
   //RIOM 1-8
    {"",                  D_FONT_BOLD(6),      QRect(94, 170,  10,   4),           Qt::blue,                 Qt::blue,                CONTROL_LABEL,            ID_PIBCS_LABEL_CAR1_RLD         },
    {"",                  D_FONT_BOLD(6),      QRect(94, 169,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94, 174,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(169, 170,  10,   4),           Qt::blue,                 Qt::blue,                CONTROL_LABEL,            ID_PIBCS_LABEL_CAR2_RLD         },
    {"",                  D_FONT_BOLD(6),      QRect(169, 169,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(169, 174,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(244, 170,  10,   4),           Qt::blue,                 Qt::blue,                CONTROL_LABEL,            ID_PIBCS_LABEL_CAR3_RLD         },
    {"",                  D_FONT_BOLD(6),      QRect(244, 169,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(244, 174,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319, 170,  10,   4),           Qt::blue,                 Qt::blue,                CONTROL_LABEL,            ID_PIBCS_LABEL_CAR4_RLD         },
    {"",                  D_FONT_BOLD(6),      QRect(319, 169,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319, 174,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394, 170,  10,   4),           Qt::blue,                 Qt::blue,                CONTROL_LABEL,            ID_PIBCS_LABEL_CAR5_RLD         },
    {"",                  D_FONT_BOLD(6),      QRect(394, 169,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394, 174,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(469, 170,  10,   4),           Qt::blue,                 Qt::blue,                CONTROL_LABEL,            ID_PIBCS_LABEL_CAR6_RLD         },
    {"",                  D_FONT_BOLD(6),      QRect(469, 169,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(469, 174,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544, 170,  10,   4),           Qt::blue,                 Qt::blue,                CONTROL_LABEL,            ID_PIBCS_LABEL_CAR7_RLD         },
    {"",                  D_FONT_BOLD(6),      QRect(544, 169,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544, 174,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 170,  10,   4),           Qt::blue,                 Qt::blue,                CONTROL_LABEL,            ID_PIBCS_LABEL_CAR8_RLD         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 169,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 174,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//ACU
    {"",                  D_FONT_BOLD(6),      QRect(94, 215,  10,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94, 214,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94, 219,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 215,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 214,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 219,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//ATC
    {"",                  D_FONT_BOLD(6),      QRect(619, 260,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 259,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 264,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
 //ERM
    {"",                  D_FONT_BOLD(6),      QRect( 70, 237,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 70, 236,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 70, 241,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 237,  100,  4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 236,  100,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 241,  100,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
// HMI
    {"",                  D_FONT_BOLD(6),      QRect( 70, 184+8,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 70, 183+8,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 70, 188+8,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 184+8,  96,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 183+8,  96,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 188+8,  96,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//TCU
    {"",                  D_FONT_BOLD(6),      QRect(169, 277,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(169, 276,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(169, 281,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(244, 277,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(244, 276,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(244, 281,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319, 277,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319, 276,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319, 281,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394, 277,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394, 276,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394, 281,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(469, 277,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(469, 276,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(469, 281,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544, 277,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544, 276,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544, 281,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//BCU
    {"",                  D_FONT_BOLD(6),      QRect(94, 340,  10,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94, 339,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94, 344,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394, 340,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394, 339,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394, 344,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319, 340,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319, 339,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319, 344,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 340,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 339,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 344,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
 //HVAC
    {"",                  D_FONT_BOLD(6),      QRect(94, 390,  10,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94, 389,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94, 394,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(169, 390,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(169, 389,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(169, 394,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(244, 390,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(244, 389,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(244, 394,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319, 390,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319, 389,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319, 394,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394, 390,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394, 389,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394, 394,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(469, 390,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(469, 389,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(469, 394,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544, 390,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544, 389,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544, 394,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 390,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 389,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 394,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                  D_FONT_BOLD(6),      QRect(619, 295,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 294,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 299,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 430,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 429,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 434,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    // HMI
    {"",                  D_FONT_BOLD(6),      QRect( 30, 165+8,   1,  40),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 74, 165+8,   1,  41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 30, 165+8,  45,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 30, 205+8,  45,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(685, 165+8,   1,  40),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(729, 165+8,   1,  41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(685, 165+8,  45,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(685, 205+8,  45,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
   //BCU NET
    {"",                  D_FONT_BOLD(6),      QRect(125, 352,   8,   6),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(350, 352,   8,   6),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(425, 352,   8,   6),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(650, 352,   8,   6),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(125, 358, 233,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(125, 366, 233,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(125, 358,   1,   8),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(357, 358,   1,   8),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(425, 358, 233,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(425, 366, 233,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(425, 358,   1,   8),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(657, 358,   1,   8),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {QSTR("RIOM"),        D_FONT_BOLD(6),      QRect(179, 162,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2_RIOM         },
    {QSTR("RIOM"),        D_FONT_BOLD(6),      QRect(254, 162,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3_RIOM         },
    {QSTR("RIOM"),        D_FONT_BOLD(6),      QRect(329, 162,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4_RIOM         },
    {QSTR("RIOM"),        D_FONT_BOLD(6),      QRect(404, 162,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5_RIOM         },
    {QSTR("RIOM"),        D_FONT_BOLD(6),      QRect(479, 162,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6_RIOM         },
    {QSTR("RIOM"),        D_FONT_BOLD(6),      QRect(554, 162,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7_RIOM         },
    {QSTR("RIOM"),        D_FONT_BOLD(6),      QRect(629, 162,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8_RIOM         },
    {QSTR("ACU"),         D_FONT_BOLD(6),      QRect(629, 207,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6_ACU          },
    {QSTR("ATC"),       D_FONT_BOLD(6),      QRect(629, 252,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_ATC10             },
    {QSTR("FAS"),       D_FONT_BOLD(6),      QRect(629, 287,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_FAS2             },
    {QSTR("BCU"),         D_FONT_BOLD(6),      QRect(329, 332,  50,  20),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3_BCU          },
    {QSTR("BCU"),         D_FONT_BOLD(6),      QRect(404, 332,  50,  20),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4_BCU          },
    {QSTR("BCU"),         D_FONT_BOLD(6),      QRect(629, 332,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6_BCU          },
    {QSTR("HVAC"),        D_FONT_BOLD(6),      QRect(179, 382,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2_HVAC         },
    {QSTR("HVAC"),        D_FONT_BOLD(6),      QRect(254, 382,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3_HVAC         },
    {QSTR("HVAC"),        D_FONT_BOLD(6),      QRect(329, 382,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4_HVAC         },
    {QSTR("HVAC"),        D_FONT_BOLD(6),      QRect(404, 382,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5_HVAC         },
    {QSTR("HVAC"),        D_FONT_BOLD(6),      QRect(479, 382,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6_HVAC         },
    {QSTR("HVAC"),        D_FONT_BOLD(6),      QRect(554, 382,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7_HVAC         },
    {QSTR("HVAC"),        D_FONT_BOLD(6),      QRect(629, 382,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8_HVAC         },

    // pms mvb
    {"", D_FONT_BOLD(6), QRect(169, 390 + 40, 20, 4), Qt::blue, Qt::black, CONTROL_LINE, ID_IGNORE},
    {"", D_FONT_BOLD(6), QRect(169, 389 + 40, 20, 1), Qt::white, Qt::black, CONTROL_LINE, ID_IGNORE},
    {"", D_FONT_BOLD(6), QRect(169, 394 + 40, 20, 1), Qt::white, Qt::black, CONTROL_LINE, ID_IGNORE},
    {"", D_FONT_BOLD(6), QRect(319, 390 + 40, 20, 4), Qt::blue, Qt::black, CONTROL_LINE, ID_IGNORE},
    {"", D_FONT_BOLD(6), QRect(319, 389 + 40, 20, 1), Qt::white, Qt::black, CONTROL_LINE, ID_IGNORE},
    {"", D_FONT_BOLD(6), QRect(319, 394 + 40, 20, 1), Qt::white, Qt::black, CONTROL_LINE, ID_IGNORE},
    {"", D_FONT_BOLD(6), QRect(544, 390 + 40, 20, 4), Qt::blue, Qt::black, CONTROL_LINE, ID_IGNORE},
    {"", D_FONT_BOLD(6), QRect(544, 389 + 40, 20, 1), Qt::white, Qt::black, CONTROL_LINE, ID_IGNORE},
    {"", D_FONT_BOLD(6), QRect(544, 394 + 40, 20, 1), Qt::white, Qt::black, CONTROL_LINE, ID_IGNORE},

    // pms online state
    {QSTR("PMS"), D_FONT_BOLD(6), QRect(179, 382 + 40, 50, 20), Qt::black, Qt::green, CONTROL_LABEL, ID_PIBCS_LABEL_CAR2_PMS},
    {QSTR("PMS"), D_FONT_BOLD(6), QRect(329, 382 + 40, 50, 20), Qt::black, Qt::green, CONTROL_LABEL, ID_PIBCS_LABEL_CAR4_PMS},
    {QSTR("PMS"), D_FONT_BOLD(6), QRect(554, 382 + 40, 50, 20), Qt::black, Qt::green, CONTROL_LABEL, ID_PIBCS_LABEL_CAR7_PMS},

    {QSTR("PA"),         D_FONT_BOLD(6),      QRect(629, 422,  50,  20),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6_PIS          },
    {QSTR("TCU"),         D_FONT_BOLD(6),      QRect(179, 269,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2_TCU          },
    {QSTR("TCU"),         D_FONT_BOLD(6),      QRect(254, 269,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3_TCU          },
    {QSTR("TCU"),         D_FONT_BOLD(6),      QRect(329, 269,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4_TCU          },
    {QSTR("TCU"),         D_FONT_BOLD(6),      QRect(404, 269,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5_TCU          },
    {QSTR("TCU"),         D_FONT_BOLD(6),      QRect(479, 269,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6_TCU          },
    {QSTR("TCU"),         D_FONT_BOLD(6),      QRect(554, 269,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7_TCU          },

    {QSTR("ERM"),       D_FONT_BOLD(6),         QRect(685, 225,  60,  30),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBCS_LABEL_DCCU2             },
    {QSTR("ERM"),       D_FONT_BOLD(6),         QRect( 15, 225,  60,  30),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_DCCU1             },

    // added by Deng Ran on the 08th of March 2017
    {"",                  D_FONT_BOLD(6),      QRect( 70, 237 + 80, 20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 70, 236 + 80, 20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 70, 241 + 80, 20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 237 + 80, 100,  4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 236 + 80, 100,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619, 241 + 80, 100,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {QSTR("RSFDS"),       D_FONT_BOLD(6),         QRect(685, 225 + 80,  60,  30),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBCS_LABEL_RSFDS2},
    {QSTR("RSFDS"),       D_FONT_BOLD(6),         QRect(15, 225 + 80,  60,  30),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_RSFDS1},

    {QSTR("HMI"),         D_FONT_BOLD(6),      QRect( 35, 170+8,  35,  30),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_HMI          },
    {QSTR("HMI"),         D_FONT_BOLD(6),      QRect(690, 170+8,  35,  30),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6_HMI          },
//  BCU net
    {QSTR(""),            D_FONT_BOLD(6),      QRect(126, 359, 231,   7),           Qt::black,                Qt::darkGreen,            CONTROL_LABEL,           ID_PIBCS_LABEL_BCU1INTO3         },
    {QSTR(""),            D_FONT_BOLD(6),      QRect(426, 359, 231,   7),           Qt::black,                Qt::darkGreen,            CONTROL_LABEL,           ID_PIBCS_LABEL_BCU4INTO6         },




};

int g_CommStatusRomLen = sizeof(g_PicRom_CommStatus)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCommStatusPage,CPage)
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

        ON_BTNCLK(ID_PIBCS_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)

END_MESSAGE_MAP()

CCommStatusPage::CCommStatusPage()
{
}

void CCommStatusPage::OnUpdatePage()
{
    UpdateCCU();
    UpdateUDP();
    UpdateRIOM();
    UpdateACU();
    UpdateTCU();
    UpdateATC();
    UpdateHMI();
    UpdateBCU();
    UpdateHVAC();
    UpdatePIS();
    UpdateDOOR();
    UpdateGW();
    UpdateRLD();
    UpdateCommInterrupt(ID_PIBCOMMINTERRUPT);
    updateTrain(ID_PIBCS_TRAIN);
    updateArrow(ID_PIBCS_ARROW_LEFT,ID_PIBCS_ARROW_RIGHT);
    updateFault(ID_PIBCS_ICON_WARNNING);

    updateErrorLine(ID_PIBCS_TRAIN);

    // added by Deng Ran on the 1st of August 2017, the singals of tds online
    if (ccuTdsOnlineCar1 && tdsWorkModeCar1)
    {
        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_RSFDS1))->SetCtrlBKColor(Qt::green);
    }
    else if (ccuTdsOnlineCar1)
    {
        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_RSFDS1))->SetCtrlBKColor(Qt::yellow);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_RSFDS1))->SetCtrlBKColor(Qt::white);
    }

    if (ccuTdsOnlineCar8 && tdsWorkModeCar8)
    {
        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_RSFDS2))->SetCtrlBKColor(Qt::green);
    }
    else if (ccuTdsOnlineCar8)
    {
        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_RSFDS2))->SetCtrlBKColor(Qt::yellow);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_RSFDS2))->SetCtrlBKColor(Qt::white);
    }

    // added by Deng Ran on the 01st of August 2017, the signals of pms online
    if (ccuPmsOnlineCar2)
    {
        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2_PMS))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2_PMS))->SetCtrlBKColor(Qt::white);
    }

    if (ccuPmsOnlineCar4)
    {
        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4_PMS))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4_PMS))->SetCtrlBKColor(Qt::white);
    }

    if (ccuPmsOnlineCar7)
    {
        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7_PMS))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7_PMS))->SetCtrlBKColor(Qt::white);
    }
}

void CCommStatusPage::OnInitPage()
{ 


}

void CCommStatusPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QSTR("调试页面"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QSTR("帮   助"));
#else
            ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QSTR("返   回"));
           // ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QSTR("调试页面"));
            ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QSTR("帮   助"));
#endif

}

void CCommStatusPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_MAIN);
}

void CCommStatusPage::OnComBtn2Clk()
{
    ChangePage(PAGE_INDEX_DEBUGMAIN);
}

void CCommStatusPage::OnComBtn3Clk()
{

}

void CCommStatusPage::OnComBtn4Clk()
{
}

void CCommStatusPage::OnComBtn5Clk()
{
}

void CCommStatusPage::OnComBtn6Clk()
{

#ifdef PAGE_BUTTON_BAR_NEW

#else
       ChangePage(PAGE_INDEX_COMMSTATUSHELP);
#endif
}

#ifdef PAGE_BUTTON_BAR_NEW
void CCommStatusPage::OnComBtn7Clk()
{

}

void CCommStatusPage::OnComBtn8Clk()
{

       ChangePage(PAGE_INDEX_COMMSTATUSHELP);
}

#endif


void CCommStatusPage::UpdateCCU()
{
    //CTHM_CCU1On_B1	CCU1在线 openpcs根据Vxworks传来的CTHM_MPU1Status_U8判断是否在线
    if (Bit(CCU_HMI_222_9, 8 ) == 1)
    {
        //CTHM_MPU1Dev_U8  mpu1设备为主  1=mpu1为主
        if (CCU_HMI_221_15/256 == 1)
        {
            ccu1_color = 1;
        }
        else
        {
            ccu1_color = 2;
        }
    }
    else
    {
        ccu1_color = 0;
    }
    if (Bit(CCU_HMI_222_9, 7 ) == 1)
    {
        if (CCU_HMI_221_16%256 == 1)
        {
            ccu2_color = 1;
        }
        else
        {
            ccu2_color = 2;
        }
    }
    else
    {
        ccu2_color = 0;

    }


    if (Bit(CCU_HMI_222_16, 2 ) == 1)   //CTHM_ERM1On_B1  ERM1在线
    {
        dccu1_color = 1;
    }
    else
    {
        dccu1_color = 0;
    }
    if (Bit(CCU_HMI_222_16, 1 ) == 1)
    {
        dccu2_color = 1;
    }
    else
    {
        dccu2_color = 0;
    }

    SetCcuLabelColor(ID_PIBCS_LABEL_CCU1, ccu1_color);
    SetCcuLabelColor(ID_PIBCS_LABEL_CCU2, ccu2_color);
    SetCcuLabelColor(ID_PIBCS_LABEL_DCCU1, dccu1_color);
    SetCcuLabelColor(ID_PIBCS_LABEL_DCCU2, dccu2_color);
}

void CCommStatusPage::UpdateRIOM()
{

     if (((Bit(CCU_HMI_222_11, 9 )) &&(Bit(CCU_HMI_222_11, 10 ))&&(Bit(CCU_HMI_222_11, 11 ))&&(Bit(CCU_HMI_222_11, 12 ))&&(Bit(CCU_HMI_222_11, 13 ))
     &&(Bit(CCU_HMI_222_11, 14 ))&&(Bit(CCU_HMI_222_11, 15 ))&&(Bit(CCU_HMI_222_11, 16 ))) == 1)


    {
        io1_color = 1;
    }
    else
    {
        io1_color = 0;
    }

    if (((Bit(CCU_HMI_222_12, 8 )) &&(Bit(CCU_HMI_222_12, 7 ))&&(Bit(CCU_HMI_222_12, 6 ))
    &&(Bit(CCU_HMI_222_12, 3 ))&&(Bit(CCU_HMI_222_12, 1 ))) == 1)

    {
        io2_color = 1;
    }
    else
    {
        io2_color = 0;
    }

    if (((Bit(CCU_HMI_222_12, 16 )) &&(Bit(CCU_HMI_222_12, 15 ))&&(Bit(CCU_HMI_222_12, 14 ))
    &&(Bit(CCU_HMI_222_12, 11 ))) == 1)
    {
        io3_color = 1;
    }
    else
    {
        io3_color = 0;
    }

    if (((Bit(CCU_HMI_222_13, 8 )) &&(Bit(CCU_HMI_222_13, 7 ))&&(Bit(CCU_HMI_222_13, 6 ))
    &&(Bit(CCU_HMI_222_13, 3 ))&&(Bit(CCU_HMI_222_13, 1 ))) == 1)
    {
        io4_color = 1;
    }
    else
    {
        io4_color = 0;
    }

    if (((Bit(CCU_HMI_222_13, 16 )) &&(Bit(CCU_HMI_222_13, 15 ))&&(Bit(CCU_HMI_222_13, 14 ))
    &&(Bit(CCU_HMI_222_13, 11 ))) == 1)
    {
        io5_color = 1;
    }
    else
    {
        io5_color = 0;
    }

    if (((Bit(CCU_HMI_222_14, 8 )) &&(Bit(CCU_HMI_222_14, 7 ))&&(Bit(CCU_HMI_222_14, 6 ))
    &&(Bit(CCU_HMI_222_14, 3 ))) == 1)
    {
        io6_color = 1;
    }
    else
    {
        io6_color = 0;
    }

    if (((Bit(CCU_HMI_222_14, 16 )) &&(Bit(CCU_HMI_222_14, 15 ))&&(Bit(CCU_HMI_222_14, 14 ))
    &&(Bit(CCU_HMI_222_14, 11 ))&&(Bit(CCU_HMI_222_14, 9 ))) == 1)
    {
        io7_color = 1;
    }
    else
    {
        io7_color = 0;
    }

    if (((Bit(CCU_HMI_222_15, 8 )) &&(Bit(CCU_HMI_222_15, 7 ))&&(Bit(CCU_HMI_222_15, 6 ))&&(Bit(CCU_HMI_222_15, 5 ))&&(Bit(CCU_HMI_222_15, 4 ))
    &&(Bit(CCU_HMI_222_15, 3))&&(Bit(CCU_HMI_222_15, 2 ))&&(Bit(CCU_HMI_222_15, 1 ))) == 1)
    {
        io8_color = 1;
    }
    else
    {
        io8_color = 0;
    }

    SetRiomLabelColor(ID_PIBCS_LABEL_CAR1_RIOM, io1_color);
    SetRiomLabelColor(ID_PIBCS_LABEL_CAR2_RIOM, io2_color);
    SetRiomLabelColor(ID_PIBCS_LABEL_CAR3_RIOM, io3_color);
    SetRiomLabelColor(ID_PIBCS_LABEL_CAR4_RIOM, io4_color);
    SetRiomLabelColor(ID_PIBCS_LABEL_CAR5_RIOM, io5_color);
    SetRiomLabelColor(ID_PIBCS_LABEL_CAR6_RIOM, io6_color);
    SetRiomLabelColor(ID_PIBCS_LABEL_CAR7_RIOM, io7_color);
    SetRiomLabelColor(ID_PIBCS_LABEL_CAR8_RIOM, io8_color);

    return;
}

void CCommStatusPage::UpdateACU()
{

    if (Bit(CCU_HMI_222_9, 6 ) == 1)
    {
        acu1_color=1;
    }
    else
    {
        acu1_color = 0;
    }
    if (Bit(CCU_HMI_222_9, 5 ) == 1)
    {
        acu2_color = 1;
    }
    else
    {
        acu2_color = 0;
    }

    SetAcuLabelColor(ID_PIBCS_LABEL_CAR1_ACU, acu1_color);
    SetAcuLabelColor(ID_PIBCS_LABEL_CAR6_ACU, acu2_color);

}

void CCommStatusPage::UpdateTCU()
{

    if (Bit(CCU_HMI_222_9, 2 ) == 1)
    {
        tcu1_color = 1;
    }
    else
    {
        tcu1_color = 0;
    }
    if (Bit(CCU_HMI_222_9, 1 ) == 1)
    {
        tcu2_color = 1;
    }
    else
    {
        tcu2_color = 0;
    }
    if (Bit(CCU_HMI_222_9, 16 ) == 1)
    {
        tcu3_color = 1;
    }
    else
    {
        tcu3_color = 0;
    }
    if (Bit(CCU_HMI_222_9, 15 ) == 1)
    {
        tcu4_color = 1;
    }
    else
    {
        tcu4_color = 0;
    }
    if (Bit(CCU_HMI_222_9, 14 ) == 1)
    {
        tcu5_color = 1;
    }
    else
    {
        tcu5_color = 0;
    }
    if (Bit(CCU_HMI_222_9, 13 ) == 1)
    {
        tcu6_color = 1;
    }
    else
    {
        tcu6_color = 0;
    }

    SetTcuLabelColor(ID_PIBCS_LABEL_CAR2_TCU, tcu1_color);
    SetTcuLabelColor(ID_PIBCS_LABEL_CAR3_TCU, tcu2_color);
    SetTcuLabelColor(ID_PIBCS_LABEL_CAR4_TCU, tcu3_color);
    SetTcuLabelColor(ID_PIBCS_LABEL_CAR5_TCU, tcu4_color);
    SetTcuLabelColor(ID_PIBCS_LABEL_CAR6_TCU, tcu5_color);
    SetTcuLabelColor(ID_PIBCS_LABEL_CAR7_TCU, tcu6_color);


}

void CCommStatusPage::UpdateATC()
{

    if (Bit(CCU_HMI_222_9, 4 ) == 1)
    {
            atc1_color = 1;
    }
    else
    {
        atc1_color = 0;
    }


    //  CTHM_FAS1On_B1	FAS1在线
    if (Bit(CCU_HMI_222_16,4) == 1)
    {
        //FAiCT _ControlUnitSymbol_U8	控制器主、备机标志
        if (FAS_B10_16%256 == 0)
        {
            atc3_color = 2;
        }
       else
        {
           atc3_color = 1;
       }

    }
    else
    {
        atc3_color = 0;
    }
    //  CTHM_FAS2On_B1	FAS2在线
    if (Bit(CCU_HMI_222_16,3) == 1)
    {

        //FAiCT _ControlUnitSymbol_U8	控制器主、备机标志
        if (FAS_B20_16%256 == 0)
        {
            atc4_color = 2;
        }
       else
        {
           atc4_color = 1;
       }
    }
    else
    {
        atc4_color = 0;
    }
    SetAtcLabelColor(ID_PIBCS_LABEL_ATC10, atc1_color);
//    SetAtcLabelColor(ID_PIBCS_LABEL_ATC11, atc2_color);
    SetAtcLabelColor(ID_PIBCS_LABEL_FAS1, atc3_color);
    SetAtcLabelColor(ID_PIBCS_LABEL_FAS2, atc4_color);
}

void CCommStatusPage::UpdateHMI()
{
    //显示屏MVB通信正常则首先信任CCU发送的HMI状态标志，如果状态异常则再判断显示屏所处位置
    // 对于本侧显示屏通过 CCU发送的 MVB和UDP生命信号判断（两个生命信号都停止则显示白色）
    // 对于对侧显示屏通过 对侧显示屏发送的 UDP包生命信号判断

     // CTHM_HMI1On_B1	HMI1在线
    if (Bit(CCU_HMI_222_16,6))
    {
        //TC1     DICT_Cab KeyActiveTci_B1    	Cab KeyActive	司机室激活
        if (Bit(DI_110_1,9)  == 1)
        {
            hmi1_color = 1;
        }
        else
        {
            hmi1_color = 2;
        }
    }
    else
    {
        if(TC2_HMI==1)
        {
            // 对于对侧显示屏通过 对侧显示屏发送的 UDP包生命信号判断
            if((Bit(hmi_485_error,7)==1))
            {
                if (Bit(DI_110_1,9)  == 1)
                {
                    hmi1_color = 1;
                }
                else
                {
                    hmi1_color = 2;
                }
            }
            else
            {
                hmi1_color = 0;
            }
        }
        else
        {
            // 对于本侧显示屏通过 CCU发送的 MVB和UDP生命信号判断（两个生命信号都停止则显示白色）
            if(TC1_HMI==1)
            {
                if(g_485_comm_err_flg1&&g_udp_comm_err_flg1==1)
                {
                     hmi2_color = 0;
                }
                else
                {
                    if (Bit(DI_110_1,9)  == 1)
                    {
                        hmi2_color = 1;
                    }
                    else
                    {
                        hmi2_color = 2;
                    }
                }
            }
            else
            {
                hmi1_color = 0;
            }
        }
    }


    if (Bit(CCU_HMI_222_16,5))
    {
        if (Bit(DI_180_1,9) == 1)
        {
            hmi2_color = 1;
        }
        else
        {
            hmi2_color = 2;
        }
    }
    else
    {
        if(TC1_HMI==1)
        {
            if((Bit(hmi_485_error,7)==1))
            {
                if (Bit(DI_180_1,9)  == 1)
                {
                    hmi2_color = 1;
                }
                else
                {
                    hmi2_color = 2;
                }
            }
            else
            {
                hmi2_color = 0;
            }
        }
        else
        {
            if(TC2_HMI==1)
            {
                if(g_485_comm_err_flg2&&g_udp_comm_err_flg2==1)
                {
                     hmi2_color = 0;
                }
                else
                {
                    if (Bit(DI_180_1,9)  == 1)
                    {
                        hmi2_color = 1;
                    }
                    else
                    {
                        hmi2_color = 2;
                    }
                }
            }
            else
            {
                hmi2_color = 0;
            }

        }
    }

    SetHmiLabelColor(ID_PIBCS_LABEL_CAR1_HMI, hmi1_color);
    SetHmiLabelColor(ID_PIBCS_LABEL_CAR6_HMI, hmi2_color);

}

void CCommStatusPage::UpdateBCU()
{

    if (Bit(CCU_HMI_222_9, 12 ) == 1)   //CTHM_BCU1On_B1	BCU1在线
    {
        bcu1_color = 1;
        if(Bit(BCU_413_12,11)==0)  //BRiCT_MGW_B1  Gateway is master   1= 主网关阀
        {
            bcu1_color = 2;
        }
    }
    else
    {
        bcu1_color = 0;
    }
    if (Bit(CCU_HMI_222_9, 11 ) == 1)
    {
        bcu2_color = 1;
        if(Bit(BCU_423_12,11)==0)
        {
            bcu2_color = 2;
        }
    }
    else
    {
        bcu2_color = 0;
    }
    if (Bit(CCU_HMI_222_9, 10 ) == 1)
    {
        bcu3_color = 1;
        if(Bit(BCU_433_12,11)==0)
        {
            bcu3_color = 2;
        }
    }
    else
    {
        bcu3_color = 0;
    }
    if (Bit(CCU_HMI_222_9, 9 ) == 1)
    {
        bcu4_color = 1;
        if(Bit(BCU_443_12,11)==0)
        {
            bcu4_color = 2;
        }
    }
    else
    {
        bcu4_color = 0;
    }

    if ( Bit(CCU_HMI_222_9, 12 )&& Bit(CCU_HMI_222_9, 11 ) )
    {

            if (Bit(BCU_TC1_413_423_15 , 14) )  //BRiCT_CanNotOK_B1	Can Not Ok        CAN总线故障
            {
                BCU_CAN1 = 0;
            }
            else
            {
                BCU_CAN1 = 2;
            }

    }
    else
    {
        BCU_CAN1 = 0;
    }
    if (Bit(CCU_HMI_222_9, 10 ) && Bit(CCU_HMI_222_9, 9 ) )
    {
        if (Bit(BCU_TC2_433_443_15, 14) )
        {
            BCU_CAN2 = 0;
        }
        else
        {
            BCU_CAN2 = 2;
        }
    }
    else
    {
        BCU_CAN2 = 0;
    }

    SetBcuLabelColor(ID_PIBCS_LABEL_CAR1_BCU, bcu1_color);
    SetBcuLabelColor(ID_PIBCS_LABEL_CAR3_BCU, bcu2_color);
    SetBcuLabelColor(ID_PIBCS_LABEL_CAR4_BCU, bcu3_color);
    SetBcuLabelColor(ID_PIBCS_LABEL_CAR6_BCU, bcu4_color);
    SetBcucanLabelColor(ID_PIBCS_LABEL_BCU1INTO3, BCU_CAN1);
    SetBcucanLabelColor(ID_PIBCS_LABEL_BCU4INTO6, BCU_CAN2);

}

void CCommStatusPage::UpdateHVAC()
{

    if (Bit(CCU_HMI_222_10, 8 )  == 1)
    {
         hvac1_color=1;
         car1_HVAC_error1 = Bit( hvac_status_data20, 16 ) || (Bit( hvac_status_data20, 12 ) )
                            || (Bit( hvac_status_data20, 8 ) ) || (Bit( hvac_status_data20, 4 ) )
                            || (Bit( hvac_status_data28, 16 ) ) || (Bit( hvac_status_data28, 12 ) )
                            || (Bit( hvac_status_data28, 8 ) );
         car1_HVAC_error2 = Bit( hvac_status_data20, 15 ) || (Bit( hvac_status_data20, 11 ) )
                            || (Bit( hvac_status_data20, 7 ) ) || (Bit( hvac_status_data20, 3 ) )
                            || (Bit( hvac_status_data28, 15 ) ) || (Bit( hvac_status_data28, 11 ) )
                            || (Bit( hvac_status_data28, 7 ) );
         car1_HVAC_error3 = Bit( hvac_status_data20, 14 ) || (Bit( hvac_status_data20, 10 ) )
                            || (Bit( hvac_status_data20, 6 ) ) || (Bit( hvac_status_data20, 2 ) )
                            || (Bit( hvac_status_data28, 14) ) || (Bit( hvac_status_data28, 10 ) )
                            || (Bit( hvac_status_data28, 6 ) );
         car1_HVAC_error4 = Bit( hvac_status_data20, 13) || (Bit( hvac_status_data20, 9 ) )
                           || (Bit( hvac_status_data20, 5 ) ) || (Bit( hvac_status_data20, 1 ) )
                           || (Bit( hvac_status_data28, 13) ) || (Bit( hvac_status_data28, 9 ) )
                           || (Bit( hvac_status_data28, 5 ) );
//         if ( (car1_HVAC_error1 | car1_HVAC_error2|car1_HVAC_error3 | car1_HVAC_error4)!= 0)
//         {
//             hvac1_color = 2;
//         }
     }
    else
    {
        hvac1_color = 0;
    }   //HVAC1
    if (Bit(CCU_HMI_222_10, 7 )  == 1)
    {
        hvac2_color=1;
        car2_HVAC_error1 = Bit( hvac_status_data21, 16 ) || (Bit( hvac_status_data21, 12 ) )
                          || (Bit( hvac_status_data21, 8 ) ) || (Bit( hvac_status_data21, 4 ) )
                          || (Bit( hvac_status_data29, 16 )) || (Bit( hvac_status_data29, 12 ) )
                          || (Bit( hvac_status_data29, 8 ) );
        car2_HVAC_error2 = Bit( hvac_status_data21, 15 ) || (Bit( hvac_status_data21, 11 ) )
                           || (Bit( hvac_status_data21, 7 ) ) || (Bit( hvac_status_data21, 3 ) )
                           || (Bit( hvac_status_data29, 15 ) ) || (Bit( hvac_status_data29, 11 ) )
                           || (Bit( hvac_status_data29, 7 ) );
        car2_HVAC_error3 = Bit( hvac_status_data21, 14 ) || (Bit( hvac_status_data21, 10 ) )
                           || (Bit( hvac_status_data21, 6 ) ) || (Bit( hvac_status_data21, 2 ) )
                           || (Bit( hvac_status_data29, 14) ) || (Bit( hvac_status_data29, 10 ) )
                           || (Bit( hvac_status_data29, 6 ) );
        car2_HVAC_error4 = Bit( hvac_status_data21, 13) || (Bit( hvac_status_data21, 9 ) )
                           || (Bit( hvac_status_data21, 5 ) ) || (Bit( hvac_status_data21, 1 ) )
                           || (Bit( hvac_status_data29, 13) ) || (Bit( hvac_status_data29, 9 ) )
                           || (Bit( hvac_status_data29, 5 ) );
//        if ( (car2_HVAC_error1 | car2_HVAC_error2 | car2_HVAC_error3 | car2_HVAC_error4) != 0 )
//        {
//            hvac2_color = 2;
//        }
    }
    else
    {
        hvac2_color = 0;
    }
    if (Bit(CCU_HMI_222_10, 6 )  == 1)
    {
        hvac3_color = 1;
        car3_HVAC_error1 = Bit( hvac_status_data22, 16 ) || (Bit( hvac_status_data22, 12 ) )
                           || (Bit( hvac_status_data22, 8 ) ) || (Bit( hvac_status_data22, 4 ) )
                           || (Bit( hvac_status_data30, 16 ) ) || (Bit( hvac_status_data30, 12 ) )
                           || (Bit( hvac_status_data30, 8 ) );
        car3_HVAC_error2 = Bit( hvac_status_data22, 15 ) || (Bit( hvac_status_data22, 11 ) )
                           || (Bit( hvac_status_data22, 7 ) ) || (Bit( hvac_status_data22, 3 ) )
                           || (Bit( hvac_status_data30, 15 ) ) || (Bit( hvac_status_data30, 11 ) )
                           || (Bit( hvac_status_data30, 7 ) );
        car3_HVAC_error3 = Bit( hvac_status_data22, 14 ) || (Bit( hvac_status_data22, 10 ))
                           ||(Bit( hvac_status_data22, 6 ))||(Bit( hvac_status_data22, 2 ))
                           ||(Bit( hvac_status_data30, 14))||(Bit( hvac_status_data30, 10 ))
                           ||(Bit( hvac_status_data30, 6 ));
        car3_HVAC_error4 = Bit( hvac_status_data22, 13) || (Bit( hvac_status_data22, 9 ) )
                           || (Bit( hvac_status_data22, 5 ) ) || (Bit( hvac_status_data22, 1 ) )
                           || (Bit( hvac_status_data30, 13) ) || (Bit( hvac_status_data30, 9 ) )
                           || (Bit( hvac_status_data30, 5 ) );
//        if ( (car3_HVAC_error1 | car3_HVAC_error2 | car3_HVAC_error3 | car3_HVAC_error4) != 0)
//        {
//            hvac3_color = 2;
//        }
     }
    else
    {
        hvac3_color = 0;
    }
    if (Bit(CCU_HMI_222_10, 5 )  == 1)
    {
        hvac4_color = 1;
        car4_HVAC_error1 = Bit( hvac_status_data23, 16 ) || (Bit( hvac_status_data23, 12 ) )
                           || (Bit( hvac_status_data23, 8 ) ) || (Bit( hvac_status_data23, 4 ) )
                           || (Bit( hvac_status_data31, 16 ) ) || (Bit( hvac_status_data31, 12 ) )
                           || (Bit( hvac_status_data31, 8 ) );
        car4_HVAC_error2 = Bit( hvac_status_data23, 15 ) || (Bit( hvac_status_data23, 11 ) )
                           || (Bit( hvac_status_data23, 7 ) ) || (Bit( hvac_status_data23, 3 ) )
                           || (Bit( hvac_status_data31, 15 ) ) || (Bit( hvac_status_data31, 11 ) )
                           || (Bit( hvac_status_data31, 7 ) );
        car4_HVAC_error3 = Bit( hvac_status_data23, 14 ) || (Bit( hvac_status_data23, 10 ) )
                           || (Bit( hvac_status_data23, 6 ) ) || (Bit( hvac_status_data23, 2 ) )
                           || (Bit( hvac_status_data31, 14) ) || (Bit( hvac_status_data31, 10 ) )
                           || (Bit( hvac_status_data31, 6 ) );
        car4_HVAC_error4 = Bit( hvac_status_data23, 13) || (Bit( hvac_status_data23, 9 ) )
                           || (Bit( hvac_status_data23, 5 ) ) || (Bit( hvac_status_data23, 1 ) )
                           || (Bit( hvac_status_data31, 13) ) || (Bit( hvac_status_data31, 9 ) )
                           || (Bit( hvac_status_data31, 5 ) );
//        if ( (car4_HVAC_error1 | car4_HVAC_error2 | car4_HVAC_error3|car4_HVAC_error4)!= 0)
//        {
//            hvac4_color = 2;
//        }
    }
    else
    {
        hvac4_color = 0;
    }
    if (Bit(CCU_HMI_222_10, 4 )  == 1)
    {
        hvac5_color = 1;
        car5_HVAC_error1 = Bit( hvac_status_data24, 16 ) || (Bit( hvac_status_data24, 12 ) )
                           || (Bit( hvac_status_data24, 8 ) ) || (Bit( hvac_status_data24, 4 ) )
                           || (Bit( hvac_status_data32, 16 ) ) || (Bit( hvac_status_data32, 12 ) )
                           || (Bit( hvac_status_data32, 8 ) );
        car5_HVAC_error2 = Bit( hvac_status_data24, 15 ) || (Bit( hvac_status_data24, 11 ) )
                           || (Bit( hvac_status_data24, 7 ) ) || (Bit( hvac_status_data24, 3 ) )
                           || (Bit( hvac_status_data32, 15 ) ) || (Bit( hvac_status_data32, 11 ) )
                           || (Bit( hvac_status_data32, 7 ) );
        car5_HVAC_error3 = Bit( hvac_status_data24, 14 ) || (Bit( hvac_status_data24, 10 ) )
                           || (Bit( hvac_status_data24, 6 ) ) || (Bit( hvac_status_data24, 2 ) )
                           || (Bit( hvac_status_data32, 14) ) || (Bit( hvac_status_data32, 10 ) )
                           || (Bit( hvac_status_data32, 6 ) );
        car5_HVAC_error4 = Bit( hvac_status_data24, 13) || (Bit( hvac_status_data24, 9 ) )
                           || (Bit( hvac_status_data24, 5 ) ) || (Bit( hvac_status_data24, 1 ) )
                           || (Bit( hvac_status_data32, 13) ) || (Bit( hvac_status_data32, 9 ) )
                           || (Bit( hvac_status_data32, 5 ) );
//        if ( (car5_HVAC_error1 | car5_HVAC_error2 | car5_HVAC_error3 | car5_HVAC_error4) != 0)
//        {
//            hvac5_color = 2;
//        }
    }
    else
    {
        hvac5_color = 0;
    }
    if (Bit(CCU_HMI_222_10, 3 )  == 1)
    {
        hvac6_color = 1;
        car6_HVAC_error1 = Bit( hvac_status_data26, 16 ) || (Bit( hvac_status_data26, 12 ) )
                           || (Bit( hvac_status_data26, 8 ) ) || (Bit( hvac_status_data26, 4 ) )
                           || (Bit( hvac_status_data33, 16 ) ) || (Bit( hvac_status_data33, 12 ) )
                           || (Bit( hvac_status_data33, 8 ) );
        car6_HVAC_error2 = Bit( hvac_status_data26, 15 ) || (Bit( hvac_status_data26, 11 ) )
                           || (Bit( hvac_status_data26, 7 ) ) || (Bit( hvac_status_data26, 3 ) )
                           || (Bit( hvac_status_data33, 15 ) ) || (Bit( hvac_status_data33, 11 ) )
                           || (Bit( hvac_status_data33, 7 ) );
        car6_HVAC_error3 = Bit( hvac_status_data26, 14 ) || (Bit( hvac_status_data26, 10 ) )
                           || (Bit( hvac_status_data26, 6 ) ) || (Bit( hvac_status_data26, 2 ) )
                           || (Bit( hvac_status_data33, 14) ) || (Bit( hvac_status_data33, 10 ) )
                           || (Bit( hvac_status_data33, 6 ) );
        car6_HVAC_error4 = Bit( hvac_status_data26, 13) || (Bit( hvac_status_data26, 9 ) )
                           || (Bit( hvac_status_data26, 5 ) ) || (Bit( hvac_status_data26, 1 ) )
                           || (Bit( hvac_status_data33, 13) ) || (Bit( hvac_status_data33, 9 ) )
                           || (Bit( hvac_status_data33, 5 ) );
//        if ( (car6_HVAC_error1 | car6_HVAC_error2 | car6_HVAC_error3 | car6_HVAC_error4) != 0)
//        {
//            hvac6_color = 2;
//        }
    }
    else
    {
        hvac6_color = 0;
    }

    if (Bit(CCU_HMI_222_10, 2 )  == 1)
    {
        hvac7_color = 1;

    }
    else
    {
        hvac7_color = 0;
    }

    if (Bit(CCU_HMI_222_10, 1 )  == 1)
    {
        hvac8_color = 1;

    }
    else
    {
        hvac8_color = 0;
    }
    SetHvacLabelColor(ID_PIBCS_LABEL_CAR1_HVAC, hvac1_color);
    SetHvacLabelColor(ID_PIBCS_LABEL_CAR2_HVAC, hvac2_color);
    SetHvacLabelColor(ID_PIBCS_LABEL_CAR3_HVAC, hvac3_color);
    SetHvacLabelColor(ID_PIBCS_LABEL_CAR4_HVAC, hvac4_color);
    SetHvacLabelColor(ID_PIBCS_LABEL_CAR5_HVAC, hvac5_color);
    SetHvacLabelColor(ID_PIBCS_LABEL_CAR6_HVAC, hvac6_color);
    SetHvacLabelColor(ID_PIBCS_LABEL_CAR7_HVAC, hvac7_color);
    SetHvacLabelColor(ID_PIBCS_LABEL_CAR8_HVAC, hvac8_color);
}

void CCommStatusPage::UpdatePIS()
{
    if (Bit(CCU_HMI_222_16, 8 ) == 1)   //PIS1
    {
        //PAiCT_ACSUIsMstr_B1	ACSU是主机  1=主机   如果主机从机标志位都没有给出则显示白色
        if (Bit(PIS_911_3,8) == 0)
        {
            if (Bit(PIS_911_3,7) == 1)
            {
                pis1_color = 2;
            }
            else
            {
                pis1_color = 0;
            }
        }
       else
       {
           pis1_color = 1;
       }
    }
    else
    {
        pis1_color = 0;
    }

    if (Bit(CCU_HMI_222_16, 7 ) == 1)   //PIS2
    {
        if (Bit(PIS_921_3,8)== 0 )
        {
            if (Bit(PIS_921_3,7)== 1 )
            {
                pis2_color = 2;
            }
            else
            {
                pis2_color = 0;
            }

        }
        else
        {
            pis2_color = 1;
        }
    }
    else
    {
        pis2_color = 0;
    }

    SetPisLabelColor(ID_PIBCS_LABEL_CAR1_PIS, pis1_color);
    SetPisLabelColor(ID_PIBCS_LABEL_CAR6_PIS, pis2_color);
}

void CCommStatusPage::UpdateDOOR()
{
    //DRiCT_Dr1SttsVld_B1	门1状态可信	1=激活    每节车厢两个门网关的信号相或
   if ( (Bit(DCU_OLD_710_11,12) ) || (Bit(DCU_OLD_790_11,12) ) == 1)
   {
       che1_door9 = 1;
   }
   else
   {
       che1_door9 = 0;
   }
   if ( (Bit(DCU_OLD_710_12,12) ) || (Bit(DCU_OLD_790_12,12) )== 1)
   {
       che1_door10 = 1;
   }
   else
   {
       che1_door10 = 0;
   }

   if ( (Bit(DCU_OLD_710_3,9) ) || (Bit(DCU_OLD_790_3,9) ) == 1)
   {
       che1_door1 = 1;
   }
   else
   {
       che1_door1 = 0;
   }
   if ( (Bit(DCU_OLD_710_4,9) ) || (Bit(DCU_OLD_790_4,9) )== 1)
   {
       che1_door2 = 1;
   }
   else
   {
       che1_door2 = 0;
   }
   if ( (Bit(DCU_OLD_710_5,9) ) || (Bit(DCU_OLD_790_5,9) )  == 1)
   {
       che1_door3 = 1;
   }
   else
   {
       che1_door3 = 0;
   }
   if ( (Bit(DCU_OLD_710_6,9) ) || (Bit(DCU_OLD_790_6,9) )  == 1)
   {
       che1_door4 = 1;
   }
   else
   {
       che1_door4 = 0;
   }
   if ( (Bit(DCU_OLD_710_7,9) ) || (Bit(DCU_OLD_790_7,9) )  == 1)
   {
       che1_door5 = 1;
   }
   else
   {
       che1_door5 = 0;
   }
   if ( (Bit(DCU_OLD_710_8,9) ) || (Bit(DCU_OLD_790_8,9) ) == 1)
   {
       che1_door6 = 1;
   }
   else
   {
       che1_door6 = 0;
   }
   if ( (Bit(DCU_OLD_710_9,9) ) || (Bit(DCU_OLD_790_9,9) ) == 1)
   {
       che1_door7 = 1;
   }
   else
   {
       che1_door7 = 0;
   }
   if ( (Bit(DCU_OLD_710_10,9) ) || (Bit(DCU_OLD_790_10,9) )== 1)
   {
       che1_door8 = 1;
   }
   else
   {
       che1_door8 = 0;
   }

   if ( (Bit(DCU_OLD_720_3,9) ) || (Bit(DCU_OLD_7A0_3,9) ) == 1)
   {
       che2_door1 = 1;
   }
   else
   {
       che2_door1 = 0;
   }
   if ( (Bit(DCU_OLD_720_4,9) ) || (Bit(DCU_OLD_7A0_4,9) )== 1)
   {
       che2_door2 = 1;
   }
   else
   {
       che2_door2 = 0;
   }
   if ( (Bit(DCU_OLD_720_5,9) ) || (Bit(DCU_OLD_7A0_5,9) )  == 1)
   {
       che2_door3 = 1;
   }
   else
   {
       che2_door3 = 0;
   }
   if ( (Bit(DCU_OLD_720_6,9) ) || (Bit(DCU_OLD_7A0_6,9) )  == 1)
   {
       che2_door4 = 1;
   }
   else
   {
       che2_door4 = 0;
   }
   if ( (Bit(DCU_OLD_720_7,9) ) || (Bit(DCU_OLD_7A0_7,9) )  == 1)
   {
       che2_door5 = 1;
   }
   else
   {
       che2_door5 = 0;
   }
   if ( (Bit(DCU_OLD_720_8,9) ) || (Bit(DCU_OLD_7A0_8,9) ) == 1)
   {
       che2_door6 = 1;
   }
   else
   {
       che2_door6 = 0;
   }
   if ( (Bit(DCU_OLD_720_9,9) ) || (Bit(DCU_OLD_7A0_9,9) ) == 1)
   {
       che2_door7 = 1;
   }
   else
   {
       che2_door7 = 0;
   }
   if ( (Bit(DCU_OLD_720_10,9) ) || (Bit(DCU_OLD_7A0_10,9) )== 1)
   {
       che2_door8 = 1;
   }
   else
   {
       che2_door8 = 0;
   }


   if ( (Bit(DCU_OLD_730_3,9) ) || (Bit(DCU_OLD_7B0_3,9) ) == 1)
   {
       che3_door1 = 1;
   }
   else
   {
       che3_door1 = 0;
   }
   if ( (Bit(DCU_OLD_730_4,9) ) || (Bit(DCU_OLD_7B0_4,9) )== 1)
   {
       che3_door2 = 1;
   }
   else
   {
       che3_door2 = 0;
   }
   if ( (Bit(DCU_OLD_730_5,9) ) || (Bit(DCU_OLD_7B0_5,9) )  == 1)
   {
       che3_door3 = 1;
   }
   else
   {
       che3_door3 = 0;
   }
   if ( (Bit(DCU_OLD_730_6,9) ) || (Bit(DCU_OLD_7B0_6,9) )  == 1)
   {
       che3_door4 = 1;
   }
   else
   {
       che3_door4 = 0;
   }
   if ( (Bit(DCU_OLD_730_7,9) ) || (Bit(DCU_OLD_7B0_7,9) )  == 1)
   {
       che3_door5 = 1;
   }
   else
   {
       che3_door5 = 0;
   }
   if ( (Bit(DCU_OLD_730_8,9) ) || (Bit(DCU_OLD_7B0_8,9) ) == 1)
   {
       che3_door6 = 1;
   }
   else
   {
       che3_door6 = 0;
   }
   if ( (Bit(DCU_OLD_730_9,9) ) || (Bit(DCU_OLD_7B0_9,9) ) == 1)
   {
       che3_door7 = 1;
   }
   else
   {
       che3_door7 = 0;
   }
   if ( (Bit(DCU_OLD_730_10,9) ) || (Bit(DCU_OLD_7B0_10,9) )== 1)
   {
       che3_door8 = 1;
   }
   else
   {
       che3_door8 = 0;
   }

   if ( (Bit(DCU_OLD_740_3,9) ) || (Bit(DCU_OLD_7C0_3,9) ) == 1)
   {
       che4_door1 = 1;
   }
   else
   {
       che4_door1 = 0;
   }
   if ( (Bit(DCU_OLD_740_4,9) ) || (Bit(DCU_OLD_7C0_4,9) )== 1)
   {
       che4_door2 = 1;
   }
   else
   {
       che4_door2 = 0;
   }
   if ( (Bit(DCU_OLD_740_5,9) ) || (Bit(DCU_OLD_7C0_5,9) )  == 1)
   {
       che4_door3 = 1;
   }
   else
   {
       che4_door3 = 0;
   }
   if ( (Bit(DCU_OLD_740_6,9) ) || (Bit(DCU_OLD_7C0_6,9) )  == 1)
   {
       che4_door4 = 1;
   }
   else
   {
       che4_door4 = 0;
   }
   if ( (Bit(DCU_OLD_740_7,9) ) || (Bit(DCU_OLD_7C0_7,9) )  == 1)
   {
       che4_door5 = 1;
   }
   else
   {
       che4_door5 = 0;
   }
   if ( (Bit(DCU_OLD_740_8,9) ) || (Bit(DCU_OLD_7C0_8,9) ) == 1)
   {
       che4_door6 = 1;
   }
   else
   {
       che4_door6 = 0;
   }
   if ( (Bit(DCU_OLD_740_9,9) ) || (Bit(DCU_OLD_7C0_9,9) ) == 1)
   {
       che4_door7 = 1;
   }
   else
   {
       che4_door7 = 0;
   }
   if ( (Bit(DCU_OLD_740_10,9) ) || (Bit(DCU_OLD_7C0_10,9) )== 1)
   {
       che4_door8 = 1;
   }
   else
   {
       che4_door8 = 0;
   }

   if ( (Bit(DCU_OLD_750_3,9) ) || (Bit(DCU_OLD_7D0_3,9) ) == 1)
   {
       che5_door1 = 1;
   }
   else
   {
       che5_door1 = 0;
   }
   if ( (Bit(DCU_OLD_750_4,9) ) || (Bit(DCU_OLD_7D0_4,9) )== 1)
   {
       che5_door2 = 1;
   }
   else
   {
       che5_door2 = 0;
   }
   if ( (Bit(DCU_OLD_750_5,9) ) || (Bit(DCU_OLD_7D0_5,9) )  == 1)
   {
       che5_door3 = 1;
   }
   else
   {
       che5_door3 = 0;
   }
   if ( (Bit(DCU_OLD_750_6,9) ) || (Bit(DCU_OLD_7D0_6,9) )  == 1)
   {
       che5_door4 = 1;
   }
   else
   {
       che5_door4 = 0;
   }
   if ( (Bit(DCU_OLD_750_7,9) ) || (Bit(DCU_OLD_7D0_7,9) )  == 1)
   {
       che5_door5 = 1;
   }
   else
   {
       che5_door5 = 0;
   }
   if ( (Bit(DCU_OLD_750_8,9) ) || (Bit(DCU_OLD_7D0_8,9) ) == 1)
   {
       che5_door6 = 1;
   }
   else
   {
       che5_door6 = 0;
   }
   if ( (Bit(DCU_OLD_750_9,9) ) || (Bit(DCU_OLD_7D0_9,9) ) == 1)
   {
       che5_door7 = 1;
   }
   else
   {
       che5_door7 = 0;
   }
   if ( (Bit(DCU_OLD_750_10,9) ) || (Bit(DCU_OLD_7D0_10,9) )== 1)
   {
       che5_door8 = 1;
   }
   else
   {
       che5_door8 = 0;
   }

   if ( (Bit(DCU_OLD_760_3,9) ) || (Bit(DCU_OLD_7E0_3,9) ) == 1)
   {
       che6_door1 = 1;
   }
   else
   {
       che6_door1 = 0;
   }
   if ( (Bit(DCU_OLD_760_4,9) ) || (Bit(DCU_OLD_7E0_4,9) )== 1)
   {
       che6_door2 = 1;
   }
   else
   {
       che6_door2 = 0;
   }
   if ( (Bit(DCU_OLD_760_5,9) ) || (Bit(DCU_OLD_7E0_5,9) )  == 1)
   {
       che6_door3 = 1;
   }
   else
   {
       che6_door3 = 0;
   }
   if ( (Bit(DCU_OLD_760_6,9) ) || (Bit(DCU_OLD_7E0_6,9) )  == 1)
   {
       che6_door4 = 1;
   }
   else
   {
       che6_door4 = 0;
   }
   if ( (Bit(DCU_OLD_760_7,9) ) || (Bit(DCU_OLD_7E0_7,9) )  == 1)
   {
       che6_door5 = 1;
   }
   else
   {
       che6_door5 = 0;
   }
   if ( (Bit(DCU_OLD_760_8,9) ) || (Bit(DCU_OLD_7E0_8,9) ) == 1)
   {
       che6_door6 = 1;
   }
   else
   {
       che6_door6 = 0;
   }
   if ( (Bit(DCU_OLD_760_9,9) ) || (Bit(DCU_OLD_7E0_9,9) ) == 1)
   {
       che6_door7 = 1;
   }
   else
   {
       che6_door7 = 0;
   }
   if ( (Bit(DCU_OLD_760_10,9) ) || (Bit(DCU_OLD_7E0_10,9) )== 1)
   {
       che6_door8 = 1;
   }
   else
   {
       che6_door8 = 0;
   }

   if ( (Bit(DCU_OLD_770_3,9) ) || (Bit(DCU_OLD_7F0_3,9) ) == 1)
   {
       che7_door1 = 1;
   }
   else
   {
       che7_door1 = 0;
   }
   if ( (Bit(DCU_OLD_770_4,9) ) || (Bit(DCU_OLD_7F0_4,9) )== 1)
   {
       che7_door2 = 1;
   }
   else
   {
       che7_door2 = 0;
   }
   if ( (Bit(DCU_OLD_770_5,9) ) || (Bit(DCU_OLD_7F0_5,9) )  == 1)
   {
       che7_door3 = 1;
   }
   else
   {
       che7_door3 = 0;
   }
   if ( (Bit(DCU_OLD_770_6,9) ) || (Bit(DCU_OLD_7F0_6,9) )  == 1)
   {
       che7_door4 = 1;
   }
   else
   {
       che7_door4 = 0;
   }
   if ( (Bit(DCU_OLD_770_7,9) ) || (Bit(DCU_OLD_7F0_7,9) )  == 1)
   {
       che7_door5 = 1;
   }
   else
   {
       che7_door5 = 0;
   }
   if ( (Bit(DCU_OLD_770_8,9) ) || (Bit(DCU_OLD_7F0_8,9) ) == 1)
   {
       che7_door6 = 1;
   }
   else
   {
       che7_door6 = 0;
   }
   if ( (Bit(DCU_OLD_770_9,9) ) || (Bit(DCU_OLD_7F0_9,9) ) == 1)
   {
       che7_door7 = 1;
   }
   else
   {
       che7_door7 = 0;
   }
   if ( (Bit(DCU_OLD_770_10,9) ) || (Bit(DCU_OLD_7F0_10,9) )== 1)
   {
       che7_door8 = 1;
   }
   else
   {
       che7_door8 = 0;
   }

   if ( (Bit(DCU_OLD_780_3,9) ) || (Bit(DCU_OLD_700_3,9) ) == 1)
   {
       che8_door1 = 1;
   }
   else
   {
       che8_door1 = 0;
   }
   if ( (Bit(DCU_OLD_780_4,9) ) || (Bit(DCU_OLD_700_4,9) )== 1)
   {
       che8_door2 = 1;
   }
   else
   {
       che8_door2 = 0;
   }
   if ( (Bit(DCU_OLD_780_5,9) ) || (Bit(DCU_OLD_700_5,9) )  == 1)
   {
       che8_door3 = 1;
   }
   else
   {
       che8_door3 = 0;
   }
   if ( (Bit(DCU_OLD_780_6,9) ) || (Bit(DCU_OLD_700_6,9) )  == 1)
   {
       che8_door4 = 1;
   }
   else
   {
       che8_door4 = 0;
   }
   if ( (Bit(DCU_OLD_780_7,9) ) || (Bit(DCU_OLD_700_7,9) )  == 1)
   {
       che8_door5 = 1;
   }
   else
   {
       che8_door5 = 0;
   }
   if ( (Bit(DCU_OLD_780_8,9) ) || (Bit(DCU_OLD_700_8,9) ) == 1)
   {
       che8_door6 = 1;
   }
   else
   {
       che8_door6 = 0;
   }
   if ( (Bit(DCU_OLD_780_9,9) ) || (Bit(DCU_OLD_700_9,9) ) == 1)
   {
       che8_door7 = 1;
   }
   else
   {
       che8_door7 = 0;
   }
   if ( (Bit(DCU_OLD_780_10,9) ) || (Bit(DCU_OLD_700_10,9) )== 1)
   {
       che8_door8 = 1;
   }
   else
   {
       che8_door8 = 0;
   }

   if ( (Bit(DCU_OLD_780_11,12) ) || (Bit(DCU_OLD_700_11,12) ) == 1)
   {
       che8_door9 = 1;
   }
   else
   {
       che8_door9 = 0;
   }
   if ( (Bit(DCU_OLD_780_12,12) ) || (Bit(DCU_OLD_700_12,12) )== 1)
   {
       che8_door10 = 1;
   }
   else
   {
       che8_door10 = 0;
   }


    //TC1     DICT_Cab KeyActiveTci_B1    	Cab KeyActive	司机室激活
      if ((Bit(DI_110_1,9)  == 1)||(Bit(DI_180_1,9) == 1))
      {
          if (Bit(DI_180_1,9)  == 1)
          {
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR1))->SetCtrlText(QSTR("32"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR3))->SetCtrlText(QSTR("31"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR5))->SetCtrlText(QSTR("30"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR7))->SetCtrlText(QSTR("29"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR1))->SetCtrlText(QSTR("28"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR3))->SetCtrlText(QSTR("27"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR5))->SetCtrlText(QSTR("26"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR7))->SetCtrlText(QSTR("25"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR1))->SetCtrlText(QSTR("24"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR3))->SetCtrlText(QSTR("23"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR5))->SetCtrlText(QSTR("22"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR7))->SetCtrlText(QSTR("21"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR1))->SetCtrlText(QSTR("20"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR3))->SetCtrlText(QSTR("19"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR5))->SetCtrlText(QSTR("18"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR7))->SetCtrlText(QSTR("17"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR1))->SetCtrlText(QSTR("16"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR3))->SetCtrlText(QSTR("15"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR5))->SetCtrlText(QSTR("14"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR7))->SetCtrlText(QSTR("13"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR1))->SetCtrlText(QSTR("12"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR3))->SetCtrlText(QSTR("11"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR5))->SetCtrlText(QSTR("10"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR7))->SetCtrlText(QSTR("9"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR1))->SetCtrlText(QSTR("8"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR3))->SetCtrlText(QSTR("7"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR5))->SetCtrlText(QSTR("6"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR7))->SetCtrlText(QSTR("5"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR8))->SetCtrlText(QSTR("1"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR6))->SetCtrlText(QSTR("2"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR4))->SetCtrlText(QSTR("3"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR2))->SetCtrlText(QSTR("4"));


              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR2))->SetCtrlText(QSTR("32"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR4))->SetCtrlText(QSTR("31"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR6))->SetCtrlText(QSTR("30"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR8))->SetCtrlText(QSTR("29"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR2))->SetCtrlText(QSTR("28"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR4))->SetCtrlText(QSTR("27"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR6))->SetCtrlText(QSTR("26"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR8))->SetCtrlText(QSTR("25"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR2))->SetCtrlText(QSTR("24"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR4))->SetCtrlText(QSTR("23"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR6))->SetCtrlText(QSTR("22"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR8))->SetCtrlText(QSTR("21"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR2))->SetCtrlText(QSTR("20"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR4))->SetCtrlText(QSTR("19"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR6))->SetCtrlText(QSTR("18"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR8))->SetCtrlText(QSTR("17"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR2))->SetCtrlText(QSTR("16"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR4))->SetCtrlText(QSTR("15"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR6))->SetCtrlText(QSTR("14"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR8))->SetCtrlText(QSTR("13"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR2))->SetCtrlText(QSTR("12"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR4))->SetCtrlText(QSTR("11"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR6))->SetCtrlText(QSTR("10"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR8))->SetCtrlText(QSTR("9"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR2))->SetCtrlText(QSTR("8"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR4))->SetCtrlText(QSTR("7"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR6))->SetCtrlText(QSTR("6"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR8))->SetCtrlText(QSTR("5"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR7))->SetCtrlText(QSTR("1"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR5))->SetCtrlText(QSTR("2"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR3))->SetCtrlText(QSTR("3"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR1))->SetCtrlText(QSTR("4"));
          }

          if (Bit(DI_110_1,9)  == 1)
          {
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR1))->SetCtrlText(QSTR("1"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR3))->SetCtrlText(QSTR("2"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR5))->SetCtrlText(QSTR("3"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR7))->SetCtrlText(QSTR("4"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR1))->SetCtrlText(QSTR("5"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR3))->SetCtrlText(QSTR("6"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR5))->SetCtrlText(QSTR("7"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR7))->SetCtrlText(QSTR("8"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR1))->SetCtrlText(QSTR("9"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR3))->SetCtrlText(QSTR("10"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR5))->SetCtrlText(QSTR("11"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR7))->SetCtrlText(QSTR("12"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR1))->SetCtrlText(QSTR("13"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR3))->SetCtrlText(QSTR("14"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR5))->SetCtrlText(QSTR("15"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR7))->SetCtrlText(QSTR("16"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR1))->SetCtrlText(QSTR("17"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR3))->SetCtrlText(QSTR("18"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR5))->SetCtrlText(QSTR("19"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR7))->SetCtrlText(QSTR("20"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR1))->SetCtrlText(QSTR("21"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR3))->SetCtrlText(QSTR("22"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR5))->SetCtrlText(QSTR("23"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR7))->SetCtrlText(QSTR("24"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR1))->SetCtrlText(QSTR("25"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR3))->SetCtrlText(QSTR("26"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR5))->SetCtrlText(QSTR("27"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR7))->SetCtrlText(QSTR("28"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR8))->SetCtrlText(QSTR("32"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR6))->SetCtrlText(QSTR("31"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR4))->SetCtrlText(QSTR("30"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR2))->SetCtrlText(QSTR("29"));


              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR2))->SetCtrlText(QSTR("1"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR4))->SetCtrlText(QSTR("2"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR6))->SetCtrlText(QSTR("3"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR8))->SetCtrlText(QSTR("4"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR2))->SetCtrlText(QSTR("5"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR4))->SetCtrlText(QSTR("6"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR6))->SetCtrlText(QSTR("7"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR8))->SetCtrlText(QSTR("8"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR2))->SetCtrlText(QSTR("9"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR4))->SetCtrlText(QSTR("10"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR6))->SetCtrlText(QSTR("11"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR8))->SetCtrlText(QSTR("12"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR2))->SetCtrlText(QSTR("13"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR4))->SetCtrlText(QSTR("14"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR6))->SetCtrlText(QSTR("15"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR8))->SetCtrlText(QSTR("16"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR2))->SetCtrlText(QSTR("17"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR4))->SetCtrlText(QSTR("18"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR6))->SetCtrlText(QSTR("19"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR8))->SetCtrlText(QSTR("20"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR2))->SetCtrlText(QSTR("21"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR4))->SetCtrlText(QSTR("22"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR6))->SetCtrlText(QSTR("23"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR8))->SetCtrlText(QSTR("24"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR2))->SetCtrlText(QSTR("25"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR4))->SetCtrlText(QSTR("26"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR6))->SetCtrlText(QSTR("27"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR8))->SetCtrlText(QSTR("28"));

              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR7))->SetCtrlText(QSTR("32"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR5))->SetCtrlText(QSTR("31"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR3))->SetCtrlText(QSTR("30"));
              ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR1))->SetCtrlText(QSTR("29"));
          }
      }
//      else
//      {
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR1))->SetCtrlText(QSTR("1"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR3))->SetCtrlText(QSTR("2"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR5))->SetCtrlText(QSTR("3"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR7))->SetCtrlText(QSTR("4"));

//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR1))->SetCtrlText(QSTR("5"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR3))->SetCtrlText(QSTR("6"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR5))->SetCtrlText(QSTR("7"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR7))->SetCtrlText(QSTR("8"));

//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR1))->SetCtrlText(QSTR("9"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR3))->SetCtrlText(QSTR("10"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR5))->SetCtrlText(QSTR("11"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR7))->SetCtrlText(QSTR("12"));

//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR1))->SetCtrlText(QSTR("13"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR3))->SetCtrlText(QSTR("14"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR5))->SetCtrlText(QSTR("15"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR7))->SetCtrlText(QSTR("16"));

//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR1))->SetCtrlText(QSTR("17"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR3))->SetCtrlText(QSTR("18"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR5))->SetCtrlText(QSTR("19"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR7))->SetCtrlText(QSTR("20"));

//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR1))->SetCtrlText(QSTR("21"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR3))->SetCtrlText(QSTR("22"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR5))->SetCtrlText(QSTR("23"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR7))->SetCtrlText(QSTR("24"));

//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR1))->SetCtrlText(QSTR("25"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR3))->SetCtrlText(QSTR("26"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR5))->SetCtrlText(QSTR("27"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR7))->SetCtrlText(QSTR("28"));

//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR8))->SetCtrlText(QSTR("32"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR6))->SetCtrlText(QSTR("31"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR4))->SetCtrlText(QSTR("30"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR2))->SetCtrlText(QSTR("29"));


//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR2))->SetCtrlText(QSTR("1"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR4))->SetCtrlText(QSTR("2"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR6))->SetCtrlText(QSTR("3"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1DOOR8))->SetCtrlText(QSTR("4"));

//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR2))->SetCtrlText(QSTR("5"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR4))->SetCtrlText(QSTR("6"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR6))->SetCtrlText(QSTR("7"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2DOOR8))->SetCtrlText(QSTR("8"));

//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR2))->SetCtrlText(QSTR("9"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR4))->SetCtrlText(QSTR("10"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR6))->SetCtrlText(QSTR("11"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3DOOR8))->SetCtrlText(QSTR("12"));

//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR2))->SetCtrlText(QSTR("13"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR4))->SetCtrlText(QSTR("14"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR6))->SetCtrlText(QSTR("15"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4DOOR8))->SetCtrlText(QSTR("16"));

//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR2))->SetCtrlText(QSTR("17"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR4))->SetCtrlText(QSTR("18"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR6))->SetCtrlText(QSTR("19"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5DOOR8))->SetCtrlText(QSTR("20"));

//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR2))->SetCtrlText(QSTR("21"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR4))->SetCtrlText(QSTR("22"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR6))->SetCtrlText(QSTR("23"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6DOOR8))->SetCtrlText(QSTR("24"));

//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR2))->SetCtrlText(QSTR("25"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR4))->SetCtrlText(QSTR("26"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR6))->SetCtrlText(QSTR("27"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7DOOR8))->SetCtrlText(QSTR("28"));

//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR7))->SetCtrlText(QSTR("32"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR5))->SetCtrlText(QSTR("31"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR3))->SetCtrlText(QSTR("30"));
//          ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8DOOR1))->SetCtrlText(QSTR("29"));
//      }


    SetDoorLabelColor(ID_PIBCS_LABEL_CAR1DOOR1, che1_door1);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR1DOOR2, che1_door2);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR1DOOR3, che1_door3);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR1DOOR4, che1_door4);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR1DOOR5, che1_door5);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR1DOOR6, che1_door6);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR1DOOR7, che1_door7);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR1DOOR8, che1_door8);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR2DOOR1, che2_door1);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR2DOOR2, che2_door2);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR2DOOR3, che2_door3);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR2DOOR4, che2_door4);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR2DOOR5, che2_door5);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR2DOOR6, che2_door6);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR2DOOR7, che2_door7);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR2DOOR8, che2_door8);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR3DOOR1, che3_door1);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR3DOOR2, che3_door2);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR3DOOR3, che3_door3);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR3DOOR4, che3_door4);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR3DOOR5, che3_door5);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR3DOOR6, che3_door6);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR3DOOR7, che3_door7);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR3DOOR8, che3_door8);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR4DOOR1, che4_door1);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR4DOOR2, che4_door2);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR4DOOR3, che4_door3);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR4DOOR4, che4_door4);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR4DOOR5, che4_door5);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR4DOOR6, che4_door6);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR4DOOR7, che4_door7);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR4DOOR8, che4_door8);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR5DOOR1, che5_door1);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR5DOOR2, che5_door2);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR5DOOR3, che5_door3);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR5DOOR4, che5_door4);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR5DOOR5, che5_door5);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR5DOOR6, che5_door6);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR5DOOR7, che5_door7);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR5DOOR8, che5_door8);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR6DOOR1, che6_door1);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR6DOOR2, che6_door2);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR6DOOR3, che6_door3);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR6DOOR4, che6_door4);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR6DOOR5, che6_door5);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR6DOOR6, che6_door6);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR6DOOR7, che6_door7);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR6DOOR8, che6_door8);

    SetDoorLabelColor(ID_PIBCS_LABEL_CAR1DOOR9,  che1_door9);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR1DOOR10, che1_door10);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR8DOOR9,  che8_door9);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR8DOOR10, che8_door10);

    SetDoorLabelColor(ID_PIBCS_LABEL_CAR7DOOR1, che7_door1);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR7DOOR2, che7_door2);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR7DOOR3, che7_door3);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR7DOOR4, che7_door4);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR7DOOR5, che7_door5);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR7DOOR6, che7_door6);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR7DOOR7, che7_door7);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR7DOOR8, che7_door8);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR8DOOR1, che8_door8);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR8DOOR2, che8_door7);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR8DOOR3, che8_door6);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR8DOOR4, che8_door5);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR8DOOR5, che8_door4);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR8DOOR6, che8_door3);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR8DOOR7, che8_door2);
    SetDoorLabelColor(ID_PIBCS_LABEL_CAR8DOOR8, che8_door1);

}



void CCommStatusPage::UpdateUDP()
{

    if(TC1_HMI==1)
    {
        if(Bit(hmi_485_error,7)==1)
        {
            ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI2_UPD))->SetCtrlBKColor(Qt::cyan);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI2_UPD))->SetCtrlBKColor(Qt::white);
        }

        if(g_udp_comm_err_flg1)
        {
            ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI1_UPD))->SetCtrlBKColor(Qt::white);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI1_UPD))->SetCtrlBKColor(Qt::cyan);
        }


    }
    else
    {
        if(TC2_HMI==1)
        {
            if((Bit(hmi_485_error,7)==1))
            {
                ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI1_UPD))->SetCtrlBKColor(Qt::cyan);
            }
            else
            {
                ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI1_UPD))->SetCtrlBKColor(Qt::white);
            }

            if(g_udp_comm_err_flg2)
            {
                ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI2_UPD))->SetCtrlBKColor(Qt::white);
            }
            else
            {
                ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI2_UPD))->SetCtrlBKColor(Qt::cyan);
            }
        }
        else
        {
             ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI1_UPD))->SetCtrlBKColor(Qt::white);
             ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI2_UPD))->SetCtrlBKColor(Qt::white);
        }
    }


}

void CCommStatusPage::UpdateGW()
{


    //    CTHM_DCU1On_B1   门控制器1在线
    if (Bit(CCU_HMI_222_10, 16 )  == 1 )
        {
            //    DRiCT_OperStts_U8	运行模式	"0=Error  1=master  2=stand by"
            if((DCU_OLD_710_2%256)==1)
            {
                car1_GW1 = 1;
            }
            if((DCU_OLD_710_2%256)==2)
            {
                car1_GW1 = 2;
            }
            if((DCU_OLD_710_2%256)==0)
            {
                car1_GW1 = 3;
            }
        }
        else
        {
            car1_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 8 )  == 1  )
        {
            if((DCU_OLD_790_2%256)==1)
            {
                car1_GW2 = 1;
            }
            if((DCU_OLD_790_2%256)==2)
            {
                car1_GW2 = 2;
            }
            if((DCU_OLD_790_2%256)==0)
            {
                car1_GW2 = 3;
            }
        }
        else
        {
            car1_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 15 )  == 1  )
        {
            if((DCU_OLD_720_2%256)==1)
            {
                car2_GW1 = 1;
            }
            if((DCU_OLD_720_2%256)==2)
            {
                car2_GW1 = 2;
            }
            if((DCU_OLD_720_2%256)==0)
            {
                car2_GW1 = 3;
            }
        }
        else
        {
            car2_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 7 )  == 1  )
        {
            if((DCU_OLD_7A0_2%256)==1)
            {
                car2_GW2 = 1;
            }
            if((DCU_OLD_7A0_2%256)==2)
            {
                car2_GW2 = 2;
            }
            if((DCU_OLD_7A0_2%256)==0)
            {
                car2_GW2 = 3;
            }
        }
        else
        {
            car2_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 14 )  == 1 )
        {
            if((DCU_OLD_730_2%256)==1)
            {
                car3_GW1 = 1;
            }
            if((DCU_OLD_730_2%256)==2)
            {
                car3_GW1 = 2;
            }
            if((DCU_OLD_730_2%256)==0)
            {
                car3_GW1 = 3;
            }
        }
        else
        {
            car3_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 6 )  == 1  )
        {
            if((DCU_OLD_7B0_2%256)==1)
            {
                car3_GW2 = 1;
            }
            if((DCU_OLD_7B0_2%256)==2)
            {
                car3_GW2 = 2;
            }
            if((DCU_OLD_7B0_2%256)==0)
            {
                car3_GW2 = 3;
            }
        }
        else
        {
            car3_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 13 )  == 1 )
        {
            if((DCU_OLD_740_2%256)==1)
            {
                car4_GW1 = 1;
            }
            if((DCU_OLD_740_2%256)==2)
            {
                car4_GW1 = 2;
            }
            if((DCU_OLD_740_2%256)==0)
            {
                car4_GW1 = 3;
            }
        }
        else
        {
            car4_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 5 )  == 1  )
        {
            if((DCU_OLD_7C0_2%256)==1)
            {
                car4_GW2 = 1;
            }
            if((DCU_OLD_7C0_2%256)==2)
            {
                car4_GW2 = 2;
            }
            if((DCU_OLD_7C0_2%256)==0)
            {
                car4_GW2 = 3;
            }
        }
        else
        {
            car4_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 12 )  == 1  )
        {
            if((DCU_OLD_750_2%256)==1)
            {
                car5_GW1 = 1;
            }
            if((DCU_OLD_750_2%256)==2)
            {
                car5_GW1 = 2;
            }
            if((DCU_OLD_750_2%256)==0)
            {
                car5_GW1 = 3;
            }
        }
        else
        {
            car5_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 4 )  == 1 )
        {
            if((DCU_OLD_7D0_2%256)==1)
            {
                car5_GW2 = 1;
            }
            if((DCU_OLD_7D0_2%256)==2)
            {
                car5_GW2 = 2;
            }
            if((DCU_OLD_7D0_2%256)==0)
            {
                car5_GW2 = 3;
            }
        }
        else
        {
            car5_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 11 )  == 1  )
        {
            if((DCU_OLD_760_2%256)==1)
            {
                car6_GW1 = 1;
            }
            if((DCU_OLD_760_2%256)==2)
            {
                car6_GW1 = 2;
            }
            if((DCU_OLD_760_2%256)==0)
            {
                car6_GW1 = 3;
            }
        }
        else
        {
            car6_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 3 )  == 1 )
        {
            if((DCU_OLD_7E0_2%256)==1)
            {
                car6_GW2 = 1;
            }
            if((DCU_OLD_7E0_2%256)==2)
            {
                car6_GW2 = 2;
            }
            if((DCU_OLD_7E0_2%256)==0)
            {
                car6_GW2 = 3;
            }
        }
        else
        {
            car6_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 10 )  == 1  )
        {
            if((DCU_OLD_770_2%256)==1)
            {
                car7_GW1 = 1;
            }
            if((DCU_OLD_770_2%256)==2)
            {
                car7_GW1 = 2;
            }
            if((DCU_OLD_770_2%256)==0)
            {
                car7_GW1 = 3;
            }
        }
        else
        {
            car7_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 2 )  == 1 )
        {
            if((DCU_OLD_7F0_2%256)==1)
            {
                car7_GW2 = 1;
            }
            if((DCU_OLD_7F0_2%256)==2)
            {
                car7_GW2 = 2;
            }
            if((DCU_OLD_7F0_2%256)==0)
            {
                car7_GW2 = 3;
            }
        }
        else
        {
            car7_GW2 = 0;

        }
        if (Bit(CCU_HMI_222_10, 9 )  == 1  )
        {
            if((DCU_OLD_780_2%256)==1)
            {
                car8_GW1 = 1;
            }
            if((DCU_OLD_780_2%256)==2)
            {
                car8_GW1 = 2;
            }
            if((DCU_OLD_780_2%256)==0)
            {
                car8_GW1 = 3;
            }
        }
        else
        {
            car8_GW1 = 0;

        }
        if (Bit(CCU_HMI_222_11, 1 )  == 1 )
        {
            if((DCU_OLD_700_2%256)==1)
            {
                car8_GW2 = 1;
            }
            if((DCU_OLD_700_2%256)==2)
            {
                car8_GW2 = 2;
            }
            if((DCU_OLD_700_2%256)==0)
            {
                car8_GW2 = 3;
            }
        }
        else
        {
            car8_GW2 = 0;

        }


    SetGwLabelColor(ID_PIBCS_LABEL_CAR1_GW1, car1_GW1);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR1_GW2, car1_GW2);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR2_GW1, car2_GW1);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR2_GW2, car2_GW2);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR3_GW1, car3_GW1);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR3_GW2, car3_GW2);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR4_GW1, car4_GW1);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR4_GW2, car4_GW2);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR5_GW1, car5_GW1);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR5_GW2, car5_GW2);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR6_GW1, car6_GW1);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR6_GW2, car6_GW2);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR7_GW1, car7_GW1);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR7_GW2, car7_GW2);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR8_GW1, car8_GW1);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR8_GW2, car8_GW2);
}

void CCommStatusPage::SetCcuLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }

    return;
}

void CCommStatusPage::SetRiomLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCommStatusPage::SetAcuLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }

    return;
}

void CCommStatusPage::SetTcuLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCommStatusPage::SetAtcLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCommStatusPage::SetHmiLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCommStatusPage::SetBcuLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCommStatusPage::SetBcucanLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::darkGreen);
    }

    return;
}

void CCommStatusPage::SetHvacLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
//    else if (2 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
//    }

    return;
}

void CCommStatusPage::SetPisLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCommStatusPage::SetDoorLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCommStatusPage::SetGwLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCommStatusPage::OnRealTimeFaultsWarnningIconClk()
{
    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CCommStatusPage::UpdateRLD()
{


//    if(Bit(DI_110_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1_RLD))->SetCtrlBKColor(Qt::red);
//    }

//    if(Bit(DI_120_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2_RLD))->SetCtrlBKColor(Qt::red);
//    }

//    if(Bit(DI_130_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3_RLD))->SetCtrlBKColor(Qt::red);
//    }

//    if(Bit(DI_140_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4_RLD))->SetCtrlBKColor(Qt::red);
//    }

//    if(Bit(DI_150_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5_RLD))->SetCtrlBKColor(Qt::red);
//    }

//    if(Bit(DI_160_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6_RLD))->SetCtrlBKColor(Qt::red);
//    }

//    if(Bit(DI_170_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7_RLD))->SetCtrlBKColor(Qt::red);
//    }

//    if(Bit(DI_180_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8_RLD))->SetCtrlBKColor(Qt::red);
//    }
}

