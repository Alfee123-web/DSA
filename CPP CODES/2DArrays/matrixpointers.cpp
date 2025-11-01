#include <iostream>
using namespace std;

void func1(int mat[][4], int n, int m)
{
    cout << "0th row ptr" << mat << endl;
    cout << "1st row ptr" << mat + 1 << endl;
    cout << "2nd row ptr" << mat + 2 << endl;

    cout << "0th row value" << *mat << endl;//derefernece
    cout << "1st row value" << *( mat + 1) << endl;
    cout << "2nd row value" << *( mat + 2)<< endl;


    cout<<*(*(mat + 2) + 2) << endl; // value will be 11 = *(*(mat + i)+ j)
}
// void func2(int(*mat)[4], int n, int m)
// {
// }

int main()
{
    int mat[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    // cout << mat << " = " << &mat[0][0] << endl;

    // cout << mat + 1 << " = " << &mat[0][1] << endl;
    // cout << mat + 1 << " = " << &mat[1][0] << endl;
    // cout << mat + 1 << endl;
    // pointing to 2nd row(mat +1)
    // if value of 1 = 100 then value of 5 will be 116
    // x + 16 will be the value of next row (mat + 1)
func1(mat , 4,4 );
    return 0;
}
// 2D array name behaves as row pointer

// MATRIX POINTERS
//  function(int(*ptr[4])) = pointing to all the 4 values of the row
//  function(int mat[][4])
