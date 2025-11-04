#include <iostream>
using namespace std;
// void countNum(int matrix[][3], int n, int m, int target)
// {
//     int count = 0;
//     for (int i = 0; i < n ; i++)
//     {                                   // rows
//         for (int j = 0; j < m ; j++) // columns
//         {

//             if (matrix[i][j] == target)
//             {
//                 count++;
//             }

//         }

//     }
//                 cout << "Count is :" << count << endl;
// }

// void sumNum(int matrix[3][3], int n , int m){

// int sum = 0;
// int i =1;

//         for (int j = 0; j < m ; j++)
//         {
// sum += matrix[i][j]  ;
//   ;

// }

//     cout<<sum<<endl;
// }

void transposeFun(int matrix[][3], int n, int m)
{

    int transposeMatrix[m][n]={{0}};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)

        {
            // swap(matrix[i][j],matrix[j][i]);
            transposeMatrix[j][i] = matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)

        {
            cout << transposeMatrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    // int matrix[2][3] = {{4, 7, 8}, {8, 8, 7}};
    // countNum(matrix, 2, 3, 7);

    // int matrix[3][3] = {{1,4,9},
    // {11,4,3},{2,2,3}};
    // sumNum(matrix , 3 ,3 );

    int matrix[2][3] = {{1, 4, 9},
                        {11, 4, 3}};
    transposeFun(matrix, 2, 3);
    return 0;
}
