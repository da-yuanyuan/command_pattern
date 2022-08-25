#ifndef COMMAND_H__
#define COMMAND_H__
#include <vector>

using namespace std;

class Command
{
public:
	virtual ~Command() { ; }
	virtual void execute() = 0;
};

class ConcreteCommand : public Command
{
private:
	string name;
public:
	ConcreteCommand(const string& s) : name(s) { ; }
	void execute();
};

class MacroCommand : public Command
{
private:
	vector<Command*> commands;
public:
	void add_command(Command* cmd);
	void execute();
};
#endif

