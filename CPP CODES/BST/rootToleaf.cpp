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

void printPath(vector<int> path)
{
    for (int i = 0; i < path.size(); i++)
    {
        cout << path[i] << " ";
    }
    cout<<endl;
}
void pathHelper(Node *root, vector<int> &path)
{
    if (root == NULL)
    {
        return;
    }
    path.push_back(root->data);
    if (root->left == NULL && root->right == NULL)
    { // leaf
        printPath(path);
        path.pop_back();
        return;
    }

    pathHelper(root->left, path);
    pathHelper(root->right, path);

    path.pop_back();
}
Node *roottoLeaf(Node *root)
{
    vector<int> path;
    pathHelper(root, path);
}
int main()
{
    int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
    Node *root = buildBST(9, arr);

    roottoLeaf(root);

    cout << endl;
    return 0;
}
// 8 5 3 1 
// 8 5 3 4
// 8 5 6
// 8 10 11 14