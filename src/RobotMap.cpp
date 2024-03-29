// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"

//access pointer objects declared in RobotMap.h file
std::shared_ptr<CANTalon> RobotMap::drivetrainFrontLeftMotor;
std::shared_ptr<CANTalon> RobotMap::drivetrainRearLeftMotor;
std::shared_ptr<CANTalon> RobotMap::drivetrainFrontRightMotor;
std::shared_ptr<CANTalon> RobotMap::drivetrainRearRightMotor;
std::shared_ptr<frc::RobotDrive> RobotMap::drivetrainchassis;
std::shared_ptr<frc::DoubleSolenoid> RobotMap::shooterSolenoid;
std::shared_ptr<CANTalon> RobotMap::shooterMotor;
std::shared_ptr<frc::DigitalInput> RobotMap::shooterPhotoeye;
std::shared_ptr<frc::DoubleSolenoid> RobotMap::intakeSolenoid;
std::shared_ptr<CANTalon> RobotMap::intakeMotor;


//runs on startup of the robot
void RobotMap::init() {
	//assign ports and settings to pointer objects declared in RobotMap.h
    frc::LiveWindow *lw = frc::LiveWindow::GetInstance();

    drivetrainFrontLeftMotor.reset(new CANTalon(5)); //good
    lw->AddActuator("Drivetrain", "FrontLeftMotor", drivetrainFrontLeftMotor);
    
    drivetrainRearLeftMotor.reset(new CANTalon(2));
    lw->AddActuator("Drivetrain", "RearLeftMotor", drivetrainRearLeftMotor); //good
    
    drivetrainFrontRightMotor.reset(new CANTalon(4));
    lw->AddActuator("Drivetrain", "FrontRightMotor", drivetrainFrontRightMotor); //good
    
    drivetrainRearRightMotor.reset(new CANTalon(7));
    lw->AddActuator("Drivetrain", "RearRightMotor", drivetrainRearRightMotor); //good
    
    drivetrainchassis.reset(new frc::RobotDrive(drivetrainFrontLeftMotor, drivetrainRearLeftMotor,
              drivetrainFrontRightMotor, drivetrainRearRightMotor));
    
    drivetrainchassis->SetSafetyEnabled(false);
        drivetrainchassis->SetExpiration(0.5);
        drivetrainchassis->SetSensitivity(0.5);
        drivetrainchassis->SetMaxOutput(1.0);

    shooterSolenoid.reset(new frc::DoubleSolenoid(1, 2, 3));
    lw->AddActuator("Shooter", "Solenoid", shooterSolenoid); //good

    shooterMotor.reset(new CANTalon(9));
    lw->AddActuator("Shooter", "Motor", shooterMotor); //good

    shooterPhotoeye.reset(new frc::DigitalInput(4));
    lw->AddSensor("Shooter", "Photoeye", shooterPhotoeye); //good

    intakeSolenoid.reset(new frc::DoubleSolenoid(1, 0, 1));
    lw->AddActuator("Intake", "Solenoid", intakeSolenoid); //good

    intakeMotor.reset(new CANTalon(8));
    lw->AddActuator("Intake", "Motor", intakeMotor); //good

}
