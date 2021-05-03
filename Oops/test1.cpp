#include <iostream>
using namespace std;
class Employee
{
    int eid;
    string name;

public:
    Employee(int id, string n)
    {
        eid = id;
        name = n;
    }
    int getId() { return eid; }
    string getName() { return name; }
};

class FullTimeEmp : public Employee
{
    int salary;

public:
    FullTimeEmp(int id, string n, int sal) : Employee(id, n)
    {
        salary = sal;
        cout << getId() << " " << getName() << " " << getSal() << endl;
    }
    int getSal()
    {
        return salary;
    }
};

class PartTimeEmp : public Employee
{
    int wage;

public:
    PartTimeEmp(int id, string n, int wage) : Employee(id, n)
    {
        this->wage = wage;
        cout << getId() << " " << getName() << " " << getWage() << endl;
    }
    int getWage()
    {
        return wage;
    }
};

int main()
{
    FullTimeEmp F1(123, "Ghajanavi Harami", 5600);
    PartTimeEmp P1(809, "Aurangjeb Kukur", 200);
}