#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food = "Amala";
    string &meal = food;        //the & turn it to a reference to food (& was used to create a reference Variable

    cout<<food<<endl;
    cout<<meal<<endl;

    //& can also be used to get the memory address of a variable
    cout<<&food;

    //This is important in C++ because when you know the memory location,
    //you can manipulate the data in the computer's memory which can reduce code and increase
    //performance----------This makes C++ stand out among other programming languages such as Python and Java

    return 0;
}



