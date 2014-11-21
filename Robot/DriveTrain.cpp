#include "DriveTrain.h"
#include "Constants.h"

DriveTrain::DriveTrain():
	backLeftVic((uint32_t) PORT_DRIVE_VIC_LEFT_BACK),
	backRightVic((uint32_t) PORT_DRIVE_VIC_RIGHT_BACK),
	frontLeftVic((uint32_t) PORT_DRIVE_VIC_LEFT_FRONT),
	frontRightVic((uint32_t) PORT_DRIVE_VIC_RIGHT_FRONT)
{
	stop();
}

void DriveTrain::update()
{
	double leftSpeed = min(max(movementSpeed - rotationSpeed, -1), 1);
	double rightSpeed = min(max(movementSpeed + rotationSpeed, -1), 1);
	
	backLeftVic.Set(-leftSpeed);
	frontLeftVic.Set(-leftSpeed);
	backRightVic.Set(rightSpeed);
	frontRightVic.Set(rightSpeed);
}

void DriveTrain::setMovement(float movementSpeed)
{
	this->movementSpeed = movementSpeed;
}

void DriveTrain::setRotation(float rotationSpeed)
{
	this->rotationSpeed = rotationSpeed;
}

void DriveTrain::stop()
{
	setMovement(0);
	setRotation(0);
}

void DriveTrain::disable()
{
	stop();
}

