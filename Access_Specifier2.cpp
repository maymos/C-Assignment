#include <iostream>
using namespace std;

class workers_salary
{
protected:
    double salary;
};

class position: public workers_salary
{
public:
    int bonus;
    void setSalary(int s)
    {
        salary = s;
    }

    int getSalary()
    {
        return salary;
    }
};


int main()
{
    position june_salary;
    june_salary.setSalary(500000);
    june_salary.bonus = 250000;
    june_salary.getSalary();

    cout<<"JUNE SALARY: "<<june_salary.getSalary()<<endl;
    cout<<"JUNE LEAVE BONUS: "<<june_salary.bonus<<endl<<endl;
    cout<<"TOTAL JUNE SALARY: "<<june_salary.getSalary()+june_salary.bonus<<endl;
}
