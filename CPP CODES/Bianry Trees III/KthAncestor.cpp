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

int KthAncestor(Node *root, int node, int K)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == node)
    {
        return 0;
    }
    int leftD = KthAncestor(root->left, node, K);
    int rightD = KthAncestor(root->right, node, K);

    if (leftD == -1 && rightD == -1)
    {
        return -1;
    }
    int validVal = leftD == -1 ? rightD : leftD;
    if (validVal + 1 == K)
    {
        cout << root->data << endl; // kth ancestor
    }
    return validVal + 1;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = buildTree(nodes);
int node = 4 , K = 2;
KthAncestor(root , node , K);//1

    return 0;
}
//TC => O(N)
