#include <iostream>
#include<vector>
using namespace std;

int main() {
   vector<int>v;

   for (int i = 0; i < 5; i++)
   {
    v.push_back(i);
   }
   cout<<v.size()<<endl;//5 (0,1,2,3,4)
   cout<<v.capacity()<<endl;//8
   
    return 0;
}
