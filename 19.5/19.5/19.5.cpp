#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"

int main()
{
	Cat cat;
	Cow cow;
	Dog dog;

	Animal* arr[] = { &cat, &dog, &cow };

	for (auto animal : arr) 
	{
		animal->Voice();
		cout << "\n";
	}
}



