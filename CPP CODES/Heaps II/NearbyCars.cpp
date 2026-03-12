#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;
class Car
{
public:
    int idx;
    int disS;
    Car(int idx, int disS)
    {
        this->idx = idx;
        this->disS = disS;
    }

    // operator overloading
    bool operator < (const Car &obj) const
    {
        return this->disS > obj.disS;
    }
};
void nearbyCars(vector<pair<int, int>> pos, int K)
{
    // idx , dis square
    vector<Car> cars;

    for (int i = 0; i < pos.size(); i++) // 0(n)
    {
        int distS = (pos[i].first * pos[i].first) + (pos[i].second * pos[i].second);
        cars.push_back(Car(i, distS));
    }
    priority_queue<Car> pq(cars.begin(), cars.end()); // 0(n)

    // for (int i = 0; i < cars.size(); i++) // 0(n * logn)
    // {
    //     pq.push(cars[i]);
    // }
    for (int i = 0; i < K; i++) // 0(K * logn + n )
    {
        cout << pq.top().idx << endl; // 0(k)
        pq.pop();                     // 0(logn)
    }
}
int main()
{
    vector<pair<int, int>> pos;
    pos.push_back(make_pair(3, 3));
    pos.push_back(make_pair(5, -1));
    pos.push_back(make_pair(-2, 4));

    int K = 2;

    nearbyCars(pos , K);
    return 0;
}
//MIN HEAP 
//0
//2