#include <iostream>
using namespace std;

class Person
{

private:
    int id;
    string password;

public:
    string username;

    Person(int id)
    {
        this->id = id;
    }
    // Getter
    string getPassword()
    {
        return password;
    }
    // Setter
    string setPassword(string password)
    {
        this->password = password;
    }
};

int main()
{
    Person p1(123);
    p1.username = "Alfee khan";
    p1.setPassword("abcs");

    cout << "username:" << p1.username << endl;
    cout << "password:" << p1.getPassword() << endl;
    return 0;
}
