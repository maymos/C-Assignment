#include <iostream>

using namespace std;

int main(){

string myclass[5] = {"primary 1", "primary 2", "primary 3", "primary 4", "primary 5"};

for (string i:myclass){
    cout<<i<<endl;
    }

cout<<"\n\nPrint out item2\n";
cout<<myclass[1]<<endl;

cout<<"\n\nReplace item3 with 'programming'\n";
myclass[2] = "Programming";

for (int i=0; i<5; i++){
    cout<<myclass[i]<<endl;
    }
return 0;
}



