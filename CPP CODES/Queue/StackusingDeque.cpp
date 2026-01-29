#include <iostream>
#include<deque>
using namespace std;
class Stack{
    deque<int> d;

    public:
    void push(int data){
        d.push_front(data);//if 1,2,3 ==  3 2 1 
    }
    void pop(){
        d.pop_front(); // 3 2 
    }
    int top(){
       return d.front(); // 1
    }
    bool empty(){
        return d.empty();
    }

};
int main() {
   Stack s;

   for (int i = 1; i <= 5; i++)
   {
    s.push(i);
   }
   for (int i = 1; i <= 5; i++)
   {
    cout<<s.top()<<" ";
    s.pop();
   }
   
    return 0;
}
//5 4 3 2 1 => rev order me pop hoga 