#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food = "Pizza"; //variable of the type string
    string* pointv = &food; //pointer variable with name pointv that stores the address of food

    cout<<food<<endl;      //output the value of food
    cout<<&food<<endl;     //output the memory address of food
    cout<<pointv<<endl;    //output the memory address of food with pointer e.g(0xa78b3ffd40)


    //you can use asteric to get the value of what was stored  in the address location called Dereferencing
    cout<<* pointv<<endl;

    //Modify Pointer
    * pointv = "Congratulations";
    cout<<* pointv<<endl;
return 0;
}



