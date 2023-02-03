#include<iostream>
#include<cmath>              //cmath Library
using namespace std;

int main(){

cout<<sqrt(144)<<endl;
cout<<round(2.6)<<endl;
cout<<log(2)<<endl;
cout<<abs(-245)<<endl;
cout<<cos(30)<<endl;
cout<<pow(2,3)<<endl;        //2^3
cout<<cbrt(1000)<<endl;      //cube root of 1000
cout<<exp(32)<<endl;         //exponential 32 (OR 10^32)
cout<<expm1(3)<<endl;        //returns (e^x)-1
cout<<fabs(3.7853)<<endl;    //returns absolute value of floating x
cout<<fdim(30,42)<<endl;     //returns positive difference between x and y (if is >> than x, the result is 0
cout<<floor(30.578)<<endl;   //returns x rounded down to the nearest integer
cout<<ceil(30.274934)<<endl; //rounded to the nearest next integer ===31 in this case
cout<<hypot(4,5)<<endl;      //returns the sqrt(x^2 +y^2)
cout<<fma(2,3,4)<<endl;      //returns x*y+z without loosing precision

/*
OTHER INCLUDE
acos(x)
asin(x)
atan(x)
cosh(x)
fmax(x,y)  returns the highest value of x and y
fmin(x,y)  returns the lowest value of x and y
fmod(x,y)  returns the floating point remainder of x/y

*/


return 0;
}
