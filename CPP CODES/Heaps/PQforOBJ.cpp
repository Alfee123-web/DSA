#include <iostream>
#include <string>
#include <queue>
#include <vector>
using namespace std;

class Student
{ // "<" OVERLOAD
public:
    string name;
    int marks;

    Student(string name, int marks)
    {
        this->name = name;
        this->marks = marks;
    }

    // OPERATOR OVERLOADING
    bool operator < (const Student &obj) const
    {
        return this->marks < obj.marks;
    }
};


int main()
{
    priority_queue<Student> pq;

    pq.push(Student("aman", 100));
    pq.push(Student("akshat", 200));
    pq.push(Student("alfee", 300));


    while (!pq.empty())
    {
        cout << "top = " << pq.top().name << " ," << pq.top().marks << endl;
        pq.pop();
    }
    return 0;
}
