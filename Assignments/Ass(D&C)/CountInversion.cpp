#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int> &arr, int s, int mid, int e)
{
    vector<int> temp;
    int i = s;
    int j = mid + 1;
    int InvCount = 0;
    while (i <= mid && j <= e)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
            InvCount += (mid - i + 1);
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= e)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[idx + s] = temp[idx];
    }
    return InvCount;
}

int mergeSort(vector<int> &arr, int s, int e)
{
    if (s < e)
    {
        int mid = s + (e - s) / 2;

        int leftInvCount = mergeSort(arr, s, mid);      // left half sort
        int rightInvCount = mergeSort(arr, mid + 1, e); // right half sort

        int InvCount = merge(arr, s, mid, e); //func call

        return leftInvCount + rightInvCount + InvCount;
    }
    return 0;
}
int main()
{
    // vector<int> arr = {6, 3, 5, 2, 7};
    vector<int> arr = {1,3,5,10,2,6,8,9};
    int ans2 = mergeSort(arr, 0, arr.size() - 1);
    // cout << ans1; //5
    cout << ans2; //6
    return 0;
}

//TC = 0(nlogn)
//SC = 0(N)