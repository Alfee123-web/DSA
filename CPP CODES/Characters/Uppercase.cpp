#include <iostream>
#include <cstring>
using namespace std;

void toUpper(char word[], int n)
{
    for (int i = 0; i < n; i++)
    {
char ch = word[i];
if(ch >='A'&& ch<='Z'){ //upper case
    continue;
}else{
    word[i] = ch - 'a' + 'A'; //lower case
}
    }
    
}

void toLower(char word[], int n)
{
    for (int i = 0; i < n; i++)
    {
char ch = word[i];
if(ch >='a'&& ch<='z'){ //upper case
    continue;
}else{
    word[i] = ch - 'A' + 'a'; //lower case
}
    }
    
}
int main()
{
    //    char ch[] = {'A','p','P','l','e','\0'};
    // char word[] = "ApPle";
    // toUpper(word, strlen(word));

    char word[] = "ApPle";
    toLower(word, strlen(word));



    cout<<word<<endl;
    return 0;
}

// a b c d e  = ch - a => 4 - 0 = 4
//  ch - 'a' = 4
//'A' + 4 = 'E'
