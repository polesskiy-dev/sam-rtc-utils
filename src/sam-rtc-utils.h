/**
 * @file:   sam-rtc-utils.h
 * @author: apolisskyi
 *
 * @date August 14, 2022, 9:31 PM
 *
 * @brief RTC utils library
 *
 * @details Designed for embedded. Tested on Microchip SAM chips with XC32 compiler.
 */

#ifndef SAM_RTC_UTILS_H
#define	SAM_RTC_UTILS_H

#ifdef	__cplusplus
extern "C" {
#endif

/**
 * @brief Get system time and store it to standard tm struct
 *
 * @details Get current time (during compilation) from "__DATE__" "__TIME__" macros and transform it to <time.h> tm struct from curTimeTm
 *
 * @param curTimeTm[out] tm struct to store current time
 */
void getCurrentTimeTm (struct tm* curTimeTm);

#ifdef	__cplusplus
}
#endif

#endif	/* SAM_RTC_UTILS_H */

