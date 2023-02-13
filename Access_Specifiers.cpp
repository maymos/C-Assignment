/*

The public keyword is an access specifier. Access specifiers define how the members
(attributes and methods) of a class can be accessed. In the example above,
the members are public - which means that they can be accessed and modified from outside the code.

However, what if we want members to be private and hidden from the outside world?

In C++, there are three access specifiers:

public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however,
they can be accessed in inherited classes. You will learn more about Inheritance later.


In the following example, we demonstrate the differences between public and private members:

*/
#include <iostream>
using namespace std;

class GDA
{
public:
    string Library_password;
private:
    string Administrative_password;
};

int main()
{
    GDA myObj;
    myObj.Library_password = "libgda2023";
    myObj.Administrative_password = "gudSuperVisor";  //Note you get an error because its private
    cout<<"This is the Public Library Password"<<myObj.Library_password<<endl;
    cout<<"This is the Private Admin Password"<<myObj.Administrative_password<<endl;  //Note you get an error because its private
}

/*

Note: It is possible to access private members of a class using a public method inside the same class.
See the next chapter (Encapsulation) on how to do this.

Tip: It is considered good practice to declare your class attributes as private (as often as you can).
This will reduce the possibility of yourself (or others) to mess up the code. This is also the main
ingredient of the Encapsulation concept, which you will learn more about in the next chapter.

Note: By default, all members of a class are private if you don't specify an access specifier:

Example:

class MyClass {
  int x;   // Private attribute
  int y;   // Private attribute
};

*/
