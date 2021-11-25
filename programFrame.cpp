#include "programFrame.h"

void programFrame::startMessage(ostream& outDev)
{
	outDev << "Welcome, entering data: ";
}
void programFrame::errorMessage(ostream& outDev)
{
	outDev << "Input data error!" << endl;
}
bool programFrame::askToContinue(istream& inDev, ostream& outDev)
{
	char ch;
	outDev << "Press 'Y' or 'y' to continue, otherwise press any key to stop: ";
	inDev >> ch;
	return (ch == 'Y' || ch == 'y');
}
void programFrame::run(istream& inDev, ostream& outDev)
{
	bool choice = false;
	do
	{
		startMessage(outDev);
		input(inDev);
		if (!validData())
		{
			errorMessage(outDev);
			continue;
		}
		processing();
		output(outDev);
		choice = askToContinue(inDev, outDev);
	} while (choice);
}


