#include <iostream>

using namespace std;

int main(){

string myname[] = {"Taye", "Ojo", "Dada", "Nelson", "Jude"};

for (string i:myname){
    cout<<i<<endl;
    }

cout<<"\n\nAdding an Array at Later Time\n";
string club[6];

club[0] = "Asenal";
club[1] = "Man-U";
club[2] = "Chelsea";
club[3] = "Tortehan";
club[4] = "Barcelona";
club[5] = "PSG";

for (string j:club){
    cout<<j<<endl;
    }
return 0;
}


