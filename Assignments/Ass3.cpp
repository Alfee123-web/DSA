//ans 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    if(n>0){
        cout<<"Positive"<<endl;
    }else if (n<0){
        cout<<"Negative"<<endl;
    }else{
        cout<<"zero"<<endl;
    }
    return 0;
}


//ans 2
#include <iostream>
using namespace std;
int main()
{
    int y;
    cout << "Enter the year:";
    cin >> y;

    if (y % 4 == 0)
    {
        cout << "Leap year" << endl;
    }
    else if (y % 100)
    {
        cout << "not a leap year" << endl;
    }
    else if (y % 4)
    {
        cout << "leap year" << endl;
    }
    else
    {
        cout << "not a leap year" << endl;
    }
    return 0;
}

// ans 3 
//  0, 63

 // ans 4 
//  Bye


// ans 5
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the three digit number:";
    cin >> n;

    int num = n; // creating a copy
    int dig1 = num % 10;
    num /= 10;
    int dig2 = num % 10;
    num /= 10;
    int dig3 = num;

    int sum = dig1 * dig1 * dig1 + dig2 * dig2 * dig2 + dig3 * dig3 * dig3;

    if (sum == n)
    {
        cout << "Armstrong" << endl;
    }
    else
    {
        cout << "Not Armstrong" << endl;
    }
    return 0;
}