#ifndef ROBOT_H
#define ROBOT_H
#include <WPILib.h>
#include "Constants.h"
#include "DriveTrain.h"
#include "HumanController.h"

class Robot::public IterativeRobot
{
	private:
		DriveTrain driveTrain;
		HumanController humanController;

	public:
		Robot();
		void setMovement(float movementSpeed);
		void setRotation(float rotationSpeed);
}

#endif
