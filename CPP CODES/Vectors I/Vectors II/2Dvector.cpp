#include <iostream>
#include <vector>
using namespace std;

int main()
 {
//     vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector <vector<int>> matrix = {{1, 2, 3}, {4, 5}, {7}};//this is possible only in 2D vectors not in 2D arrays

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; i < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}

// 1D = vector<int>arr;
// 2D = vector<vectorint>>matrix
// matrix[i].size means each row each considered as vector(v1,v2,v3....) and to acces every element of
// a particular row we run j loop

