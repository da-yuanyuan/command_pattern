#include <iostream>
#include <string>

#include "Command.h"

void ConcreteCommand::execute() {
	cout << "ConcreteCommand " << name << endl;
}

void MacroCommand::add_command(Command* cmd) {
	commands.push_back(cmd);
}

void MacroCommand::execute() {
	for (auto& a : commands) {
		a->execute();
	}
	return;
}