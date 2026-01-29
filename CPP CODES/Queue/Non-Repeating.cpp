#include <iostream>
#include<queue>
using namespace std;
 void firstNonrepeating(string str){
    queue<char> q;
    int freq[26] = {0};

    for (int i = 0; i <str.size(); i++)
    {
        char ch = str[i];
        q.push(ch);
        freq[ch-'a']++;
        // a ch index = 0
        // b ch index = 1
        // c ch index = 2
        while(!q.empty() && freq[q.front()-'a'] > 1){ 
            q.pop();
        }

        if(q.empty()){
            cout<<-1<<"\n";
        }else{
            cout<<q.front()<<"\n";
        }

    }
    
 }


int main() {
   string str = "aabccxb";
   firstNonrepeating(str);
    return 0;
}
//TC & SC = 0(N)
// a
// -1
// b
// b
// b
// b
// x