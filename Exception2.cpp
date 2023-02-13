#include <iostream>
using namespace std;


int main()
{
    string Dept;
    try
    {
        cout<<"WHICH DEPT ARE YOU FROM?: "<<endl;
        cin>> Dept;
        if (Dept=="Service")
        {
            cout<<"ACCESS GRANTED\n";
        }
        else
        {
            throw (Dept);
        }
    }
    catch (...)
    {
        cout<<"Fatal Error: You are not allowed to Enter this LAB\n"<<endl;
        cout<<"ONLY STAFF FROM SERVICE DEPARTMENT ARE ALLOWED TO ENTER HERE!!\n";
        cout<<Dept<<" are not allowed in Here\n\n";
    }
    return 0;
}
