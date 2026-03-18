#include <iostream>

using namespace std;

class clsPerson
{
private:
    string _FirstName;
    string _LastName;

public:
    // property set :
    void setFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    // property get :
    string FirstName()
    {
        return _FirstName;
    }

    // property set :
    void setLastName(string LastName)
    {
        _LastName = LastName;
    }

    // property get :
    string LastName()
    {
        return _LastName;
    }

    string FullName()
    {
        return FirstName() + " " + LastName();
    }
};

int main()
{

    clsPerson person1;

    person1.setFirstName("ali");
    person1.setLastName("m7md");

    cout << "first name : " << person1.FirstName() << endl;
    cout << "last name : " << person1.LastName() << endl;
    cout << "full name : " << person1.FullName() << endl;

    return 0;
}