#include <iostream>
#include <string>
using namespace std;

    //Create a structure before main () and use it anywhere in the program
struct car
    {
        string brand;
        string model;
        int year;
    };

int main()
{

    //Create a car structure and store it in myCar1
    car myCar1;
    myCar1.brand = "Toyota";
    myCar1.model = "Corolla";
    myCar1.year = 2021;

    //Create a car structure and store it in myCar1
    car myCar2;
    myCar2.brand = "BMW";
    myCar2.model = "X9";
    myCar2.year = 2020;

    //Print members of myStructure
    cout<<myCar1.brand<<" "<<myCar1.model<<" "<<myCar1.year<<endl;
    cout<<myCar2.brand<<" "<<myCar2.model<<" "<<myCar2.year<<endl;


return 0;
}





