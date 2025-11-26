#include <iostream>
using namespace std;

void printSudoku(int sudoku[][9])
{
    for (int i = 0; i <9; i++)
    {
        for (int j = 0; j <9; j++)
        {
            cout << sudoku[i][j] << " ";
        }
        cout << endl;
    }
}

bool isSafe(int sudoku[9][9], int row, int col, int digit)
{
    // vertically
    for (int i = 0; i <= 8; i++)
    {
        if (sudoku[i][col] == digit)
        { // col = common
            return false;
        }
    }
    // horizontally //row == common
    for (int j = 0; j <= 8; j++)
    {
        if (sudoku[row][j] == digit)
        {
            return false;
        }
    }
    // 3 * 3 grid
    int startR = (row / 3) * 3;
    int startC = (col / 3) * 3;
    for (int i = startR; i <= startR + 2; i++)
    {
        for (int j = startC; j <= startC + 2; j++)
        {
            if (sudoku[i][j] == digit)
            {
                return false;
            }
        }
    }
    return true;
}

bool SudokuSolver(int sudoku[9][9], int row, int col)
{
    // base case
    if (row == 9)
    {
        printSudoku(sudoku);
        return true;
    }

    int nextR = row;
    int nextCol = col + 1;
    if (col + 1 == 9)
    {
        nextR = row + 1;
        nextCol = 0;
    }

    if (sudoku[row][col] != 0)
    {
        return SudokuSolver(sudoku, nextR, nextCol); // next cell
    }
    for (int digit = 1; digit <= 9; digit++)
    {
        // isSafe
        if (isSafe(sudoku, row, col, digit))
        {
            sudoku[row][col] = digit;

            if (SudokuSolver(sudoku, nextR, nextCol))
            {

                return true;
            }
            sudoku[row][col] = 0;
        }
    }

    return false;
}

int main()
{
    

    int sudoku[9][9] = {
{0, 0, 8, 0, 0, 0, 0, 0, 0},
{4, 9, 0, 1, 5, 7, 0, 0, 2},
{0, 0, 3, 0, 0, 4, 1, 9, 0},
{1, 8, 5, 0, 6, 0, 0, 2, 0},
{0, 0, 0, 0, 2, 0, 0, 6, 0},
{9, 6, 0, 4, 0, 5, 3, 0, 0},
{0, 3, 0, 0, 7, 2, 0, 0, 4},
{0, 4, 9, 0, 3, 0, 0, 5, 7},
{8, 2, 7, 0, 0, 9, 0, 1, 3}
};


    SudokuSolver(sudoku, 0, 0);


    return 0;
}
//OUTPUT
// 2 1 8 3 9 6 7 4 5
// 4 9 6 1 5 7 8 3 2
// 7 5 3 2 8 4 1 9 6
// 1 8 5 7 6 3 4 2 9
// 3 7 4 9 2 8 5 6 1
// 9 6 2 4 1 5 3 7 8
// 5 3 1 6 7 2 9 8 4
// 6 4 9 8 3 1 2 5 7
// 8 2 7 5 4 9 6 1 3