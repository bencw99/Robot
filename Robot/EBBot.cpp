#include "EBBot.h"

EBBot::EBBot():
	robot(),
	humanController(&robot)
{
	
}

void EBBot::RobotInit() 
{

}

void EBBot::AutonomousInit() 
{
	
}

void EBBot::AutonomousPeriodic() 
{
	robot.update();
}

void EBBot::AutonomousDisabled() 
{
}

void EBBot::DisabledInit() 
{
	robot.disable();
}

void EBBot::DisabledPeriodic() 
{
	robot.disable();
	robot.update();
}

void EBBot::TeleopInit() 
{
	
}

void EBBot::TeleopPeriodic() 
{
	humanController.update();
	robot.update();
}

void EBBot::TeleopDisabled() 
{
	robot.disable();
	robot.update();
}

void EBBot::TestInit() 
{
}

void EBBot::TestPeriodic() 
{
	
}

START_ROBOT_CLASS(EBBot);
