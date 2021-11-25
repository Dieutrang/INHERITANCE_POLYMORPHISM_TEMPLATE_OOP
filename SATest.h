#pragma once
#include "programFrame.h"
#include "sortArray.h"


template <class T> 
class SATest: public programFrame
{
private:
	sortArray<T>* mAlg;
	vector<T> data;
public:
	SATest(sortArray<T>* pAlg);
	void input(istream& inDev);
	void output(ostream& outDev);
	bool validData();
	void startMessage(ostream &outDev);
	void processing();
	friend istream& operator>>(istream& inDev, vector<T>& a);
	friend ostream& operator<<(ostream& outDev, vector<T>& a);

};

