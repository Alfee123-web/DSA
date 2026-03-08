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

int main()
{
    int arr[6] = {5, 1, 3, 4, 2, 7};
    Node* root = buildBST(6, arr);
    inOrder(root);
    cout<<endl;
    return 0;
}
//123457