#include "mvbthread.h"

#include "CGlobal.h" // 用户编程使用
#include <QMap>

MvbThread::MvbThread()
{

}

MvbThread::~MvbThread()
{

}

bool MvbThread::init()
{
    UNSIGNED16 RetVal = 0;
    restart = false;
    abort = false;

    // Initialize MVB
    // PIXYMVB_MIN_TMMODEL or PIXYMVB_MAX_TMMODEL
    // PIXYMVB_MIN_TMMODEL equals to 64KB of MVB Traffic Store,
    // the default. PIXYMVB_MAX_TMMODEL is equal to 256KB of MVB Traffic Store.
    // PIXYMVB_PHY_OFG is an OFG Interface Opto Port
    // PIXYMVB_PHY_ESD is an ESD(+) Interface
    // PIXYMVB_PHY_EMD is an EMD Interface
    // deviceID:
    // snkTmeSupvIntv:0 = Inactive, 1 = 1 ms, 2 = 2 ms, 3 = 4 ms, 4 = 8 ms, 5 = 16 ms,
    // 6 = 32 ms, 7 = 64 ms, 8 = 128 ms, 9 = 256 ms
    if(TC1_HMI==1)
    {
        // changed by Deng Ran on the 31st of July 2017.
        RetVal = pixymvb_CfgHWInit( PIXYMVB_MIN_TMMODEL, PIXYMVB_PHY_EMD, 0x20, 1);
        test_tempdata[96]=RetVal/256;
        test_tempdata[97]=RetVal%256;

#ifdef DEBUG
        writeDebugLog( "pixymvb_CfgHWInit Tc1:", RetVal );
#endif
    }
    else
    {
        if(TC2_HMI==1)
        {
            // changed by Deng Ran on the 31st of July 2017.
            RetVal = pixymvb_CfgHWInit( PIXYMVB_MIN_TMMODEL, PIXYMVB_PHY_EMD, 0x28, 1);
            test_tempdata[96]=RetVal/256;
            test_tempdata[97]=RetVal%256;
    #ifdef DEBUG
            writeDebugLog( "pixymvb_CfgHWInit Tc2:", RetVal );
    #endif
        }
        else
        {
            test_tempdata[96]=255;
            test_tempdata[97]=255;
        }
    }
    if ( PIXYMVB_OK != RetVal )
    {
        return(false);
    } 

    // Initialize Ports Data

    // src
    memset(srcPortData200,0,sizeof(srcPortData200));
    memset(srcPortData201,0,sizeof(srcPortData201));
    memset(srcPortData202,0,sizeof(srcPortData202));
    memset(srcPortData203,0,sizeof(srcPortData203));

    memset(srcPortData280,0,sizeof(srcPortData280));
    memset(srcPortData281,0,sizeof(srcPortData281));
    memset(srcPortData282,0,sizeof(srcPortData282));
    memset(srcPortData283,0,sizeof(srcPortData283));
    //snk
    memset(snkPortData100,0,sizeof(snkPortData100));
    memset(snkPortData110,0,sizeof(snkPortData110));
    memset(snkPortData114,0,sizeof(snkPortData114));
    memset(snkPortData120,0,sizeof(snkPortData120));
    memset(snkPortData130,0,sizeof(snkPortData130));
    memset(snkPortData140,0,sizeof(snkPortData140));
    memset(snkPortData150,0,sizeof(snkPortData150));
    memset(snkPortData160,0,sizeof(snkPortData160));
    memset(snkPortData170,0,sizeof(snkPortData170));
    memset(snkPortData180,0,sizeof(snkPortData180));
    memset(snkPortData184,0,sizeof(snkPortData184));

    memset(snkPortData200,0,sizeof(snkPortData200));
    memset(snkPortData201,0,sizeof(snkPortData201));
    memset(snkPortData202,0,sizeof(snkPortData202));
    memset(snkPortData203,0,sizeof(snkPortData203));

    memset(snkPortData280,0,sizeof(snkPortData280));
    memset(snkPortData281,0,sizeof(snkPortData281));
    memset(snkPortData282,0,sizeof(snkPortData282));
    memset(snkPortData283,0,sizeof(snkPortData283));

    memset(snkPortData400,0,sizeof(snkPortData400));
    memset(snkPortData410,0,sizeof(snkPortData410));
    memset(snkPortData411,0,sizeof(snkPortData411));
    memset(snkPortData412,0,sizeof(snkPortData412));
    memset(snkPortData413,0,sizeof(snkPortData413));
    memset(snkPortData414,0,sizeof(snkPortData414));
    memset(snkPortData420,0,sizeof(snkPortData420));
    memset(snkPortData421,0,sizeof(snkPortData421));
    memset(snkPortData422,0,sizeof(snkPortData422));
    memset(snkPortData423,0,sizeof(snkPortData423));
    memset(snkPortData424,0,sizeof(snkPortData424));
    memset(snkPortData430,0,sizeof(snkPortData430));
    memset(snkPortData431,0,sizeof(snkPortData431));
    memset(snkPortData432,0,sizeof(snkPortData432));
    memset(snkPortData433,0,sizeof(snkPortData433));
    memset(snkPortData434,0,sizeof(snkPortData434));
    memset(snkPortData440,0,sizeof(snkPortData440));
    memset(snkPortData441,0,sizeof(snkPortData441));
    memset(snkPortData442,0,sizeof(snkPortData442));
    memset(snkPortData443,0,sizeof(snkPortData443));
    memset(snkPortData444,0,sizeof(snkPortData444));
    memset(snkPortData500,0,sizeof(snkPortData500));
    memset(snkPortData510,0,sizeof(snkPortData510));
    memset(snkPortData511,0,sizeof(snkPortData511));
    memset(snkPortData520,0,sizeof(snkPortData520));
    memset(snkPortData521,0,sizeof(snkPortData521));
    memset(snkPortData530,0,sizeof(snkPortData530));
    memset(snkPortData531,0,sizeof(snkPortData531));
    memset(snkPortData540,0,sizeof(snkPortData540));
    memset(snkPortData541,0,sizeof(snkPortData541));
    memset(snkPortData550,0,sizeof(snkPortData550));
    memset(snkPortData551,0,sizeof(snkPortData551));
    memset(snkPortData560,0,sizeof(snkPortData560));
    memset(snkPortData561,0,sizeof(snkPortData561));
    memset(snkPortData600,0,sizeof(snkPortData600));
    memset(snkPortData610,0,sizeof(snkPortData610));
    memset(snkPortData611,0,sizeof(snkPortData611));
    memset(snkPortData620,0,sizeof(snkPortData620));
    memset(snkPortData621,0,sizeof(snkPortData621));
    memset(snkPortData700,0,sizeof(snkPortData700));
    memset(snkPortData701,0,sizeof(snkPortData701));
    memset(snkPortData710,0,sizeof(snkPortData710));
    memset(snkPortData711,0,sizeof(snkPortData711));
    memset(snkPortData720,0,sizeof(snkPortData720));
    memset(snkPortData721,0,sizeof(snkPortData721));
    memset(snkPortData730,0,sizeof(snkPortData730));
    memset(snkPortData731,0,sizeof(snkPortData731));
    memset(snkPortData740,0,sizeof(snkPortData740));
    memset(snkPortData741,0,sizeof(snkPortData741));
    memset(snkPortData750,0,sizeof(snkPortData750));
    memset(snkPortData751,0,sizeof(snkPortData751));
    memset(snkPortData760,0,sizeof(snkPortData760));
    memset(snkPortData761,0,sizeof(snkPortData761));
    memset(snkPortData770,0,sizeof(snkPortData770));
    memset(snkPortData771,0,sizeof(snkPortData771));
    memset(snkPortData780,0,sizeof(snkPortData780));
    memset(snkPortData781,0,sizeof(snkPortData781));
    memset(snkPortData790,0,sizeof(snkPortData790));
    memset(snkPortData791,0,sizeof(snkPortData791));
    memset(snkPortData7A0,0,sizeof(snkPortData7A0));
    memset(snkPortData7A1,0,sizeof(snkPortData7A1));
    memset(snkPortData7B0,0,sizeof(snkPortData7B0));
    memset(snkPortData7B1,0,sizeof(snkPortData7B1));
    memset(snkPortData7C0,0,sizeof(snkPortData7C0));
    memset(snkPortData7C1,0,sizeof(snkPortData7C1));
    memset(snkPortData7D0,0,sizeof(snkPortData7D0));
    memset(snkPortData7D1,0,sizeof(snkPortData7D1));
    memset(snkPortData7E0,0,sizeof(snkPortData7E0));
    memset(snkPortData7E1,0,sizeof(snkPortData7E1));
    memset(snkPortData7F0,0,sizeof(snkPortData7F0));
    memset(snkPortData7F1,0,sizeof(snkPortData7F1));
    memset(snkPortData800,0,sizeof(snkPortData800));
    memset(snkPortData810,0,sizeof(snkPortData810));
    memset(snkPortData820,0,sizeof(snkPortData820));
    memset(snkPortData830,0,sizeof(snkPortData830));
    memset(snkPortData840,0,sizeof(snkPortData840));
    memset(snkPortData850,0,sizeof(snkPortData850));
    memset(snkPortData860,0,sizeof(snkPortData860));
    memset(snkPortData870,0,sizeof(snkPortData870));
    memset(snkPortData880,0,sizeof(snkPortData880));
    memset(snkPortData900,0,sizeof(snkPortData900));
    memset(snkPortData910,0,sizeof(snkPortData910));
    memset(snkPortData911,0,sizeof(snkPortData911));
    memset(snkPortData920,0,sizeof(snkPortData920));
    memset(snkPortData921,0,sizeof(snkPortData921));
    memset(snkPortDataA00,0,sizeof(snkPortDataA00));
    memset(snkPortDataA10,0,sizeof(snkPortDataA10));
    memset(snkPortDataA11,0,sizeof(snkPortDataA11));
    memset(snkPortDataB00,0,sizeof(snkPortDataB00));
    memset(snkPortDataB10,0,sizeof(snkPortDataB10));
    memset(snkPortDataB20,0,sizeof(snkPortDataB20));
    memset(snkPortDataF00,0,sizeof(snkPortDataF00));
    memset(snkPortDataF01,0,sizeof(snkPortDataF01));
    memset(snkPortDataF02,0,sizeof(snkPortDataF02));
    memset(snkPortDataF03,0,sizeof(snkPortDataF03));
    memset(snkPortDataF10,0,sizeof(snkPortDataF10));
    memset(snkPortDataF11,0,sizeof(snkPortDataF11));
    memset(snkPortDataF12,0,sizeof(snkPortDataF12));
    memset(snkPortDataF13,0,sizeof(snkPortDataF13));
    memset(snkPortData108,0,sizeof(snkPortData108));
    memset(snkPortData118,0,sizeof(snkPortData118));
    memset(snkPortData128,0,sizeof(snkPortData128));
    memset(snkPortData138,0,sizeof(snkPortData138));
    memset(snkPortData148,0,sizeof(snkPortData148));
    memset(snkPortData158,0,sizeof(snkPortData158));
    memset(snkPortData168,0,sizeof(snkPortData168));
    memset(snkPortData178,0,sizeof(snkPortData178));
    memset(snkPortData188,0,sizeof(snkPortData188));
    memset(snkPortData220,0,sizeof(snkPortData220));
    memset(snkPortData221,0,sizeof(snkPortData221));
    memset(snkPortData222,0,sizeof(snkPortData222));
    memset(snkPortData223,0,sizeof(snkPortData223));
    memset(snkPortData408,0,sizeof(snkPortData408));
    memset(snkPortData418,0,sizeof(snkPortData418));
    memset(snkPortData508,0,sizeof(snkPortData508));
    memset(snkPortData518,0,sizeof(snkPortData518));
    memset(snkPortData528,0,sizeof(snkPortData528));
    memset(snkPortData538,0,sizeof(snkPortData538));
    memset(snkPortData548,0,sizeof(snkPortData548));
    memset(snkPortData558,0,sizeof(snkPortData558));
    memset(snkPortData568,0,sizeof(snkPortData568));
    memset(snkPortData608,0,sizeof(snkPortData608));
    memset(snkPortData618,0,sizeof(snkPortData618));
    memset(snkPortData628,0,sizeof(snkPortData628));
    memset(snkPortData708,0,sizeof(snkPortData708));
    memset(snkPortData718,0,sizeof(snkPortData718));
    memset(snkPortData808,0,sizeof(snkPortData808));
    memset(snkPortData818,0,sizeof(snkPortData818));
    memset(snkPortData908,0,sizeof(snkPortData908));
    memset(snkPortData918,0,sizeof(snkPortData918));
    memset(snkPortData919,0,sizeof(snkPortData919));
    memset(snkPortDataA08,0,sizeof(snkPortDataA08));
    memset(snkPortDataA18,0,sizeof(snkPortDataA18));
    memset(snkPortDataB08,0,sizeof(snkPortDataB08));
    memset(snkPortDataB18,0,sizeof(snkPortDataB18));

    // Configure Ports
    // SRC
    if(TC1_HMI==1)
    {   // HMI tc1 add src port
        RetVal = pixymvb_AddPort( 0x200, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) &srcPortData200 ); // Src Port FC 4
        test_tempdata[98]=RetVal/256;
        test_tempdata[99]=RetVal%256;
#ifdef DEBUG
        writeDebugLog( "pixymvb_AddPort: SRC 0x200--", RetVal );
#endif
        if ( PIXYMVB_OK != RetVal )
        {
            return(false);
        }

        pixymvb_AddPort( 0x201, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData201 ); // Src Port FC 4
        pixymvb_AddPort( 0x202, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData202 ); // Src Port FC 4
        pixymvb_AddPort( 0x203, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData203 ); // Src Port FC 4
    }
    else
    {   // HMI tc2 add src port
        if(TC2_HMI==1)
        {
            RetVal = pixymvb_AddPort( 0x280, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) &srcPortData280 ); // Src Port FC 4
            test_tempdata[98]=RetVal/256;
            test_tempdata[99]=RetVal%256;
    #ifdef DEBUG
            writeDebugLog( "pixymvb_AddPort: SRC 0x280--", RetVal );
    #endif
            if ( PIXYMVB_OK != RetVal )
            {
                return(false);
            }

            pixymvb_AddPort( 0x281, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData281 ); // Src Port FC 4
            pixymvb_AddPort( 0x282, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData282 ); // Src Port FC 4
            pixymvb_AddPort( 0x283, PIXYMVB_SRCPORT, 16, (PIXYMVB_Data *) srcPortData283 ); // Src Port FC 4
        }
        else
        {
            test_tempdata[98]=255;
            test_tempdata[99]=255;
        }


    }

    // SNK
    RetVal = pixymvb_AddPort( 0x100, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData100 ); // Snk Port FC 4
