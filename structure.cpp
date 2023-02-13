#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Create a structure variable called myStructure
    struct
    {
        int num;
        string classes;
        bool status;
        int myList;
    }myStructure;

    //Assign Values to members of myStructure

    myStructure.num = 34;
    myStructure.classes = "Primary 1";
    myStructure.status = true;

    //Print members of myStructure

    cout<<myStructure.num<<endl;
    cout<<myStructure.classes<<endl;
    cout<<myStructure.status<<endl;



return 0;
}



