#include <iostream>
#include <string>
using namespace std;

class CBN
{
public:
    string Branch = "Abuja";
    string location = "Garki";
    void deparment()
    {
        cout<<"This is a feature from Parent Class Function"<<endl;
    }
};

class DMB: public CBN();
{
public:
    string bank_name = "First Bank Plc";
};

int main()
{
    CBN myObj;
    myObj.deparment();
    cout<<"CBN Branch "<<myObj.Branch<<"\nCBN Location "<<myObj.location<<"\nCommercial Bank Name "<<myObj.bank_
}

