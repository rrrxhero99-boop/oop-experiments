#include <iostream>

using namespace std;

class clsPerson
{
private:
    // accsess on thge class only
    int var1 = 5;

    int function1()
    {
        return 40;
    }

protected:
    // accsess on the class and inheretes classes
    int var2 = 4;

    int function2()
    {
        return 50;
    }

public:
    // accsess for everyone
    string FirstName;
    string LastName;

    string FullName()
    {
        return FirstName + " " + LastName;
    }

    int function3()
    {
        return function1() * var1 * var2;
    }
};

int main()
{

    clsPerson Person1;

    Person1.FirstName = "ali";
    Person1.LastName = "m7md";

    // if u type person1. u will only see the public members..

    cout << Person1.FullName() << endl;
    cout << Person1.function3() << endl;

    return 0;
}