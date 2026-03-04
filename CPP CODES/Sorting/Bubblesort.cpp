#include <iostream>
using namespace std;
void print(int *arr , int n)
    {
    for (int i = 0; i < n ; i++){
        cout<<arr[i]<<" , ";
    }
    cout<<endl;
}
void bubbleSort(int *arr, int n)
{
    bool isSwap =  false; //false means abhi we didnt interchange any of the two elements..
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {

            if (arr[j] < arr[j + 1])
            {

                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            //array is already sorted
            return;
        }
    }
    print(arr , n);
}
int main()
{
    // int arr[5] = {1, 5, 6, 7, 3};
    int arr[5] = {1, 2,3,4,5};
bubbleSort(arr , 5);
cout<<endl;

    return 0;
}
//TIME COMPLEXITY = 0(N2)
// IDEA :  LARGE ELEMENTS COME TO END BY SWAPPING WITH ADJACENTS

