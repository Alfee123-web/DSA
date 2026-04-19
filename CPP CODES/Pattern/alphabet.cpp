#include <iostream>
using namespace std;

int main()
{
    int n = 5;
  
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <  n  ; j++)
        {
           
         cout<<char('A' + j)<<" ";
            
        }
        cout << endl;
    }
    return 0;
}
