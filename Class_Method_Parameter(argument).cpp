#include <iostream>
#include <cmath>
using namespace std;

class Car
{
   public:
       speed(int maxSpeed);
};


int Car::speed(int maxSpeed)
    {
        int m = pow(maxSpeed,3);
        cout<<"This is the Maximum Speed Square ="<<m<<endl;
        return m;
    }


int main()
{
    Car myObect;
    int ret_value = myObect.speed(200);
    cout<<ret_value<<endl;
    return 0;
}
