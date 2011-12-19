#include "Spike.h"

	Spike::Spike(void)
	{ 
		GetWatchdog().SetExpiration(10.0);//set up watchdog
		GetWatchdog().SetEnabled(true);
		
		Drive = new RobotDrive(LEFT_DRV_PWM,RIGHT_DRV_PWM);
		rightjoy = new Joystick(1);
		leftjoy = new Joystick(2);

	}
	
	Spike::~Spike() 
	{
		delete Drive;
		delete rightjoy;
		delete leftjoy;
	}

START_ROBOT_CLASS(Spike);
