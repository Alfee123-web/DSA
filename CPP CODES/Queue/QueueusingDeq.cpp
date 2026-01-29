#include <iostream>
#include <deque>
using namespace std;
class Queue
{

    deque<int> d;

public:
    void push(int data)
    {
        d.push_back(data);
    }
    void pop()
    {
        d.pop_front();
    }
    int front()
    {
        return d.front();
    }
    bool empty()
    {
        return d.empty();
    }
};

int main()
{
    Queue q;

    for (int i = 1; i <= 5; i++)
    {
        q.push(i);
    }
    

    for (int i = 1; i <= 5; i++)
    {
        cout<<q.front()<<endl; //1 2 3 4 5
        q.pop(); 
    }

    
    return 0;
}