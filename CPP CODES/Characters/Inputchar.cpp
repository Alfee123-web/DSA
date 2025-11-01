#include <iostream>
using namespace std;
#include <cstring>

int main()
{
   // char arr[30];
   // cin >> arr; // ignore whitespace
   //space ke baad wala character ignore kar dete hai cin
   
   // cout << arr << endl;
   // cout << strlen(arr) << endl;

   char sentence[50];
   //    cin >>sentence;
   cin.getline(sentence, 30 , '*');
   //as soon as user input * it will terminate(Delimitor)

   cout << "your word was :" << sentence << endl;
   cout  << sentence[0] << endl;
   cout << "length: " << strlen(sentence) << endl;

   return 0;
}