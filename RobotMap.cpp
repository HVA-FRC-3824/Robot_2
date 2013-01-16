// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
SpeedController* RobotMap::drivetrainRightMotor = NULL;
SpeedController* RobotMap::drivetrainLeftMotor = NULL;
RobotDrive* RobotMap::drivetrainTankDrive = NULL;
SpeedController* RobotMap::shooterShooterVictor = NULL;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();
	drivetrainRightMotor = new Victor(1, 1);
	lw->AddActuator("Drivetrain", "Right Motor", (Victor*) drivetrainRightMotor);
	
	drivetrainLeftMotor = new Victor(1, 2);
	lw->AddActuator("Drivetrain", "Left Motor", (Victor*) drivetrainLeftMotor);
	
	drivetrainTankDrive = new RobotDrive(drivetrainLeftMotor, drivetrainRightMotor);
	
	drivetrainTankDrive->SetSafetyEnabled(false);
        drivetrainTankDrive->SetExpiration(0.1);
        drivetrainTankDrive->SetSensitivity(0.5);
        drivetrainTankDrive->SetMaxOutput(1.0);
        
	shooterShooterVictor = new Victor(1, 4);
	lw->AddActuator("Shooter", "Shooter Victor", (Victor*) shooterShooterVictor);
	
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
