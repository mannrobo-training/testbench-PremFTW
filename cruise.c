#pragma config(Sensor, in1,    pwrExp,         sensorAnalog)
#pragma config(Sensor, in4,    pot,            sensorPotentiometer)
#pragma config(Sensor, dgtl1,  quad,           sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  limit,          sensorTouch)
#pragma config(Sensor, dgtl4,  bump,           sensorTouch)
#pragma config(Sensor, dgtl5,  ledGreen,       sensorLEDtoVCC)
#pragma config(Sensor, dgtl6,  ledYellow,      sensorLEDtoVCC)
#pragma config(Sensor, dgtl7,  ledRed,         sensorLEDtoVCC)
#pragma config(Sensor, dgtl8,  jumper,         sensorTouch)
#pragma config(Sensor, dgtl11, ultrasonic,     sensorSONAR_inch)
#pragma config(Motor,  port2,           drive,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           drive,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           drive,         tmotorVex393_MC29, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	float maxPotValue = 4000.0;
	float maxMotValue = 127.0;
	while(true)
	{

		float motValue = 0.0;
		float currentPotValue = SensorValue[pot];
		motValue = (maxMotValue/maxPotValue)*currentPotValue;
		motor[drive] = motValue;
	}

}
