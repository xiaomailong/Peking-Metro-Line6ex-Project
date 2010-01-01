#include "dialog.h"
#include <QDateTime>
#include <math.h>

// added by Deng Ran on the 01st of August 2017.
void Dialog::updateSignals()
{
    mutex.lock();

    ccuTdsOnlineCar1 = getBool(0x222, 31, 0);
    ccuTdsOnlineCar8 = getBool(0x222, 31, 1);

    ccuPmsOnlineCar2 = getBool(0x222, 31, 2);
    ccuPmsOnlineCar4 = getBool(0x222, 31, 3);
    ccuPmsOnlineCar7 = getBool(0x222, 31, 7);

    // added by Deng Ran on the 14th of August 2017.
    ccuPantographUpStateCar2 = getBool(0x223, 24, 0);
    ccuPantographUpStateCar7 = getBool(0x223, 24, 1);
    ccuPantographUpStateCar4 = getBool(0x223, 24, 2);

    // the signals of tds
    tdsTrustCar1 = getBool(0xC10, 6, 1);
    tdsTrustCar8 = getBool(0xC20, 6, 1);

    tdsWorkModeCar1 = getBool(0xC10, 6, 0);
    tdsWorkModeCar8 = getBool(0xC20, 6, 0);

    // added by Deng Ran on the 07th of August 2017.
    unsigned short int temp = getUnsignedInt(0xC10, 2);

    tdsSoftwareVersionCar1.sprintf("%d.%d.%d", temp / 256, temp % 256 % 16, temp % 256 / 16);

    temp = getUnsignedInt(0xC20, 2);

    tdsSoftwareVersionCar8.sprintf("%d.%d.%d", temp / 256, temp % 256 % 16, temp % 256 / 16);

    // the signals of tds
    if (tdsTrustCar1 && tdsWorkModeCar1 && ccuTdsOnlineCar1)
    {
        tdsInternalBusError = getBool(0xC10, 7, 0);
        tdsSystemMajorFault = getBool(0xC10, 7, 3);
        tdsSystemMinorFault = getBool(0xC10, 7, 4);
        tdsSystemSlightFault = getBool(0xC10, 7, 5);

        tdsAxis4MajorFaultCar1 = getBool(0xC10, 8, 2);
        tdsAxis4MinorFaultCar1 = getBool(0xC10, 8, 3);
        tdsAxis3MajorFaultCar1 = getBool(0xC10, 8, 6);
        tdsAxis3MinorFaultCar1 = getBool(0xC10, 8, 7);
        tdsAxis2MajorFaultCar1 = getBool(0xC10, 9, 2);
        tdsAxis2MinorFaultCar1 = getBool(0xC10, 9, 3);
        tdsAxis1MajorFaultCar1 = getBool(0xC10, 9, 6);
        tdsAxis1MinorFaultCar1 = getBool(0xC10, 9, 7);

        tdsAxis1MajorFaultCar2 = getBool(0xC10, 10, 6);
        tdsAxis1MinorFaultCar2 = getBool(0xC10, 10, 7);
        tdsAxis2MajorFaultCar2 = getBool(0xC10, 10, 2);
        tdsAxis2MinorFaultCar2 = getBool(0xC10, 10, 3);
        tdsAxis3MajorFaultCar2 = getBool(0xC10, 13, 6);
        tdsAxis3MinorFaultCar2 = getBool(0xC10, 13, 7);
        tdsAxis4MajorFaultCar2 = getBool(0xC10, 13, 2);
        tdsAxis4MinorFaultCar2 = getBool(0xC10, 13, 3);

        tdsAxis1MajorFaultCar3 = getBool(0xC10, 14, 6);
        tdsAxis1MinorFaultCar3 = getBool(0xC10, 14, 7);
        tdsAxis2MajorFaultCar3 = getBool(0xC10, 14, 2);
        tdsAxis2MinorFaultCar3 = getBool(0xC10, 14, 3);
        tdsAxis3MajorFaultCar3 = getBool(0xC10, 15, 6);
        tdsAxis3MinorFaultCar3 = getBool(0xC10, 15, 7);
        tdsAxis4MajorFaultCar3 = getBool(0xC10, 15, 2);
        tdsAxis4MinorFaultCar3 = getBool(0xC10, 15, 3);

        tdsAxis1MajorFaultCar7 = getBool(0xC10, 16, 6);
        tdsAxis1MinorFaultCar7 = getBool(0xC10, 16, 7);
        tdsAxis2MajorFaultCar7 = getBool(0xC10, 16, 2);
        tdsAxis2MinorFaultCar7 = getBool(0xC10, 16, 3);
        tdsAxis3MajorFaultCar7 = getBool(0xC10, 19, 6);
        tdsAxis3MinorFaultCar7 = getBool(0xC10, 19, 7);
        tdsAxis4MajorFaultCar7 = getBool(0xC10, 19, 2);
        tdsAxis4MinorFaultCar7 = getBool(0xC10, 19, 3);

        tdsAxis4MajorFaultCar6 = getBool(0xC10, 20, 2);
        tdsAxis4MinorFaultCar6 = getBool(0xC10, 20, 3);
        tdsAxis3MajorFaultCar6 = getBool(0xC10, 20, 6);
        tdsAxis3MinorFaultCar6 = getBool(0xC10, 20, 7);
        tdsAxis2MajorFaultCar6 = getBool(0xC10, 21, 2);
        tdsAxis2MinorFaultCar6 = getBool(0xC10, 21, 3);
        tdsAxis1MajorFaultCar6 = getBool(0xC10, 21, 6);
        tdsAxis1MinorFaultCar6 = getBool(0xC10, 21, 7);

        tdsAxis1MajorFaultCar5 = getBool(0xC10, 22, 6);
        tdsAxis1MinorFaultCar5 = getBool(0xC10, 22, 7);
        tdsAxis2MajorFaultCar5 = getBool(0xC10, 22, 2);
        tdsAxis2MinorFaultCar5 = getBool(0xC10, 22, 3);
        tdsAxis3MajorFaultCar5 = getBool(0xC10, 25, 6);
        tdsAxis3MinorFaultCar5 = getBool(0xC10, 25, 7);
        tdsAxis4MajorFaultCar5 = getBool(0xC10, 25, 2);
        tdsAxis4MinorFaultCar5 = getBool(0xC10, 25, 3);

        tdsAxis4MajorFaultCar4 = getBool(0xC10, 26, 2);
        tdsAxis4MinorFaultCar4 = getBool(0xC10, 26, 3);
        tdsAxis3MajorFaultCar4 = getBool(0xC10, 26, 6);
        tdsAxis3MinorFaultCar4 = getBool(0xC10, 26, 7);
        tdsAxis2MajorFaultCar4 = getBool(0xC10, 27, 2);
        tdsAxis2MinorFaultCar4 = getBool(0xC10, 27, 3);
        tdsAxis1MajorFaultCar4 = getBool(0xC10, 27, 6);
        tdsAxis1MinorFaultCar4 = getBool(0xC10, 27, 7);

        tdsAxis1MajorFaultCar8 = getBool(0xC10, 28, 6);
        tdsAxis1MinorFaultCar8 = getBool(0xC10, 28, 7);
        tdsAxis2MajorFaultCar8 = getBool(0xC10, 28, 2);
        tdsAxis2MinorFaultCar8 = getBool(0xC10, 28, 3);
        tdsAxis3MajorFaultCar8 = getBool(0xC10, 31, 6);
        tdsAxis3MinorFaultCar8 = getBool(0xC10, 31, 7);
        tdsAxis4MajorFaultCar8 = getBool(0xC10, 31, 2);
        tdsAxis4MinorFaultCar8 = getBool(0xC10, 31, 3);

        tdsAxis1Temperature7Car1 = getSignedChar(0xC11, 0);
        tdsAxis1Temperature1Car1 = getSignedChar(0xC11, 1);
        tdsAxis2Temperature7Car1 = getSignedChar(0xC11, 2);
        tdsAxis2Temperature1Car1 = getSignedChar(0xC11, 3);
        tdsAxis3Temperature7Car1 = getSignedChar(0xC11, 4);
        tdsAxis3Temperature1Car1 = getSignedChar(0xC11, 5);
        tdsAxis4Temperature7Car1 = getSignedChar(0xC11, 6);
        tdsAxis4Temperature1Car1 = getSignedChar(0xC11, 7);

        tdsAxis1Temperature1Car2 = getSignedChar(0xC11, 9);
        tdsAxis1Temperature7Car2 = getSignedChar(0xC11, 10);
        tdsAxis1Temperature4Car2 = getSignedChar(0xC11, 11);
        tdsAxis2Temperature1Car2 = getSignedChar(0xC11, 13);
        tdsAxis2Temperature7Car2 = getSignedChar(0xC11, 14);
        tdsAxis2Temperature4Car2 = getSignedChar(0xC11, 15);
        tdsAxis3Temperature1Car2 = getSignedChar(0xC11, 17);
        tdsAxis3Temperature7Car2 = getSignedChar(0xC11, 18);
        tdsAxis3Temperature4Car2 = getSignedChar(0xC11, 19);
        tdsAxis4Temperature1Car2 = getSignedChar(0xC11, 21);
        tdsAxis4Temperature7Car2 = getSignedChar(0xC11, 22);
        tdsAxis4Temperature4Car2 = getSignedChar(0xC11, 23);

        tdsAxis1Temperature1Car3 = getSignedChar(0xC12, 1);
        tdsAxis1Temperature7Car3 = getSignedChar(0xC12, 2);
        tdsAxis1Temperature4Car3 = getSignedChar(0xC12, 3);
        tdsAxis2Temperature1Car3 = getSignedChar(0xC12, 5);
        tdsAxis2Temperature7Car3 = getSignedChar(0xC12, 6);
        tdsAxis2Temperature4Car3 = getSignedChar(0xC12, 7);
        tdsAxis3Temperature1Car3 = getSignedChar(0xC12, 9);
        tdsAxis3Temperature7Car3 = getSignedChar(0xC12, 10);
        tdsAxis3Temperature4Car3 = getSignedChar(0xC12, 11);
        tdsAxis4Temperature1Car3 = getSignedChar(0xC12, 13);
        tdsAxis4Temperature7Car3 = getSignedChar(0xC12, 14);
        tdsAxis4Temperature4Car3 = getSignedChar(0xC12, 15);

        tdsAxis1Temperature1Car7 = getSignedChar(0xC12, 17);
        tdsAxis1Temperature7Car7 = getSignedChar(0xC12, 18);
        tdsAxis1Temperature4Car7 = getSignedChar(0xC12, 19);
        tdsAxis2Temperature1Car7 = getSignedChar(0xC12, 21);
        tdsAxis2Temperature7Car7 = getSignedChar(0xC12, 22);
        tdsAxis2Temperature4Car7 = getSignedChar(0xC12, 23);
        tdsAxis3Temperature1Car7 = getSignedChar(0xC12, 25);
        tdsAxis3Temperature7Car7 = getSignedChar(0xC12, 26);
        tdsAxis3Temperature4Car7 = getSignedChar(0xC12, 27);
        tdsAxis4Temperature1Car7 = getSignedChar(0xC12, 29);
        tdsAxis4Temperature7Car7 = getSignedChar(0xC12, 30);
        tdsAxis4Temperature4Car7 = getSignedChar(0xC12, 31);

        tdsAxis1Temperature1Car6 = getSignedChar(0xC13, 1);
        tdsAxis1Temperature7Car6 = getSignedChar(0xC13, 2);
        tdsAxis1Temperature4Car6 = getSignedChar(0xC13, 3);
        tdsAxis2Temperature1Car6 = getSignedChar(0xC13, 5);
        tdsAxis2Temperature7Car6 = getSignedChar(0xC13, 6);
        tdsAxis2Temperature4Car6 = getSignedChar(0xC13, 7);
        tdsAxis3Temperature1Car6 = getSignedChar(0xC13, 9);
        tdsAxis3Temperature7Car6 = getSignedChar(0xC13, 10);
        tdsAxis3Temperature4Car6 = getSignedChar(0xC13, 11);
        tdsAxis4Temperature1Car6 = getSignedChar(0xC13, 13);
        tdsAxis4Temperature7Car6 = getSignedChar(0xC13, 14);
        tdsAxis4Temperature4Car6 = getSignedChar(0xC13, 15);

        tdsAxis1Temperature1Car5 = getSignedChar(0xC13, 17);
        tdsAxis1Temperature7Car5 = getSignedChar(0xC13, 18);
        tdsAxis1Temperature4Car5 = getSignedChar(0xC13, 19);
        tdsAxis2Temperature1Car5 = getSignedChar(0xC13, 21);
        tdsAxis2Temperature7Car5 = getSignedChar(0xC13, 22);
        tdsAxis2Temperature4Car5 = getSignedChar(0xC13, 23);
        tdsAxis3Temperature1Car5 = getSignedChar(0xC13, 25);
        tdsAxis3Temperature7Car5 = getSignedChar(0xC13, 26);
        tdsAxis3Temperature4Car5 = getSignedChar(0xC13, 27);
        tdsAxis4Temperature1Car5 = getSignedChar(0xC13, 29);
        tdsAxis4Temperature7Car5 = getSignedChar(0xC13, 30);
        tdsAxis4Temperature4Car5 = getSignedChar(0xC13, 31);

        tdsAxis1Temperature1Car4 = getSignedChar(0xC14, 1);
        tdsAxis1Temperature7Car4 = getSignedChar(0xC14, 2);
        tdsAxis1Temperature4Car4 = getSignedChar(0xC14, 3);
        tdsAxis2Temperature1Car4 = getSignedChar(0xC14, 5);
        tdsAxis2Temperature7Car4 = getSignedChar(0xC14, 6);
        tdsAxis2Temperature4Car4 = getSignedChar(0xC14, 7);
        tdsAxis3Temperature1Car4 = getSignedChar(0xC14, 9);
        tdsAxis3Temperature7Car4 = getSignedChar(0xC14, 10);
        tdsAxis3Temperature4Car4 = getSignedChar(0xC14, 11);
        tdsAxis4Temperature1Car4 = getSignedChar(0xC14, 13);
        tdsAxis4Temperature7Car4 = getSignedChar(0xC14, 14);
        tdsAxis4Temperature4Car4 = getSignedChar(0xC14, 15);

        tdsAxis1Temperature7Car8 = getSignedChar(0xC14, 16);
        tdsAxis1Temperature1Car8 = getSignedChar(0xC14, 17);
        tdsAxis2Temperature7Car8 = getSignedChar(0xC14, 18);
        tdsAxis2Temperature1Car8 = getSignedChar(0xC14, 19);
        tdsAxis3Temperature7Car8 = getSignedChar(0xC14, 20);
        tdsAxis3Temperature1Car8 = getSignedChar(0xC14, 21);
        tdsAxis4Temperature7Car8 = getSignedChar(0xC14, 22);
        tdsAxis4Temperature1Car8 = getSignedChar(0xC14, 23);

        tdsProcessorFaultCar1 = getBool(0xC10, 11, 6);
        tdsSensorFaultCar1 = getBool(0xC10, 11, 5);
        tdsControllerFaultCar1 = getBool(0xC10, 11, 7);

        tdsProcessorFaultCar2 = getBool(0xC10, 12, 6);
        tdsSensorFaultCar2 = getBool(0xC10, 12, 5);
        tdsControllerFaultCar2 = getBool(0xC10, 12, 7);

        tdsProcessorFaultCar3 = getBool(0xC10, 17, 6);
        tdsSensorFaultCar3 = getBool(0xC10, 17, 5);
        tdsControllerFaultCar3 = getBool(0xC10, 17, 7);

        tdsProcessorFaultCar4 = getBool(0xC10, 29, 6);
        tdsSensorFaultCar4 = getBool(0xC10, 29, 5);
        tdsControllerFaultCar4 = getBool(0xC10, 29, 7);

        tdsProcessorFaultCar5 = getBool(0xC10, 24, 6);
        tdsSensorFaultCar5 = getBool(0xC10, 24, 5);
        tdsControllerFaultCar5 = getBool(0xC10, 24, 7);

        tdsProcessorFaultCar6 = getBool(0xC10, 23, 6);
        tdsSensorFaultCar6 = getBool(0xC10, 23, 5);
        tdsControllerFaultCar6 = getBool(0xC10, 23, 7);

        tdsProcessorFaultCar7 = getBool(0xC10, 18, 6);
        tdsSensorFaultCar7 = getBool(0xC10, 18, 5);
        tdsControllerFaultCar7 = getBool(0xC10, 18, 7);

        tdsProcessorFaultCar8 = getBool(0xC10, 30, 6);
        tdsSensorFaultCar8 = getBool(0xC10, 30, 5);
        tdsControllerFaultCar8 = getBool(0xC10, 30, 7);
    }
    else if (tdsTrustCar8 && tdsWorkModeCar8 && ccuTdsOnlineCar8)
    {
        tdsInternalBusError = getBool(0xC20, 7, 0);
        tdsSystemMajorFault = getBool(0xC20, 7, 3);
        tdsSystemMinorFault = getBool(0xC20, 7, 4);
        tdsSystemSlightFault = getBool(0xC20, 7, 5);

        tdsAxis4MajorFaultCar1 = getBool(0xC20, 8, 2);
        tdsAxis4MinorFaultCar1 = getBool(0xC20, 8, 3);
        tdsAxis3MajorFaultCar1 = getBool(0xC20, 8, 6);
        tdsAxis3MinorFaultCar1 = getBool(0xC20, 8, 7);
        tdsAxis2MajorFaultCar1 = getBool(0xC20, 9, 2);
        tdsAxis2MinorFaultCar1 = getBool(0xC20, 9, 3);
        tdsAxis1MajorFaultCar1 = getBool(0xC20, 9, 6);
        tdsAxis1MinorFaultCar1 = getBool(0xC20, 9, 7);

        tdsAxis1MajorFaultCar2 = getBool(0xC20, 10, 6);
        tdsAxis1MinorFaultCar2 = getBool(0xC20, 10, 7);
        tdsAxis2MajorFaultCar2 = getBool(0xC20, 10, 2);
        tdsAxis2MinorFaultCar2 = getBool(0xC20, 10, 3);
        tdsAxis3MajorFaultCar2 = getBool(0xC20, 13, 6);
        tdsAxis3MinorFaultCar2 = getBool(0xC20, 13, 7);
        tdsAxis4MajorFaultCar2 = getBool(0xC20, 13, 2);
        tdsAxis4MinorFaultCar2 = getBool(0xC20, 13, 3);

        tdsAxis1MajorFaultCar3 = getBool(0xC20, 14, 2);
        tdsAxis1MinorFaultCar3 = getBool(0xC20, 14, 3);
        tdsAxis2MajorFaultCar3 = getBool(0xC20, 14, 6);
        tdsAxis2MinorFaultCar3 = getBool(0xC20, 14, 7);
        tdsAxis3MajorFaultCar3 = getBool(0xC20, 15, 2);
        tdsAxis3MinorFaultCar3 = getBool(0xC20, 15, 3);
        tdsAxis4MajorFaultCar3 = getBool(0xC20, 15, 6);
        tdsAxis4MinorFaultCar3 = getBool(0xC20, 15, 7);

        tdsAxis1MajorFaultCar7 = getBool(0xC20, 16, 6);
        tdsAxis1MinorFaultCar7 = getBool(0xC20, 16, 7);
        tdsAxis2MajorFaultCar7 = getBool(0xC20, 16, 2);
        tdsAxis2MinorFaultCar7 = getBool(0xC20, 16, 3);
        tdsAxis3MajorFaultCar7 = getBool(0xC20, 19, 6);
        tdsAxis3MinorFaultCar7 = getBool(0xC20, 19, 7);
        tdsAxis4MajorFaultCar7 = getBool(0xC20, 19, 2);
        tdsAxis4MinorFaultCar7 = getBool(0xC20, 19, 3);

        tdsAxis4MajorFaultCar6 = getBool(0xC20, 20, 2);
        tdsAxis4MinorFaultCar6 = getBool(0xC20, 20, 3);
        tdsAxis3MajorFaultCar6 = getBool(0xC20, 20, 6);
        tdsAxis3MinorFaultCar6 = getBool(0xC20, 20, 7);
        tdsAxis2MajorFaultCar6 = getBool(0xC20, 21, 2);
        tdsAxis2MinorFaultCar6 = getBool(0xC20, 21, 3);
        tdsAxis1MajorFaultCar6 = getBool(0xC20, 21, 6);
        tdsAxis1MinorFaultCar6 = getBool(0xC20, 21, 7);

        tdsAxis1MajorFaultCar5 = getBool(0xC20, 22, 6);
        tdsAxis1MinorFaultCar5 = getBool(0xC20, 22, 7);
        tdsAxis2MajorFaultCar5 = getBool(0xC20, 22, 2);
        tdsAxis2MinorFaultCar5 = getBool(0xC20, 22, 3);
        tdsAxis3MajorFaultCar5 = getBool(0xC20, 25, 6);
        tdsAxis3MinorFaultCar5 = getBool(0xC20, 25, 7);
        tdsAxis4MajorFaultCar5 = getBool(0xC20, 25, 2);
        tdsAxis4MinorFaultCar5 = getBool(0xC20, 25, 3);

        tdsAxis4MajorFaultCar4 = getBool(0xC20, 26, 2);
        tdsAxis4MinorFaultCar4 = getBool(0xC20, 26, 3);
        tdsAxis3MajorFaultCar4 = getBool(0xC20, 26, 6);
        tdsAxis3MinorFaultCar4 = getBool(0xC20, 26, 7);
        tdsAxis2MajorFaultCar4 = getBool(0xC20, 27, 2);
        tdsAxis2MinorFaultCar4 = getBool(0xC20, 27, 3);
        tdsAxis1MajorFaultCar4 = getBool(0xC20, 27, 6);
        tdsAxis1MinorFaultCar4 = getBool(0xC20, 27, 7);

        tdsAxis1MajorFaultCar8 = getBool(0xC20, 28, 6);
        tdsAxis1MinorFaultCar8 = getBool(0xC20, 28, 7);
        tdsAxis2MajorFaultCar8 = getBool(0xC20, 28, 2);
        tdsAxis2MinorFaultCar8 = getBool(0xC20, 28, 3);
        tdsAxis3MajorFaultCar8 = getBool(0xC20, 31, 6);
        tdsAxis3MinorFaultCar8 = getBool(0xC20, 31, 7);
        tdsAxis4MajorFaultCar8 = getBool(0xC20, 31, 2);
        tdsAxis4MinorFaultCar8 = getBool(0xC20, 31, 3);

        tdsAxis1Temperature7Car1 = getSignedChar(0xC21, 0);
        tdsAxis1Temperature1Car1 = getSignedChar(0xC21, 1);
        tdsAxis2Temperature7Car1 = getSignedChar(0xC21, 2);
        tdsAxis2Temperature1Car1 = getSignedChar(0xC21, 3);
        tdsAxis3Temperature7Car1 = getSignedChar(0xC21, 4);
        tdsAxis3Temperature1Car1 = getSignedChar(0xC21, 5);
        tdsAxis4Temperature7Car1 = getSignedChar(0xC21, 6);
        tdsAxis4Temperature1Car1 = getSignedChar(0xC21, 7);

        tdsAxis1Temperature1Car2 = getSignedChar(0xC21, 9);
        tdsAxis1Temperature7Car2 = getSignedChar(0xC21, 10);
        tdsAxis1Temperature4Car2 = getSignedChar(0xC21, 11);
        tdsAxis2Temperature1Car2 = getSignedChar(0xC21, 13);
        tdsAxis2Temperature7Car2 = getSignedChar(0xC21, 14);
        tdsAxis2Temperature4Car2 = getSignedChar(0xC21, 15);
        tdsAxis3Temperature1Car2 = getSignedChar(0xC21, 17);
        tdsAxis3Temperature7Car2 = getSignedChar(0xC21, 18);
        tdsAxis3Temperature4Car2 = getSignedChar(0xC21, 19);
        tdsAxis4Temperature1Car2 = getSignedChar(0xC21, 21);
        tdsAxis4Temperature7Car2 = getSignedChar(0xC21, 22);
        tdsAxis4Temperature4Car2 = getSignedChar(0xC21, 23);

        tdsAxis1Temperature1Car3 = getSignedChar(0xC22, 1);
        tdsAxis1Temperature7Car3 = getSignedChar(0xC22, 2);
        tdsAxis1Temperature4Car3 = getSignedChar(0xC22, 3);
        tdsAxis2Temperature1Car3 = getSignedChar(0xC22, 5);
        tdsAxis2Temperature7Car3 = getSignedChar(0xC22, 6);
        tdsAxis2Temperature4Car3 = getSignedChar(0xC22, 7);
        tdsAxis3Temperature1Car3 = getSignedChar(0xC22, 9);
        tdsAxis3Temperature7Car3 = getSignedChar(0xC22, 10);
        tdsAxis3Temperature4Car3 = getSignedChar(0xC22, 11);
        tdsAxis4Temperature1Car3 = getSignedChar(0xC22, 13);
        tdsAxis4Temperature7Car3 = getSignedChar(0xC22, 14);
        tdsAxis4Temperature4Car3 = getSignedChar(0xC22, 15);

        tdsAxis1Temperature1Car7 = getSignedChar(0xC22, 17);
        tdsAxis1Temperature7Car7 = getSignedChar(0xC22, 18);
        tdsAxis1Temperature4Car7 = getSignedChar(0xC22, 19);
        tdsAxis2Temperature1Car7 = getSignedChar(0xC22, 21);
        tdsAxis2Temperature7Car7 = getSignedChar(0xC22, 22);
        tdsAxis2Temperature4Car7 = getSignedChar(0xC22, 23);
        tdsAxis3Temperature1Car7 = getSignedChar(0xC22, 25);
        tdsAxis3Temperature7Car7 = getSignedChar(0xC22, 26);
        tdsAxis3Temperature4Car7 = getSignedChar(0xC22, 27);
        tdsAxis4Temperature1Car7 = getSignedChar(0xC22, 29);
        tdsAxis4Temperature7Car7 = getSignedChar(0xC22, 30);
        tdsAxis4Temperature4Car7 = getSignedChar(0xC22, 31);

        tdsAxis1Temperature1Car6 = getSignedChar(0xC23, 1);
        tdsAxis1Temperature7Car6 = getSignedChar(0xC23, 2);
        tdsAxis1Temperature4Car6 = getSignedChar(0xC23, 3);
        tdsAxis2Temperature1Car6 = getSignedChar(0xC23, 5);
        tdsAxis2Temperature7Car6 = getSignedChar(0xC23, 6);
        tdsAxis2Temperature4Car6 = getSignedChar(0xC23, 7);
        tdsAxis3Temperature1Car6 = getSignedChar(0xC23, 9);
        tdsAxis3Temperature7Car6 = getSignedChar(0xC23, 10);
        tdsAxis3Temperature4Car6 = getSignedChar(0xC23, 11);
        tdsAxis4Temperature1Car6 = getSignedChar(0xC23, 13);
        tdsAxis4Temperature7Car6 = getSignedChar(0xC23, 14);
        tdsAxis4Temperature4Car6 = getSignedChar(0xC23, 15);

        tdsAxis1Temperature1Car5 = getSignedChar(0xC23, 17);
        tdsAxis1Temperature7Car5 = getSignedChar(0xC23, 18);
        tdsAxis1Temperature4Car5 = getSignedChar(0xC23, 19);
        tdsAxis2Temperature1Car5 = getSignedChar(0xC23, 21);
        tdsAxis2Temperature7Car5 = getSignedChar(0xC23, 22);
        tdsAxis2Temperature4Car5 = getSignedChar(0xC23, 23);
        tdsAxis3Temperature1Car5 = getSignedChar(0xC23, 25);
        tdsAxis3Temperature7Car5 = getSignedChar(0xC23, 26);
        tdsAxis3Temperature4Car5 = getSignedChar(0xC23, 27);
        tdsAxis4Temperature1Car5 = getSignedChar(0xC23, 29);
        tdsAxis4Temperature7Car5 = getSignedChar(0xC23, 30);
        tdsAxis4Temperature4Car5 = getSignedChar(0xC23, 31);

        tdsAxis1Temperature1Car4 = getSignedChar(0xC24, 1);
        tdsAxis1Temperature7Car4 = getSignedChar(0xC24, 2);
        tdsAxis1Temperature4Car4 = getSignedChar(0xC24, 3);
        tdsAxis2Temperature1Car4 = getSignedChar(0xC24, 5);
        tdsAxis2Temperature7Car4 = getSignedChar(0xC24, 6);
        tdsAxis2Temperature4Car4 = getSignedChar(0xC24, 7);
        tdsAxis3Temperature1Car4 = getSignedChar(0xC24, 9);
        tdsAxis3Temperature7Car4 = getSignedChar(0xC24, 10);
        tdsAxis3Temperature4Car4 = getSignedChar(0xC24, 11);
        tdsAxis4Temperature1Car4 = getSignedChar(0xC24, 13);
        tdsAxis4Temperature7Car4 = getSignedChar(0xC24, 14);
        tdsAxis4Temperature4Car4 = getSignedChar(0xC24, 15);

        tdsAxis1Temperature7Car8 = getSignedChar(0xC24, 16);
        tdsAxis1Temperature1Car8 = getSignedChar(0xC24, 17);
        tdsAxis2Temperature7Car8 = getSignedChar(0xC24, 18);
        tdsAxis2Temperature1Car8 = getSignedChar(0xC24, 19);
        tdsAxis3Temperature7Car8 = getSignedChar(0xC24, 20);
        tdsAxis3Temperature1Car8 = getSignedChar(0xC24, 21);
        tdsAxis4Temperature7Car8 = getSignedChar(0xC24, 22);
        tdsAxis4Temperature1Car8 = getSignedChar(0xC24, 23);

        tdsProcessorFaultCar1 = getBool(0xC20, 11, 5);
        tdsSensorFaultCar1 = getBool(0xC20, 11, 6);
        tdsControllerFaultCar1 = getBool(0xC20, 11, 7);

        tdsProcessorFaultCar2 = getBool(0xC20, 12, 5);
        tdsSensorFaultCar2 = getBool(0xC20, 12, 6);
        tdsControllerFaultCar2 = getBool(0xC20, 12, 7);

        tdsProcessorFaultCar3 = getBool(0xC20, 17, 5);
        tdsSensorFaultCar3 = getBool(0xC20, 17, 6);
        tdsControllerFaultCar3 = getBool(0xC20, 17, 7);

        tdsProcessorFaultCar4 = getBool(0xC20, 29, 5);
        tdsSensorFaultCar4 = getBool(0xC20, 29, 6);
        tdsControllerFaultCar4 = getBool(0xC20, 29, 7);

        tdsProcessorFaultCar5 = getBool(0xC20, 24, 5);
        tdsSensorFaultCar5 = getBool(0xC20, 24, 6);
        tdsControllerFaultCar5 = getBool(0xC20, 24, 7);

        tdsProcessorFaultCar6 = getBool(0xC20, 23, 5);
        tdsSensorFaultCar6 = getBool(0xC20, 23, 6);
        tdsControllerFaultCar6 = getBool(0xC20, 23, 7);

        tdsProcessorFaultCar7 = getBool(0xC20, 18, 5);
        tdsSensorFaultCar7 = getBool(0xC20, 18, 6);
        tdsControllerFaultCar7 = getBool(0xC20, 18, 7);

        tdsProcessorFaultCar8 = getBool(0xC20, 30, 5);
        tdsSensorFaultCar8 = getBool(0xC20, 30, 6);
        tdsControllerFaultCar8 = getBool(0xC20, 30, 7);
    }

    // added by Deng Ran on the 10th of August 2017.
    pmsPantographCleatDeficiencyCar2 = getBool(0xF20, 0, 7);
    pmsPantographCleatOutOfShapeCar2 = getBool(0xF20, 0, 6);
    pmsPantographlittleOutOfShapeCar2 = getBool(0xF20, 0, 5);
    pmsPantographBlockCar2 = getBool(0xF20, 0, 4);
    pmsPantographSlideAbrasionCar2 = getBool(0xF20, 0, 3);
    pmsPantographSlideMajorGapCar2 = getBool(0xF20, 0, 2);
    pmsCarbonFallOffCar2 = getBool(0xF20, 0, 1);
    pmsPantographArcCar2 = getBool(0xF20, 0, 0);
    pmsPantographTemperatureAbnormalCar2 = getBool(0xF20, 1, 7);
    pmsPantographCamera1AbnormalCar2 = getBool(0xF20, 1, 6);
    pmsPantographCamera2AbnormalCar2 = getBool(0xF20, 1, 5);
    pmsPantographCamera3AbnormalCar2 = getBool(0xF20, 1, 4);
    pmsPantographCamera4AbnormalCar2 = getBool(0xF20, 1, 3);
    pmsPantographCamera5AbnormalCar2 = getBool(0xF20, 1, 2);
    pmsPantographCamera6AbnormalCar2 = getBool(0xF20, 1, 1);
    pmsPantographCamera7AbnormalCar2 = getBool(0xF20, 1, 0);
    pmsPantographCamera8AbnormalCar2 = getBool(0xF20, 2, 7);
    pmsDeviceTemperatureAbnormalCar2 = getBool(0xF20, 2, 6);
    pmsControlSystemTemperatureAbnormalCar2 = getBool(0xF20, 2, 5);

    pmsPantographCleatDeficiencyCar4 = getBool(0xF40, 0, 7);
    pmsPantographCleatOutOfShapeCar4 = getBool(0xF40, 0, 6);
    pmsPantographlittleOutOfShapeCar4 = getBool(0xF40, 0, 5);
    pmsPantographBlockCar4 = getBool(0xF40, 0, 4);
    pmsPantographSlideAbrasionCar4 = getBool(0xF40, 0, 3);
    pmsPantographSlideMajorGapCar4 = getBool(0xF40, 0, 2);
    pmsCarbonFallOffCar4 = getBool(0xF40, 0, 1);
    pmsPantographArcCar4 = getBool(0xF40, 0, 0);
    pmsPantographTemperatureAbnormalCar4 = getBool(0xF40, 1, 7);
    pmsPantographCamera1AbnormalCar4 = getBool(0xF40, 1, 6);
    pmsPantographCamera2AbnormalCar4 = getBool(0xF40, 1, 5);
    pmsPantographCamera3AbnormalCar4 = getBool(0xF40, 1, 4);
    pmsPantographCamera4AbnormalCar4 = getBool(0xF40, 1, 3);
    pmsPantographCamera5AbnormalCar4 = getBool(0xF40, 1, 2);
    pmsPantographCamera6AbnormalCar4 = getBool(0xF40, 1, 1);
    pmsPantographCamera7AbnormalCar4 = getBool(0xF40, 1, 0);
    pmsPantographCamera8AbnormalCar4 = getBool(0xF40, 2, 7);
    pmsDeviceTemperatureAbnormalCar4 = getBool(0xF40, 2, 6);
    pmsControlSystemTemperatureAbnormalCar4 = getBool(0xF40, 2, 5);

    pmsPantographCleatDeficiencyCar7 = getBool(0xF70, 0, 7);
    pmsPantographCleatOutOfShapeCar7 = getBool(0xF70, 0, 6);
    pmsPantographlittleOutOfShapeCar7 = getBool(0xF70, 0, 5);
    pmsPantographBlockCar7 = getBool(0xF70, 0, 4);
    pmsPantographSlideAbrasionCar7 = getBool(0xF70, 0, 3);
    pmsPantographSlideMajorGapCar7 = getBool(0xF70, 0, 2);
    pmsCarbonFallOffCar7 = getBool(0xF70, 0, 1);
    pmsPantographArcCar7 = getBool(0xF70, 0, 0);
    pmsPantographTemperatureAbnormalCar7 = getBool(0xF70, 1, 7);
    pmsPantographCamera1AbnormalCar7 = getBool(0xF70, 1, 6);
    pmsPantographCamera2AbnormalCar7 = getBool(0xF70, 1, 5);
    pmsPantographCamera3AbnormalCar7 = getBool(0xF70, 1, 4);
    pmsPantographCamera4AbnormalCar7 = getBool(0xF70, 1, 3);
    pmsPantographCamera5AbnormalCar7 = getBool(0xF70, 1, 2);
    pmsPantographCamera6AbnormalCar7 = getBool(0xF70, 1, 1);
    pmsPantographCamera7AbnormalCar7 = getBool(0xF70, 1, 0);
    pmsPantographCamera8AbnormalCar7 = getBool(0xF70, 2, 7);
    pmsDeviceTemperatureAbnormalCar7 = getBool(0xF70, 2, 6);
    pmsControlSystemTemperatureAbnormalCar7 = getBool(0xF70, 2, 5);

    // riom signals
    riomPantographDownStateCar2 = getBool(0x120, 0, 7);
    riomPantographDownStateCar7 = getBool(0x170, 0, 7);
    riomPantographDownStateCar4 = getBool(0x140, 0, 7);

    // ccu signals
    ccuYear = getUnsignedChar(0x221, 18);
    ccuMonth = getUnsignedChar(0x221, 19);
    ccuDay = getUnsignedChar(0x221, 20);
    ccuHour = getUnsignedChar(0x221, 21);
    ccuMinute = getUnsignedChar(0x221, 22);
    ccuSecond = getUnsignedChar(0x0221, 23);
    ccuLifeSignal = getUnsignedInt(0x220, 0);

    mutex.unlock();

    // tds
    // added by Deng Ran on the 22nd of August 2017, the function of fault diagnosis
    this->setUnsignedInt(g_dataBuffer + 4000, 0, tdsAxis1MajorFaultCar1);
    this->setUnsignedInt(g_dataBuffer + 4000, 1, tdsAxis2MajorFaultCar1);
    this->setUnsignedInt(g_dataBuffer + 4000, 2, tdsAxis3MajorFaultCar1);
    this->setUnsignedInt(g_dataBuffer + 4000, 3, tdsAxis4MajorFaultCar1);

    this->setUnsignedInt(g_dataBuffer + 4000, 4, tdsAxis1MajorFaultCar2);
    this->setUnsignedInt(g_dataBuffer + 4000, 5, tdsAxis2MajorFaultCar2);
    this->setUnsignedInt(g_dataBuffer + 4000, 6, tdsAxis3MajorFaultCar2);
    this->setUnsignedInt(g_dataBuffer + 4000, 7, tdsAxis4MajorFaultCar2);

    this->setUnsignedInt(g_dataBuffer + 4000, 8, tdsAxis1MajorFaultCar3);
    this->setUnsignedInt(g_dataBuffer + 4000, 9, tdsAxis2MajorFaultCar3);
    this->setUnsignedInt(g_dataBuffer + 4000, 10, tdsAxis3MajorFaultCar3);
    this->setUnsignedInt(g_dataBuffer + 4000, 11, tdsAxis4MajorFaultCar3);

    this->setUnsignedInt(g_dataBuffer + 4000, 12, tdsAxis1MajorFaultCar4);
    this->setUnsignedInt(g_dataBuffer + 4000, 13, tdsAxis2MajorFaultCar4);
    this->setUnsignedInt(g_dataBuffer + 4000, 14, tdsAxis3MajorFaultCar4);
    this->setUnsignedInt(g_dataBuffer + 4000, 15, tdsAxis4MajorFaultCar4);

    this->setUnsignedInt(g_dataBuffer + 4001, 0, tdsAxis1MajorFaultCar5);
    this->setUnsignedInt(g_dataBuffer + 4001, 1, tdsAxis2MajorFaultCar5);
    this->setUnsignedInt(g_dataBuffer + 4001, 2, tdsAxis3MajorFaultCar5);
    this->setUnsignedInt(g_dataBuffer + 4001, 3, tdsAxis4MajorFaultCar5);

    this->setUnsignedInt(g_dataBuffer + 4001, 4, tdsAxis1MajorFaultCar6);
    this->setUnsignedInt(g_dataBuffer + 4001, 5, tdsAxis2MajorFaultCar6);
    this->setUnsignedInt(g_dataBuffer + 4001, 6, tdsAxis3MajorFaultCar6);
    this->setUnsignedInt(g_dataBuffer + 4001, 7, tdsAxis4MajorFaultCar6);

    this->setUnsignedInt(g_dataBuffer + 4001, 8, tdsAxis1MajorFaultCar7);
    this->setUnsignedInt(g_dataBuffer + 4001, 9, tdsAxis2MajorFaultCar7);
    this->setUnsignedInt(g_dataBuffer + 4001, 10, tdsAxis3MajorFaultCar7);
    this->setUnsignedInt(g_dataBuffer + 4001, 11, tdsAxis4MajorFaultCar7);

    this->setUnsignedInt(g_dataBuffer + 4001, 12, tdsAxis1MajorFaultCar8);
    this->setUnsignedInt(g_dataBuffer + 4001, 13, tdsAxis2MajorFaultCar8);
    this->setUnsignedInt(g_dataBuffer + 4001, 14, tdsAxis3MajorFaultCar8);
    this->setUnsignedInt(g_dataBuffer + 4001, 15, tdsAxis4MajorFaultCar8);

    this->setUnsignedInt(g_dataBuffer + 4002, 0, tdsSystemSlightFault);
    this->setUnsignedInt(g_dataBuffer + 4002, 1, tdsInternalBusError);

    this->setUnsignedInt(g_dataBuffer + 4003, 0, tdsAxis1MinorFaultCar1);
    this->setUnsignedInt(g_dataBuffer + 4003, 1, tdsAxis2MinorFaultCar1);
    this->setUnsignedInt(g_dataBuffer + 4003, 2, tdsAxis3MinorFaultCar1);
    this->setUnsignedInt(g_dataBuffer + 4003, 3, tdsAxis4MinorFaultCar1);
    this->setUnsignedInt(g_dataBuffer + 4003, 4, tdsControllerFaultCar1);
    this->setUnsignedInt(g_dataBuffer + 4003, 5, tdsProcessorFaultCar1);
    this->setUnsignedInt(g_dataBuffer + 4003, 6, tdsSensorFaultCar1);

    this->setUnsignedInt(g_dataBuffer + 4004, 0, tdsAxis1MinorFaultCar2);
    this->setUnsignedInt(g_dataBuffer + 4004, 1, tdsAxis2MinorFaultCar2);
    this->setUnsignedInt(g_dataBuffer + 4004, 2, tdsAxis3MinorFaultCar2);
    this->setUnsignedInt(g_dataBuffer + 4004, 3, tdsAxis4MinorFaultCar2);
    this->setUnsignedInt(g_dataBuffer + 4004, 4, tdsControllerFaultCar2);
    this->setUnsignedInt(g_dataBuffer + 4004, 5, tdsProcessorFaultCar2);
    this->setUnsignedInt(g_dataBuffer + 4004, 6, tdsSensorFaultCar2);

    this->setUnsignedInt(g_dataBuffer + 4005, 0, tdsAxis1MinorFaultCar3);
    this->setUnsignedInt(g_dataBuffer + 4005, 1, tdsAxis2MinorFaultCar3);
    this->setUnsignedInt(g_dataBuffer + 4005, 2, tdsAxis3MinorFaultCar3);
    this->setUnsignedInt(g_dataBuffer + 4005, 3, tdsAxis4MinorFaultCar3);
    this->setUnsignedInt(g_dataBuffer + 4005, 4, tdsControllerFaultCar3);
    this->setUnsignedInt(g_dataBuffer + 4005, 5, tdsProcessorFaultCar3);
    this->setUnsignedInt(g_dataBuffer + 4005, 6, tdsSensorFaultCar3);

    this->setUnsignedInt(g_dataBuffer + 4006, 0, tdsAxis1MinorFaultCar4);
    this->setUnsignedInt(g_dataBuffer + 4006, 1, tdsAxis2MinorFaultCar4);
    this->setUnsignedInt(g_dataBuffer + 4006, 2, tdsAxis3MinorFaultCar4);
    this->setUnsignedInt(g_dataBuffer + 4006, 3, tdsAxis4MinorFaultCar4);
    this->setUnsignedInt(g_dataBuffer + 4006, 4, tdsControllerFaultCar4);
    this->setUnsignedInt(g_dataBuffer + 4006, 5, tdsProcessorFaultCar4);
    this->setUnsignedInt(g_dataBuffer + 4006, 6, tdsSensorFaultCar4);

    this->setUnsignedInt(g_dataBuffer + 4007, 0, tdsAxis1MinorFaultCar5);
    this->setUnsignedInt(g_dataBuffer + 4007, 1, tdsAxis2MinorFaultCar5);
    this->setUnsignedInt(g_dataBuffer + 4007, 2, tdsAxis3MinorFaultCar5);
    this->setUnsignedInt(g_dataBuffer + 4007, 3, tdsAxis4MinorFaultCar5);
    this->setUnsignedInt(g_dataBuffer + 4007, 4, tdsControllerFaultCar5);
    this->setUnsignedInt(g_dataBuffer + 4007, 5, tdsProcessorFaultCar5);
    this->setUnsignedInt(g_dataBuffer + 4007, 6, tdsSensorFaultCar5);

    this->setUnsignedInt(g_dataBuffer + 4008, 0, tdsAxis1MinorFaultCar6);
    this->setUnsignedInt(g_dataBuffer + 4008, 1, tdsAxis2MinorFaultCar6);
    this->setUnsignedInt(g_dataBuffer + 4008, 2, tdsAxis3MinorFaultCar6);
    this->setUnsignedInt(g_dataBuffer + 4008, 3, tdsAxis4MinorFaultCar6);
    this->setUnsignedInt(g_dataBuffer + 4008, 4, tdsControllerFaultCar6);
    this->setUnsignedInt(g_dataBuffer + 4008, 5, tdsProcessorFaultCar6);
    this->setUnsignedInt(g_dataBuffer + 4008, 6, tdsSensorFaultCar6);

    this->setUnsignedInt(g_dataBuffer + 4009, 0, tdsAxis1MinorFaultCar7);
    this->setUnsignedInt(g_dataBuffer + 4009, 1, tdsAxis2MinorFaultCar7);
    this->setUnsignedInt(g_dataBuffer + 4009, 2, tdsAxis3MinorFaultCar7);
    this->setUnsignedInt(g_dataBuffer + 4009, 3, tdsAxis4MinorFaultCar7);
    this->setUnsignedInt(g_dataBuffer + 4009, 4, tdsControllerFaultCar7);
    this->setUnsignedInt(g_dataBuffer + 4009, 5, tdsProcessorFaultCar7);
    this->setUnsignedInt(g_dataBuffer + 4009, 6, tdsSensorFaultCar7);

    this->setUnsignedInt(g_dataBuffer + 4010, 0, tdsAxis1MinorFaultCar8);
    this->setUnsignedInt(g_dataBuffer + 4010, 1, tdsAxis2MinorFaultCar8);
    this->setUnsignedInt(g_dataBuffer + 4010, 2, tdsAxis3MinorFaultCar8);
    this->setUnsignedInt(g_dataBuffer + 4010, 3, tdsAxis4MinorFaultCar8);
    this->setUnsignedInt(g_dataBuffer + 4010, 4, tdsControllerFaultCar8);
    this->setUnsignedInt(g_dataBuffer + 4010, 5, tdsProcessorFaultCar8);
    this->setUnsignedInt(g_dataBuffer + 4010, 6, tdsSensorFaultCar8);

    // the fault signals of pms
    this->setUnsignedInt(g_dataBuffer + 4020, 0, pmsPantographCleatDeficiencyCar2);
    this->setUnsignedInt(g_dataBuffer + 4020, 1, pmsPantographBlockCar2);
    this->setUnsignedInt(g_dataBuffer + 4020, 2, pmsCarbonFallOffCar2);
    this->setUnsignedInt(g_dataBuffer + 4020, 3, pmsPantographCleatOutOfShapeCar2);
    this->setUnsignedInt(g_dataBuffer + 4020, 4, pmsPantographlittleOutOfShapeCar2);
    this->setUnsignedInt(g_dataBuffer + 4020, 5, pmsPantographSlideAbrasionCar2);
    this->setUnsignedInt(g_dataBuffer + 4020, 6, pmsPantographSlideMajorGapCar2);
    this->setUnsignedInt(g_dataBuffer + 4020, 7, pmsPantographArcCar2);
    this->setUnsignedInt(g_dataBuffer + 4020, 8, pmsPantographTemperatureAbnormalCar2);
    this->setUnsignedInt(g_dataBuffer + 4020, 9, pmsPantographCamera1AbnormalCar2);
    this->setUnsignedInt(g_dataBuffer + 4020, 10, pmsPantographCamera2AbnormalCar2);
    this->setUnsignedInt(g_dataBuffer + 4020, 11, pmsPantographCamera3AbnormalCar2);
    this->setUnsignedInt(g_dataBuffer + 4020, 12, pmsPantographCamera4AbnormalCar2);
    this->setUnsignedInt(g_dataBuffer + 4020, 13, pmsPantographCamera5AbnormalCar2);
    this->setUnsignedInt(g_dataBuffer + 4020, 14, pmsPantographCamera6AbnormalCar2);
    this->setUnsignedInt(g_dataBuffer + 4020, 15, pmsPantographCamera7AbnormalCar2);
    this->setUnsignedInt(g_dataBuffer + 4021, 0, pmsPantographCamera8AbnormalCar2);
    this->setUnsignedInt(g_dataBuffer + 4021, 1, pmsDeviceTemperatureAbnormalCar2);
    this->setUnsignedInt(g_dataBuffer + 4021, 2, pmsControlSystemTemperatureAbnormalCar2);

    this->setUnsignedInt(g_dataBuffer + 4022, 0, pmsPantographCleatDeficiencyCar4);
    this->setUnsignedInt(g_dataBuffer + 4022, 1, pmsPantographBlockCar4);
    this->setUnsignedInt(g_dataBuffer + 4022, 2, pmsCarbonFallOffCar4);
    this->setUnsignedInt(g_dataBuffer + 4022, 3, pmsPantographCleatOutOfShapeCar4);
    this->setUnsignedInt(g_dataBuffer + 4022, 4, pmsPantographlittleOutOfShapeCar4);
    this->setUnsignedInt(g_dataBuffer + 4022, 5, pmsPantographSlideAbrasionCar4);
    this->setUnsignedInt(g_dataBuffer + 4022, 6, pmsPantographSlideMajorGapCar4);
    this->setUnsignedInt(g_dataBuffer + 4022, 7, pmsPantographArcCar4);
    this->setUnsignedInt(g_dataBuffer + 4022, 8, pmsPantographTemperatureAbnormalCar4);
    this->setUnsignedInt(g_dataBuffer + 4022, 9, pmsPantographCamera1AbnormalCar4);
    this->setUnsignedInt(g_dataBuffer + 4022, 10, pmsPantographCamera2AbnormalCar4);
    this->setUnsignedInt(g_dataBuffer + 4022, 11, pmsPantographCamera3AbnormalCar4);
    this->setUnsignedInt(g_dataBuffer + 4022, 12, pmsPantographCamera4AbnormalCar4);
    this->setUnsignedInt(g_dataBuffer + 4022, 13, pmsPantographCamera5AbnormalCar4);
    this->setUnsignedInt(g_dataBuffer + 4022, 14, pmsPantographCamera6AbnormalCar4);
    this->setUnsignedInt(g_dataBuffer + 4022, 15, pmsPantographCamera7AbnormalCar4);
    this->setUnsignedInt(g_dataBuffer + 4023, 0, pmsPantographCamera8AbnormalCar4);
    this->setUnsignedInt(g_dataBuffer + 4023, 1, pmsDeviceTemperatureAbnormalCar4);
    this->setUnsignedInt(g_dataBuffer + 4023, 2, pmsControlSystemTemperatureAbnormalCar4);

    this->setUnsignedInt(g_dataBuffer + 4024, 0, pmsPantographCleatDeficiencyCar7);
    this->setUnsignedInt(g_dataBuffer + 4024, 1, pmsPantographBlockCar7);
    this->setUnsignedInt(g_dataBuffer + 4024, 2, pmsCarbonFallOffCar7);
    this->setUnsignedInt(g_dataBuffer + 4024, 3, pmsPantographCleatOutOfShapeCar7);
    this->setUnsignedInt(g_dataBuffer + 4024, 4, pmsPantographlittleOutOfShapeCar7);
    this->setUnsignedInt(g_dataBuffer + 4024, 5, pmsPantographSlideAbrasionCar7);
    this->setUnsignedInt(g_dataBuffer + 4024, 6, pmsPantographSlideMajorGapCar7);
    this->setUnsignedInt(g_dataBuffer + 4024, 7, pmsPantographArcCar7);
    this->setUnsignedInt(g_dataBuffer + 4024, 8, pmsPantographTemperatureAbnormalCar7);
    this->setUnsignedInt(g_dataBuffer + 4024, 9, pmsPantographCamera1AbnormalCar7);
    this->setUnsignedInt(g_dataBuffer + 4024, 10, pmsPantographCamera2AbnormalCar7);
    this->setUnsignedInt(g_dataBuffer + 4024, 11, pmsPantographCamera3AbnormalCar7);
    this->setUnsignedInt(g_dataBuffer + 4024, 12, pmsPantographCamera4AbnormalCar7);
    this->setUnsignedInt(g_dataBuffer + 4024, 13, pmsPantographCamera5AbnormalCar7);
    this->setUnsignedInt(g_dataBuffer + 4024, 14, pmsPantographCamera6AbnormalCar7);
    this->setUnsignedInt(g_dataBuffer + 4024, 15, pmsPantographCamera7AbnormalCar7);
    this->setUnsignedInt(g_dataBuffer + 4025, 0, pmsPantographCamera8AbnormalCar7);
    this->setUnsignedInt(g_dataBuffer + 4025, 1, pmsDeviceTemperatureAbnormalCar7);
    this->setUnsignedInt(g_dataBuffer + 4025, 2, pmsControlSystemTemperatureAbnormalCar7);

    // the fault of pms online and it is zero valid.
    this->setUnsignedInt(g_dataBuffer + 4030, 0, false == ccuPmsOnlineCar2);
    this->setUnsignedInt(g_dataBuffer + 4030, 1, false == ccuPmsOnlineCar4);
    this->setUnsignedInt(g_dataBuffer + 4030, 2, false == ccuPmsOnlineCar7);

    // the fault of tds online and it is zero valid.
    this->setUnsignedInt(g_dataBuffer + 4031, 0, false == ccuTdsOnlineCar1);
    this->setUnsignedInt(g_dataBuffer + 4031, 1, false == ccuTdsOnlineCar8);
}

