#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxWater(const vector<int> &height)
{
    int start = 0;
    int end = height.size() - 1;
    int maxWater = 0;

    while (start < end)
    {
        int width = end - start;
        int ht = min(height[start], height[end]);
        int currWater = width * ht;

        maxWater = max(currWater, maxWater);
     

        if ( height[start] < height[end])
            {
                start++;
            }
        else
        {
            end--;
        }
    }
      return maxWater;
 
}
int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout<<maxWater(height)<<endl; // 49

    return 0;
}




