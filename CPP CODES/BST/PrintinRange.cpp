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
Node *insert(Node *root, int val) //) 0(lOGN)
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

    for (int i = 0; i < n; i++)
    {
        root = insert(root, arr[i]);
    }
    return root;
}
void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data;
    inOrder(root->right);
}
void printInrange(Node* root, int s, int e)
{
    if(root == NULL){
        return;
    }
    if (root->data >= s && root->data <= e)
    {
        printInrange(root->left, s, e);
        cout << root->data;

        printInrange(root->right, s, e);
    }
    else if (root->data < s)
    {
        printInrange(root->right, s, e);
    }
    else
    {
        printInrange(root->left, s, e);
    }
}
void printPath(vector<int> path){
    for (int i = 0; i < path.size(); i++)
    {
        cout<<path[i]<<" ";
    }
    
}
void pathHelper(Node* root , vector<int> &path){
    if(root == NULL){
        return;
    }
    path.push_back(root->data);
    if(root->left == NULL && root->right == NULL){
        printPath(path);
  path.pop_back();
    return;
    }
  

    pathHelper(root->left , path);
    pathHelper(root->right , path);

    path.pop_back();
}
Node* roottoLeaf(Node* root){
    vector<int>path;
    if(root == NULL){
        return NULL;
    
    }
}
int main()
{
    int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
    Node *root = buildBST(9, arr);

    printInrange(root, 8, 12);
    
    cout << endl;
    return 0;
}