#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;
class Node
{
public:
    // node => children are unique at each level
    // to store children we use unordererd map for fast retrieval
    unordered_map<char, Node *> children;
    // bool end of word => true/false
    bool endofWord;

    Node()
    { // constructor
        endofWord = false;
    }
};

class Trie
{
    Node *root;

public:
    Trie()
    {
        root = new Node();
    }
    void insert(string key)
    {
        Node *temp = root;
        for (int i = 0; i < key.size(); i++) // o(L) = L size of individual word
        {
            // every node has its child pointer
            //  if key[i] exist = do nothing , not exist = add in children
            if (temp->children.count(key[i]) == 0)
            {
                // if key already exists = 1 , 0 = not exist so we have to create
                // node of key[i]
                temp->children[key[i]] = new Node(); // insert
            }
            temp = temp->children[key[i]];
        }
        temp->endofWord = true;
    }

    bool search(string key)
    {
        Node *temp = root;
        for (int i = 0; i < key.size(); i++)
        {
            // exist = level update
            if (temp->children.count(key[i]))
            {
                temp = temp->children[key[i]];
            }

            // false not exist
            else
            {
                return false;
            }
        }
        return temp->endofWord;
    }
    void longestHelper(Node *root, string &ans, string temp)
    {
        for (pair<char, Node *> child : root->children)
        {
            if(child.second->endofWord){
    temp += child.first;
            }
        
            // child.first = char in pair

            if ((temp.size() == ans.size()) && (temp < ans)
                || (temp.size() > ans.size()))
                {
                    ans = temp;
                }
            longestHelper(child.second, ans, temp);
            temp = temp.substr(0, temp.size() - 1); // remove
        }
    }
    string longestStringwithEOW()
    {
        string ans = "";
        longestHelper(root, ans, "");
        return ans;
    }
};
string longestString(vector<string> dict)
{
    Trie trie;
    for (int i = 0; i < dict.size(); i++)
    {
        trie.insert(dict[i]);
    }
    return trie.longestStringwithEOW();
}
int main()
{
    vector<string> dict = {"a", "banana", "app", "appl", "ap", "apply" , "apple"};
    cout<<longestString(dict)<<endl;//apple
    return 0;
}
// apply = > if we remove apple