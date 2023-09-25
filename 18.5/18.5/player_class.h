#pragma once
#include <string>
#include <iostream>

class player_class
{
private:

	string name;
	int score;

public:

	player_class(string pl_name, int pl_score) 
	{
		this->score = pl_score;
		this->name = pl_name;
	}

	int get_score()
	{
		return this->score;
	}

	string get_name() 
	{
		return this->name;
	}

	void print_score() { cout << this->get_score() << "\n"; }
	void print_name() { cout << this->get_name() << "\n"; }
};

