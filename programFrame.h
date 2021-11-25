#pragma once

#include <iostream>
using namespace std;

class programFrame
{
protected:
	virtual void startMessage(ostream& outDev);
	virtual void input(istream& inDev) = 0;
	virtual bool validData() = 0;
	virtual void errorMessage(ostream &outDev);
	virtual void output(ostream& outDev) = 0;
	virtual void processing() = 0;
	virtual bool askToContinue(istream& inDev, ostream& outDev);
public:
	void run(istream& inDev, ostream& outDev);
};

