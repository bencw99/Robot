#ifndef EBBOT_H
#define EBBOT_H
#include <WPILib.h>
#include "Robot.h"
#include "HumanController.h"

class EBBot: public IterativeRobot
{
	private:
		Robot robot;
		HumanController humanController;
		
	public:
		EBBot();
		void RobotInit();
		void AutonomousInit();
		void AutonomousPeriodic();
		void AutonomousDisabled();
		void DisabledInit();
		void DisabledPeriodic();
		void TeleopInit();
		void TeleopPeriodic();
		void TeleopDisabled();
		void TestInit();
		void TestPeriodic();
};

#endif
