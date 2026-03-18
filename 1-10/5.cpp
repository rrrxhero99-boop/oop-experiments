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
    // this is a constrocter .. so that u cant make an empty object
    /* u can use it if u want the developer to give u some parameters

    clsAddress {

    }
            its an empty function with the  same class name.. this above is the deafult constructer.. if u dont write it the ide will do it anyway 
            
    */
    clsAdress(string AddressLine1, string AddressLine2, string POBox, string ZipCode)
    {
        _AddressLine1 = AddressLine1;
        _AddressLine2 = AddressLine2;
        _POBox = POBox;
        _ZipCode = ZipCode;
    }

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
        cout << "address details : \n";
        cout << "____________________________\n";

        cout << "address line 1 " << _AddressLine1;
        cout << "\naddress line 2 : " << _AddressLine2;
        cout << "\nPO box : " << _POBox;
        cout << "\nzip code : " << _ZipCode << endl;
    }
};

int main()
{

    clsAddress Address1("er street" , "rrtt" , "34567" , "7777"); // this is how u fill a constructer .. ig

    Address1.print();

    return 0;
}