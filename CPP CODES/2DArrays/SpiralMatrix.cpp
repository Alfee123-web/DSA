#include <iostream>
using namespace std;

void spiralMatrix(int matrix[][4], int n, int m)
{
  int srow = 0, scol = 0;
  int erow = n - 1, ecol = m - 1;

  while (srow <= erow && scol <= ecol) // To print the middle element we have to give this condition
  // otherwise duplicate elements will be printed
  { // odd matrix

    // top
    for (int j = scol; j <= ecol; j++) // column update(srow = common)
    {
      cout << matrix[srow][j] << "  ";
    }

    // right
    for (int i = srow + 1; i <= erow; i++) // row update (ecol == common)
    {
      cout << matrix[i][ecol] << "  ";
    }

    // bottom (backwards loop)
    for (int j = ecol - 1; j >= scol; j--) // column update backward(erow = common)
    {                                   
      if (srow == erow)
      { // to avoid duplicacy of center element  {CORNER CASE}
        break;
      }
      cout << matrix[erow][j] << "  ";
    }

    // left (backwards loop)
    for (int i = erow - 1; i >= srow + 1; i--) // row update backward (scol = common)
    {                                      
      if (scol == ecol)
      { // to avoid duplicacy of center element {CORNER CASE}
        break;
      }
      cout << matrix[i][scol] << "  ";
    }

    srow++;
    scol++;
    erow--;
    ecol--;
  }
  cout << endl;
}

int main()
{
  int matrix[4][4] = {{1, 2, 3, 4},
                      {5, 6, 7, 8},
                      {9, 10, 11, 12},
                      {13, 14, 15, 16}};
  // int matrix2[3][4] = {
  //     {1, 2, 3, 4},
  //     {5, 6, 7, 8},
  //     {9, 10, 11, 12},
  //     //for thhis we have written corner cases otherwise centre element {6} will be printed twice
  //       };

  spiralMatrix(matrix, 4, 4);
  return 0;
}
