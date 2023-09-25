#include <iostream>

using namespace std;

struct name_score
{
    string name = "";
    int score = 0;
};

int main()
{
    int num_players;

    cout << "Print how many players do you want to add? -> ";
    cin >> num_players;

    name_score* arr_pair = new name_score[num_players];
    name_score tmp_pair;

    for (int i = 0; i < num_players; i++)
    {
        cout << "Enter player's name -> ";
        cin >> arr_pair[i].name;

        cout << "Enter player's score -> ";
        cin >> arr_pair[i].score;
    }

    for (int i = 0; i < num_players - 1; i++) 
    {
        for (int j = i+1; j < num_players; j++) 
        {
            if (arr_pair[i].score < arr_pair[j].score) 
            {
                tmp_pair = arr_pair[i];
                arr_pair[i] = arr_pair[j];
                arr_pair[j] = tmp_pair;
            }
        }
    }

    for (int ustal = 0; ustal < num_players; ustal++) 
    {
        cout << "Plr name: " << arr_pair[ustal].name << "\t| Plr score: " << arr_pair[ustal].score << "\n";
    }

    delete[] arr_pair;
    return 0;
}
