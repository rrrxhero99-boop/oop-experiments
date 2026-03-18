#include <iostream>

using namespace std;

class clsPerson
{
private:
    int _ID = 10;

    string _FirstName;
    string _LastName;

public:
    /*

    void SetID(int ID)
    {
        _id = ID;
    }
    */
    // this is read only property cause we dont have set
    
    int ID()
    {
        return _ID;
    }

    void setFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    string FirstName()
    {
        return _FirstName;
    }

    void setLastName(string LastName)
    {
        _LastName = LastName;
    }

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
    
    cout << "ID : " << person1.ID() << endl;
    cout << "first name : " << person1.FirstName() << endl;
    cout << "last name : " << person1.LastName() << endl;
    cout << "full name : " << person1.FullName() << endl;

    return 0; // set to read and get to write
}