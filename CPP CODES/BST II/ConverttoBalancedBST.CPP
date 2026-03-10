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
void inOrder(Node *root, vector<int> &nodes)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left, nodes);
    nodes.push_back(root->data);
    inOrder(root->right, nodes);
}
Node *buildBSTfromSortedvector(vector<int> arr, int s, int e)
{
    if (s > e)
    {
        return NULL;
    }
    int mid = s + (e - s) / 2;
    Node *curr = new Node(arr[mid]);
    curr->left = buildBSTfromSortedvector(arr, s, mid - 1);
    curr->right = buildBSTfromSortedvector(arr, mid + 1, e);
    return curr;
}
void preOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}
Node *balancedBST(Node *root)
{
    vector<int> nodes;
    inOrder(root, nodes);
    return buildBSTfromSortedvector(nodes, 0, nodes.size() - 1);
}

int main()
{
    Node *root = new Node(6);
    root->left = new Node(5);
    root->left->left = new Node(4);
    root->left->left->left = new Node(3);

    root->right = new Node(7);
    root->right->right = new Node(8);
    root->right->right->right = new Node(9);

    root = balancedBST(root);
    preOrder(root);
    cout << endl;

    return 0;
}
//6 4 3 5 8 7 9 