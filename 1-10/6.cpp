#include <iostream>

using namespace std;

class clsAddress
{
private:
    string _AddressLine1;
    string _AddressLine2;
    string _POBox;
    string _ZipCode;

public:
    clsAddress(string AddressLine1, string AddressLine2, string POBox, string ZipCode)
    {
        _AddressLine1 = AddressLine1;
        _AddressLine2 = AddressLine2;
        _POBox = POBox;
        _ZipCode = ZipCode;
    }

    // copy constructor
    clsAddress(clsAddress &OldObject)
    {
        _AddressLine1 = OldObject.AddressLine1;
        _AddressLine2 = OldObject.AddressLine2;
        _POBox = OldObject.POBox;
        _ZipCode = OldObject.ZipCode;
    }

    // no need to write this.. u can delete it the compiler will do it anyway

    void setAddressLine1(string AddressLine1)
    {
        _AddressLine1 = AddressLine1;
    }

    string AddressLine1()
    {
        return _AddressLine1;
    }

    void setAddressLine2(string AddressLine2)
    {
        _AddressLine2 = AddressLine2;
    }

    string AddressLine2()
    {
        return _AddressLine2;
    }

    void setPOBox(string POBox)
    {
        _POBox = POBox;
    }

    string POBox()
    {
        return _POBox;
    }

    void SetZipCode(string ZipCode)
    {
        _ZipCode = ZipCode;
    }

    string ZipCode()
    {
        return _ZipCode;
    }

    void print()
    {
        cout << "\naddress details : \n";
        cout << "---------------------------\n";

        cout << "address line 1 " << _AddressLine1;
        cout << "\naddress line 2 : " << _AddressLine2;
        cout << "\nPO box : " << _POBox;
        cout << "\nzip code : " << _ZipCode << endl;
    }
};

int main()
{

    clsAddress Address1("er street", "rrtt", "34567", "7777");
    Address1.print();

    clsAddress Address2 = Address1; // copy constructor
    Address2.print();

    return 0;
}