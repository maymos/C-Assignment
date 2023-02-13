#include <iostream>
using namespace std;

//This only means that you use only one function name for various task
int plusFunc(int x, int y)
{
    return x+y;
}

double plusFunc(double x, double y)
{
    return x+y;
}


float plusFunc(float x, float y)
{
    return x+y;
}

int main()
{
    double f = plusFunc(3.456, 5.899);
    float d = plusFunc(0.134,0.4245);
    int r = plusFunc(9,34);
    cout<<"double ="<<f<<endl;
    cout<<"float ="<<d<<endl;
    cout<<"Integer ="<<r<<endl;
    return 0;
}