#ifdef DEBUG
    writeDebugLog( "pixymvb_AddPort: SNK 0x100--", RetVal );
#endif
    if ( PIXYMVB_OK != RetVal )
    {
        return(false);
    }

    pixymvb_AddPort( 0x100, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData100 ); // Snk Port FC 4
    pixymvb_AddPort( 0x110, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData110 ); // Snk Port FC 4
    pixymvb_AddPort( 0x114, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData114 ); // Snk Port FC 4
    pixymvb_AddPort( 0x120, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData120 ); // Snk Port FC 4
    pixymvb_AddPort( 0x130, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData130 ); // Snk Port FC 4
    pixymvb_AddPort( 0x140, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData140 ); // Snk Port FC 4
    pixymvb_AddPort( 0x150, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData150 ); // Snk Port FC 4
    pixymvb_AddPort( 0x160, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData160 ); // Snk Port FC 4
    pixymvb_AddPort( 0x170, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData170 ); // Snk Port FC 4
    pixymvb_AddPort( 0x180, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData180 ); // Snk Port FC 4
    pixymvb_AddPort( 0x184, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData184 ); // Snk Port FC 4

    if(TC1_HMI==1)
    {   // HMI tc1 add snk port
        pixymvb_AddPort( 0x280, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData280 ); // Snk Port FC 4
        pixymvb_AddPort( 0x281, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData281 ); // Snk Port FC 4
        pixymvb_AddPort( 0x282, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData282 ); // Snk Port FC 4
        pixymvb_AddPort( 0x283, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData283 ); // Snk Port FC 4
    }
    else
    {   // HMI tc2 add snk port
        if(TC2_HMI==1)
        {
            pixymvb_AddPort( 0x200, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData200 ); // Snk Port FC 4
            pixymvb_AddPort( 0x201, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData201 ); // Snk Port FC 4
            pixymvb_AddPort( 0x202, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData202 ); // Snk Port FC 4
            pixymvb_AddPort( 0x203, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData203 ); // Snk Port FC 4
        }

    }

    pixymvb_AddPort( 0x400, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData400 ); // Snk Port FC 4
    pixymvb_AddPort( 0x410, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData410 ); // Snk Port FC 4
    pixymvb_AddPort( 0x411, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData411 ); // Snk Port FC 4
    pixymvb_AddPort( 0x412, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData412 ); // Snk Port FC 4
    pixymvb_AddPort( 0x413, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData413 ); // Snk Port FC 4
    pixymvb_AddPort( 0x414, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData414 ); // Snk Port FC 4
    pixymvb_AddPort( 0x420, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData420 ); // Snk Port FC 4
    pixymvb_AddPort( 0x421, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData421 ); // Snk Port FC 4
    pixymvb_AddPort( 0x422, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData422 ); // Snk Port FC 4
    pixymvb_AddPort( 0x423, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData423 ); // Snk Port FC 4
    pixymvb_AddPort( 0x424, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData424 ); // Snk Port FC 4
    pixymvb_AddPort( 0x430, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData430 ); // Snk Port FC 4
    pixymvb_AddPort( 0x431, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData431 ); // Snk Port FC 4
    pixymvb_AddPort( 0x432, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData432 ); // Snk Port FC 4
    pixymvb_AddPort( 0x433, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData433 ); // Snk Port FC 4
    pixymvb_AddPort( 0x434, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData434 ); // Snk Port FC 4
    pixymvb_AddPort( 0x440, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData440 ); // Snk Port FC 4
    pixymvb_AddPort( 0x441, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData441 ); // Snk Port FC 4
    pixymvb_AddPort( 0x442, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData442 ); // Snk Port FC 4
    pixymvb_AddPort( 0x443, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData443 ); // Snk Port FC 4
    pixymvb_AddPort( 0x444, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData444 ); // Snk Port FC 4
    pixymvb_AddPort( 0x500, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData500 ); // Snk Port FC 4
    pixymvb_AddPort( 0x510, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData510 ); // Snk Port FC 4
    pixymvb_AddPort( 0x511, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData511 ); // Snk Port FC 4
    pixymvb_AddPort( 0x520, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData520 ); // Snk Port FC 4
    pixymvb_AddPort( 0x521, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData521 ); // Snk Port FC 4
    pixymvb_AddPort( 0x530, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData530 ); // Snk Port FC 4
    pixymvb_AddPort( 0x531, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData531 ); // Snk Port FC 4
    pixymvb_AddPort( 0x540, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData540 ); // Snk Port FC 4
    pixymvb_AddPort( 0x541, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData541 ); // Snk Port FC 4
    pixymvb_AddPort( 0x550, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData550 ); // Snk Port FC 4
    pixymvb_AddPort( 0x551, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData551 ); // Snk Port FC 4
    pixymvb_AddPort( 0x560, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData560 ); // Snk Port FC 4
    pixymvb_AddPort( 0x561, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData561 ); // Snk Port FC 4
    pixymvb_AddPort( 0x600, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData600 ); // Snk Port FC 4
    pixymvb_AddPort( 0x610, PIXYMVB_SNKPORT,  8, (PIXYMVB_Data *) snkPortData610 ); // Snk Port FC 3
    pixymvb_AddPort( 0x611, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData611 ); // Snk Port FC 4
    pixymvb_AddPort( 0x620, PIXYMVB_SNKPORT,  8, (PIXYMVB_Data *) snkPortData620 ); // Snk Port FC 3
    pixymvb_AddPort( 0x621, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData621 ); // Snk Port FC 4
    pixymvb_AddPort( 0x700, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData700 ); // Snk Port FC 4
    pixymvb_AddPort( 0x701, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData701 ); // Snk Port FC 4
    pixymvb_AddPort( 0x710, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData710 ); // Snk Port FC 4
    pixymvb_AddPort( 0x711, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData711 ); // Snk Port FC 4
    pixymvb_AddPort( 0x720, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData720 ); // Snk Port FC 4
    pixymvb_AddPort( 0x721, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData721 ); // Snk Port FC 4
    pixymvb_AddPort( 0x730, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData730 ); // Snk Port FC 4
    pixymvb_AddPort( 0x731, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData731 ); // Snk Port FC 4
    pixymvb_AddPort( 0x740, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData740 ); // Snk Port FC 4
    pixymvb_AddPort( 0x741, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData741 ); // Snk Port FC 4
    pixymvb_AddPort( 0x750, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData750 ); // Snk Port FC 4
    pixymvb_AddPort( 0x751, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData751 ); // Snk Port FC 4
    pixymvb_AddPort( 0x760, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData760 ); // Snk Port FC 4
    pixymvb_AddPort( 0x761, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData761 ); // Snk Port FC 4
    pixymvb_AddPort( 0x770, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData770 ); // Snk Port FC 4
    pixymvb_AddPort( 0x771, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData771 ); // Snk Port FC 4
    pixymvb_AddPort( 0x780, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData780 ); // Snk Port FC 4
    pixymvb_AddPort( 0x781, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData781 ); // Snk Port FC 4
    pixymvb_AddPort( 0x790, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData790 ); // Snk Port FC 4
    pixymvb_AddPort( 0x791, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData791 ); // Snk Port FC 4
    pixymvb_AddPort( 0x7A0, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData7A0 ); // Snk Port FC 4
    pixymvb_AddPort( 0x7A1, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData7A1 ); // Snk Port FC 4
    pixymvb_AddPort( 0x7B0, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData7B0 ); // Snk Port FC 4
    pixymvb_AddPort( 0x7B1, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData7B1 ); // Snk Port FC 4
    pixymvb_AddPort( 0x7C0, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData7C0 ); // Snk Port FC 4
    pixymvb_AddPort( 0x7C1, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData7C1 ); // Snk Port FC 4
    pixymvb_AddPort( 0x7D0, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData7D0 ); // Snk Port FC 4
    pixymvb_AddPort( 0x7D1, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData7D1 ); // Snk Port FC 4
    pixymvb_AddPort( 0x7E0, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData7E0 ); // Snk Port FC 4
    pixymvb_AddPort( 0x7E1, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData7E1 ); // Snk Port FC 4
    pixymvb_AddPort( 0x7F0, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData7F0 ); // Snk Port FC 4
    pixymvb_AddPort( 0x7F1, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData7F1 ); // Snk Port FC 4
    pixymvb_AddPort( 0x800, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData800 ); // Snk Port FC 4
    pixymvb_AddPort( 0x810, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData810 ); // Snk Port FC 4
    pixymvb_AddPort( 0x820, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData820 ); // Snk Port FC 4
    pixymvb_AddPort( 0x830, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData830 ); // Snk Port FC 4
    pixymvb_AddPort( 0x840, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData840 ); // Snk Port FC 4
    pixymvb_AddPort( 0x850, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData850 ); // Snk Port FC 4
    pixymvb_AddPort( 0x860, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData860 ); // Snk Port FC 4
    pixymvb_AddPort( 0x870, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData870 ); // Snk Port FC 4
    pixymvb_AddPort( 0x880, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData880 ); // Snk Port FC 4
    pixymvb_AddPort( 0x900, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData900 ); // Snk Port FC 4
    pixymvb_AddPort( 0x910, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData910 ); // Snk Port FC 4
    pixymvb_AddPort( 0x911, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData911 ); // Snk Port FC 4
    pixymvb_AddPort( 0x920, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData920 ); // Snk Port FC 4
    pixymvb_AddPort( 0x921, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData921 ); // Snk Port FC 4
    pixymvb_AddPort( 0xA00, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataA00 ); // Snk Port FC 4
    pixymvb_AddPort( 0xA10, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataA10 ); // Snk Port FC 4
    pixymvb_AddPort( 0xA11, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataA11 ); // Snk Port FC 4
    pixymvb_AddPort( 0xB00, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataB00 ); // Snk Port FC 4
    pixymvb_AddPort( 0xB10, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataB10 ); // Snk Port FC 4
    pixymvb_AddPort( 0xB20, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataB20 ); // Snk Port FC 4
    pixymvb_AddPort( 0xF00, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataF00 ); // Snk Port FC 4
    pixymvb_AddPort( 0xF01, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataF01 ); // Snk Port FC 4
    pixymvb_AddPort( 0xF02, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataF02 ); // Snk Port FC 4
    pixymvb_AddPort( 0xF03, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataF03 ); // Snk Port FC 4
    pixymvb_AddPort( 0xF10, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataF00 ); // Snk Port FC 4
    pixymvb_AddPort( 0xF11, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataF01 ); // Snk Port FC 4
    pixymvb_AddPort( 0xF12, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataF02 ); // Snk Port FC 4
    pixymvb_AddPort( 0xF13, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataF03 ); // Snk Port FC 4

    pixymvb_AddPort( 0x108, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData108 ); // Snk Port FC 4
    pixymvb_AddPort( 0x118, PIXYMVB_SNKPORT,  8, (PIXYMVB_Data *) snkPortData118 ); // Snk Port FC 3
    pixymvb_AddPort( 0x128, PIXYMVB_SNKPORT,  8, (PIXYMVB_Data *) snkPortData128 ); // Snk Port FC 3
    pixymvb_AddPort( 0x138, PIXYMVB_SNKPORT,  8, (PIXYMVB_Data *) snkPortData138 ); // Snk Port FC 3
    pixymvb_AddPort( 0x148, PIXYMVB_SNKPORT,  8, (PIXYMVB_Data *) snkPortData148 ); // Snk Port FC 3
    pixymvb_AddPort( 0x158, PIXYMVB_SNKPORT,  8, (PIXYMVB_Data *) snkPortData158 ); // Snk Port FC 3
    pixymvb_AddPort( 0x168, PIXYMVB_SNKPORT,  8, (PIXYMVB_Data *) snkPortData168 ); // Snk Port FC 3
    pixymvb_AddPort( 0x178, PIXYMVB_SNKPORT,  8, (PIXYMVB_Data *) snkPortData178 ); // Snk Port FC 3
    pixymvb_AddPort( 0x188, PIXYMVB_SNKPORT,  8, (PIXYMVB_Data *) snkPortData188 ); // Snk Port FC 3
    pixymvb_AddPort( 0x220, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData220 ); // Snk Port FC 4
    pixymvb_AddPort( 0x221, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData221 ); // Snk Port FC 4
    pixymvb_AddPort( 0x222, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData222 ); // Snk Port FC 4
    pixymvb_AddPort( 0x223, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData223 ); // Snk Port FC 4
    pixymvb_AddPort( 0x408, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData408 ); // Snk Port FC 4
    pixymvb_AddPort( 0x418, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData418 ); // Snk Port FC 4
    pixymvb_AddPort( 0x508, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData508 ); // Snk Port FC 4
    pixymvb_AddPort( 0x518, PIXYMVB_SNKPORT,  8, (PIXYMVB_Data *) snkPortData518 ); // Snk Port FC 3
    pixymvb_AddPort( 0x528, PIXYMVB_SNKPORT,  8, (PIXYMVB_Data *) snkPortData528 ); // Snk Port FC 3
    pixymvb_AddPort( 0x538, PIXYMVB_SNKPORT,  8, (PIXYMVB_Data *) snkPortData538 ); // Snk Port FC 3
    pixymvb_AddPort( 0x548, PIXYMVB_SNKPORT,  8, (PIXYMVB_Data *) snkPortData548 ); // Snk Port FC 3
    pixymvb_AddPort( 0x558, PIXYMVB_SNKPORT,  8, (PIXYMVB_Data *) snkPortData558 ); // Snk Port FC 3
    pixymvb_AddPort( 0x568, PIXYMVB_SNKPORT,  8, (PIXYMVB_Data *) snkPortData568 ); // Snk Port FC 3
    pixymvb_AddPort( 0x608, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData608 ); // Snk Port FC 4
    pixymvb_AddPort( 0x618, PIXYMVB_SNKPORT,  8, (PIXYMVB_Data *) snkPortData618 ); // Snk Port FC 3
    pixymvb_AddPort( 0x628, PIXYMVB_SNKPORT,  8, (PIXYMVB_Data *) snkPortData628 ); // Snk Port FC 3
    pixymvb_AddPort( 0x708, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData708 ); // Snk Port FC 4
    pixymvb_AddPort( 0x718, PIXYMVB_SNKPORT,  8, (PIXYMVB_Data *) snkPortData718 ); // Snk Port FC 3
    pixymvb_AddPort( 0x808, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData808 ); // Snk Port FC 4
    pixymvb_AddPort( 0x818, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData818 ); // Snk Port FC 4
    pixymvb_AddPort( 0x908, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData908 ); // Snk Port FC 4
    pixymvb_AddPort( 0x918, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData918 ); // Snk Port FC 4
    pixymvb_AddPort( 0x919, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortData919 ); // Snk Port FC 4
    pixymvb_AddPort( 0xA08, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataA08 ); // Snk Port FC 4
    pixymvb_AddPort( 0xA18, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataA18 ); // Snk Port FC 4
    pixymvb_AddPort( 0xB08, PIXYMVB_SNKPORT, 16, (PIXYMVB_Data *) snkPortDataB08 ); // Snk Port FC 4
    pixymvb_AddPort( 0xB18, PIXYMVB_SNKPORT,  8, (PIXYMVB_Data *) snkPortDataB18 ); // Snk Port FC 3

    // added by Deng Ran on the 03rd of August 2017.
    pixymvb_AddPort(0xF20, PIXYMVB_SNKPORT, 16, NULL);
    pixymvb_AddPort(0xF40, PIXYMVB_SNKPORT, 16, NULL);
    pixymvb_AddPort(0xF70, PIXYMVB_SNKPORT, 16, NULL);

    // added by Deng Ran on the 03rd of August 2017.
    pixymvb_AddPort(0xC10, PIXYMVB_SNKPORT, 16, NULL);
    pixymvb_AddPort(0xC11, PIXYMVB_SNKPORT, 16, NULL);
    pixymvb_AddPort(0xC12, PIXYMVB_SNKPORT, 16, NULL);
    pixymvb_AddPort(0xC13, PIXYMVB_SNKPORT, 16, NULL);
    pixymvb_AddPort(0xC14, PIXYMVB_SNKPORT, 16, NULL);

    pixymvb_AddPort(0xC20, PIXYMVB_SNKPORT, 16, NULL);
    pixymvb_AddPort(0xC21, PIXYMVB_SNKPORT, 16, NULL);
    pixymvb_AddPort(0xC22, PIXYMVB_SNKPORT, 16, NULL);
    pixymvb_AddPort(0xC23, PIXYMVB_SNKPORT, 16, NULL);
    pixymvb_AddPort(0xC24, PIXYMVB_SNKPORT, 16, NULL);

    // added by Deng Ran on the 31st of August 2017
    pixymvb_AddPort(0xC08, PIXYMVB_SNKPORT, 8, NULL);
    pixymvb_AddPort(0xC09, PIXYMVB_SNKPORT, 16, NULL);
    pixymvb_AddPort(0xC0A, PIXYMVB_SNKPORT, 16, NULL);

    // Change MVB State To Operation State
    RetVal = pixymvb_ChangeState(PIXYMVB_OPERATION_STATE); // OP Mode
