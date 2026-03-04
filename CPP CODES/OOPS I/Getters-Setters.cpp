#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name; //they are private memebers
    float cgpa;

public:
    void getPercenatge()
    {
        cout << (cgpa * 10) << "% \n";
    }

    // Setters
    void setName(string nameVal)
    {
        name = nameVal;
    }
    void setCgpa(float cgpaVal)
    {
        cgpa = cgpaVal;
    }



    // Getters
    string getName()
    {
        return name;
    }
    float getCgpa()
    {
        return cgpa;
    }
};


int main()
{
    Student s1;
    s1.setName("Alfee");
    s1.setCgpa(9.1);

    cout<<s1.getName()<<endl;
    cout<<s1.getCgpa()<<endl;

    return 0;
}
