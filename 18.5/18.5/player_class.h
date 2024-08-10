#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
	

class player_class
{
private:

	string random_name[10] = { "budz", "pain", "konan", "nagato", "itachi", "tobi", "madara", "naruto", "danzou", "kakashi" };
	int player_score;
	string player_name;

public:

	void Set_Values(int score, string name) 
	{
		this->player_name = name;
		this->player_score = score;
	}
	
	int GetScore()  
	{ 
		return this->player_score;
	}

	string GetName()
	{ 
		return this->player_name;
	}


	
	player_class() //random class value 
	{
		int srand(time(NULL));
		this->player_name = random_name[rand() % 10];
		this->player_score = rand() % 10000 + 1;
	}

	player_class(int score, string name) //default class constructor
	{
		this->player_score = score;
		this->player_name = name;
	}

	static void PlayerSort(player_class* players, size_t player_count)
	{
		player_class tmp_plr;
		for (int i = 0; i < player_count; i++)
		{
			for (int j = i + 1; j < player_count; j++)
			{
				if (players[i].GetScore() < players[j].GetScore())
				{
					tmp_plr = players[i];
					players[i] = players[j];
					players[j] = tmp_plr;
				}
			}
		}
	}
};

