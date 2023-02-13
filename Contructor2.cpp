//Constructor was Created Outside Class
#include<iostream>
using namespace std;

class GDNig
{
public:
    string Dept;
    string HOD;
    int year_of_estab;
    GDNig(string x, string y, int z);  //The Constructor takes the same name as the Class Name
};

GDNig::GDNig(string x, string y, int z)
{
    Dept = x;
    HOD = y;
    year_of_estab = z;
}

int main()
{
    GDNig myObjGD("Service","Gabriel Jetawo",1999);
    GDNig myObjGD2("Finance","Emmanuel Onyeabo",2002);

    cout<<"Department--->"<<myObjGD.Dept<<"\nHead of Department--->"<<myObjGD.HOD<<"\nYear of Establishment--->"<<myObjGD.year_of_estab<<endl;
    cout<<"\n\nDepartment--->"<<myObjGD2.Dept<<"\nHead of Department--->"<<myObjGD2.HOD<<"\nYear of Establishment--->"<<myObjGD2.year_of_estab<<endl;
}
