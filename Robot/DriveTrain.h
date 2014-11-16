#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "WPILib.h"

class DriveTrain
{
	private:
		Victor backLeftVic;
		Victor backRightVic;
		Victor frontLeftVic;
		Victor frontRIghtVic;
		
	public:
		DriveTrain();
		void setSpeed(float speed);
		void setRotation(float rotation);
		void stop();
		void disable();
}

#endif