#ifdef DEBUG
    writeDebugLog( "pixymvb_ChangeState", RetVal );
#endif
    if ( PIXYMVB_OK != RetVal )
    {
        return(false);
    }

    return true;
}
void MvbThread::render()
{
    if( !isRunning() ) {
        start();
    }else{
        restart = true;
        condition.wakeOne();
    } //end
}

// added by Deng Ran on the 31th of July 2017.
void MvbThread::copyPort(int port, PIXYMVB_Data data, unsigned short cycle)
{
    mutex.lock();

    if (mvbPortData.contains(port) == false)
    {
        mvbPortData.insert(port, new crrc_port_data(cycle));
    }

    mvbPortData[port]->cycle = cycle;

    for (int i = 0; i < 16; i ++)
    {
        mvbPortData[port]->data[i] = data[i];
    }

    mutex.unlock();
}

// changed by Deng Ran on the 31th of July 2017.
void MvbThread::run()
{
    UNSIGNED16 snkTmeSupv = 0;
    UNSIGNED16 RetVal = 0;
    UNSIGNED16 i = 0;

    if( init() )
    {
        forever
        {

            //  用于测试MVB加载异常
            //            if(test_tempdata[102]>254)
            //            {
            //                test_tempdata[102]=0;
            //            }
            //            else
            //            {
            //                test_tempdata[102]++;
            //            }

            // get processed src data
            if(TC1_HMI==1)
            {   // HMI tc1 set src data
                for(i=0;i<16;i++)
                {
                    srcPortData200[i] = UNSIGNED16(sendData[i*2]<<8)    + UNSIGNED16(sendData[i*2+1]) ;

                }
                for(i=0;i<16;i++)
                {
                    srcPortData201[i] = UNSIGNED16(sendData[32+i*2]<< 8) + UNSIGNED16(sendData[32+i*2+1]) ;
                }
                for(i=0;i<16;i++)
                {
                    srcPortData202[i] = UNSIGNED16(sendData[64+i*2]<< 8) + UNSIGNED16(sendData[64+i*2+1]) ;
                }
                for(i=0;i<16;i++)
                {
                    srcPortData203[i] = UNSIGNED16(sendData[96+i*2]<< 8) + UNSIGNED16(sendData[96+i*2+1]) ;
                }

                // send src data to bus, addded by Deng Ran on the 31st of August 2017.
                RetVal = pixymvb_PutPort(0x200, (PIXYMVB_Data *) &(srcPortData200[0]));
                this->copyPort(0x200, srcPortData200, 65535 - 256);

                test_tempdata[100]=RetVal/256;
                test_tempdata[101]=RetVal%256;
    #ifdef DEBUG
                writeDebugLog( "pixymvb_PutPort", RetVal );
    #endif

                pixymvb_PutPort(0x201, (PIXYMVB_Data *) &(srcPortData201[0]));
                this->copyPort(0x201, srcPortData201, 65535 - 256);

                pixymvb_PutPort(0x202, (PIXYMVB_Data *) &(srcPortData202[0]));
                this->copyPort(0x202, srcPortData202, 65535 - 256);

                pixymvb_PutPort(0x203, (PIXYMVB_Data *) &(srcPortData203[0]));
                this->copyPort(0x203, srcPortData203, 65535 - 256);
            }
            else
            {   // HMI tc2 set src data
                if(TC2_HMI==1)
                {
                    for(i=0;i<16;i++)
                    {
                        srcPortData280[i] = UNSIGNED16(sendData[i*2]<< 8) + UNSIGNED16(sendData[i*2+1]) ;
                    }
                    for(i=0;i<16;i++)
                    {
                        srcPortData281[i] = UNSIGNED16(sendData[32+i*2]<< 8) + UNSIGNED16(sendData[32+i*2+1]) ;
                    }
                    for(i=0;i<16;i++)
                    {
                        srcPortData282[i] = UNSIGNED16(sendData[64+i*2]<< 8) + UNSIGNED16(sendData[64+i*2+1]) ;
                    }
                    for(i=0;i<16;i++)
                    {
                        srcPortData283[i] = UNSIGNED16(sendData[96+i*2]<< 8) + UNSIGNED16(sendData[96+i*2+1]) ;
                    }

                    // send src data to bus, added by Deng Ran on the 31st of August 2017.
                    RetVal = pixymvb_PutPort(0x280, (PIXYMVB_Data *) &(srcPortData280[0]));
                    this->copyPort(0x280, srcPortData280, 65535 - 256);

                    test_tempdata[100]=RetVal/256;
                    test_tempdata[101]=RetVal%256;
        #ifdef DEBUG
                    writeDebugLog( "pixymvb_PutPort", RetVal );
        #endif
                    pixymvb_PutPort(0x281, (PIXYMVB_Data *) &(srcPortData281[0]));
                    this->copyPort(0x281, srcPortData281, 65535 - 256);

                    pixymvb_PutPort(0x282, (PIXYMVB_Data *) &(srcPortData282[0]));
                    this->copyPort(0x282, srcPortData282, 65535 - 256);

                    pixymvb_PutPort(0x283, (PIXYMVB_Data *) &(srcPortData283[0]));
                    this->copyPort(0x283, srcPortData283, 65535 - 256);
                }
                else
                {
                    test_tempdata[100]=255;
                    test_tempdata[101]=255;
                }

            }



            // get snk data from bus
            RetVal = pixymvb_GetPort( 0x100, &snkPortData100, &snkTmeSupv);
            this->copyPort(0x100, snkPortData100, snkTmeSupv);

    #ifdef DEBUG
            writeDebugLog( "pixymvb_GetPort", RetVal );
    #endif
            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[i] = highbyteLowbyteExchange(snkPortData100[i]);
            }

            pixymvb_GetPort( 0x110, &snkPortData110, &refresh_time_110); // Snk Port FC 4
            this->copyPort(0x110, snkPortData110, refresh_time_110);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[16+i] = highbyteLowbyteExchange(snkPortData110[i]);
            }

            pixymvb_GetPort( 0x114, &snkPortData114, &refresh_time_114); // Snk Port FC 4
            this->copyPort(0x114, snkPortData114, refresh_time_114);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[32+i] = highbyteLowbyteExchange(snkPortData114[i]);
            }

            pixymvb_GetPort( 0x120, &snkPortData120, &refresh_time_120); // Snk Port FC 4
            this->copyPort(0x120, snkPortData120, refresh_time_120);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[48+i] = highbyteLowbyteExchange(snkPortData120[i]);
            }

            pixymvb_GetPort( 0x130, &snkPortData130, &refresh_time_130); // Snk Port FC 4
            this->copyPort(0x130, snkPortData130, refresh_time_130);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[64+i] = highbyteLowbyteExchange(snkPortData130[i]);
            }

            pixymvb_GetPort( 0x140, &snkPortData140, &refresh_time_140); // Snk Port FC 4
            this->copyPort(0x140, snkPortData140, refresh_time_140);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[80+i] = highbyteLowbyteExchange(snkPortData140[i]);
            }

            pixymvb_GetPort( 0x150, &snkPortData150, &refresh_time_150); // Snk Port FC 4
            this->copyPort(0x150, snkPortData150, refresh_time_150);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[96+i] = highbyteLowbyteExchange(snkPortData150[i]);
            }

            pixymvb_GetPort( 0x160, &snkPortData160, &refresh_time_160); // Snk Port FC 4
            this->copyPort(0x160, snkPortData160, refresh_time_160);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[112+i] = highbyteLowbyteExchange(snkPortData160[i]);
            }

            pixymvb_GetPort( 0x170, &snkPortData170, &refresh_time_170); // Snk Port FC 4
            this->copyPort(0x170, snkPortData170, refresh_time_170);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[128+i] = highbyteLowbyteExchange(snkPortData170[i]);
            }

            pixymvb_GetPort( 0x180, &snkPortData180, &refresh_time_180); // Snk Port FC 4
            this->copyPort(0x180, snkPortData180, refresh_time_180);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[144+i] = highbyteLowbyteExchange(snkPortData180[i]);
            }

            pixymvb_GetPort( 0x184, &snkPortData184, &refresh_time_184); // Snk Port FC 4
            this->copyPort(0x184, snkPortData184, refresh_time_184);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[160+i] = highbyteLowbyteExchange(snkPortData184[i]);
            }

            if(TC1_HMI==1)
            {   // HMi tc1 set rev data
                for (i=0;i<16;i++)
                {
                    g_dataBuffer_MVB[176+i] = highbyteLowbyteExchange(srcPortData200[i]);
                    g_dataBuffer_MVB[192+i] = highbyteLowbyteExchange(srcPortData201[i]);
                    g_dataBuffer_MVB[208+i] = highbyteLowbyteExchange(srcPortData202[i]);
                    g_dataBuffer_MVB[224+i] = highbyteLowbyteExchange(srcPortData203[i]);
                }

                pixymvb_GetPort( 0x280, &snkPortData280, &refresh_time_280); // Snk Port FC 4
                this->copyPort(0x280, snkPortData280, refresh_time_280);

                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    g_dataBuffer_MVB[240+i] = highbyteLowbyteExchange(snkPortData280[i]);
                }

                pixymvb_GetPort( 0x281, &snkPortData281, &refresh_time_281); // Snk Port FC 4
                this->copyPort(0x281, snkPortData281, refresh_time_281);

                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    g_dataBuffer_MVB[256+i] = highbyteLowbyteExchange(snkPortData281[i]);
                }

                pixymvb_GetPort( 0x282, &snkPortData282, &refresh_time_282); // Snk Port FC 4
                this->copyPort(0x282, snkPortData282, refresh_time_282);

                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    g_dataBuffer_MVB[272+i] = highbyteLowbyteExchange(snkPortData282[i]);
                }

                pixymvb_GetPort( 0x283, &snkPortData283, &refresh_time_283); // Snk Port FC 4
                this->copyPort(0x283, snkPortData283, refresh_time_283);

                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    g_dataBuffer_MVB[288+i] = highbyteLowbyteExchange(snkPortData283[i]);
                }
            }
            else
            {   // HMi tc2 set rev data
                pixymvb_GetPort( 0x200, &snkPortData200, &refresh_time_200); // Snk Port FC 4
                this->copyPort(0x200, snkPortData200, refresh_time_200);

                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    g_dataBuffer_MVB[176+i] = highbyteLowbyteExchange(snkPortData200[i]);
                }

                pixymvb_GetPort( 0x201, &snkPortData201, &refresh_time_201); // Snk Port FC 4
                this->copyPort(0x201, snkPortData201, refresh_time_201);

                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    g_dataBuffer_MVB[192+i] = highbyteLowbyteExchange(snkPortData201[i]);
                }

                pixymvb_GetPort( 0x202, &snkPortData202, &refresh_time_202); // Snk Port FC 4
                this->copyPort(0x202, snkPortData202, refresh_time_202);

                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    g_dataBuffer_MVB[208+i] = highbyteLowbyteExchange(snkPortData202[i]);
                }

                pixymvb_GetPort( 0x203, &snkPortData203, &refresh_time_203); // Snk Port FC 4
                this->copyPort(0x203, snkPortData203, refresh_time_203);

                // set to be processed snk data
                for (i=0;i<16;i++)
                {
                    g_dataBuffer_MVB[224+i] = highbyteLowbyteExchange(snkPortData203[i]);
                }

                for (i=0;i<16;i++)
                {
                    g_dataBuffer_MVB[240+i] = highbyteLowbyteExchange(srcPortData280[i]);
                    g_dataBuffer_MVB[256+i] = highbyteLowbyteExchange(srcPortData281[i]);
                    g_dataBuffer_MVB[272+i] = highbyteLowbyteExchange(srcPortData282[i]);
                    g_dataBuffer_MVB[288+i] = highbyteLowbyteExchange(srcPortData283[i]);
                }
            }

            pixymvb_GetPort( 0x400, &snkPortData400, &refresh_time_400); // Snk Port FC 4
            this->copyPort(0x400, snkPortData400, refresh_time_400);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[304+i] = highbyteLowbyteExchange(snkPortData400[i]);
            }

            pixymvb_GetPort( 0x410, &snkPortData410, &refresh_time_410); // Snk Port FC 4
            this->copyPort(0x410, snkPortData410, refresh_time_410);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[320+i] = highbyteLowbyteExchange(snkPortData410[i]);
            }

            pixymvb_GetPort( 0x411, &snkPortData411, &refresh_time_411); // Snk Port FC 4
            this->copyPort(0x411, snkPortData411, refresh_time_411);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[336+i] = highbyteLowbyteExchange(snkPortData411[i]);
            }

            pixymvb_GetPort( 0x412, &snkPortData412, &refresh_time_412); // Snk Port FC 4
            this->copyPort(0x412, snkPortData412, refresh_time_412);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[352+i] = highbyteLowbyteExchange(snkPortData412[i]);
            }

            pixymvb_GetPort( 0x413, &snkPortData413, &refresh_time_413); // Snk Port FC 4
            this->copyPort(0x413, snkPortData413, refresh_time_413);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[368+i] = highbyteLowbyteExchange(snkPortData413[i]);
            }

            pixymvb_GetPort( 0x414, &snkPortData414, &refresh_time_414); // Snk Port FC 4
            this->copyPort(0x414, snkPortData414, refresh_time_414);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[384+i] = highbyteLowbyteExchange(snkPortData414[i]);
            }

            pixymvb_GetPort( 0x420, &snkPortData420, &refresh_time_420); // Snk Port FC 4
            this->copyPort(0x420, snkPortData420, refresh_time_420);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[400+i] = highbyteLowbyteExchange(snkPortData420[i]);
            }

            pixymvb_GetPort( 0x421, &snkPortData421, &refresh_time_421); // Snk Port FC 4
            this->copyPort(0x421, snkPortData421, refresh_time_421);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[416+i] = highbyteLowbyteExchange(snkPortData421[i]);
            }

            pixymvb_GetPort( 0x422, &snkPortData422, &refresh_time_422); // Snk Port FC 4
            this->copyPort(0x422, snkPortData422, refresh_time_422);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[432+i] = highbyteLowbyteExchange(snkPortData422[i]);
            }

            pixymvb_GetPort( 0x423, &snkPortData423, &refresh_time_423); // Snk Port FC 4
            this->copyPort(0x423, snkPortData423, refresh_time_423);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[448+i] = highbyteLowbyteExchange(snkPortData423[i]);
            }

            pixymvb_GetPort( 0x424, &snkPortData424, &refresh_time_424); // Snk Port FC 4
            this->copyPort(0x424, snkPortData424, refresh_time_424);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[464+i] = highbyteLowbyteExchange(snkPortData424[i]);
            }

            pixymvb_GetPort( 0x430, &snkPortData430, &refresh_time_430); // Snk Port FC 4
            this->copyPort(0x430, snkPortData430, refresh_time_430);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[480+i] = highbyteLowbyteExchange(snkPortData430[i]);
            }

            pixymvb_GetPort( 0x431, &snkPortData431, &refresh_time_431); // Snk Port FC 4
            this->copyPort(0x431, snkPortData431, refresh_time_431);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[496+i] = highbyteLowbyteExchange(snkPortData431[i]);
            }

            pixymvb_GetPort( 0x432, &snkPortData432, &refresh_time_432); // Snk Port FC 4
            this->copyPort(0x432, snkPortData432, refresh_time_432);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[512+i] = highbyteLowbyteExchange(snkPortData432[i]);
            }

            pixymvb_GetPort( 0x433, &snkPortData433, &refresh_time_433); // Snk Port FC 4
            this->copyPort(0x433, snkPortData433, refresh_time_433);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[528+i] = highbyteLowbyteExchange(snkPortData433[i]);
            }

            pixymvb_GetPort( 0x434, &snkPortData434, &refresh_time_434); // Snk Port FC 4
            this->copyPort(0x434, snkPortData434, refresh_time_434);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[544+i] = highbyteLowbyteExchange(snkPortData434[i]);
            }

            pixymvb_GetPort( 0x440, &snkPortData440, &refresh_time_440); // Snk Port FC 4
            this->copyPort(0x440, snkPortData440, refresh_time_440);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[560+i] = highbyteLowbyteExchange(snkPortData440[i]);
            }

            pixymvb_GetPort( 0x441, &snkPortData441, &refresh_time_441); // Snk Port FC 4
            this->copyPort(0x441, snkPortData441, refresh_time_441);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[576+i] = highbyteLowbyteExchange(snkPortData441[i]);
            }

            pixymvb_GetPort( 0x442, &snkPortData442, &refresh_time_442); // Snk Port FC 4
            this->copyPort(0x442, snkPortData442, refresh_time_442);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[592+i] = highbyteLowbyteExchange(snkPortData442[i]);
            }

            pixymvb_GetPort( 0x443, &snkPortData443, &refresh_time_443); // Snk Port FC 4
            this->copyPort(0x443, snkPortData443, refresh_time_443);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[608+i] = highbyteLowbyteExchange(snkPortData443[i]);
            }

            pixymvb_GetPort( 0x444, &snkPortData444, &refresh_time_444); // Snk Port FC 4
            this->copyPort(0x444, snkPortData444, refresh_time_444);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[624+i] = highbyteLowbyteExchange(snkPortData444[i]);
            }

            pixymvb_GetPort( 0x500, &snkPortData500, &refresh_time_500); // Snk Port FC 4
            this->copyPort(0x500, snkPortData500, refresh_time_500);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[640+i] = highbyteLowbyteExchange(snkPortData500[i]);
            }

            pixymvb_GetPort( 0x510, &snkPortData510, &refresh_time_510); // Snk Port FC 4
            this->copyPort(0x510, snkPortData510, refresh_time_510);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[656+i] = highbyteLowbyteExchange(snkPortData510[i]);
            }

            pixymvb_GetPort( 0x511, &snkPortData511, &refresh_time_511); // Snk Port FC 4
            this->copyPort(0x511, snkPortData511, refresh_time_511);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[672+i] = highbyteLowbyteExchange(snkPortData511[i]);
            }

            pixymvb_GetPort( 0x520, &snkPortData520, &refresh_time_520); // Snk Port FC 4
            this->copyPort(0x520, snkPortData520, refresh_time_520);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[688+i] = highbyteLowbyteExchange(snkPortData520[i]);
            }

            pixymvb_GetPort( 0x521, &snkPortData521, &refresh_time_521); // Snk Port FC 4
            this->copyPort(0x521, snkPortData521, refresh_time_521);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[704+i] = highbyteLowbyteExchange(snkPortData521[i]);
            }

            pixymvb_GetPort( 0x530, &snkPortData530, &refresh_time_530); // Snk Port FC 4
            this->copyPort(0x530, snkPortData530, refresh_time_530);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[720+i] = highbyteLowbyteExchange(snkPortData530[i]);
            }

            pixymvb_GetPort( 0x531, &snkPortData531, &refresh_time_531); // Snk Port FC 4
            this->copyPort(0x531, snkPortData531, refresh_time_531);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[736+i] = highbyteLowbyteExchange(snkPortData531[i]);
            }

            pixymvb_GetPort( 0x540, &snkPortData540, &refresh_time_540); // Snk Port FC 4
            this->copyPort(0x540, snkPortData540, refresh_time_540);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[752+i] = highbyteLowbyteExchange(snkPortData540[i]);
            }

            pixymvb_GetPort( 0x541, &snkPortData541, &refresh_time_541); // Snk Port FC 4
            this->copyPort(0x541, snkPortData541, refresh_time_541);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[768+i] = highbyteLowbyteExchange(snkPortData541[i]);
            }

            pixymvb_GetPort(0x550, &snkPortData550, &refresh_time_550); // Snk Port FC 4
            this->copyPort(0x550, snkPortData550, refresh_time_550);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[784+i] = highbyteLowbyteExchange(snkPortData550[i]);
            }

            pixymvb_GetPort( 0x551, &snkPortData551, &refresh_time_551); // Snk Port FC 4
            this->copyPort(0x551, snkPortData551, refresh_time_551);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[800+i] = highbyteLowbyteExchange(snkPortData551[i]);
            }

            pixymvb_GetPort( 0x560, &snkPortData560, &refresh_time_560); // Snk Port FC 4
            this->copyPort(0x560, snkPortData560, refresh_time_560);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[816+i] = highbyteLowbyteExchange(snkPortData560[i]);
            }

            pixymvb_GetPort( 0x561, &snkPortData561, &refresh_time_561); // Snk Port FC 4
            this->copyPort(0x561, snkPortData561, refresh_time_561);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[832+i] = highbyteLowbyteExchange(snkPortData561[i]);
            }

            pixymvb_GetPort( 0x600, &snkPortData600, &refresh_time_600); // Snk Port FC 4
            this->copyPort(0x600, snkPortData600, refresh_time_600);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[848+i] = highbyteLowbyteExchange(snkPortData600[i]);
            }

            pixymvb_GetPort( 0x610, &snkPortData610, &refresh_time_610); // Snk Port FC 3
            this->copyPort(0x610, snkPortData610, refresh_time_610);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[864+i] = highbyteLowbyteExchange(snkPortData610[i]);
            }

            pixymvb_GetPort( 0x611, &snkPortData611, &refresh_time_611); // Snk Port FC 4
            this->copyPort(0x611, snkPortData611, refresh_time_611);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[872+i] = highbyteLowbyteExchange(snkPortData611[i]);
            }

            pixymvb_GetPort( 0x620, &snkPortData620, &refresh_time_620); // Snk Port FC 3
            this->copyPort(0x620, snkPortData620, refresh_time_620);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[888+i] = highbyteLowbyteExchange(snkPortData620[i]);
            }

            pixymvb_GetPort( 0x621, &snkPortData621, &refresh_time_621); // Snk Port FC 4
            this->copyPort(0x621, snkPortData621, refresh_time_621);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[896+i] = highbyteLowbyteExchange(snkPortData621[i]);
            }

            pixymvb_GetPort( 0x700, &snkPortData700, &refresh_time_700); // Snk Port FC 4
            this->copyPort(0x700, snkPortData700, refresh_time_700);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[912+i] = highbyteLowbyteExchange(snkPortData700[i]);
            }

            pixymvb_GetPort(0x701, &snkPortData701, &refresh_time_701); // Snk Port FC 4
            this->copyPort(0x701, snkPortData701, refresh_time_701);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[928+i] = highbyteLowbyteExchange(snkPortData701[i]);
            }

            pixymvb_GetPort( 0x710, &snkPortData710, &refresh_time_710); // Snk Port FC 4
            this->copyPort(0x710, snkPortData710, refresh_time_710);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[944+i] = highbyteLowbyteExchange(snkPortData710[i]);
            }

            pixymvb_GetPort( 0x711, &snkPortData711, &refresh_time_711); // Snk Port FC 4
            this->copyPort(0x711, snkPortData711, refresh_time_711);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[960+i] = highbyteLowbyteExchange(snkPortData711[i]);
            }

            pixymvb_GetPort( 0x720, &snkPortData720, &refresh_time_720); // Snk Port FC 4
            this->copyPort(0x720, snkPortData720, refresh_time_720);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[976+i] = highbyteLowbyteExchange(snkPortData720[i]);
            }

            pixymvb_GetPort(0x721, &snkPortData721, &refresh_time_721); // Snk Port FC 4
            this->copyPort(0x721, snkPortData721, refresh_time_721);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[992+i] = highbyteLowbyteExchange(snkPortData721[i]);
            }

            pixymvb_GetPort( 0x730, &snkPortData730, &refresh_time_730); // Snk Port FC 4
            this->copyPort(0x730, snkPortData730, refresh_time_730);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1008+i] = highbyteLowbyteExchange(snkPortData730[i]);
            }

            pixymvb_GetPort( 0x731, &snkPortData731, &refresh_time_731); // Snk Port FC 4
            this->copyPort(0x731, snkPortData731, refresh_time_731);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1024+i] = highbyteLowbyteExchange(snkPortData731[i]);
            }

            pixymvb_GetPort( 0x740, &snkPortData740, &refresh_time_740); // Snk Port FC 4
            this->copyPort(0x740, snkPortData740, refresh_time_740);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1040+i] = highbyteLowbyteExchange(snkPortData740[i]);
            }

            pixymvb_GetPort( 0x741, &snkPortData741, &refresh_time_741); // Snk Port FC 4
            this->copyPort(0x741, snkPortData741, refresh_time_741);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1056+i] = highbyteLowbyteExchange(snkPortData741[i]);
            }

            pixymvb_GetPort( 0x750, &snkPortData750, &refresh_time_750); // Snk Port FC 4
            this->copyPort(0x750, snkPortData750, refresh_time_750);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1072+i] = highbyteLowbyteExchange(snkPortData750[i]);
            }

            pixymvb_GetPort( 0x751, &snkPortData751, &refresh_time_751); // Snk Port FC 4
            this->copyPort(0x751, snkPortData751, refresh_time_751);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1088+i] = highbyteLowbyteExchange(snkPortData751[i]);
            }

            pixymvb_GetPort( 0x760, &snkPortData760, &refresh_time_760); // Snk Port FC 4
            this->copyPort(0x760, snkPortData760, refresh_time_760);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1104+i] = highbyteLowbyteExchange(snkPortData760[i]);
            }

            pixymvb_GetPort( 0x761, &snkPortData761, &refresh_time_761); // Snk Port FC 4
            this->copyPort(0x761, snkPortData761, refresh_time_761);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1120+i] = highbyteLowbyteExchange(snkPortData761[i]);
            }

            pixymvb_GetPort( 0x770, &snkPortData770, &refresh_time_770); // Snk Port FC 4
            this->copyPort(0x770, snkPortData770, refresh_time_770);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1136+i] = highbyteLowbyteExchange(snkPortData770[i]);
            }

            pixymvb_GetPort( 0x771, &snkPortData771, &refresh_time_771); // Snk Port FC 4
            this->copyPort(0x771, snkPortData771, refresh_time_771);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1152+i] = highbyteLowbyteExchange(snkPortData771[i]);
            }

            pixymvb_GetPort( 0x780, &snkPortData780, &refresh_time_780); // Snk Port FC 4
            this->copyPort(0x780, snkPortData780, refresh_time_780);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1168+i] = highbyteLowbyteExchange(snkPortData780[i]);
            }

            pixymvb_GetPort( 0x781, &snkPortData781, &refresh_time_781); // Snk Port FC 4
            this->copyPort(0x781, snkPortData781, refresh_time_781);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1184+i] = highbyteLowbyteExchange(snkPortData781[i]);
            }

            pixymvb_GetPort( 0x790, &snkPortData790, &refresh_time_790); // Snk Port FC 4
            this->copyPort(0x790, snkPortData790, refresh_time_790);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1200+i] = highbyteLowbyteExchange(snkPortData790[i]);
            }

            pixymvb_GetPort( 0x791, &snkPortData791, &refresh_time_791); // Snk Port FC 4
            this->copyPort(0x791, snkPortData791, refresh_time_791);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1216+i] = highbyteLowbyteExchange(snkPortData791[i]);
            }

            pixymvb_GetPort( 0x7A0, &snkPortData7A0, &refresh_time_7A0); // Snk Port FC 4
            this->copyPort(0x7A0, snkPortData7A0, refresh_time_7A0);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1232+i] = highbyteLowbyteExchange(snkPortData7A0[i]);
            }

            pixymvb_GetPort( 0x7A1, &snkPortData7A1, &refresh_time_7A1); // Snk Port FC 4
            this->copyPort(0x7A1, snkPortData7A1, refresh_time_7A1);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1248+i] = highbyteLowbyteExchange(snkPortData7A1[i]);
            }

            pixymvb_GetPort( 0x7B0, &snkPortData7B0, &refresh_time_7B0); // Snk Port FC 4
            this->copyPort(0x7B0, snkPortData7B0, refresh_time_7B0);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1264+i] = highbyteLowbyteExchange(snkPortData7B0[i]);
            }

            pixymvb_GetPort( 0x7B1, &snkPortData7B1, &refresh_time_7B1); // Snk Port FC 4
            this->copyPort(0x7B1, snkPortData7B1, refresh_time_7B1);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1280+i] = highbyteLowbyteExchange(snkPortData7B1[i]);
            }

            pixymvb_GetPort( 0x7C0, &snkPortData7C0, &refresh_time_7C0); // Snk Port FC 4
            this->copyPort(0x7C0, snkPortData7C0, refresh_time_7C0);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1296+i] = highbyteLowbyteExchange(snkPortData7C0[i]);
            }

            pixymvb_GetPort( 0x7C1, &snkPortData7C1, &refresh_time_7C1); // Snk Port FC 4
            this->copyPort(0x7C1, snkPortData7C1, refresh_time_7C1);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1312+i] = highbyteLowbyteExchange(snkPortData7C1[i]);
            }

            pixymvb_GetPort( 0x7D0, &snkPortData7D0, &refresh_time_7D0); // Snk Port FC 4
            this->copyPort(0x7D0, snkPortData7D0, refresh_time_7D0);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1328+i] = highbyteLowbyteExchange(snkPortData7D0[i]);
            }

            pixymvb_GetPort( 0x7D1, &snkPortData7D1, &refresh_time_7D1); // Snk Port FC 4
            this->copyPort(0x7D1, snkPortData7D1, refresh_time_7D1);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1344+i] = highbyteLowbyteExchange(snkPortData7D1[i]);
            }

            pixymvb_GetPort( 0x7E0, &snkPortData7E0, &refresh_time_7E0); // Snk Port FC 4
            this->copyPort(0x7E0, snkPortData7E0, refresh_time_7E0);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1360+i] = highbyteLowbyteExchange(snkPortData7E0[i]);
            }

            pixymvb_GetPort( 0x7E1, &snkPortData7E1, &refresh_time_7E1); // Snk Port FC 4
            this->copyPort(0x7E1, snkPortData7E1, refresh_time_7E1);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1376+i] = highbyteLowbyteExchange(snkPortData7E1[i]);
            }

            pixymvb_GetPort( 0x7F0, &snkPortData7F0, &refresh_time_7F0); // Snk Port FC 4
            this->copyPort(0x7F0, snkPortData7F0, refresh_time_7F0);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1392+i] = highbyteLowbyteExchange(snkPortData7F0[i]);
            }

            pixymvb_GetPort(0x7F1, &snkPortData7F1, &refresh_time_7F1); // Snk Port FC 4
            this->copyPort(0x7F1, snkPortData7F1, refresh_time_7F1);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1408+i] = highbyteLowbyteExchange(snkPortData7F1[i]);
            }

            pixymvb_GetPort(0x800, &snkPortData800, &refresh_time_800); // Snk Port FC 4
            this->copyPort(0x800, snkPortData800, refresh_time_800);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1424+i] = highbyteLowbyteExchange(snkPortData800[i]);
            }

            pixymvb_GetPort( 0x810, &snkPortData810, &refresh_time_810); // Snk Port FC 4
            this->copyPort(0x810, snkPortData810, refresh_time_810);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1440+i] = highbyteLowbyteExchange(snkPortData810[i]);
            }

            pixymvb_GetPort( 0x820, &snkPortData820, &refresh_time_820); // Snk Port FC 4
            this->copyPort(0x820, snkPortData820, refresh_time_820);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1456+i] = highbyteLowbyteExchange(snkPortData820[i]);
            }

            pixymvb_GetPort( 0x830, &snkPortData830, &refresh_time_830); // Snk Port FC 4
            this->copyPort(0x830, snkPortData830, refresh_time_830);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1472+i] = highbyteLowbyteExchange(snkPortData830[i]);
            }

            pixymvb_GetPort( 0x840, &snkPortData840, &refresh_time_840); // Snk Port FC 4
            this->copyPort(0x840, snkPortData840, refresh_time_840);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1488+i] = highbyteLowbyteExchange(snkPortData840[i]);
            }

            pixymvb_GetPort( 0x850, &snkPortData850, &refresh_time_850); // Snk Port FC 4
            this->copyPort(0x850, snkPortData850, refresh_time_850);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1504+i] = highbyteLowbyteExchange(snkPortData850[i]);
            }

            pixymvb_GetPort( 0x860, &snkPortData860, &refresh_time_860); // Snk Port FC 4
            this->copyPort(0x860, snkPortData860, refresh_time_860);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1520+i] = highbyteLowbyteExchange(snkPortData860[i]);
            }

            pixymvb_GetPort( 0x870, &snkPortData870, &refresh_time_870); // Snk Port FC 4
            this->copyPort(0x870, snkPortData870, refresh_time_870);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1536+i] = highbyteLowbyteExchange(snkPortData870[i]);
            }

            pixymvb_GetPort( 0x880, &snkPortData880, &refresh_time_880); // Snk Port FC 4
            this->copyPort(0x880, snkPortData880, refresh_time_880);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1552+i] = highbyteLowbyteExchange(snkPortData880[i]);
            }

            pixymvb_GetPort( 0x900, &snkPortData900, &refresh_time_900); // Snk Port FC 4
            this->copyPort(0x900, snkPortData900, refresh_time_900);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1568+i] = highbyteLowbyteExchange(snkPortData900[i]);
            }

            pixymvb_GetPort( 0x910, &snkPortData910, &refresh_time_910); // Snk Port FC 4
            this->copyPort(0x910, snkPortData910, refresh_time_910);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1584+i] = highbyteLowbyteExchange(snkPortData910[i]);
            }

            pixymvb_GetPort( 0x911, &snkPortData911, &refresh_time_911); // Snk Port FC 4
            this->copyPort(0x911, snkPortData911, refresh_time_911);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1600+i] = highbyteLowbyteExchange(snkPortData911[i]);
            }

            pixymvb_GetPort( 0x920, &snkPortData920, &refresh_time_920); // Snk Port FC 4
            this->copyPort(0x920, snkPortData920, refresh_time_920);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1616+i] = highbyteLowbyteExchange(snkPortData920[i]);
            }

            pixymvb_GetPort( 0x921, &snkPortData921, &refresh_time_921); // Snk Port FC 4
            this->copyPort(0x921, snkPortData921, refresh_time_921);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1632+i] = highbyteLowbyteExchange(snkPortData921[i]);
            }

            pixymvb_GetPort( 0xA00, &snkPortDataA00, &refresh_time_A00); // Snk Port FC 4
            this->copyPort(0xA00, snkPortDataA00, refresh_time_A00);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1648+i] = highbyteLowbyteExchange(snkPortDataA00[i]);
            }

            pixymvb_GetPort( 0xA10, &snkPortDataA10, &refresh_time_A10); // Snk Port FC 4
            this->copyPort(0xA10, snkPortDataA10, refresh_time_A10);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1664+i] = highbyteLowbyteExchange(snkPortDataA10[i]);
            }

            pixymvb_GetPort( 0xA11, &snkPortDataA11, &refresh_time_A11); // Snk Port FC 4
            this->copyPort(0xA11, snkPortDataA11, refresh_time_A11);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1680+i] = highbyteLowbyteExchange(snkPortDataA11[i]);
            }

            pixymvb_GetPort( 0xB00, &snkPortDataB00, &refresh_time_B00); // Snk Port FC 4
            this->copyPort(0xB00, snkPortDataB00, refresh_time_B00);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1696+i] = highbyteLowbyteExchange(snkPortDataB00[i]);
            }

            pixymvb_GetPort( 0xB10, &snkPortDataB10, &refresh_time_B10); // Snk Port FC 4
            this->copyPort(0xB10, snkPortDataB10, refresh_time_B10);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1712+i] = highbyteLowbyteExchange(snkPortDataB10[i]);
            }

            pixymvb_GetPort( 0xB20, &snkPortDataB20, &refresh_time_B20); // Snk Port FC 4
            this->copyPort(0xB20, snkPortDataB20, refresh_time_B20);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1728+i] = highbyteLowbyteExchange(snkPortDataB20[i]);
            }

            pixymvb_GetPort( 0xF00, &snkPortDataF00, &refresh_time_F00); // Snk Port FC 4
            this->copyPort(0xF00, snkPortDataF00, refresh_time_F00);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1744+i] = highbyteLowbyteExchange(snkPortDataF00[i]);
            }

            pixymvb_GetPort( 0xF01, &snkPortDataF01, &refresh_time_F01); // Snk Port FC 4
            this->copyPort(0xF01, snkPortDataF01, refresh_time_F01);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1760+i] = highbyteLowbyteExchange(snkPortDataF01[i]);
            }

            pixymvb_GetPort( 0xF02, &snkPortDataF02, &refresh_time_F02); // Snk Port FC 4
            this->copyPort(0xF02, snkPortDataF02, refresh_time_F02);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1776+i] = highbyteLowbyteExchange(snkPortDataF02[i]);
            }

            pixymvb_GetPort( 0xF03, &snkPortDataF03, &refresh_time_F03); // Snk Port FC 4
            this->copyPort(0xF03, snkPortDataF03, refresh_time_F03);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1792+i] = highbyteLowbyteExchange(snkPortDataF03[i]);
            }

            pixymvb_GetPort( 0xF10, &snkPortDataF10, &refresh_time_F10); // Snk Port FC 4
            this->copyPort(0xF10, snkPortDataF10, refresh_time_F10);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1808+i] = highbyteLowbyteExchange(snkPortDataF10[i]);
            }

            pixymvb_GetPort( 0xF11, &snkPortDataF11, &refresh_time_F11); // Snk Port FC 4
            this->copyPort(0xF11, snkPortDataF11, refresh_time_F11);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1824+i] = highbyteLowbyteExchange(snkPortDataF11[i]);
            }

            pixymvb_GetPort( 0xF12, &snkPortDataF12, &refresh_time_F12); // Snk Port FC 4
            this->copyPort(0xF12, snkPortDataF12, refresh_time_F12);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1840+i] = highbyteLowbyteExchange(snkPortDataF12[i]);
            }

            pixymvb_GetPort( 0xF13, &snkPortDataF13, &refresh_time_F13); // Snk Port FC 4
            this->copyPort(0xF13, snkPortDataF13, refresh_time_F13);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[1856+i] = highbyteLowbyteExchange(snkPortDataF13[i]);
            }

            pixymvb_GetPort( 0x108, &snkPortData108, &snkTmeSupv); // Snk Port FC 4
            this->copyPort(0x108, snkPortData108, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2000+i] = highbyteLowbyteExchange(snkPortData108[i]);
            }

            pixymvb_GetPort( 0x118, &snkPortData118, &snkTmeSupv); // Snk Port FC 3
            this->copyPort(0x118, snkPortData118, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2016+i] = highbyteLowbyteExchange(snkPortData118[i]);
            }

            pixymvb_GetPort( 0x128, &snkPortData128, &snkTmeSupv); // Snk Port FC 3
            this->copyPort(0x128, snkPortData128, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2024+i] = highbyteLowbyteExchange(snkPortData128[i]);
            }

            pixymvb_GetPort( 0x138, &snkPortData138, &snkTmeSupv); // Snk Port FC 3
            this->copyPort(0x138, snkPortData138, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2032+i] = highbyteLowbyteExchange(snkPortData138[i]);
            }

            pixymvb_GetPort( 0x148, &snkPortData148, &snkTmeSupv); // Snk Port FC 3
            this->copyPort(0x148, snkPortData148, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2040+i] = highbyteLowbyteExchange(snkPortData148[i]);
            }

            pixymvb_GetPort( 0x158, &snkPortData158, &snkTmeSupv); // Snk Port FC 3
            this->copyPort(0x158, snkPortData158, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2048+i] = highbyteLowbyteExchange(snkPortData158[i]);
            }

            pixymvb_GetPort( 0x168, &snkPortData168, &snkTmeSupv); // Snk Port FC 3
            this->copyPort(0x168, snkPortData168, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2056+i] = highbyteLowbyteExchange(snkPortData168[i]);
            }

            pixymvb_GetPort( 0x178, &snkPortData178, &snkTmeSupv); // Snk Port FC 3
            this->copyPort(0x178, snkPortData178, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2064+i] = highbyteLowbyteExchange(snkPortData178[i]);
            }

            pixymvb_GetPort( 0x188, &snkPortData188, &snkTmeSupv); // Snk Port FC 3
            this->copyPort(0x188, snkPortData188, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2072+i] = highbyteLowbyteExchange(snkPortData188[i]);
            }

            pixymvb_GetPort( 0x220, &snkPortData220, &refresh_time_220); // Snk Port FC 4
            this->copyPort(0x220, snkPortData220, refresh_time_220);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2080+i] = highbyteLowbyteExchange(snkPortData220[i]);
            }

            pixymvb_GetPort( 0x221, &snkPortData221, &refresh_time_221); // Snk Port FC 4
            this->copyPort(0x221, snkPortData221, refresh_time_221);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2096+i] = highbyteLowbyteExchange(snkPortData221[i]);
            }

            pixymvb_GetPort( 0x222, &snkPortData222, &refresh_time_222); // Snk Port FC 4
            this->copyPort(0x222, snkPortData222, refresh_time_222);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2112+i] = highbyteLowbyteExchange(snkPortData222[i]);
            }

            pixymvb_GetPort( 0x223, &snkPortData223, &refresh_time_223); // Snk Port FC 4
            this->copyPort(0x223, snkPortData223, refresh_time_223);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2128+i] = highbyteLowbyteExchange(snkPortData223[i]);
            }

            pixymvb_GetPort( 0x408, &snkPortData408, &snkTmeSupv); // Snk Port FC 4
            this->copyPort(0x408, snkPortData408, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2144+i] = highbyteLowbyteExchange(snkPortData408[i]);
            }

            pixymvb_GetPort( 0x418, &snkPortData418, &snkTmeSupv); // Snk Port FC 4
            this->copyPort(0x418, snkPortData418, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2160+i] = highbyteLowbyteExchange(snkPortData418[i]);
            }

            pixymvb_GetPort( 0x508, &snkPortData508, &snkTmeSupv); // Snk Port FC 4
            this->copyPort(0x508, snkPortData508, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2176+i] = highbyteLowbyteExchange(snkPortData508[i]);
            }

            pixymvb_GetPort( 0x518, &snkPortData518, &snkTmeSupv); // Snk Port FC 3
            this->copyPort(0x518, snkPortData518, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2192+i] = highbyteLowbyteExchange(snkPortData518[i]);
            }

            pixymvb_GetPort( 0x528, &snkPortData528, &snkTmeSupv); // Snk Port FC 3
            this->copyPort(0x528, snkPortData528, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2200+i] = highbyteLowbyteExchange(snkPortData528[i]);
            }

            pixymvb_GetPort( 0x538, &snkPortData538, &snkTmeSupv); // Snk Port FC 3
            this->copyPort(0x538, snkPortData538, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2208+i] = highbyteLowbyteExchange(snkPortData538[i]);
            }

            pixymvb_GetPort( 0x548, &snkPortData548, &snkTmeSupv); // Snk Port FC 3
            this->copyPort(0x548, snkPortData548, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2216+i] = highbyteLowbyteExchange(snkPortData548[i]);
            }

            pixymvb_GetPort( 0x558, &snkPortData558, &snkTmeSupv); // Snk Port FC 3
            this->copyPort(0x558, snkPortData558, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2224+i] = highbyteLowbyteExchange(snkPortData558[i]);
            }

            pixymvb_GetPort( 0x568, &snkPortData568, &snkTmeSupv); // Snk Port FC 3
            this->copyPort(0x568, snkPortData568, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2232+i] = highbyteLowbyteExchange(snkPortData568[i]);
            }

            pixymvb_GetPort( 0x608, &snkPortData608, &snkTmeSupv); // Snk Port FC 4
            this->copyPort(0x608, snkPortData608, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2240+i] = highbyteLowbyteExchange(snkPortData608[i]);
            }

            pixymvb_GetPort( 0x618, &snkPortData618, &snkTmeSupv); // Snk Port FC 3
            this->copyPort(0x618, snkPortData618, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2256+i] = highbyteLowbyteExchange(snkPortData618[i]);
            }

            pixymvb_GetPort( 0x628, &snkPortData628, &snkTmeSupv); // Snk Port FC 3
            this->copyPort(0x628, snkPortData628, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2264+i] = highbyteLowbyteExchange(snkPortData628[i]);
            }

            pixymvb_GetPort( 0x708, &snkPortData708, &snkTmeSupv); // Snk Port FC 4
            this->copyPort(0x708, snkPortData708, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2272+i] = highbyteLowbyteExchange(snkPortData708[i]);
            }

            pixymvb_GetPort( 0x718, &snkPortData718, &snkTmeSupv); // Snk Port FC 3
            this->copyPort(0x718, snkPortData718, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2288+i] = highbyteLowbyteExchange(snkPortData718[i]);
            }

            pixymvb_GetPort( 0x808, &snkPortData808, &snkTmeSupv); // Snk Port FC 4
            this->copyPort(0x808, snkPortData808, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2296+i] = highbyteLowbyteExchange(snkPortData808[i]);
            }

            pixymvb_GetPort( 0x818, &snkPortData818, &snkTmeSupv); // Snk Port FC 4
            this->copyPort(0x818, snkPortData818, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2312+i] = highbyteLowbyteExchange(snkPortData818[i]);
            }

            pixymvb_GetPort( 0x908, &snkPortData908, &snkTmeSupv); // Snk Port FC 4
            this->copyPort(0x908, snkPortData908, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2328+i] = highbyteLowbyteExchange(snkPortData908[i]);
            }

            pixymvb_GetPort( 0x918, &snkPortData918, &snkTmeSupv); // Snk Port FC 4
            this->copyPort(0x918, snkPortData918, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2344+i] = highbyteLowbyteExchange(snkPortData918[i]);
            }

            pixymvb_GetPort( 0x919, &snkPortData919, &snkTmeSupv); // Snk Port FC 4
            this->copyPort(0x919, snkPortData919, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2360+i] = highbyteLowbyteExchange(snkPortData919[i]);
            }

            pixymvb_GetPort( 0xA08, &snkPortDataA08, &snkTmeSupv); // Snk Port FC 4
            this->copyPort(0xA08, snkPortDataA08, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2376+i] = highbyteLowbyteExchange(snkPortDataA08[i]);
            }

            pixymvb_GetPort( 0xA18, &snkPortDataA18, &snkTmeSupv); // Snk Port FC 4
            this->copyPort(0xA18, snkPortDataA18, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2392+i] = highbyteLowbyteExchange(snkPortDataA18[i]);
            }

            pixymvb_GetPort( 0xB08, &snkPortDataB08, &snkTmeSupv); // Snk Port FC 4
            this->copyPort(0xB08, snkPortDataB08, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2408+i] = highbyteLowbyteExchange(snkPortDataB08[i]);
            }

            pixymvb_GetPort( 0xB18, &snkPortDataB18, &snkTmeSupv); // Snk Port FC 3
            this->copyPort(0xB18, snkPortDataB18, snkTmeSupv);

            // set to be processed snk data
            for (i=0;i<16;i++)
            {
                g_dataBuffer_MVB[2424+i] = highbyteLowbyteExchange(snkPortDataB18[i]);
            }

            PIXYMVB_Data temp;

            pixymvb_GetPort(0xC10, &temp, &snkTmeSupv);
            this->copyPort(0xC10, temp, snkTmeSupv);

            pixymvb_GetPort(0xC11, &temp, &snkTmeSupv);
            this->copyPort(0xC11, temp, snkTmeSupv);

            pixymvb_GetPort(0xC12, &temp, &snkTmeSupv);
            this->copyPort(0xC12, temp, snkTmeSupv);

            pixymvb_GetPort(0xC13, &temp, &snkTmeSupv);
            this->copyPort(0xC13, temp, snkTmeSupv);

            pixymvb_GetPort(0xC14, &temp, &snkTmeSupv);
            this->copyPort(0xC14, temp, snkTmeSupv);

            pixymvb_GetPort(0xC20, &temp, &snkTmeSupv);
            this->copyPort(0xC20, temp, snkTmeSupv);

            pixymvb_GetPort(0xC21, &temp, &snkTmeSupv);
            this->copyPort(0xC21, temp, snkTmeSupv);

            pixymvb_GetPort(0xC22, &temp, &snkTmeSupv);
            this->copyPort(0xC22, temp, snkTmeSupv);

            pixymvb_GetPort(0xC23, &temp, &snkTmeSupv);
            this->copyPort(0xC23, temp, snkTmeSupv);

            pixymvb_GetPort(0xC24, &temp, &snkTmeSupv);
            this->copyPort(0xC24, temp, snkTmeSupv);

            pixymvb_GetPort(0xF20, &temp, &snkTmeSupv);
            this->copyPort(0xF20, temp, snkTmeSupv);

            pixymvb_GetPort(0xF40, &temp, &snkTmeSupv);
            this->copyPort(0xF40, temp, snkTmeSupv);

            pixymvb_GetPort(0xF70, &temp, &snkTmeSupv);
            this->copyPort(0xF70, temp, snkTmeSupv);

            // added by Deng Ran on the 31st of August 2017.
            pixymvb_GetPort(0xC08, &temp, &snkTmeSupv);
            this->copyPort(0xC08, temp, snkTmeSupv);

            pixymvb_GetPort(0xC09, &temp, &snkTmeSupv);
            this->copyPort(0xC09, temp, snkTmeSupv);

            pixymvb_GetPort(0xC0A, &temp, &snkTmeSupv);
            this->copyPort(0xC0A, temp, snkTmeSupv);

            // changed by Deng Ran on the 31st of July 2017.
            msleep(200);
        } // end

    }
       



    mutex.lock();
    if( !restart )
        condition.wait( &mutex );
    restart = false;
    mutex.unlock();
}

UNSIGNED16 MvbThread::highbyteLowbyteExchange( const UNSIGNED16 wordData )
{
    return ( ((wordData&0x00FF)<<8) | ((wordData&0xFF00)>>8) );
}
#ifdef DEBUG
void MvbThread::writeDebugLog( const QString str, const SIGNED16 state )
{
    QFile file("debugLog.txt");
    if (!file.open(QIODevice::Append))
    {
        qDebug("debugLog.txt open failed\n");
        return;
    }
    QTextStream out(&file);
    out << str << ": ";
    switch(state)
    {
    case PIXYMVB_OK:
        out << "PIXYMVB_OK";
        break;
    case PIXYMVB_FAILED:
        out << "PIXYMVB_FAILED";
        break;
    case PIXYMVB_PARAMERR:
        out << "PIXYMVB_PARAMERR";
        break;
    case PIXYMVB_STATEERR:
        out << "PIXYMVB_STATEERR";
        break;
    default:
        out << "UNKNOW_ERROR";
        break;
    }
    out << "!\n";
    file.close();
}
#endif
