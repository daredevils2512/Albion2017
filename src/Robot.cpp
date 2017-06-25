// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "Robot.h"

//access pointer objects delcared in Robot.h
std::shared_ptr<Drivetrain> Robot::drivetrain;
std::shared_ptr<Shooter> Robot::shooter;
std::shared_ptr<Intake> Robot::intake;
std::unique_ptr<OI> Robot::oi;
std::shared_ptr<frc::Compressor> Robot::compressor;

void Robot::RobotInit() {
	RobotMap::init();
	//start subsystems
    drivetrain.reset(new Drivetrain());
    shooter.reset(new Shooter());
    intake.reset(new Intake());
    //starts operator interface
	oi.reset(new OI());

	compressor.reset(new frc::Compressor());

	//instantiate the command used for the autonomous period
  }

void Robot::DisabledInit(){
	compressor->SetClosedLoopControl(false);
}

void Robot::DisabledPeriodic() {
	frc::Scheduler::GetInstance()->Run();
	//the joystick throttle

	//puts if we are using the chooser or not on the smartdashboard
	frc::SmartDashboard::PutBoolean("Using Chooser", useChooser);
}

void Robot::AutonomousInit() {	//start autonomous
	Robot::drivetrain->SetAutonomous(true);

	if (autonomousCommand.get() != nullptr)
		autonomousCommand->Start();
	//resets drivetrain encoders to zero
}

void Robot::AutonomousPeriodic() {
	frc::Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit() {
	//stops autonomous command
	if (autonomousCommand.get() != nullptr)
		autonomousCommand->Cancel();
	Robot::drivetrain->SetAutonomous(false);
	compressor->SetClosedLoopControl(true);
}

void Robot::TeleopPeriodic() {
	frc::Scheduler::GetInstance()->Run();
	//print information to smartdashboard
	frc::SmartDashboard::PutBoolean("Nos status" , Robot::oi->DriveNosKick());
	frc::SmartDashboard::PutBoolean("Ball in", RobotMap::shooterPhotoeye->Get());
	frc::SmartDashboard::PutNumber("front right current" , RobotMap::drivetrainFrontRightMotor->GetOutputCurrent());
	frc::SmartDashboard::PutNumber("front left current" , RobotMap::drivetrainFrontLeftMotor->GetOutputCurrent());
	frc::SmartDashboard::PutNumber("rear right current" , RobotMap::drivetrainRearRightMotor->GetOutputCurrent());
	frc::SmartDashboard::PutNumber("rear left current" , RobotMap::drivetrainRearLeftMotor->GetOutputCurrent());


}

void Robot::TestPeriodic() {
	lw->Run();
}

START_ROBOT_CLASS(Robot);

