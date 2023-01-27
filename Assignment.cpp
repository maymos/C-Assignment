#include <iostream>
#include <string>
using namespace std;

int main(){

int x;
cout<<"Enter an Integer: ";
cin>>x;

if ((x%3)==0&&(x%5)==0){
cout<<"Good Number";
}else if(x%5==0){
cout<<"Poor Number";
}else if (x%3==0){
cout<<"Bad Number";
}
return 0;

}


