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
Node *buildTree(vector<int> nodes2)
{
    // this function return address/root node ka pointer

    idx++; // idx++ for every recursion call

    if (nodes2[idx] == -1)
    {
        return NULL;
    }
    Node *currNode = new Node(nodes2[idx]);
    currNode->left = buildTree(nodes2);  //  leftsubtree
    currNode->right = buildTree(nodes2); // rightsubtree
    return currNode;
}

int height(Node *root)
{
    if (root == NULL)
    {
        return 0; // height = 0
    }
    int leftHt = height(root->left);
    int rightHt = height(root->right);
    int currHt = max(leftHt, rightHt) + 1;
    return currHt;
}

int count(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftC = count(root->left);
    int rightC = count(root->right);

    return leftC + rightC + 1;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    vector<int> nodes2 = {1, 2, 4, -1, -1, 5, -1, 6, -1, 7, -1, -1, 3, -1, -1};
    // 5
    Node *root = buildTree(nodes2);

    cout << height(root) << endl; // 3
    cout << count(root) << endl;  // 7 nodes2 vector

    return 0;
}
// TC => 0(N)