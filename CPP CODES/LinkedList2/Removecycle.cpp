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
public:
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

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "LL is empty\n";
            return;
        }
        Node *temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;
    }
};

void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}
bool isCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;       // +1
        fast = fast->next->next; //+2

        if (slow == fast)
        {
            cout << "cycle exist\n";
            return true;
        }
    }
    cout << "cycle does not exist\n";
    return false;
}

void removeCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while(fast != NULL && fast->next != NULL){
           slow = slow->next;       // +1
    fast = fast->next->next; //+2

    if (slow == fast)
    {
        cout << "cycle exist\n";
if(isCycle)
        break;
    }

    }
 


if(!isCycle)
{
    cout << "cycle does not exist\n";
    return;
}
slow = head;
// SPECIAL  CASE: tail => head
if(slow == fast)
{
    while (fast->next != slow)
    {
        fast = fast->next;
    }
    fast->next = NULL; // remove cycle
}

else
{
    Node *prev = fast;
    while (slow != fast)
    {
        slow = slow->next;
        prev = fast;
        fast = fast->next;
    }
    prev->next = NULL; // remove cycle
}
}


int main()
{
    List ll;

    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    // 1->2->3->4->1
    ll.tail->next = ll.head;

    removeCycle(ll.head);
    printList(ll.head);
    return 0;
}
//OUTPUT 
// cycle exist
// 1 -> 2 -> 3 -> 4 -> NULL