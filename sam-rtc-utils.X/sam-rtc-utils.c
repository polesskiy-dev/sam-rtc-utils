/**
 * @file:   sam-rtc-utils.c
 * @author: apolisskyi
 *
 * @date August 14, 2022, 9:31 PM
 *
 * @brief Microchip SAM devices RTC utils library realization.
 */
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "sam-rtc-utils.h"

void getCurrentTimeTm (struct tm* curTimeTm) {
    const short YEAR_SHIFT =    1900U;
    const char* curTime =           __TIME__;
    const char* curDate =           __DATE__;

    const char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug",
                            "Sep", "Oct", "Nov", "Dec"};
    char month[4];

    sscanf(curTime,"%d:%d:%d",&curTimeTm->tm_hour,&curTimeTm->tm_min,&curTimeTm->tm_sec);
    sscanf(curDate,"%s %d %d",month,&curTimeTm->tm_mday,&curTimeTm->tm_year);

    curTimeTm->tm_year-=YEAR_SHIFT;
    for (short i = 0; i < 12; i++)
        if (!strcmp(month, months[i])) {
            curTimeTm->tm_mon = i;
            return;
        };
};