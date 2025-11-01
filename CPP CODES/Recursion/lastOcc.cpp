#include <iostream>
#include <vector>
using namespace std;

int lastOccurence(vector<int> arr, int target, int i)
{

    // base case
    if (i == arr.size())
    {
        return -1;
    }
    int idxFound = lastOccurence(arr, target, i + 1);

    if (idxFound == -1 && arr[i] == target) // doubt 
    {
        return i;
    }
    return idxFound;
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 4};
    cout << lastOccurence(arr, 3, 0) << endl; // 4
    return 0;
}

// diff = pehle baaad wali positions ke liye call aayi hai