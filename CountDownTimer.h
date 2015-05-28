/* Count Down Timer */
#ifndef CountDownTimer_h
#define CountDownTimer_h

#include "Arduino.h"

class CountDownTimer
{
  public:
    CountDownTimer();
	bool Timer();
	void ResetTimer();
	void StartTimer();
	void StopTimer();
	void StopTimerAt(unsigned long hours, unsigned long minutes, unsigned long seconds);
	void PauseTimer();
	void ResumeTimer(); // You can resume the timer if you ever stop it.
	void SetTimer(unsigned long hours, unsigned long minutes, unsigned long seconds);
	void SetTimer(unsigned long seconds);
	long ShowHours();
	long ShowMinutes();
	long ShowSeconds();
	unsigned long ShowMilliSeconds();
	unsigned long ShowMicroSeconds();
	bool TimeHasChanged();
	bool TimeCheck(unsigned long hours, unsigned long minutes, unsigned long seconds); // output true if timer equals requested time
	
    private:
		unsigned long Watch, _micro, time = micros();
		unsigned long Clock = 0, R_clock;
		bool Reset = false, Stop = false, Paused = false;
		volatile bool timeFlag = false;
};

#endif
