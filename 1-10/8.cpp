#include <iostream>

using namespace std;

class clsA
{
public:
    int var;
    static int counter; // if we have 3 objects = we have 3 var, 1 counter (live time for the whole program )

    clsA()
    {
        counter++;
    }

    void print()
    {
        cout << "\nvar = " << var;
        cout << "\ncounter = " << counter << endl;
    }
};

void fun1()
{

    cout << "thing";
}

int main()
{

    clsA v1, v2, v3;

    v1.var = 10;
    v2.var = 20;
    v3.var = 30;

    v1.print();
    v2.print();
    v3.print();

    v1.counter = 500;

    cout << "\nafter changing the static member in one object : " << endl;

    v1.print();
    v2.print();
    v3.print();

    return 0;
}

int clsA::counter = 0; // static variable initialisation should be outside the class before the main method. wait u can do it here