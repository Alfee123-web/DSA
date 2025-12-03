#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next; // next pointer

    Node(int val)
    {
        data = val;
        next = nullptr;
    }

    ~Node()
    { // destructor (recursively deletes the next node)
        cout << "Node Destructor for data = " << data << endl;
        if (next != nullptr)
        {
            delete next; // delete remainder of list
            next = nullptr;
        }
    }
};

// COLLECTION OF NODES [LINKED LIST]
class List
{
private:
    Node *head; // pointing to starting node
    Node *tail;

public:
    List()
        : head(nullptr), tail(nullptr)
    {
    }

    ~List()
    { // destructor
        cout << "Destructor List\n";
        if (head != nullptr)
        {
            delete head; // Node destructor will delete following nodes
            head = nullptr;
            tail = nullptr;
        }
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == nullptr)
        { // check if LL is empty
            head = tail = newNode; // both points toward new node
        }
        else
        {
            newNode->next = head;
            head = newNode; // head update
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode; // update tail to new last node
        }
    }

    void printList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void insert(int val, int pos)
    {
        if (pos == 0)
        {
            push_front(val);
            return;
        }

        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        { // position -1 = temp(prev)
            if (temp == nullptr)
            {
                cout << "position is invalid\n";
                return;
            }
            temp = temp->next;
        }

        if (temp == nullptr)
        {
            cout << "position is invalid\n";
            return;
        }

        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;

        if (newNode->next == nullptr)
        { // inserted at end -> update tail
            tail = newNode;
        }
    }
};

int main()
{
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList();

    // test push_back and insert
    ll.push_back(4);
    ll.push_back(5);
    ll.insert(9, 2); // insert 9 at position 2
    ll.printList();

    return 0;
}
