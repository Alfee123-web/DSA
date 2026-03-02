#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second < p2.second; // true for ascending order - on the basis of end time
    // return p1.second < p2.second; // descending

    // return p1.first < p2.first; // ascending
    // return p1.first > p2.first; // descending
}

int main()
{
    vector<int> start = {0, 1, 2};
    vector<int> end = {9, 2, 4};

    vector<int> vec(5, 0); // initialize with 0
    //    pair<int,int> // single pair
    vector<pair<int, int>> activities(3, make_pair(0, 0));
    // 3 size  => activites , function

    activities[0] = make_pair(0, 9);
    activities[1] = make_pair(1, 2);
    activities[2] = make_pair(2, 4);
    for (int i = 0; i < activities.size(); i++)
    {
        cout << "A" << i << " : " << activities[i].first << " , " << activities[i].second << endl;
    }

    sort(activities.begin(), activities.end(), compare);
    cout << "--------------sorted--------\n";
     for (int i = 0; i < activities.size(); i++)
    {
        cout << "A" << i << " : " << activities[i].first << " , " << activities[i].second << endl;
    }

    return 0;
}

