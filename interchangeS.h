#pragma once

#include "sortArray.h"
#include "programFrame.h"
#include "SATest.h"

template <class T> 
class interchangeS : public sortArray<T>
{
public:
	virtual void processing(vector<T>& a);
};




