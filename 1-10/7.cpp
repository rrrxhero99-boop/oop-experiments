#include <iostream>

using namespace std;

class clsPerson
{
private:
    string FullName;

public:
    clsPerson()
    {

        FullName = "7leb";
        cout << "hi im constructor .. " << endl;
    }

    ~clsPerson()
    {
        cout << "hi im destructor.." << endl;
    }
    // this is a destructer and will delete the variables and the object after we leave the class
    // its the last function on the class and u can have only one of it
    // if u write (clsPerson person1) in the main method it wont print. but since i use the terminal it will destroy itself anyway
    // fuck
};

void fun1()
{
    clsPerson person1;
}

void fun2()
{
    clsPerson * person2 = new clsPerson;

    delete person2;
    // if u use pointer u need to delete it so the code isnt slow 
    // please rewatch the destructor video 
}

int main()
{

    fun1();
    fun2();

    return 0;
}