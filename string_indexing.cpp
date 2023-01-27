#include <iostream>
#include <string>       //This is a string Library
using namespace std;

int main(){

string greeting = "Hello There\n";

cout<<greeting[6]<<endl;
greeting[7]='e';        //Don't use Double Quote
cout<<greeting;

string txt = "This is how to use \"Double Quote\" inside a String";
cout<<txt<<endl;

return 0;

}

