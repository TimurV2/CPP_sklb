#pragma once
#include "Animal.h"
class Cow : public Animal
{

    virtual void Voice() override 
    {
        cout << "MOO";
    }

};

