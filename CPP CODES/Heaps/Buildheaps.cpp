#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;
class Heap
{
    vector<int> vec; // max heap
public:
    void push(int val) // 0(logn)
    {
        // step 1
        vec.push_back(val);

        // fix heap
        int x = vec.size() - 1; // child 1
        // child => index last node
        int parI = (x - 1) / 2;

        while (parI >= 0 && vec[x] > vec[parI])
        { // 0(logn)
            swap(vec[x], vec[parI]);

            x = parI;
            parI = (x - 1) / 2;
        }
    }
    void heapify(int i)
    { // i=> parent indx
        if (i >= vec.size())
        {
            return;
        }
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        int maxIdx = i;
        if (l < vec.size() && vec[l] > vec[maxIdx])
        {
            maxIdx = l;
        }
        if (r < vec.size() && vec[r] > vec[maxIdx])
        {
            maxIdx = r;
        }
        swap(vec[i], vec[maxIdx]); // swap with parent
        if (maxIdx != i)
        {
            // swapping hui hai with child node
            heapify(maxIdx);
        }
    }
    void pop()
    {
        // step 1
        swap(vec[0], vec[vec.size() - 1]);
        // step 2
        vec.pop_back();
        // fix heap
        heapify(0); // root=>index = 0
    }
    int top() // 0(1)
    {
        return vec[0]; // highest priority element
    }
    bool empty()
    {
        return vec.size() == 0;
    }
};
int main()
{
    Heap heap;
    // heap.push(50);
    // heap.push(10);
    // heap.push(100);
    heap.push(9);
    heap.push(4);
    heap.push(8);
    heap.push(1);
    heap.push(2);
    heap.push(5);

    while (!heap.empty())
    {
        cout << heap.top() << endl;
        heap.pop();
    }
    // descending order
    // 9
    // 8
    // 5
    // 4
    // 2
    // 1

    return 0;
}
// 100 => max value
//for min_heap => change sign (push , heapify function)