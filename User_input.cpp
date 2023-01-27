#include <iostream>
using namespace std;

int main(){

int x;
string j;

cout<<"Enter your Phone No: ";
cin >> j;
cout<<"\n\nYour Number is "<<j<<endl;

cout<<"Enter a Number: ";
cin >> x;
cout<<"\n\nThe Number is "<<x;


/*
Basic Data Types
The data type specifies the size and type of information the variable will store:

Data Type	Size	        Description
boolean	    1 byte	        Stores true or false values
char	    1 byte	        Stores a single character/letter/number, or ASCII values
int	        2 or 4 bytes	Stores whole numbers, without decimals
float	    4 bytes	        Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
double	    8 bytes	        Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits

NOTE----> Use float when you want to store numbers with less decimal number e.g 7.74
NOTE----> Use double when you want to store numbers with many decimal number e.g 7.74761067

*/

cout<<"\n\nSCIENTIFIC NUMBERS\n\n";
float f1 = 34e3;
double g1 = 345e7;
cout<<"f1 = "<<f1<<"\ng1 = "<<g1<<endl;

return 0;
}

