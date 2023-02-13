#include <iostream>
using namespace std;

class A
{
public:
    void myMethod()
    {
        cout<<"This is a Method inside a Grand Parent class\n"<<endl;
    }
};

class B: public A
{
public:
    void myMethod()
    {
        //A::myMethod();                  //Calling a Method inside A Class
        cout<<"This is a Method inside a Parent(Mother) class\n"<<endl;
    }

};

class C: public B
{
public:
    void myMethod()
    {
        A::myMethod();           //Calling a Method inside A Class
        B::myMethod();           //Calling a Method inside B Class
        cout<<"This is a Method inside a Child class\n"<<endl;
    }
};


int main()
{
    C myObj;                   //In the main Program, we call C who in turn will call A and B
    myObj.myMethod();
}

