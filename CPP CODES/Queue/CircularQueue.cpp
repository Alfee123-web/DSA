#include <iostream>
using namespace std;

class Queue
{
    int *arr;//dynamically allocate -> pointer to a array
    int capacity;
    int currSize; // currently how many elements are stored

    int f, r; // front , rear

public:
    Queue(int capacity)
    {
        this->capacity = capacity;
        arr = new int[capacity];
        currSize = 0;

        f = 0;
        r = -1;
    }
    void push(int data)
    { // 0(1)
        if (currSize == capacity){
            cout << "Queue is full"<<endl;
        return;
        }
        r = (r + 1) % capacity; // capacity = n
        arr[r] = data;
        currSize++;
    }
    void pop()
    { // 0(1)
        if (empty())
        {
            cout << "Queue is empty\n";
            return;
        }
        f = (f + 1) % capacity;
        currSize--;
    }
    int front()
    { // 0(1)
         if (empty()){
            cout << "Queue is empty"<<endl;
        return -1;
    }
        return arr[f];
    }
    bool empty()
    { // 0(1)
        return currSize == 0;
    }
    void printRear(){
        cout<<arr[r]<<endl;
    }
};
int main()
{
    Queue q(4); // fixed size

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;
    q.push(5);
    cout << q.front() << endl;
    q.printRear();

    return 0;
}
// TC = 0(1)
// Queue is full
// 1
// 2
// 2
// 5