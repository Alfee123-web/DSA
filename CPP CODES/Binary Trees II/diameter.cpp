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
int height(Node *root)
{
    if (root == NULL)
    {
        return 0; // height = 0
    }
    int leftHt = height(root->left);
    int rightHt = height(root->right);
    int currHt = max(leftHt, rightHt) + 1;
}
int diam1(Node *root)
{ // 0(N)
    if (root == NULL)
    {
        return 0;
    }
    int currD = height(root->left) + height(root->right) + 1; // 0(N) => we are calling height function
    int leftD = diam1(root->left);                            //=> n calls jaa rahi hai
    int rightD = diam1(root->right);

    return max(currD, max(leftD, rightD));
}
// TC => 0(N^2)

// APPROACH => 2 0(N)
// only in one recursive function we will calculate both diam and height
pair<int, int> diam2(Node *root) //0(N)
{
    if (root == NULL)
    {
        return make_pair(0, 0);
    }
    // pair=> (diameter , height)
    pair<int, int> leftInfo = diam2(root->left);   // LD , LH
    pair<int, int> rightInfo = diam2(root->right); // RD , RH
    int currD = leftInfo.second + rightInfo.second + 1;
    int finalD = max(currD, max(leftInfo.first, rightInfo.first));
    int finalH =max(leftInfo.second , rightInfo.second) + 1;
    return make_pair(finalD, finalH);
}
int main()
{
    vector<int> nodes = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root = buildTree(nodes);
    cout << diam1(root) << endl; // 5
    cout<<diam2(root).first<<endl;// 5

    return 0;
}


