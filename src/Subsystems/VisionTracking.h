// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef VISIONTRACKING_H
#define VISIONTRACKING_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "Nullable.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class VisionTracking: public Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<NetworkTable> table;
	std::shared_ptr<AxisCamera> camera;
public:
	VisionTracking();
	void InitDefaultCommand();
	Nullable<double> GetTargetX();
	void cameraAuton();
	void cameraTeleop();
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
};

#endif