// Vectors = sequence containers
// like dynamic arrays that can resize dynamically at run time
// they are stored contiguously

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1;
    // cout << vec1.size() << "\n";

    cout << "size : " << vec1.size() << endl;         // 0
    cout << "capacity : " << vec1.capacity() << endl; // 0

    vector<int> vec2 = {1, 2, 3, 4};
    // cout << vec2.size() << "\n";

    cout << "size : " << vec2.size() << endl;         // 4
    cout << "capacity : " << vec2.capacity() << endl; // 4

    vec2.push_back(5);

    cout << "size : " << vec2.size() << endl;         // 5
    cout << "capacity : " << vec2.capacity() << endl; // 8 (double)

    vec2.pop_back();

    cout << "size : " << vec2.size() << endl;         // 4    (again)
    cout << "capacity : " << vec2.capacity() << endl; // 8


    // vector<int> vec3(5, -1);
    //     cout << vec3.size() << "\n";

    //     for (int i = 0; i < vec3.size(); i++)
    //     {
    //         cout<<vec3[i]<<" ";
    //     }
    //     cout<<endl;

    // making a vec of size 5 initialising it by -1

    return 0;
}


// vec[i]  internally converted into *(vec + i)

// VECTOR  IMPLEMENTATION IN MEMORY
//  SIZE = no. of elements
//  CAPACITY = max no. of elements that vec can hold
// when we want to store new element capacity will get doubled new vec is created and elements are copied from prev vector
// new element = O(1) , average/ammortized constant time
