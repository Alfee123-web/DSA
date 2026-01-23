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

    }


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
void reverse(){
    Node* curr = head;
    Node* prev = NULL;
    while(curr != NULL){
        Node* next = curr->next;
        curr->next = prev;
    
    //UPDATIONS
     prev = curr;
    curr = next;
   
}
head = prev;
}
 

    

};

int main()
{
    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.reverse();
    ll.printList();


 
    return 0;
}
//OUTPUT
// 5 -> 4 -> 3 -> 2 -> 1 -> NULL