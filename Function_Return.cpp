#include <iostream>
#include <cmath>
using namespace std;

//THIS IS FUNCTION 1
int mathe(int x)
{
    return pow(x,3);
}

//THIS IS FUNCTION 2
void response()
{
    cout<<"That was Perfect\n";
}

//THIS IS FUNCTION 3
string myString()
{
    return "THIS IS GREAT";
}

//THIS IS THE MAIN PROGRAM
int main()
{
    if (mathe(3)==8)
        {
            cout<<"The Answer = "<<mathe(3)<<endl;
            response();
        }
    else
        {
            cout<<myString()<<endl;
            cout<<"It was wrongly calculated\n";
            cout<<"The Answer = "<<mathe(3)<<endl;
        }

    return 0;
}


