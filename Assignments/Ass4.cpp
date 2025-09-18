// ANS 1
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n = 4;
//      int fac = 1;
//      for ( int i = 1; i<=n ; i++){
//          fac = fac*i;
//      }
//      cout<<"Factorail is "<<fac<<endl;
//      return 0;
// }

// ANS2
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int n = 4;

//     for ( int i = 1; i<=10 ; i++){
//           cout<<"table is "<<(n*i)<<endl;
//     }

//     return 0;
// }

// ANS3
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//      int N;
//      cout << "enter number:";
//      cin >> N;

//     int num = N;

//     int dig1 = num % 10;
//     num = num / 10;

//     int dig2 = num % 10;
//     num = num / 10;

//     int dig3 = num % 10;
//     num = num / 10;
//     int Sum = dig1 * dig1 * dig1 + dig2 * dig2 * dig2 + dig3 * dig3 * dig3;
//     if (Sum == N)
//     {
//         cout << "Armstrong"<<endl;
//     }
//     else
//     {
//         cout << "Not armstrong"<<endl;
//     }

// return 0;
// }

// ANS4 print primes from 2 to N

#include <iostream>
using namespace std;

bool isPrime(int N)
{

        if (N == 1)
        {
            return true;
        }
        for (int i = 2; i * i <= N; i++)
        {
            if (N % i == 0)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }

    int allPrimes(int N)
    {
        for (int i = 2; i <= N; i++)
        {
            if (isPrime(i))
            { // true
                cout << i << " ";
            }
            cout << endl;
        }
    }
    int main()
    {
        allPrimes(13);
        return 0;
    }

    // ANS 5
    //  #include<iostream>
    //  using namespace std;
    //  int main(){
    //  int N=10;

    //     int n1 = 0;
    //    int  n2 = 1;
    //    for(int i=2;i<=N;i++){
    //     int n3 = n1 + n2;
    //     cout<<n3<<endl;
    //     n1 = n2;
    //     n2 = n3;
    //     cout<<"\n";
    //    }
    //     return 0 ;

    // }
