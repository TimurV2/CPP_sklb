#include <iostream>
#include <time.h>

using namespace std;

void Print_array(int** arr, int size_arr)
{
    for (int x = 0; x < size_arr; x++) 
    {
        for (int y = 0; y < size_arr; y++)
        {
            arr[x][y] = x + y;
            cout <<arr[x][y] << "\t";
        }
        cout << "\n";
    }


    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t);
    int row = buf.tm_mday % size_arr;

    int tmp_sum = 0;

    for (int i = 0; i < size_arr; i++) 
    {
        tmp_sum += arr[row][i];
    }
    cout << tmp_sum;
}

int main()
{
    int size_arr;
    cout << "Enter array size -> ";
    cin >> size_arr;

    int** arr = new int* [size_arr];
    for (int x = 0; x < size_arr; x++) 
    {
        arr[x] = new int[size_arr];
    }

    Print_array(arr, size_arr);

}

