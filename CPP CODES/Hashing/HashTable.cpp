#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Node
{
public:
    string key;
    int val;
    Node *next;
    Node(string key, int val, Node *n = nullptr)
    {
        this->key = key;
        this->val = val;
        next = NULL;
    }
    ~Node()
    {
        // destructor
        if (next != nullptr)
        {
            delete next;
        }
    }
};
class HashTable
{
    int toSize; // total size
    int currSize;
    Node **table;
    int hashFunction(string key)
    {
        int idx = 0;
        for (int i = 0; i < key.size(); i++)
        {
            idx = (idx + (key[i] * key[i])) % toSize;
        }
        return idx % toSize;
    }
    void rehash()
    {
        Node **oldTable = table; // store old table
        int oldSize = toSize;    // store old size
        currSize = 0;
        toSize = 2 * toSize;
        table = new Node *[toSize]; // completely new table

        for (int i = 0; i < toSize; i++)
        {
            table[i] = NULL;
        }
        // copy old values

        for (int i = 0; i < oldSize; i++)
        {
            Node *temp = oldTable[i];
            while (temp != NULL)
            {
                insert(temp->key, temp->val);
                temp = temp->next;
            }
            if (oldTable[i] != NULL)
            {
                delete (oldTable[i]);
            }
            delete[] oldTable;
        }
    }

public:
    HashTable(int size = 5)
    {
        toSize = size;
        currSize = 0;

        table = new Node *[toSize];

        for (int i = 0; i < toSize; i++)
        {
            table[i] = NULL;
        }
    }
    void insert(string key, int val)
    {
        int idx = hashFunction(key);
        Node *newNode = new Node(key, val);
        // Node* head = table[idx];//NULL initially

        newNode->next = table[idx];
        table[idx] = newNode;
        currSize++;

        double lambda = currSize / (double(toSize));
        if (lambda > 1)
        {
            rehash();
        }
    }

    bool exist(string key)
    {
        int idx = hashFunction(key);
        Node *temp = table[idx];
        while (temp != NULL)
        {
            if (temp->key == key)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
    int search(string key)
    {
        int idx = hashFunction(key);
        Node *temp = table[idx];
        while (temp != NULL)
        {
            if (temp->key == key)
            {
                return temp->val;
            }
            temp = temp->next;
        }
        return -1;
    }
    void print()
    {
        for (int i = 0; i < toSize; i++)
        {
            cout << i << "->";
            Node *temp = table[i];
            while (temp != NULL)
            {
                cout << "(" << temp->key << " ," << temp->val << ")" << "->";
                temp = temp->next;
            }
            cout << endl;
        }
    }
    void remove(string key)//0(1)
    {
        // remove on the basis of key
        int idx = hashFunction(key);
        Node *temp = table[idx];
        Node *prev = temp;
        while (temp != NULL)//0(lambda)=>constant
        {
            if (temp->key == key)
            {
                if (prev == temp)
                {
                    table[idx] = temp->next; // if head node remove
                }

                else
                {
                    prev->next = temp->next; // if any mid node remove
                }
                break;
            }
            prev = temp;
            temp = temp->next;
        }
    }
};
int main()
{
    HashTable ht;

    ht.insert("India", 150);
    ht.insert("china", 150);
    ht.insert("us", 50);
    ht.insert("nepal", 10);
    ht.insert("uk", 20);

    // if (ht.exist("India"))
    // {
    //     cout << "India populatopn : " << ht.search("India") << endl;
    // }
    // if (ht.exist("nepal"))
    // {
    //     cout << "nepal populatopn : " << ht.search("nepal") << endl;
    // }
    // if (ht.exist("canada"))
    // {
    //     cout << "canada populatopn : " << ht.search("canada") << endl;
    // }
    ht.print();
    ht.remove("china");
    ht.remove("uk");
    ht.print();

    return 0;
}
// India populatopn : 150
// nepal populatopn : 10
// 0->
// 1->(china ,150)->
// 2->
// 3->(uk ,20)->(nepal ,10)->(India ,150)->
// 4->(us ,50)->