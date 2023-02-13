//METHOD INSIDE CLASS FUNCTION

#include<iostream>
using namespace std;

class myClass
{
  public:
    void myMethod()           //METHOD INSIDE CLASS FUNCTION
    {
        cout<<"This is my first method crated; HELLO WORLD!!!\n";
    }
};


int main()
{
    myClass myObj;
    myObj.myMethod();     //call the Method created

    return 0;
}


/*
Class Methods
==================
Methods are functions that belongs to the class.

There are two ways to define functions that belongs to a class:

Inside class definition
Outside class definition
In the following example, we define a function inside the class, and we name it "myMethod".

Note: You access methods just like you access attributes; by creating an object of the class and using the dot syntax (.):
*/
