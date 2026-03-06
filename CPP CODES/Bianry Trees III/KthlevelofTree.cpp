#include <iostream>
#include <vector>
#include <queue>
#include <map>
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
static int idx = -1;
Node *buildTree(vector<int> nodes)
{
    // this function return address/root node ka pointer

    idx++; // idx++ for every recursion call

    if (nodes[idx] == -1)
    {
        return NULL;
    }
    Node *currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);  //  leftsubtree
    currNode->right = buildTree(nodes); // rightsubtree
    return currNode;
}

void kthHelper(Node *root, int k, int currLevel)
{

    if (root == NULL)
    {
        return;
    }
    if (currLevel == k)
    {
        cout << root->data << " ";
        return;
    }

    kthHelper(root->left, k, currLevel + 1);
    kthHelper(root->right, k, currLevel + 1);
}
void kthlevel(Node *root, int k)
{
    kthHelper(root, k, 1);
    cout << endl;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = buildTree(nodes);
    kthlevel(root, 3); // 4 5 6

    return 0;
}
// TC => 0(N)