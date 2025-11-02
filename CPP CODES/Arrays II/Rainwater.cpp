#include <iostream>
using namespace std;

int trap(int *heights, int n)
{
    int leftMax[20000]; // max array size
    // leftMax[0] = INT16_MIN; -infinity
    leftMax[0] = heights[0]; // customize kr denge because int min me se kisi ko minus
    // krenge value to vo automatically positive ban jayegi

    int rightMax[20000];
    // rightMax[n - 1] = INT16_MIN;
    rightMax[n - 1] = heights[n - 1];

    cout << rightMax[n - 1] << " , ";

    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], heights[i - 1]);
        // cout << leftMax[i] << " , ";
    }
    // n-2 se start hoga because n-1 is already initialized
    for (int i = n - 2; i >= 0; i--)
    { // backwards loop chalega
        rightMax[i] = max(rightMax[i + 1], heights[i + 1]);
        // cout << rightMax[i] << " , ";
    }
    int waterTrapped = 0;
    for (int i = 0; i < n; i++)
    {
        int currWater = min(leftMax[i], rightMax[i]) - heights[i]; // minus krenge bar ki height
        if (currWater > 0)
        {
            waterTrapped += currWater;
        }
    }

    cout << "Water Trapped :" << waterTrapped << endl;
    return waterTrapped;
}
int main()
{
    int heights[7] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(heights) / sizeof(int);

    trap(heights, n);
    return 0;
}

// TIME COMPLEXITY = 0(N)
