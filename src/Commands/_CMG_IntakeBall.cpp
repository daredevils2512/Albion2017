#include "_CMG_IntakeBall.h"
#include "Commands/IntakeActuate.h"
#include "Commands/ShooterActuate.h"
#include "Commands/ShooterSpeed.h"
#include "Commands/IntakeSpeed.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

_CMG_IntakeBall::_CMG_IntakeBall() {
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR
     // Add Commands here:
    // e.g. AddSequential(new Command1());
    //      AddSequential(new Command2());
    // these will run in order.

    // To run multiple commands at the same time,
    // use AddParallel()
    // e.g. AddParallel(new Command1());
    //      AddSequential(new Command2());
    // Command1 and Command2 will run in parallel.

    // A command group will require all of the subsystems that each member
    // would require.
    // e.g. if Command1 requires chassis, and Command2 requires arm,
    // a CommandGroup containing them would require both the chassis and the
    // arm.
		AddParallel(new IntakeActuate(false));
        AddParallel(new ShooterActuate(true));
        AddParallel(new ShooterSpeed(0.6, false));
        AddSequential(new IntakeSpeed(0.9));
        AddParallel(new ShooterSpeed(0.0, false));
        AddSequential(new ShooterActuate(false));
 }