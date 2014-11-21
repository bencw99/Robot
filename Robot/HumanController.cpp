#include "HumanController.h"

HumanController::HumanController(Robot *robot):
	movementController((uint32_t) PORT_SPEED_CONTROLLER), 
	rotationController((uint32_t) PORT_TURN_CONTROLLER)
{
	this->robot = robot;
}

void HumanController::update()
{
	robot->setMovement(this->getMovement());
	robot->setRotation(this->getRotation());
}

double HumanController::getMovement()
{
	return movementController.GetY();
}

double HumanController::getRotation()
{
	return rotationController.GetX();
}
