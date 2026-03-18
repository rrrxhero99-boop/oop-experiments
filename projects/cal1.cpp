#include <iostream>

using namespace std;

class clsCalculator
{
private:
    float _lastNumber = 0;
    float _Result = 0;
    float _PreviousResult = 0;
    string _LastOperation = "clear";

    bool IsZero(float Number)
    {
        return (Number == 0);
    }

public:
    void Add(float Number)
    {
        _lastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Adding";
        _Result += Number;
    }

    void Sub(float Number)
    {
        _lastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Subtracting";
        _Result -= Number;
    }

    void Divide(float Number)
    {
        _lastNumber = Number;

        if (IsZero(Number))
            Number = 1;


        _PreviousResult = _Result;
        _LastOperation = "Deviding";
        _Result /= Number;
    }

    void Mult(float Number)
    {
        _lastNumber = Number;
        _PreviousResult = _Result;
        _LastOperation = "Multing";
        _Result *= Number;
    }

    void Clear()
    {
        _lastNumber = 0;
        _PreviousResult = 0;
        _LastOperation = "Clear";
        _Result = 0;
    }

    void PrintResult()
    {
        cout << "result after " << _LastOperation << " " << _lastNumber << " is : " << _Result << endl;
    }
};

int main()
{

    clsCalculator calc1;

    calc1.Add(9);
    calc1.PrintResult();
    calc1.Divide(2);
    calc1.PrintResult();
    calc1.Clear();
    calc1.PrintResult();

    return 0;
}