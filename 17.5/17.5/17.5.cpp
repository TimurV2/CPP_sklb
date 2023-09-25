#include <iostream>
#include "vector_class.h"

using namespace std;

int main()
{
	int x, y, z;
	cout << "Enter vectors coordinates -> ";
	cin >> x >> y >> z;

	vector<int> my_vec = { x,y,z };
	vector_class cl_vec(my_vec);

	cl_vec.get_vec_len();

	return 0;
}


