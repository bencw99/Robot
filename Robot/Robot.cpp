#include "Robot.h"

Robot::Robot():
	driveTrain(),
	HumanController(this)
{
	
}

void Robot::RobotInit()
{

}

void Robot::AutonomousInit()
{

}

void Robot::AutonomousPeriodic()
{

}

void Robot::AutonomousDisabled()
{

}

void Robot::DisabledInit()
{

}

void Robot::DisabledPeriodic()
{

}

void Robot::TeleopInit()
{

}

void Robot::TeleopPeriodic()
{
	humanController.update();
	driveTrain.update();
}

void Robot::TeleopDisabled()
{
	driveTrain.disable();
}

void Robot::TestInit()
{

}

void Robot::TestPeriodic()
{

}

void Robot::setMovement(float movementSpeed)
{
	driveTrain.setMovement(movementSpeed);
}
void Robot::setRotation(float rotationSpeed)
{
	driveTrain.setRotation(rotationSpeed);
}
