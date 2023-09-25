#include <iostream>
#include <vector>
#include "vector_class.h"

using namespace std;

int main()
{
    vector<int> my_vec = { 1,2,3,4,5,6 };

    vector_class test(my_vec);

    test.get_vec_len();
    test.get_info();
}


