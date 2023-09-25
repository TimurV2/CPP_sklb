#include <iostream>

using namespace std;

void Output_odd_or_even(int finite_number, bool find_odd) 
{
	for (int i = int(find_odd); i <= finite_number; i+=2)
	{
		cout << i << "\n";
	}
	cout << "\nDone";
}

int main()
{
	int N;
	cout << "Enter a finite number -> ";
	cin >> N;

	string condition("y");
	cout << "We search for odd numbers? [y/n] -> ";
	cin >> condition;
	if (condition == "y")
	{
		Output_odd_or_even(N, true);
	}
	if (condition == "n")
	{
		Output_odd_or_even(N, false);
	}
}

