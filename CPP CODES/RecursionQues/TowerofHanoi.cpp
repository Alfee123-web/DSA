#include <iostream>
using namespace std;

int towerofHanoi(int n, string source, string destination, string helper)
{
    if (n == 0)
    {
        return -1;
    }
    towerofHanoi(n - 1, source, helper, destination);
    
        // move top n-1 disc from source to helper using destination rod
        cout << "move" << n << " disc from " << source << "to" << destination <<endl;

        // move top n-1 disc from helper to destination using source rod
        towerofHanoi(n - 1, helper, destination, source);
    
}
int main()
{
// no. of disc , from A(source) , to C(destination), using B(helper)
    cout << towerofHanoi(2, "A", "B", "C") << endl;
    cout << towerofHanoi(3, "A", "B", "C") << endl;
    cout << towerofHanoi(4, "A", "B", "C") << endl;
    return 0;
}
//output = 2
// move1 disc from AtoC
// move2 disc from AtoB
// move1 disc from CtoB

//output = 3
// move1 disc from AtoB
// move2 disc from AtoC
// move1 disc from BtoC
// move3 disc from AtoB
// move1 disc from CtoA
// move2 disc from CtoB
// move1 disc from AtoB