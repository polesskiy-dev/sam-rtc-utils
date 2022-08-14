/**
 * @file:   sam-rtc-utils.h
 * @author: apolisskyi
 *
 * @date August 14, 2022, 9:31 PM
 *
 * @brief Microchip SAM devices RTC utils library. Tested on ATSAMD21E17D microcontroller
 */

#ifndef SAM_RTC_UTILS_H
#define	SAM_RTC_UTILS_H

#ifdef	__cplusplus
extern "C" {
#endif

/**
 * @brief Get current time in passed tm struct from "__DATE__" "__TIME__" compiler macros,
 * see <time.h> for tm struct description
 *
 * @param curTimeTm tm struct to store current time
 */
void getCurrentTimeTm (struct tm* curTimeTm);

#ifdef	__cplusplus
}
#endif

#endif	/* SAM_RTC_UTILS_H */

