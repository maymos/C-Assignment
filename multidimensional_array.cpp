#include <iostream>

using namespace std;

int main(){

/*

A multi-dimensional array is an array of arrays.

To declare a multi-dimensional array, define the variable type,
specify the name of the array followed by square brackets which
specify how many elements the main array has, followed by another
set of square brackets which indicates how many elements the sub-arrays have:

*/

    string name[2][4] =
    {
        {"Lara","Ade","Bolu","Bola"},
        {"Kola","Kole","Olu","Blessing"}
    };

cout<<name[0][2]<<endl;  //Accesses Array1 element 3 "Bolu"
cout<<name[1][3]<<endl;  // Accesses Array2 element 4 "Blessing"
cout<<name[0][2][3]<<endl;  //Grabbing "u" in "Bolu"
cout<<name[1][3][5]<<endl;  // Grabbing 'i' in "Blessing"


cout<<"\n\n3 DIMENSIONAL ARRAY\n\n";
string lett[2][2][3] =
    {

        {
          {"E","A","T"},
          {"H","C","K"}
        },
        {
          {"L","J","M"},
          {"I","O","X"}
        }

    };

cout<<lett[0][0][2]<<endl;  //Accesses Array1 List1 and element 3 "T"
cout<<lett[1][0][1]<<endl;  // Accesses Array2 List1 and element 2 "J"

return 0;
}



