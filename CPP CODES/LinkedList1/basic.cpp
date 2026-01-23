#include <iostream>
using namespace std;


//REPRESENT SINGLE NODE
class Node
{
public:// constructor
//TO ACCESS THEM IN LIST CLASS

    int data;
    Node *next; // next pointer


    Node(int val)
    {
        data = val;
        next = NULL; // next pointer
    }
};

// COLLECTION OF NODES[LINKED LIST]
//we uniquely identify with the help of head pointer
class List
{
    Node *head; // pointing to starting node
    Node *tail;

public: // constructor
    List()
    {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);

        // why use NEW = dynamically allocate in memory it will not get deleted

        // Node * newNode(val); // statically create node in memory
        // it will get deleted after func call

        if (head == NULL)
        {                          // check if LL is empty
            head = tail = newNode; // both points toward new node
        }
        else
        {
            // LL has some elements
            newNode->next = head;
            //ptr->p1

            // why -> because it is pointer
            head = newNode; // head update
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode; // tail update
            tail = newNode;
        }
    }

    void printList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout<<"NULL";
    }
};
int main()
{
    List ll;
 ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    // ll.printList();

    ll.push_back(4);
    ll.push_back(5);

    // 1 -> 2 -> 3 -> NULL
    ll.printList();

    return 0;
}
   
