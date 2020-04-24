#pragma once
#include "ILearn.h"
class Fish:public ILearn
{
public:
	Fish();
	virtual int getAge();
};

