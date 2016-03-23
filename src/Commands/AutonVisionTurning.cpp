#include "AutonVisionTurning.h"

AutonVisionTurning::AutonVisionTurning()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	SetTimeout(0.2);
}

// Called just before this Command runs the first time
void AutonVisionTurning::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void AutonVisionTurning::Execute()
{
	target = Robot::visionTracking->GetTargetX();
	if(target.HasValue()) {
		if(target.GetValue() > UPPER_LIMIT) {
			Robot::drivetrain->AutonTankDrive(0.8, -0.8);
		}else if(target.GetValue() < LOWER_LIMIT) {
			Robot::drivetrain->AutonTankDrive(-0.8, 0.8);
		}else{
			onTarget = true;
		}
	}
}

// Make this return true when this Command no longer needs to run execute()
bool AutonVisionTurning::IsFinished()
{
	if(onTarget) {
		return true;
	}else{
		return IsTimedOut();
	}
}

// Called once after isFinished returns true
void AutonVisionTurning::End()
{
	Robot::drivetrain->DriveRobot(0.0, 0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonVisionTurning::Interrupted()
{

}
