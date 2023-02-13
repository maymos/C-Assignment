#include <iostream>
using namespace std;


int main()
{
    try
    {
        int age;
        cout<<"Kindly Enter your Age: ";
        cin>> age;
        if (age>=18)
        {
            cout<<"You are an eligible Voter: AGE ACCEPTED!!"<<endl;
        }
        else
        {
            throw (age);
        }

    }
    catch (int myNum)                  //It is throwing the age to myNum Here
    {
        cout<<"UNDERAGE: YOU ARE NOT ELIGIBLE TO VOTE"<<endl;
        cout<< "Your Age is: "<<myNum<<endl;
    }

    return 0;
}
