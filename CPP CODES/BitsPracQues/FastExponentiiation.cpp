#include <iostream>
using namespace std;

void fastExpo(int x, int n)
{
    int ans = 1;

    while (n > 0)
    {
        int lastBit = n & 1;
        // to get the last bit (last digit)

        if (lastBit)
        { // lastbit = 1 hai
            ans = ans * x;
        }

        x = x * x;  // double
        n = n >> 1; // to get the last bit in the next iteration
    }

    cout << ans << endl;
}
int main()
{
    fastExpo(3, 5);
    fastExpo(3, 4);
    return 0;
}