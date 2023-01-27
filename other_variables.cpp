#include <iostream>
using namespace std;

int main(){

    int myNum = 5;
    cout<<"My integer = ";
    cout<<myNum <<endl;

    double myfloat = 5.97;
    cout<<"My Float = ";
    cout<<myfloat <<endl;

    string mystring = "Wonderland";
    cout<<mystring <<endl;

    char mychar = 'S';   //Note Char must be Single Quote
    cout<<mychar <<endl;

    bool myboolean = false;  //Returns 1 for true and 0 for false
    cout<<myboolean <<endl;

    cout<<"A Variable can be declared while you assign the value later\n";

    int h2;
    h2 = 25;
    cout<<"H2 = ";
    cout<<h2;

    cout<<"\n\nYou can combine Text and Variable value by using << in between them\n";
    cout<<"I am "<<h2<<" Years Old\n";

    cout<<"\nADDITION OF VARIABLES\n";
    int a = 10;
    int b = 30;
    int sum = a+b;
    cout<<"The Sum = "<<sum;

    cout<<"\n\nSUBTRACTION OF VARIABLES\n";
    int c = 10;
    int d = 30;
    int subt = d-c ;
    cout<<"The Sum = "<<subt;

    cout<<"\n\nCOMMA SEPARATED LIST\n";
    int x = 3, y = 8, z = 12;
    cout<<x+y+z <<endl;

    int g,h,u;
    g = 4;
    h = 70;
    u = 12;
    cout<<g+h+u;

    cout<<"\n\nCreate an Unchangeable Variable use 'const'\n";
    const int abx = 20;
    const float PI = 3.142;
    //abx = 12; will not be accepted

    cout<<"abx = "<<abx<<"\nPI = "<<PI;

    return 0;

}
