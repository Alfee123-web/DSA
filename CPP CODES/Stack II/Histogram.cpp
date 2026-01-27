#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

void maxareaHistogram(vector<int> height)
{
    int n = height.size();
    vector<int> nextSmallerleft(n);
    vector<int> nextSmallerright(n);
    stack<int> s;

    //    nextSmallerleft
    nextSmallerleft[0] = -1;
    s.push(0); // index 0  ko push kr denge
    for (int i = 1; i < height.size(); i++)//forward loop
    {
        int curr = height[i];
        while (!s.empty() && curr <= height[s.top()])
        {
            s.pop();
        }
        if (s.empty())
        {
            nextSmallerleft[i] = -1;
        }
        else
        {
            nextSmallerleft[i] = s.top();
        }
        s.push(i);//index
    }

    while (!s.empty())
    {
        s.pop();
    }
    // nextSmallerright
  
    s.push(n - 1);
    nextSmallerright[n - 1] = n;
    for (int i = n - 2; i >= 0; i--)//backwards loop
    {
        int curr = height[i];
        while (!s.empty() && curr <= height[s.top()])
        {
            s.pop();
        }
        if (s.empty())
        {
            nextSmallerright[i] = n; //size 
        }
        else
        {
            nextSmallerright[i] = s.top();
        }
          s.push(i);
    }
    int maxArea = 0;
    for (int i = 0; i < n; i++)
    {
    int ht = height[i];
    int width = nextSmallerright[i] - nextSmallerleft[i] -1;//r-l-1
    int area = ht * width;

    maxArea = max(area , maxArea);
    }
    cout<<maxArea<<endl;
    
  
}

int main()
{
    vector<int> height = {2, 1, 5, 6, 2, 3};
    maxareaHistogram(height);
    return 0;
}
