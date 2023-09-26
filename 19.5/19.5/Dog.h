#pragma once
#include "Animal.h"

class Dog : public Animal
{
private:
	
public:
	virtual void Voice() override 
	{
		cout << "Bark Bark Bark";
	}
};

