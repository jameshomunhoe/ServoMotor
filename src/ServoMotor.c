#include <stdio.h>
#include "ServoMotor.h"
#include "clock.h"


int pulseWaveGenerator(int angle){
	
	int clockStart = getCurrentClock();
	
		while( (getCurrentClock() - clockStart) <= angle)
			return 1;
		
		while( (getCurrentClock() - clockStart) <= 200)
			return 0;
			
		return 2;
}
