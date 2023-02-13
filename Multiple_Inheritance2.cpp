#include <iostream>
using namespace std;


//This is Base Class 1
class BaseClass1
{
public:
    void class1Func()
    {
        cout<<"Printing from class 1"<<endl;
    }
};


//This is Base Class 2
class BaseClass2
{
public:
    void class2Func()
    {
        cout<<"Printing from class 2"<<endl;
    }
};


//This is Child Class
class child: public BaseClass1, public BaseClass2{   //It inheriting from Base Class 1 and Base Class 2
};


//The Main Program
int main()
{
    child myObj;
    myObj.class2Func();
    myObj.class1Func();
}
