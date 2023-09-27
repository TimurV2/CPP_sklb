#include <iostream>
#include "player_class.h"

using namespace std;


int main()
{
    int num_players;
    cout << "How many players do you want to add? -> ";
    cin >> num_players;

    player_class* players = new player_class[num_players];
    player_class tmp_player;
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
    
    for (int i = 0; i < num_players; i++) 
    {
        for (int j = i + 1; j < num_players; j++) 
        {
            if (players[i].GetScore() < players[j].GetScore())
            {
                tmp_player = players[i];
                players[i] = players[j];
                players[j] = tmp_player;
            }
        }
    }

    for (int i = 0; i < num_players; i++) 
    {
        cout << players[i].GetName() << "\t:\t" << players[i].GetScore() << "\n";
    }

    delete[] players;

    return 0;
}
