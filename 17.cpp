#include <iostream>

using namespace std;

class clsPerson
{

public: // add the "virtual" key so u let the ide know that u will override this function
        // try and delete it and run the code
    virtual void Print()
    {
        cout << "hi im a person" << endl;
    }
};

class clsEmployee : public clsPerson
{
public:
    void Print()
    {
        cout << "hi im a employee" << endl;
    }
};

class clsStudent : public clsPerson
{
public:
    
    void Print() {
        cout << "hi im a student" << endl;
    }
};

int main()
{

    clsEmployee Employee1;
    clsStudent Student1;

    clsPerson *Person1 = &Employee1;
    clsPerson *Person2 = &Student1;

    Person1->Print();
    Person2->Print();

    return 0;
}