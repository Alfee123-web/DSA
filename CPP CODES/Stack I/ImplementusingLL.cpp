#include <iostream>
#include <vector>
#include <string>
// #include<list>

using namespace std;

// maing our own linked list
template <class T>
class Node
{
public:
    T data;
    Node *next;

    Node(T val)
    {
        data = val;
        next = NULL;
    }
};

template <class T>
class Stack
{
    // list<T> ll;//linked list
    Node<T> *head; // we have to declare type as well

public:
    Stack()
    {
        head = NULL;
    }

    void push(T val)
    {
        // ll.push_front(val);
        Node<T> *newNode = new Node<T>(val);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }
    void pop()
    {
        // ll.pop_front();
        Node<T> *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    T top()
    {
        // ll.front();
        return head->data;
    }
    bool isEmpty()
    {
        return head == NULL;
    }
};

int main()
{
    // Stack<int> s; //we have to define type as well in this
    // Stack<char> s;
    Stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    while (!s.isEmpty())
    {
        cout << s.top() << " "; // 1 2 3
        s.pop();
    }
    cout << endl;
    return 0;
}
