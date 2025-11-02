#include <iostream>
using namespace std;
void printSubarrays(int *arr, int n)
{
    for (int start = 0; start < n; start++) // n times
    {
        for (int end = start; end < n; end++) // n times
        {
            cout << "(" << start << " , " << end << ")";
            // starting aur ending index pair me print ho jayega
            // (0 , 0)(0 , 1)(0 , 2)(0 , 3)(0 , 4)
            // (1 , 1)(1 , 2)(1 , 3)(1 , 4)
            // (2 , 2)(2 , 3)(2 , 4)
            // (3 , 3)(3 , 4)
            // (4 , 4)

            for (int i = start; i <= end; i++) // elements print honge saare
            // n times (SUBARRAYS)
            // 1 , 12 , 123 , 1234 , 12345 ,
            // 2 , 23 , 234 , 2345 ,
            // 3 , 34 , 345 ,
            // 4 , 45 ,
            // 5 ,
            {
                cout << arr[i];
            }
            cout << " , ";
        }

        cout << endl;
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    printSubarrays(arr, n);

    return 0;
}

// Sub Array direct formula = n(n+1)/2;
// TIME COMPLEXITY = O(N3)
