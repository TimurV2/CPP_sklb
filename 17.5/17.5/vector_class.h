#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class vector_class
{
private:

	vector<int> private_vec;
	string additional_info{ "Task was made by Timur S. Aka TimurV2" };
	
public:
	vector_class(vector<int> entered_vec) 
	{
		this->private_vec = entered_vec;
	};

	void get_vec_len()
	{
		cout << this->private_vec.size() << "\n";
	};

	void get_info()
	{
		cout << this->additional_info << "\n";
	};
};

