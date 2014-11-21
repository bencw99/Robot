#include "Robot.h"

Robot::Robot():
	driveTrain()
{
	
}

void Robot::update()
{
	driveTrain.update();
}

void Robot::disable()
{
	driveTrain.disable();
}

void Robot::setMovement(float movementSpeed)
{
	driveTrain.setMovement(movementSpeed);
}
void Robot::setRotation(float rotationSpeed)
{
	driveTrain.setRotation(rotationSpeed);
}
