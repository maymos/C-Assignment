/*
C++ Variables
Variables are containers for storing data values.

In C++, there are different types of variables (defined with different keywords), for example:

int - stores integers (whole numbers), without decimals, such as 123 or -123
double - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string - stores text, such as "Hello World". String values are surrounded by double quotes
bool - stores values with two states: true or false
Declaring (Creating) Variables
To create a variable, specify the type and assign it a value:
*/
#include <iostream>

using namespace std;

int main(){

cout << "An Integer WITHOUT Decimal Point\n";
int myNu = 15;
cout << myNu;
cout << "\nAn Integer WITH Decimal Point\n"; //It rounded it to an Integer
int myNum = 15.9;
cout << myNum;

cout << "\nThe value of the integer is changed1\n";
myNum = 10;  // Now myNum is 10
cout << myNum;  // Outputs 10
}

