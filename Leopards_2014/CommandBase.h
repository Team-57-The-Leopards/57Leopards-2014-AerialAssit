#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Command.h"
#include "Subsystems/Chassis.h"
#include "Subsystems/Launcher.h"
#include "Subsystems/IntakeArms.h"
#include "Subsystems/IntakeRollers.h"
#include "OI.h"
#include "Subsystems/Sensors.h"

/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(const char *name);
	CommandBase();
	static void init();
	// Create a single static instance of all of your subsystems
	static OI *oi;
	static Chassis *chassis;
	static Launcher *launcher;
	static IntakeArms *intakearms;
	static IntakeRollers *intakerollers;
	static Sensors *sensors;

};

#endif
