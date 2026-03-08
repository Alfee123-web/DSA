#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
Node* insert(Node *root, int val) //) 0(lOGN)
{
    if (root == NULL)
    {
        root = new Node(val);
        return root;
    }

    if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    else
    {
        root->right = insert(root->right, val);
    }
    return root;
}

Node *buildBST(int n, int arr[])
{
    Node *root = NULL;

    for (int i = 0; i <n; i++)
    {
        root = insert(root, arr[i]);
    }
    return root;
}
void inOrder(Node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data;
    inOrder(root->right);

}
bool search(Node* root , int k){
    if(root == NULL){
        return false;
    }
     if(root->data == k){
        return true;
     }
     if(root->data < k){
        return search(root->right ,k);
     }else{
        return search(root->left , k);
     }
    return false;
}

int main()
{
    int arr[6] = {5, 1, 3, 4, 2, 7};
    Node* root = buildBST(6, arr);
    
    cout<<search(root , 3)<<endl;
   
    return 0;
}
//AVG CASE = TC => O(LOGN)