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
    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode; // update tail to new last node
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

 


   


Node* splitAtMid(Node*  head){
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;

    while(fast!= NULL && fast->next != NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if(prev!= NULL){
        prev->next = NULL; //split at middle
    }
    return slow; //slow = right head
}
Node* merge(Node* left , Node* right){
List ans;
Node* i = left;
Node* j = right;

while(i != NULL && j != NULL){
    if(i->data <= j->data){
        ans.push_back(i->data);
        i = i->next;
    }else{
        ans.push_back(j->data);
        j = j->next;
    }

}
while(i != NULL){
      ans.push_back(i->data);
}
while(j != NULL){
      ans.push_back(j->data);
}
return ans.head;

}

Node* mergeSort(Node* head){
    //BASE CASE
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* rightHead = splitAtMid(head);
    Node* left = mergeSort(head); //left half ka head
    Node* right = mergeSort(rightHead); //right half

    return merge(left, right);
    //head of sorted linked list
}
Node* reverse(Node* head){
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    while(curr != NULL){
         next = curr->next;
        curr->next = prev;
    
    //UPDATIONS
     prev = curr;
    curr = next;
   
}
return prev; //prev is head of rev LL
}

Node* zigZagll(Node* head){
    Node* rightHead = splitAtMid(head);//second half ka head dega
    Node* rightHeadRev = reverse(rightHead);

    //ALTERNATE MERGING : 1ST HEAD = HEAD; 2ND HEAD = RIGHTHEADREV
    Node* left = head;
    Node* right = rightHeadRev;
         Node* tail = right;

    while (left != NULL && right != NULL)//forward travel
    {
        Node* nextLeft = left->next;
        Node* nextRight = right->next;

        left->next = right;
        right->next = nextLeft;

   
        tail = right;
        left = nextLeft;
        right = nextRight;


    }
    if(right!= NULL){
tail->next = right;
    }
    
    return head;


}
int main()
{
    List ll;

   
     ll.push_front(5);
     ll.push_front(4);
     ll.push_front(3);
      ll.push_front(2);
    ll.push_front(1);
 
  


    printList(ll.head);

    ll.head = zigZagll(ll.head);
    printList(ll.head);

    return 0;
}
//OUTPUT
// 1 -> 2 -> 3 -> 4 -> 5 -> NULL
// 1 -> 5 -> 2 -> 4 -> 3 -> NULL