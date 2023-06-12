#include <am.h>
#include <npc.h>

__attribute__((unused)) static uint64_t start_time = 0;

void __am_timer_init() {
  start_time = (uint64_t)inl(RTC_ADDR) | ((uint64_t)inl(RTC_ADDR + WORD_L) << 32);
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
	uptime->us = ((uint64_t)inl(RTC_ADDR) << 0) | ((uint64_t)inl(RTC_ADDR + WORD_L) << 32);
	uptime->us -= start_time;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
