// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "ShootDisk.h"
#include "../Subsystems/Shooter.h"
ShootDisk::ShootDisk() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::shooter);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// Called just before this Command runs the first time
void ShootDisk::Initialize() {
	
}
// Called repeatedly when this Command is scheduled to run
void ShootDisk::Execute() {
	printf("\tIn void ShootDisk::Execute() \n");
		
		//	From feeder station, a value of .598 hits top goal
		//	Since the twist goes from -1 to 1, and spinning into the robot is bad, 
		//	we added one and divided by 2 for finer control over speed.
		Robot::shooter->SetWheelSpeed(((Robot::oi->getDriveJoystickRight()->GetTwist() + 1.0f) / 2.0f)); 
		
		SmartDashboard::PutNumber("Shooter Value", ((Robot::oi->getDriveJoystickRight()->GetTwist() + 1.0f) / 2.0f)); 
		printf("\tOut void ShootDisk::Execute() \n");
}
// Make this return true when this Command no longer needs to run execute()
bool ShootDisk::IsFinished() {
	return false;
}
// Called once after isFinished returns true
void ShootDisk::End() {
	Robot::shooter->SetWheelSpeed(0.0f);
		//ShooterStop();
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShootDisk::Interrupted() {
	End();
}
