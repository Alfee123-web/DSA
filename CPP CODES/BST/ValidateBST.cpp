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
bool helper(Node *root, Node *min, Node *max)
{
    if (root == NULL)
    {
        return true;
    }
    if (min != NULL && root->data < min->data)
    {
        return false;
    }
    if (max != NULL && root->data > max->data)
    {
        return false;
    }
    return helper(root->left, min, root) && (helper(root->right, root, max));
}
bool ValidateBST(Node *root)
{
    helper(root, NULL, NULL);
}

int main()
{
    // int arr[6] = {5, 1, 3, 4, 2, 7};
    // Node *root = buildBST(6, arr);
    int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
    Node *root = buildBST(9, arr);
    root->data = 15; // 0 => invalidate
    cout << ValidateBST(root) << endl;
    cout << endl;
    return 0;
}
