#pragma once
#include <string>
#include <iostream>

using namespace std;

class Animal
{
private:

	string sound = "* Animal sound *";

public:

	virtual void Voice() 
	{
		cout << this->sound;
	}
};

