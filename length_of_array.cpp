#include <iostream>
using namespace std;

int main(){

int myarr[] = {1,2,3,4,5,6,7};

for (int i:myarr){

    cout<<"i = "<<i<<endl;
}

int len_arr = sizeof(myarr)/sizeof(int);

cout<<"Length of the Array = "<<len_arr<<endl;

cout<<"\n\nLooping THrough an Array with Sizeof\n\n";

int xy[] = {4,7,9,5,1,5,3,9,0,4,};

int lenxy = sizeof(xy)/sizeof(int);


for (int k=0; k<lenxy; k++){

    cout<<"K = "<<xy[k]<<endl;
}

return 0;
}
/*

Why did the result show 20 instead of 5, when the array contains 5 elements?

It is because the sizeof() operator returns the size of a type in bytes.

You learned from the Data Types chapter that an int type is usually 4 bytes, so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.

To find out how many elements an array has, you have to divide the size of the array by the size of the data type it contains:
*/
