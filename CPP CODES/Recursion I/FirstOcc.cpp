#include <iostream>
#include<vector>
using namespace std;
int firstOccurrence(vector<int>arr , int target , int i)
{
    // base case / last problem
    if (i == arr.size())
    { // all array has been traversed
        return -1;
    }

    if (target == arr[i])
    {
        return i;
    }
    return firstOccurrence(arr, target, i + 1); // i + 1= aage badhta jayega
}
int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 4};
    cout << firstOccurrence(arr, 3, 0) << endl; //2 ( 3 aa rha hai 2nd index pe)
    cout << firstOccurrence(arr, 2, 0) << endl; //1 ( 2 aa rha hai 1st index pe)
    cout << firstOccurrence(arr, 5, 0) << endl; // -1 (not exist)
    return 0;
}
// main diff is = pehle apne liye then baad wale positions ke liye check karenge 