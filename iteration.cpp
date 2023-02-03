#include <iostream>

using namespace std;

int main(){

int x[] = {2,3,4,5,6,7,8,9}; //You can specify the len of list in the [] e.g x[8]

for (int i:x){
    cout<<i<<"\n";
}

cout<<"Print 'Yes' five times\n";

for (int i=0; i<5; ++i){
    cout<<"Yes"<<"\n";
}

return 0;
}


