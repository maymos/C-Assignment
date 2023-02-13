#include <iostream>
using namespace std;


class GDCT_Global
{
public:
    void yearly_celebration()
    {
        cout<<"GLOBALLY, Our Yearly Celebration is always ------April"<<endl;
    }
};



class GDNIGCT: public GDCT_Global
{
public:
    void yearly_celebration()
    {
        cout<<"In NIGERIA, Our Yearly Celebration is always-----December"<<endl;
    }
};


class GDMEA: public GDNIGCT
{
public:
    void yearly_celebration()
    {
        cout<<"In DUBAI, Our Yearly Celebration is always-------February"<<endl;
    }
};

int main()
{
    GDCT_Global Our_Company;
    GDNIGCT Nigeria;
    GDMEA Dubai;

    Our_Company.yearly_celebration();
    Nigeria.yearly_celebration();
    Dubai.yearly_celebration();
}
