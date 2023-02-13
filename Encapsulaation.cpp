#include <iostream>
using namespace std;

class Account_Balance
{
private:
    int balance;

public:
    void setBalance(int x)
    {
        balance = x;
    }

    int getBalance()
    {
        return balance;
    }

};

int main()
{
    Account_Balance myObj;
    myObj.setBalance(512490);
    cout<<"Your Account Balance===>"<<myObj.getBalance()<<"\n\n\n===================================="<<"\n    THANK YOU FOR BANKING WITH US"<<endl;
}

/*

Why Encapsulation?
It is considered good practice to declare your class attributes as private (as often as you can). Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts
Increased security of data

*/
