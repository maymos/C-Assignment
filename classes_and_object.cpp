#include<iostream>
using namespace std;

class myClass
{
public:
    int num;
    string txt;
};

int main()
{
    myClass myObject;                            //Creation of an Object


    myObject.num = 10;                           //Creating an Attributes (or Variables)
    myObject.txt = "This is a wonderful Text\n";

    cout<<myObject.num<<endl;
    cout<<myObject.txt;

    return 0;
}
