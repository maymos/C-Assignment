#include <iostream>
using namespace std;

int main(){

int x = 10;
int y = 15;
int age;

cout<<"If Else Shorthand"<<endl;

cout<<"Enter Voter's Age: "<<endl;
cin>>age;
/*
if (age<=x){
    cout<<"Under Voter, CANNOT VOTE"<<endl;
}else if((x<age)&&(age<=y)){
    cout<<"Can VOTE but cannot Contest Election"<<endl;
}else{
    cout<<"Can VOTE and CONTEST";
}

*/
cout<<"\n\nif - elseif - else STATEMENT\n";
if (age<=x){cout<<"Under Voter, CANNOT VOTE"<<endl;}else if((x<age)&&(age<=y))
   {cout<<"Can VOTE but cannot Contest Election"<<endl;}else{cout<<"Can VOTE and CONTEST";}

cout<<"\n\nif - else SHORTHAND\n";
string result = (age<x)? "\nUNDERAGE VOTER\n\n":"\nELIGIBLE VOTER\n\n";
cout<<result;
return 0;

}


