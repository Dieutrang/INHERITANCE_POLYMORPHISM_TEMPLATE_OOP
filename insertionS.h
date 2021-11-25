#pragma once
#include "sortArray.h"
#include "SATest.h"
#include "programFrame.h"


template <class T> 
class insertionS: public sortArray<T>
{
public:
	virtual void processing(vector<T>& a);
};


