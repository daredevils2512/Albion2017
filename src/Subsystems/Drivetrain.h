// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Drivetrain: public Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<CANTalon> frontLeftMotor;
	std::shared_ptr<CANTalon> rearLeftMotor;
	std::shared_ptr<CANTalon> frontRightMotor;
	std::shared_ptr<CANTalon> rearRightMotor;
	std::shared_ptr<RobotDrive> chassis;
	std::shared_ptr<Encoder> leftEncoder;
	std::shared_ptr<Encoder> rightEncoder;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	bool blockJoysticks;
public:
	Drivetrain();
	void InitDefaultCommand();
	void DriveRobot(double move, double turn);
	void AutonTankDrive(double left, double right);
	void ResetEncoders();
	bool CheckDistance(double distance);
	void SetAutonomous(bool isAutonomous);
	bool GetAutonomous();
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
};

#endif
