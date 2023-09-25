#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

class vector_class
{
private:

	vector<int> private_vec;
	
public:
	vector_class(vector<int> entered_vec) 
	{
		this->private_vec = entered_vec;
	};

	void get_x() 
	{
		this->private_vec[0];
	}

	void get_y() 
	{
		this->private_vec[1];
	}

	void get_z() 
	{
		this->private_vec[2];
	}

	void get_vec_len()
	{
		cout << sqrt(pow(private_vec[0],2) + pow(private_vec[1],2) + pow(private_vec[2],2));
	};

};

