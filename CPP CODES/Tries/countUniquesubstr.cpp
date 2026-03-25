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
        int countHelper(Node* root){
        int ans = 0;

        for(pair<char , Node* > child : root->children){
            // root->children = unordered map
            ans += countHelper(child.second);
        }
    return ans + 1;

    }
int countNodes(){
    return countHelper(root);
}
    };

int countUniquesubstr(string str){
    Trie trie;
    //find suffix
    for (int i = 0; i < str.size(); i++)
    {
        string suffix = str.substr(i);
        trie.insert(suffix);

    }
    return trie.countNodes();
}


int main() {
//    string str = "ababa";
   string str = "abc";
   cout<<countUniquesubstr(str)<<endl;
    return 0;
}
//10
//7