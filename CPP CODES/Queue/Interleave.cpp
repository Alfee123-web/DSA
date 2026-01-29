#include <iostream>
#include <queue>
using namespace std;

void interleave(queue<int> &org)
{
    // pass by reference so that we can make changes in original queue
    int n = org.size();
    queue<int> first;

    for (int i = 0; i < n / 2; i++) // first half tak
    {
        first.push(org.front());
        org.pop();
    }

    while (!first.empty())
    {
        org.push(first.front());
        first.pop();

        org.push(org.front());
        org.pop();
    }
}

int main()
{
    queue<int> org;
    for (int i = 1; i <= 10; i++)
    {
        org.push(i);
    }
    interleave(org);
    for (int i = 1; i <= 10; i++)
    {
        cout << org.front() << " ";
        org.pop();
    }
    cout << endl;

    return 0;
}
//TC & SC = 0(N)
//1 6 2 7 3 8 4 9 5 10 