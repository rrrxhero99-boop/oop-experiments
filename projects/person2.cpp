#include <iostream>

using namespace std;

class clsPerson
{
private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _FullName;
    string _Email;
    string _Phone;

public:
    clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

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
        return _FirstName + " " + _LastName;
    }

    void SetEmail(string Email)
    {
        _Email = Email;
    }

    string Email()
    {
        return _Email;
    }

    void setPhone(string Phone)
    {
        _Phone = Phone;
    }

    string Phone()
    {
        return _Phone;
    }

    void print()
    {
        cout << "info : \n";
        cout << "----------------------";
        cout << "\nID         : " << _ID;
        cout << "\nFirst name : " << _FirstName;
        cout << "\nLast name  : " << _LastName;
        cout << "\nFull name  : " << FullName();
        cout << "\nEmail      : " << _Email;
        cout << "\nPhone      : " << _Phone;
        cout << "\n----------------------\n";
    }

    void SendEmail(string subject, string body)
    {
        cout << "\nthe following messege sent succsessfully to email : " << _Email;
        cout << "\nsubject : " << subject;
        cout << "\nbody : " << body << endl;
    }

    void SendSMS(string massage)
    {
        cout << "\nthe following messege sent succsessfully to phone : " << _Phone << endl;
        cout << massage << endl;
    }
};

int main()
{

    clsPerson person1(10, "Ali", "7leb", "rrrxhero99@gmail.com", "0567947811");

    person1.print();
    person1.SendEmail("hi", "how are you?");
    person1.SendSMS("my mom is so noisy ");

    return 0;
}