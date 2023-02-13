#include <iostream>
using namespace std;

class BaseClass
{
public:
    string first_name;
    string last_name;
    int age;
    void personal_data()
    {
        cout<<"KINDLY ENTER YOUR NAME IN THE FIELD BELOW\n"
            <<"FIRST NAME: "<<first_name<<endl
            <<"LAST NAME: "<<last_name<<endl
            <<"AGE: "<<age<<endl;
    }
};

class Derived1: public BaseClass
{
public:
    string Address;
    void Student_address()
    {
        cout<<"Address: "<<Address<<endl;
    }
};

class Derived2: public Derived1
{
public:
    string Favourite_subject;
    void printme()
    {
        cout<<"STUDENTS PERSONAL DATA\n";
        cout<<"==================================\n\n";
        cout<<"Favourite Subject: "<<Favourite_subject<<endl<<endl;
    }
};

int main()
{
    Derived2 JSS2_Class;
    JSS2_Class.Address = "H26B Kuchiyako Estate, Kuje Abuja";
    JSS2_Class.first_name = "Mayowa Moses";
    JSS2_Class.last_name = "Arowosafe";
    JSS2_Class.age = 24;
    JSS2_Class.Favourite_subject = "Mathematics";
    JSS2_Class.printme();
    JSS2_Class.personal_data();
    JSS2_Class.Student_address();

}
