#pragma once
#include <string>
#include <iostream>

class player_class
{
private:

	int size_arr;
	//string *arr_name_plr;
	int* arr_score_plr;

public:
	
	player_class(int num_of_players) // Конструктор создания экземлпяра класса с массивами имен и счета игроков
	{
		this->size_arr = num_of_players;
		//arr_name_plr = new string[num_of_players];
		arr_score_plr = new int[num_of_players];
		player_data_input(num_of_players);
	}

	void player_data_input(int num_of_players) // Метод класса для ввода данных в массивы имен и счета игрков
	{
		for (int x = 0; x < num_of_players; x++)
		{
			for (int y = 0; y < num_of_players; y++)
			{

			}
		}
	}

};

