//QUES 1
#include <iostream>
using namespace std;

int vowelCounter(string str)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||  str[i] == 'o' || str[i] == 'u')
        {
            count++;
          
        }
  
      
    }
            cout << " vowel occurs : " << count<<endl ;
   
}


    int main()
    {
        string str = "Alfeekhan";
        // string str = "america";
        vowelCounter(str);


         


        return 0;
    }



//q2 = 1790 LEETCODE
//q3 = 1657 LEETCODE
//q4 = 20 LEETCODE