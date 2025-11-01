#include <iostream>
using namespace std;
int diagonalSum(int mat[][3], int n)
{
    int sum = 0;
    // for (int i = 0; i < n; i++) TIME COMPLEXITY = 0(N2)
    // { // rows
    //     for (int j = 0; j < n; j++)
    //     { // columns
    //         if (i == j)
    //         {
    //             sum += mat[i][j];
    //         }
    //         else if (j == n - i - 1)
    //         {
    //             sum += mat[i][j];
    //         }
    //     }
    // }

    //OPTIMIZATION
     for (int i = 0; i < n; i++) //0(N)
    { 
        sum += mat[i][i]; //primary diagonal
        if(i != n-i-1){ // when i is not equal to j ( j = n-i-1)
            sum += mat[i][n-i-1]; //secondary diagonal
        }
    }
        //when i is not equal to j (j = n-i-1)
    cout << "Sum = " << sum << endl;

}
int main()
{
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};
                        // SUM = 68
    int matrix2[3][3] = {{1, 2, 3},
                        {5, 6, 7},
                        {9, 10, 11}};
                        //SUM = 30
                       
    diagonalSum(matrix2, 3);
    return 0;
}

