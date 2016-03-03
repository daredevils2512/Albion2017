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


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<CANTalon> RobotMap::drivetrainFrontLeftMotor;
std::shared_ptr<CANTalon> RobotMap::drivetrainRearLeftMotor;
std::shared_ptr<CANTalon> RobotMap::drivetrainFrontRightMotor;
std::shared_ptr<CANTalon> RobotMap::drivetrainRearRightMotor;
std::shared_ptr<RobotDrive> RobotMap::drivetrainchassis;
std::shared_ptr<Encoder> RobotMap::drivetrainLeftEncoder;
std::shared_ptr<Encoder> RobotMap::drivetrainRightEncoder;
std::shared_ptr<DoubleSolenoid> RobotMap::shooterSolenoid;
std::shared_ptr<CANTalon> RobotMap::shooterMotor;
std::shared_ptr<DigitalInput> RobotMap::shooterPhotoeye;
std::shared_ptr<DoubleSolenoid> RobotMap::intakeSolenoid;
std::shared_ptr<CANTalon> RobotMap::intakeMotor;
std::shared_ptr<CANTalon> RobotMap::climberHookMotor;
std::shared_ptr<CANTalon> RobotMap::climberLeftWinchMotor;
std::shared_ptr<CANTalon> RobotMap::climberRightWinchMotor;
std::shared_ptr<Encoder> RobotMap::climberHookEncoder;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<Relay> RobotMap::compressorSpike;
std::shared_ptr<DigitalInput> RobotMap::compressorPressureSwitch;

void RobotMap::init() {
	//assign ports and settings to things declared in RobotMap.h
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    drivetrainFrontLeftMotor.reset(new CANTalon(4));
    lw->AddActuator("Drivetrain", "FrontLeftMotor", drivetrainFrontLeftMotor);
    
    drivetrainRearLeftMotor.reset(new CANTalon(6));
    lw->AddActuator("Drivetrain", "RearLeftMotor", drivetrainRearLeftMotor);
    
    drivetrainFrontRightMotor.reset(new CANTalon(0));
    lw->AddActuator("Drivetrain", "FrontRightMotor", drivetrainFrontRightMotor);
    
    drivetrainRearRightMotor.reset(new CANTalon(8));
    lw->AddActuator("Drivetrain", "RearRightMotor", drivetrainRearRightMotor);
    
    drivetrainchassis.reset(new RobotDrive(drivetrainFrontLeftMotor, drivetrainRearLeftMotor,
              drivetrainFrontRightMotor, drivetrainRearRightMotor));
    
    drivetrainchassis->SetSafetyEnabled(false);
        drivetrainchassis->SetExpiration(0.5);
        drivetrainchassis->SetSensitivity(0.5);
        drivetrainchassis->SetMaxOutput(1.0);

    drivetrainLeftEncoder.reset(new Encoder(0, 1, false, Encoder::k4X));
    lw->AddSensor("Drivetrain", "LeftEncoder", drivetrainLeftEncoder);
    drivetrainLeftEncoder->SetDistancePerPulse(0.0153846154);
    drivetrainLeftEncoder->SetPIDSourceType(PIDSourceType::kRate);
    drivetrainRightEncoder.reset(new Encoder(2, 3, false, Encoder::k4X));
    lw->AddSensor("Drivetrain", "RightEncoder", drivetrainRightEncoder);
    drivetrainRightEncoder->SetDistancePerPulse(0.0153846154);
    drivetrainRightEncoder->SetPIDSourceType(PIDSourceType::kRate);

    shooterSolenoid.reset(new DoubleSolenoid(1, 0, 1));
    lw->AddActuator("Shooter", "Solenoid", shooterSolenoid);
    
    shooterMotor.reset(new CANTalon(9));
    lw->AddActuator("Shooter", "Motor", shooterMotor);
    
    shooterPhotoeye.reset(new DigitalInput(5));
    lw->AddSensor("Shooter", "Photoeye", shooterPhotoeye);
    
    intakeSolenoid.reset(new DoubleSolenoid(1, 2, 3));
    lw->AddActuator("Intake", "Solenoid", intakeSolenoid);
    
    intakeMotor.reset(new CANTalon(3));
    lw->AddActuator("Intake", "Motor", intakeMotor);
    
    climberHookMotor.reset(new CANTalon(7));
    lw->AddActuator("Climber", "HookMotor", climberHookMotor);
    
    climberLeftWinchMotor.reset(new CANTalon(10));
    lw->AddActuator("Climber", "LeftWinchMotor", climberLeftWinchMotor);
    
    climberRightWinchMotor.reset(new CANTalon(5));
    lw->AddActuator("Climber", "RightWinchMotor", climberRightWinchMotor);
    
    climberHookEncoder.reset(new Encoder(6, 7, false, Encoder::k4X));
    lw->AddSensor("Climber", "HookEncoder", climberHookEncoder);
    climberHookEncoder->SetDistancePerPulse(1.0);
    climberHookEncoder->SetPIDSourceType(PIDSourceType::kRate);


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    compressorSpike.reset(new Relay(1));
    lw->AddActuator("Compressor", "CompressorSpike", compressorSpike);

    compressorPressureSwitch.reset(new DigitalInput(1));
	lw->AddSensor("Compressor", "CompressorPressureSwitch", compressorPressureSwitch);
}
