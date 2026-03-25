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
};
bool helper(Trie &trie, string key)
{
    if (key.size() == 0)
    {
        return true;
    }
    for (int i = 0; i < key.size(); i++)
    {
        string first = key.substr(0, i + 1);
        string second = key.substr(i + 1);

        if (trie.search(first) && helper(trie, second))
        {
            return true;
        }
    }
    return false;
}
bool wordBreak(vector<string> dict, string key)
{
    Trie trie;
    for (int i = 0; i < dict.size(); i++)
    {
        trie.insert(dict[i]);
    }

    return helper(trie , key);
}
int main()
{
    vector<string> dict = {"i", "like", "sam", "samsung", "ice"};
    cout << wordBreak(dict, "ilikesamsung") << endl;//1
    cout << wordBreak(dict, "ilikesam") << endl;//1
    cout << wordBreak(dict, "ilikesung") << endl;//0
    return 0;
}