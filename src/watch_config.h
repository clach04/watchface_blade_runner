#pragma once

#define USE_GENERIC_MAIN
#undef FONT_NAME
//#define FONT_NAME RESOURCE_ID_FONT_TIME_80
// I think 80 is the correct size for Aplite/Basalt but this is not supported by SDK
#define FONT_NAME RESOURCE_ID_FONT_TIME_60  // works but a little small
//#define FONT_NAME RESOURCE_ID_FONT_TIME_65  /// does NOT work
//#define FONT_NAME RESOURCE_ID_FONT_TIME_70  // does NOT work NOTE 08:17 minutes were OK (not hours)

#undef FONT_SYSTEM_NAME  /* the default font system will be used */
#undef DEBUG_TIME

#define TIME_FMT_STR_24H "%H\n%M"
#define TIME_FMT_STR_12H "%I\n%M"  // produces leading zero for hour and minute
//#define TIME_FMT_STR_12H "%l\n%M"  // no leading zero for hour
#define MAX_TIME_STR "00\n00"

#define DRAW_BATTERY
#define DRAW_SMALL_BATTERY

#ifdef PBL_ROUND /* 180x180 */
/*TODO center/move right*/
    #define CLOCK_POS GRect(0, 52, 180, 180) /* probably taller than really needed */
    #define HEALTH_POS GRect(0, 40, 180, 180)
    #define BT_POS GRect(0, 100, 180, 180) /* probably taller than really needed */

    #define DATE_ALIGN GTextAlignmentCenter
    #define DATE_POS GRect(0, 120, 180, 180) /* probably taller than really needed */

    #define BAT_ALIGN GTextAlignmentCenter
    #ifdef DRAW_BATTERY
        #define BAT_POS GRect(85, 10, 180, 180) /* probably taller than really needed */
    #else
        #define BAT_POS GRect(0, 140, 180, 180) /* probably taller than really needed */
    #endif /* DRAW_BATTERY */

#else /* PBL_RECT 144x168*/
    #define CLOCK_POS GRect(0, 0, 144, 168) /* probably taller than really needed */
    #define HEALTH_POS GRect(0, 40, 144, 168)
    #define BT_POS GRect(0, 120, 144, 168) /* probably taller than really needed */
    #define DATE_POS GRect(0, 140, 144, 168) /* probably taller than really needed */
    #ifdef DRAW_BATTERY
        #define BAT_POS GRect(5, 150, 144, 168)
    #else
        #define BAT_POS GRect(0, 140, 144, 168) /* probably taller than really needed */
    #endif /* DRAW_BATTERY */
#endif /* end of Round or rectangle */

/* for screen shots and font testing
#define DEBUG_TIME
#define DEBUG_TIME_SCREENSHOT
 */
