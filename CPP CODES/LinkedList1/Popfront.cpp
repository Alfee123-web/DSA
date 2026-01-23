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
        next = NULL;
    }
    // destructor (recursively deletes the next node)
    // ~Node()
    // {
    //     cout << "Node Destructor for data = " << data << endl;
    //     if (next != NULL)
    //     {
    //         delete next; // delete remainder of list
    //         next = NULL;
    //     }
    // }
};

// COLLECTION OF NODES [LINKED LIST]
class List
{
private:
    Node *head; // pointing to starting node
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;

        // destructor
    }

    // ~List()
    // {
    //     cout << "Destructor List\n";
    //     if (head != NULL)
    //     {
    //         delete head; // Node destructor will delete following nodes
    //         head = NULL;
    //         tail = NULL;
    //     }
    // }

    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {                          // check if LL is empty
            head = tail = newNode; // both points toward new node
        }
        else
        {
            newNode->next = head;
            head = newNode; // head update
        }
    }

    // void push_back(int val)
    // {
    //     Node *newNode = new Node(val);
    //     if (head == NULL)
    //     {
    //         head = tail = newNode;
    //     }
    //     else
    //     {
    //         tail->next = newNode;
    //         tail = newNode; // update tail to new last node
    //     }
    // }

    void printList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

 
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "LL is empty\n";
            return;
        }
        Node* temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
         temp->next = NULL; 
         //temp = tail - > previous
        delete tail;
        tail = temp;
    }
};

int main()
{
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList();

    ll.pop_front();

    ll.pop_back();
    ll.printList();

    return 0;
}
