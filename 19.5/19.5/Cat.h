#pragma once
#include "Animal.h"
class Cat : public Animal
{
public:
	virtual void Voice() override 
	{
		cout << "MEOW";
	}
};

