#include <iostream>
using namespace std;

bool sortedMatrix(int mat[][4], int n, int m, int key)
{
    int i = 0, j = m - 1;
    while (i < n && j >= 0) // doubt 
    {
        if (mat[i][j] == key)
        {
            cout << "found at cell (" << i << ", " << j << ")\n";
            return true;
        }
        else if (mat[i][j] > key)
        {
            j--; // towards left 
        }
        else
        {
            i++; //downwads
        }
    }

    cout << "key not found\n";
    return false;
}
// TIME COMPLEXITY = 0(N+M)
// n>>m = 0(n) and m>>n = 0(m)

// BRUTE FORCE APPROACH(linear search)  0 ( n * m)

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < m - 1; j++)
//         {
//             if (matrix[i][j] == key)
//             {
//                 cout << "key :" << key;
//             }
//         }
//         cout << endl;
//     }

// }

int main()
{
    int mat[4][4] = {{10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {32, 33, 39, 50}};

    sortedMatrix(mat, 4, 4, 50);
    return 0;
}
