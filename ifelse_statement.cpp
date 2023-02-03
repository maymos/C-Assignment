#include <iostream>
using namespace std;

int main(){

int x = 10;
int y = 15;
int age;

cout<<"If Else Statement"<<endl;

cout<<"Enter Voter's Age: "<<endl;
cin>>age;
if (age<=x){
    cout<<"Under Voter, CANNOT VOTE"<<endl;
}else if((x<age)&&(age<=y)){
    cout<<"Can VOTE but cannot Contest Election"<<endl;
}else{
    cout<<"Can VOTE and CONTEST";
}

return 0;
}

