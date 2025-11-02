
//  BRUTE FORCE APPROACH
#include <iostream>
using namespace std;
void maxsubArr(int *arr, int n){
int maxSum = INT16_MIN;//(BECAUSE MAX NIKALNA HAI)

    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currSum = 0;
            for (int i = start; i <= end; i++)
            {
                currSum += arr[i];
            }
            cout << currSum << ",";
            maxSum = max(maxSum , currSum);
        }
        cout << endl;
    }
    cout<< "Max subarray sum :" <<maxSum<<endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    maxsubArr(arr, n);
    return 0;
}

// PRE-DEFINED MACROS
// INT_MIN = -INFINITY (MAXIMUM)
// INT_MAX = +INFINITY (MINIMUM)
// TIME COMPLEXITY = 0(N3)

// OPTIMIZATION

#include <iostream>
using namespace std;
void maxsubArr2(int *arr, int n)
{
    int maxSum = INT16_MIN; //(BECAUSE MAX NIKALNA HAI)

    for (int start = 0; start < n; start++) //start = 2
    {
        int currSum = 0;
        for (int end = start; end < n; end++)
        {
            currSum += arr[end]; // end = 2,3,4,5;

            maxSum = max(maxSum, currSum);
        }
        cout << endl;
    }
    cout << "Max subarray sum :" << maxSum << endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    maxsubArr2(arr, n);
    return 0;
}
// TIME COMPLEXITY = 0(N2)