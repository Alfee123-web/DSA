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

Node *buildBSTfromSorted(int arr[], int s, int e)
{
    if (s > e)
    {
        return NULL;
    }
    int mid = s + (e - s) / 2;
    Node *curr = new Node(arr[mid]);
    curr->left = buildBSTfromSorted(arr, s, mid - 1);
    curr->right = buildBSTfromSorted(arr, mid + 1, e);
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
int main()
{
    int arr[7] = {3, 4, 5, 6, 7, 8, 9};
    Node *root = buildBSTfromSorted(arr, 0, 6);
    preOrder(root);
    return 0;
}
// 6 4 3 5 8 7 9