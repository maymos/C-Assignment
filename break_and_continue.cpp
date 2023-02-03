#include <iostream>

using namespace std;

int main(){

    cout<<"BREAK @ 6\n\n";

    int x = 0;

    while (x<=10){
        if (x==6){
            break;
        }
        cout<<x<<endl;
        x++;
    }
    cout<<"CONTINUE Jumping 6\n\n";
    int y = 0;

    while (y<=10){
        if (y==6){
            y++;
            cout<<"Jump\n";
            continue;
        }
        cout<<y<<endl;
        y++;
    }

    return 0;
}



