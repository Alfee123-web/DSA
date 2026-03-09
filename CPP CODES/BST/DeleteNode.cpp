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
Node *getInorderSuccessor(Node *root)
{
    while (root->left == NULL)
    {
        root = root->left;
    }
    return root; // IS
}
Node *delNode(Node *root, int val)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (val < root->data)
    { // left subtree
        root->left = delNode(root->left, val);
    }
    else if (val > root->data) // right subtree
    {
        root->right = delNode(root->right, val);
    }
    else
    {
        // root == val
        // case 1 = 0 children
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        // case 2 => 1 children
        if (root->left == NULL || root->right == NULL)
        {
            return root->left == NULL ? root->right : root->left;
        }
        // case 3 => 2 children
        Node *InorderSuccesor = getInorderSuccessor(root->right);
        root->data = InorderSuccesor->data;                        // replace
        root->right = delNode(root->right, InorderSuccesor->data); // delete IS       return root;
    }
}
int main()
{
    int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
    Node *root = buildBST(9, arr);
    inOrder(root);
    cout << endl;

    delNode(root, 4); // leaf node
   

    inOrder(root);
    cout << endl;
    return 0;
}
// 134568101114
// 13568101114