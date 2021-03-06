#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include <WPILib.h>
#include <stdlib.h>
#include <iostream>

class DriveTrain
{
	private:
		Victor backLeftVic;
		Victor backRightVic;
		Victor frontLeftVic;
		Victor frontRightVic;
		
		double movementSpeed;
		double rotationSpeed;
	public:
		DriveTrain();
		void update();
		void setMovement(float movementSpeed);
		void setRotation(float rotationSpeed);
		void stop();
		void disable();
};

#endif
