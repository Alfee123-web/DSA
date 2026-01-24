#include <iostream>
#include <list>
#include <iterator>
using namespace std;
void printList(list<int> ll)
{
    list<int>::iterator itr;
    for (itr = ll.begin(); itr != ll.end(); itr++)
    {
        cout << (*itr) << "->";
    }
    cout << "NULL" << endl;
}
// ll.begin()-> itr of head
// ll.end() -> itr ofd tail->next
//    2->4->3->1->NULL;
int main()
{
    list<int> ll; // vector<int> arr => similar

    ll.push_front(4);
    ll.push_front(2);
    ll.push_back(3);
    ll.push_back(1); // 2,4,3,1

    printList(ll);
    cout<<ll.size()<<endl; // 4
    cout<<"head = " <<ll.front()<<"\n";
    cout<<"tail = " <<ll.back()<<"\n";

    // ll.pop_front();
    ll.pop_back();
    printList(ll);
    return 0;
}
//OUTPUT
// 2->4->3->1->NULL
// 4
// head = 2
// tail = 1
// 2->4->3->NULL