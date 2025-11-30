#include <iostream>
#include <vector>
using namespace std;

void helper(vector<vector<int>> &mat, int r, int c, string path, vector<string> &ans )
{
    int n = mat.size();
    // Base case
    if (r < 0 || c < 0 || r >= n || c >= n || mat[r][c] == 0 || mat[r][c] == -1)
    {
        return;
    }
    if (r == n - 1 && c == n - 1)
    {
        ans.push_back(path);
        return;
    }
    mat[r][c] = -1; //visited

    helper(mat, r - 1, c, path + "U", ans); // UP
    helper(mat, r + 1, c, path + "D", ans); // DOWN
    helper(mat, r, c - 1, path + "L", ans); // LEFT
    helper(mat, r, c + 1, path + "R", ans); // RIGHT
    mat[r][c] = 1; //unvisited 
}
vector<string> findPath(vector<vector<int>> &mat)
{
    int n = mat.size();
    vector<string> ans;
    string path = "";
    // vector<vector<bool>> vis(n, vector<bool>(n, false));

    helper(mat, 0, 0, path, ans);
    return ans;
}

int main()
{

    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};
    vector<string> ans = findPath(mat);
    for (const string &p : ans)
    {
        cout << p << endl;
    }

    return 0;
}
// OUTPUT

// DDRDRR
// DRDDRR