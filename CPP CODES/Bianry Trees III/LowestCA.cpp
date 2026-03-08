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
bool rootToNode(Node *root, int n, vector<int> &path)
{ // 0(N)
    if (root == NULL)
    {
        return false;
    }

    path.push_back(root->data);
    if (root->data == n)
    {
        return true;
    }

    int isLeft = rootToNode(root->left, n, path);
    int isRight = rootToNode(root->right, n, path);

    if (isLeft || isRight)
    {
        return true;
    }
    path.pop_back();

    return false;
}
int LCA(Node *root, int n1, int n2)
{ // 0(N)
    vector<int> path1;
    vector<int> path2;

    rootToNode(root, n1, path1); // path store
    rootToNode(root, n2, path2); // path store

    int lca = -1;
    for (int i = 0, j = 0; i < path1.size(), j < path2.size(); i++, j++)
    {
        if (path1[i] != path2[j])
        {
            return lca; // 1
        }
        lca = path1[i];
    }
    return lca;
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = buildTree(nodes);

    int n1 = 4, n2 = 5; // lca =2
    cout << LCA(root, n1, n2) << endl;

    return 0;
}
// 0(N)
// SC = 0(N)