#include <iostream>
using namespace std;

int myFunc(int arr[])
{
    for (int i; i<=11; i++)
        {
            int x = arr[i]*25;
            cout<<"Number @ "<<i<<"="<<x<<endl;

        }
}

int main()
{
    cout<<"";
    int arr []= {10,20,30,40,50,60,70,80,90,100,110,120};
    myFunc(arr);


    return 0;
}
