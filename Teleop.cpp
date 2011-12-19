#include "Spike.h"
#include "math.h"

void Spike::TeleopInit() 
{
	GetWatchdog().SetEnabled(false);
}

void Spike::TeleopPeriodic() 
{
	GetWatchdog().Feed();
	sendIOPortData();
	
	float l_axis_x = leftjoy->GetRawAxis(1);
	float l_axis_y = leftjoy->GetRawAxis(2);
	float r_axis_x = rightjoy->GetRawAxis(1);
	float r_axis_y = rightjoy->GetRawAxis(2);
	
	float l_tank = sqrt(pow(l_axis_y,2)+pow(l_axis_x,2))*fabs(l_axis_y)/l_axis_y;
	float r_tank = sqrt(pow(r_axis_y,2)+pow(r_axis_x,2))*fabs(r_axis_y)/r_axis_y;
	
	Drive->TankDrive(l_tank,r_tank);
}


void Spike::TeleopContinuous(void)
{
	
}
