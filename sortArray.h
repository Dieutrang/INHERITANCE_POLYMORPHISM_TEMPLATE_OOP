#pragma once
#include <vector>
#include <iostream>
#include "programFrame.h"
using namespace std;

template <class T> 
class sortArray
{
public:
	virtual void processing(vector<T>& a) = 0;
};



