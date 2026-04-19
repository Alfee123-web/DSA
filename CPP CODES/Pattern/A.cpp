#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n / 2 + 1; j++)
        {
            if (i == 1 || j == 1 || i == n / 2 + 1 || j == n / 2 + 1)
            //first and last rows and cols
            {
                if (i == 1 && (j == 1 || j == n / 2 + 1))//first row
                    cout << " ";
                else
                    cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}