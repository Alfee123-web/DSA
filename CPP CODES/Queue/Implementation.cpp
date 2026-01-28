#include <iostream>

using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};

class Queue{
    Node* head;
    Node* tail;
    public:
    Queue(){//constructor
    head = tail = NULL;
    }


    void push(int data){
Node* newNode = new  Node(data);
if(head == NULL){
    head = tail = newNode;
}else{
    tail->next = newNode;
    tail = newNode;
}

    }

    void pop(){
        if(empty()){
            cout<<"Queue is empty";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;

    }
    int front(){
        if(empty()){
            cout<<"Queue is empty";
            return -1;
        }
        return head->data;

    }
    bool empty(){
        return head == NULL;

    }
};
int main() {
   Queue q; // same order while in  stack output came in opp order 
   q.push(1);
   q.push(2);
   q.push(3);

   while(!q.empty()){
    cout<<q.front()<<endl;
    q.pop();
   }
    return 0;
}
//TC = 0(1)
//output
//1
// 2
// 3