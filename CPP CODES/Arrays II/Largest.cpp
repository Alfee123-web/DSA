#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr) / sizeof(int);
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "max : " << max << endl;
    return 0;
}

//MINIMUM
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int n = sizeof(arr) / sizeof(int);
    int min= arr[0];
    for (int i = 0; i < n; i++)
    {

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "min : " << min << endl;
    return 0;
}