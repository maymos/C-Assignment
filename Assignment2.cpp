#include <iostream>
#include <string>
using namespace std;

int main(){

int x;
cout<<"Enter an Integer: ";
cin>>x;

int result = 1;

for (int i=2; i<=x; i++){
    if (x%i==0){
        result +=1;
    }else{
    continue;
    }
}

//cout<<result;
if (result==2){
    cout<<"\nIt is a Prime Number\n";
}
return 0;
}


