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
Node* LCA(Node *root, int n1, int n2) // pointer
{
    if (root == NULL)
    {
        return NULL;
    }
    if(root->data == n1 || root->data == n2){
        return root;
    }
    Node *leftLCA = LCA(root->left, n1, n2);
    Node *rightLCA = LCA(root->right, n1, n2);

    if (leftLCA != NULL && rightLCA != NULL)
    {
        return root;
    }
    return leftLCA == NULL ? rightLCA : leftLCA; // all 3 cases in one line
}

int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = buildTree(nodes);

    int n1 = 4, n2 = 6; // lca =1
    cout << LCA(root, n1, n2)->data << endl;

    return 0;
}
// TC => 0(N)
// SC =>  0(1)
