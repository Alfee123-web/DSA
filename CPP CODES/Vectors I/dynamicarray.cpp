#include <iostream>
using namespace std;

void funcInt()
{
    int *ptr = new int; //new memory allocate hogyi inside heap
    *ptr = 5;// 5 will store after dereferencing

    cout << *ptr;

    delete ptr;    //**imp  deletion of free/extra  memory
}
void fun()
{
    //    int arr[100] = {1,2,3,4,5};
    // for (int i = 0; i < 5; i++)
    // {
    // cout<<arr[i]<< " ";
    // }
    // return;

    // int arr[100] = {1, 2, 3, 4, 5};
    int size;
    cin >> size;

    int *arr = new int[size];
    // here a pointer is created which is pointing to main(ptr[2] == *(ptr+ 2))

    //   arr[0] => *(arr+0)
    //     arr[1] => *(arr+1)

    int x = 1;
    for (int i = 0; i < size; i++)
    {
        arr[i] = x;
        cout << arr[i] << " ";
        x++;
    }
    cout << endl;
    delete[] arr;
    // deletion of free/extra  memory
}
int main()
{
    // func();
    // cout<<arr[0]<<endl;
    funcInt();
}

// STATIC MEMORY = allocate at compile time , fixed size , inside stack memory, after calling of func it will
// delete automatically

// DYNAMIC MEMORY = changing , alloacte at run time (new keyword), inside heap memory , no deletion of memory
