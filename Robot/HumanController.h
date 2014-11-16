#ifndef HUMANCONTROLLER_H
#define HUMANCONTROLLER_H
#include "Constants.h"
#include <WPILib.h>
#include <stdlib.h>
#include <iostream>

class HumanController
{
	private:
		Robot *robot;
		Joystick movementController;
		Joystick rotationCOntroller;
		
		float getMovement();
		float getRotation();
		
	public:
		HumanController(Robot *robot);
		void update();
}

#endif
