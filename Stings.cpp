#include <iostream>
#include <string>       //This is a string Library
using namespace std;

int main(){

string greeting = "Hello There\n";
cout<<greeting;

cout<<"STRING CONCATENATION\n\n";
string firstname = "Teni";
string lastname = "Omotola ";
string fullname = lastname+firstname;
cout<<"My Fullname is --->"<<fullname<<endl;

cout<<"\n\nSTRING CONCATENATION USING APPEND\n\n";
string lastnam = "Kingsley ";
string firstnam = "Ben";
string fullnam = lastnam.append(firstnam);
cout<<"My Fullname is --->"<<fullnam<<endl;


cout<<"\n\nSTRING LENGTH\n\n";
string school = "The Name of My School is Ola-Oluwa Grammar School, Itaogbolu";
cout<<"The Length of the string '"<<school<<"' is = "<<school.length();         //Use Length() or size()

return 0;

}
