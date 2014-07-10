#include <stdio.h>
#include "ServoMotor.h"
#include "clock.h"



void servoMotor(int angle){

	int clockStart;
	int returnValue;
	
	while(1){
		clockStart = getCurrentClock();
		//while(returnValue != 2)}{
			returnValue = pulseWaveGenerator(clockStart,angle);
		//}
	}
	

}
int pulseWaveGenerator(int clockStart,int angle){
	

		while( (getCurrentClock() - clockStart) <= angle)
			return 1;
		
		while( (getCurrentClock() - clockStart) <= 200)
			return 0;
			
		return 2;
}
