//METHOD OUTSIDE CLASS FUNCTION

#include<iostream>
using namespace std;

class myClass
{
public:
    void myMethod();    //Declaring the Function
};

void myClass::myMethod()
{
    cout<<"This is a Method outside the class function\n";     //Setting Up the Function
}

int main()
{
    myClass myObj;
    myObj.myMethod();

    return 0;
}
