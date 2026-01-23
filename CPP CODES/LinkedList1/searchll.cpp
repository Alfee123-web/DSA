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
    }\
    //ITERATIVE SERACH

    int searchItr(int key){
        Node* temp = head;
        int idx = 0;

        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;

    }
    //RECURSIVE SEARCH{}
    // for helper function head is local variable
    int helper(Node* h , int key){

        //BASE CASE
        if(h==NULL){
            return -1;
        }
        if(h->data == key){
            return 0 ; //index 0

        }
        int idx = helper(h->next  , key);
        if(idx == -1){
            return -1;
        }
        return idx+1;
    }


    int searchRec(int key){
        return helper(head , key);
        
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
    ll.printList();

    // cout<<ll.searchItr(2)<<endl;
    // cout<<ll.searchItr(5)<<endl;
    // cout<<ll.searchItr(50)<<endl; //-1
      cout<<ll.searchRec(4)<<endl; //3
 
    return 0;
}
//TC = 0(N)