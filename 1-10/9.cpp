#include <iostream>

using namespace std;

class clsA
{
public:
   
    // this is a static function and u can use it in any class
    // static functions are on the class range not object like static variables
    static int function1()
    {
        return 10;
    }

    int function2()
    {
        return 20;
    }
};

int main()
{
    clsA f1,f2,f3;

    cout << clsA::function1() << endl; // u can use it by the scope reselotion (without the need of creating objects)
    // cout << clsA::function2() << endl; )u cant do this since fun2 isnt a static function
    cout << f1.function1() << endl;
    cout << f1.function2() << endl;
    cout << f2.function2() << endl;
    
    return 0;
}