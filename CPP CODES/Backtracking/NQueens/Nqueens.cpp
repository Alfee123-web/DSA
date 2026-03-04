#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printBoard(vector<vector<char>> board)
{
    int n = board.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    cout << "--------------------------\n";
}

bool isSafe(vector<vector<char>> board, int row, int col)
{
    int n = board.size();
    // horizontally check
    for (int j = 0; j <n ; j++)
    {
        if (board[row][j] == 'Q')
        { // row common
            return false;
        }
    }
    // vertically check
    for (int i = 0; i < row; i++)
    {
        if (board[i][col] == 'Q')
        { // col = common
            return false;
        }
    }
    // DIAGONALLY check
    // DIAGONAL LEFT
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }
    // DIAGONAL right
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j++)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }

    return true;
}

// ALL POSITIONS ARE SAFE
//  this func will give recursively all possible solutions
void nQueens(vector<vector<char>> board, int row)
{
    int n = board.size();
    if (row == n)
    { // Base case
        printBoard(board);
        return;
    }
    for (int j = 0; j < n; j++) // columns
    {
        if (isSafe(board, row, j))
        {
            board[row][j] = 'Q';
            nQueens(board, row + 1);
            board[row][j] = '.'; // again empty
        }
    }
}

int main()
{
    vector<vector<char>> board;
    // int n = 2;
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        vector<char> newRow;
        for (int j = 0; j < n; j++)
        {
            newRow.push_back('.');
        }
        board.push_back(newRow);
    }
     nQueens(board, 0);
    // printBoard(board);

   

    return 0;
}

//OUTPUT 

// . Q . . 
// . . . Q
// Q . . .
// . . Q .

// --------------------------
// . . Q .
// Q . . .
// . . . Q
// . Q . .
// --------------------------

// tc = 0(n!)
// sc = 0(n * n)