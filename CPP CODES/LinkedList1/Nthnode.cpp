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
 
int getsize(){
    int s = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp-> next;
        s++;
    }
    return s;
}
    void removeNth(int n){
        int size = getsize();
Node* prev = head;
for(int i = 1; i <(size-n);i++){ // i = size-n => prev => deletion node prev
    prev= prev->next; 

}
Node* toDel = prev->next;
cout<<"going to delete : " << toDel->data <<endl;
prev->next = prev->next->next;
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


    ll.removeNth(2);
    //we will delete last se second no. which is 4
    ll.printList();


 
    return 0;
}
//OUTPUT 
// TC = 0(N)
// SC = 0(1)
// 1 -> 2 -> 3 -> 4 -> 5 -> NULL
// going to delete : 4
// 1 -> 2 -> 3 -> 5 -> NULL