//SWITCH STATEMENT is used to select one of many code blocks to be executed
#include <iostream>
using namespace std;

int main(){

int day;
cout<<"Enter the Day of the Week you Like (1-7)\n\n";
cin>>day;

switch (day){
case 1:
    cout<<"Monday\n";
    break;
case 2:
    cout<<"Tuesday\n";
    break;
case 3:
    cout<<"Wednesday\n";
    break;
case 4:
    cout<<"Thursday\n";
    break;
case 5:
    cout<<"Friday\n";
    break;
case 6:
    cout<<"Saturday\n";
    break;
case 7:
    cout<<"Sunday\n";
    break;
default:
    cout<<"\nYou didnt Enter Correct Value btw(1-7)!!\n";
    break;
}


return 0;
}
