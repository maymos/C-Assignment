#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Create a structure with multiple variables called myCar1 and myCar2
    struct
    {
        string brand;
        string model;
        int year;
    }myCar1, myCar2;      //We can add more variables by separating them with comma

    //Assign Values to members of myStructure

    myCar1.brand = "Toyota";
    myCar1.model = "Corolla";
    myCar1.year = 2021;

    myCar2.brand = "BMW";
    myCar2.model = "X9";
    myCar2.year = 2020;
    //Print members of myStructure

    cout<<myCar1.brand<<" "<<myCar1.model<<" "<<myCar1.year<<endl;
    cout<<myCar2.brand<<" "<<myCar2.model<<" "<<myCar2.year<<endl;


return 0;
}




