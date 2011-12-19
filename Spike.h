#include "WPILib.h"
#include "Globals.h"

class Spike : public IterativeRobot
{
	RobotDrive * Drive;
	Joystick * rightjoy;
	Joystick * leftjoy;

public:
	Spike();
	~Spike();
	
	//Init functions
	void RobotInit();
	void AutonomousInit();
	void DisabledInit();
	void TeleopInit();
	
	//Periodic functions
	void AutonomousPeriodic();
	void DisabledPeriodic();
	void TeleopPeriodic();
	
	//Continous functions
	void AutonomousContinuous();
	void DisabledContinuous();
	void TeleopContinuous();
	
	//Unknown
	void sendIOPortData();
		
};
