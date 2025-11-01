#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "enter rows:";
    cin >> rows;
    cout << "enter cols : ";
    cin >> cols;
    
//primary syntax for allocating memory
    int **matrix = new int *[rows];

    for (int i = 0; i < rows; i++)
    {

        matrix[i] = new int[cols];
    }

    // data store
    int x = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = x++;
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
    cout << matrix[2][2] << endl;
    cout << *(*(matrix + 2) + 2);
    return 0;
}

//*(*(matrix + i) + j) == matrix[i][j] (convert internally)
// array ek pointer hai jo int array(int[]) ki taraf point kar raha hai
//  int *arr = new int[size];

// arr esa pointer hai jo pointers wale array ko point kr rha hai
// int ** arr = new int*[size]

// int ** matrix = new int*[rows]

// in this we will make a matrix which is basically a array of pointers

// ptr i = new int [cols]
// each row has its own pointer