bool Dialog::checkCcuOnline(unsigned short int signal)
{
    unsigned short int temp;

    if (temp == signal)
    {
        return false;
    }
    else
    {
        temp = signal;

        return true;
    }
}

void Dialog::synchronizeTimeWithCcu()
{
    if (false == ccuOnline)
    {
        return;
    }
    else if (false == QDate::isValid(2000 + ccuYear, ccuMonth, ccuDay))
    {
        return;
    }
    else if (false == QTime::isValid(ccuHour, ccuMinute, ccuSecond))
    {
        return;
    }

    QDateTime ccuTime(QDate(2000 + ccuYear, ccuMonth, ccuDay),
                            QTime(ccuHour, ccuMinute, ccuSecond));

    // an abs function and i do not know why the function of abs in lib is not valid.
    #define _ABS(X) ((X) > 0 ? (X) : -(X))

    if (_ABS(ccuTime.toTime_t() - QDateTime::currentDateTime().toTime_t()) > 5)
    {
        QDate date(2000 + ccuYear, ccuMonth, ccuDay);
        QTime time(ccuHour, ccuMinute, ccuSecond);

        QString dateString = date.toString("yyyy-MM-dd");
        QString timeString = time.toString("hh:mm:ss");
        QString command = "date -s \"";

        dateString.replace(QRegExp("-"), "");
        timeString.replace(QRegExp("-"), ":");
        command = command + dateString + " " + timeString + "\"";

        const char *c = command.toAscii().data();

        // linux command
        system(c);

        // write bios
        system("hwclock -w");
    }
}

void Dialog::setUnsignedInt(unsigned short int *pointer, unsigned short int bitOffset, bool value) const
{
    if (value)
    {
        *pointer = *pointer | (0x0001 << bitOffset);
    }
    else
    {
        *pointer = *pointer & ~(0x0001 << bitOffset);
    }
}
