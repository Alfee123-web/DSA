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
    int freq;

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
        root->freq = -1;
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
                temp->children[key[i]]->freq = 1;
            }else{
                  temp->children[key[i]]->freq++;
            }
            temp = temp->children[key[i]];
        }
        temp->endofWord = true;
    }
    string getPrefix(string key){
        Node* temp = root;
        string prefix ="";
        for (int i = 0; i < key.size(); i++)
        {
            prefix += key[i];
            if(temp->children[key[i]]->freq == 1){
break;
            }
            temp = temp->children[key[i]];//update
        }
        return prefix;
    }
};
void prefixProb(vector<string>dict){
    Trie trie;
    for (int i = 0; i < dict.size(); i++)
    {
        trie.insert(dict[i]);
    }
    for (int i = 0; i < dict.size(); i++)
    {
        cout<<trie.getPrefix(dict[i])<<endl;
    }
    
}


int main() {
   vector<string > dict = {"zebra" , "dog" , "duck", "dove"};
   prefixProb(dict);
    return 0;
}
//o(L)
// z
// dog
// du
// dov
