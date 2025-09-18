// ANS 1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;

//     for (int i = 1; i <= n; i++)
//     { // rows

//         for (int j = 1; j <= i; j++)
//         { // columns

//             if ((i+j) % 2 == 0)//alternate
//             {
//                 cout << "1";
//             }
//             else
//             {
//                 cout << "0";
//             }
//         }

//    cout << endl;

// }
// return 0;
// }

// ANS 2//
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             // space
//             cout << " ";
//         }
//         for (int k = 1; k <= n; k++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//         return 0;
//     }

    // // ANS 3
    #include <iostream>
    using namespace std;
    int main()
    {
        int n = 5;
        for (int i = 1; i <= n; i++)
        {
            //spaces
            for (int j = 1; j < n - i; j++)
            {
                cout << " ";
            }
            //num backwards
            for (int j = i; j >=1; j--)
            {
                cout << j;
            }
            //nums forward
            for(int j = 2;j<=i;j++){
                cout<<j;
            }

        cout << endl;
    }
    return 0;
    }