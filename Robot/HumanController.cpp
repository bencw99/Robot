#include "HumanController.h"

HumanController::HumanController(Robot *robot):
	movementController((uint32_t) PORT_SPEED_CONTROLLER), 
	rotationController((uint32_t) PORT_TURN_CONTROLLER)
{
	this->robot = robot;
}

void HumanController::update()
{
	robot->setMovement(getMovementSpeed());
	robot->setRotation(getRotationSPeed());
}

float HumanController::getMovementSpeed()
{
	return movementController.GetY();
}

float HumanController::getRotationSpeed()
{
	return rotationController.GetX();
}
