#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;
void printUnion(vector<int> arr1, vector<int> arr2)
{
    unordered_set<int> s;
    for (int el : arr1)
    {
        s.insert(el);
    }
    for (int el : arr2)
    {
        s.insert(el);
    }
    for (int el : s)
    {
        cout << el << " ";
    }

    cout << endl;
}

void printInt(vector<int> arr1, vector<int> arr2){
    unordered_set<int> s;
    for (int el : arr1)
    {
        s.insert(el);
    }
    for(int el : arr2){
        if(s.find(el) != s.end())//found
        cout<<el<<" ";
        s.erase(el);
    }
    cout<<endl;
}
int main()
{
    vector<int> arr1 = {7, 3, 9};
    vector<int> arr2 = {6, 3, 9, 2, 9, 4};
  
cout<<"union & intersection = ";
    printUnion(arr1, arr2);
    printInt(arr1, arr2);
        return 0;
}
// union & intersection = 4 2 7 3 9 6 
// 3 9