
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
Node *mergeBSTs(Node *root1, Node *root2)
{
    vector<int> nodes1;
    vector<int> nodes2;
    vector<int> merged;

    inOrder(root1, nodes1);
    inOrder(root2, nodes2);

    int i = 0;
    int j = 0;
    while (i < nodes1.size() && j < nodes2.size())
    {
        if (nodes1[i] < nodes2[j])
        {
            merged.push_back(nodes1[i++]);
        }
        else
        {
            merged.push_back(nodes2[j++]);
        }
    }
    while (i < nodes1.size())
    {
        merged.push_back(nodes1[i++]);
    }
    while (j < nodes2.size())
    {
        merged.push_back(nodes2[j++]);
    }
    return buildBSTfromSortedvector(merged, 0, merged.size() - 1);
}
int main()
{
    Node *root1 = new Node(2);
    root1->left = new Node(1);
    root1->right = new Node(4);

    Node *root2 = new Node(9);
    root2->left = new Node(3);
    root2->right = new Node(12);

    Node *root = mergeBSTs(root1, root2);
    preOrder(root);

    cout << endl;

    return 0;
}
// 3 1 2 9 4 12
