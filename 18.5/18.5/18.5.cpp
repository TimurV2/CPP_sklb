#include <iostream>
#include "player_class.h"

using namespace std;

void show_players(player_class* players, int num_plrs) 
{
    for (int i = 0; i < num_plrs; i++)
    {
        cout << players[i].GetName() << "\t:\t" << players[i].GetScore() << "\n";
    }
};

int main()
{
    int num_players;
    cout << "How many players do you want to add? -> ";
    cin >> num_players;

    player_class* players = new player_class[num_players];
    // player_class::PlayerSort(*players, num_players);

    string tmp_name;
    int tmp_score;

    for (int i = 0; i < num_players; i++) 
    {
        cout << "Enter player's name -> ";
        cin >> tmp_name;
        cout << "Enter player's score -> ";
        cin >> tmp_score;

        players[i].Set_Values(tmp_score, tmp_name);
        cout << "\n";
    }

    player_class::PlayerSort(players, num_players);

    show_players(players, num_players);

    delete[] players;

    return 0;
}
