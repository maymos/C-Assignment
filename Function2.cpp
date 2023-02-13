#include <iostream>
using namespace std;

void myFunction();    //Function Declaration

int main()
{

    myFunction();

    return 0;
}



//The Function Definition Starts Here
void myFunction()
{
    cout<<"This is a Function Declared before Main() but defined after main()"<<endl;
}
