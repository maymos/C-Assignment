#include <iostream>
using namespace std;

void cbnPositions(string position, string numb, int m = 30)   //This is Passing Three Arguments, the third argument is a default
{
    cout<<m<<" "<<position<<" Manager "<<numb<<endl;
}

int main()
{
    cbnPositions("Principal", "One", 45);
    cbnPositions("Assistant", "Two");           //Assumes a default 3rd argument
    cbnPositions("Senior", "One", 60);
    cbnPositions("Deputy", "Ten", 20);
    return 0;
}
