#include <iostream>

using namespace std;

class clsPerson // class (private by deafult)
{
private: // or u can not type it
    int x;

public:
    string FirstName;
    string lastName;

    string FullName()
    {
        return FirstName + " " + lastName;
    }
};

int main()
{
    clsPerson person1; // object

    person1.FirstName = "m7md";
    person1.lastName = "777";

    cout << person1.FullName() << endl;

    string s1; // string is a class that has method
    //s1.        // s1.whatever .. u have so many methods/functions in the string class
        return 0;
}