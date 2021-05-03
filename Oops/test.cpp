#include <iostream>
using namespace std;
class Student
{
private:
    int Math, Sci, Eng, Ssc, roll;
    char name;

public:
    Student()
    {

        cout << "Enter Roll Number" << endl;
        cin >> roll;
        int Roll();
        MathMarks();
        SciMarks();
        EngMarks();
        SscMarks();
    }
    char Name()
    {
        return name;
        cout << name << " ";
    };
    int Roll()
    {
        return roll;
        cout << roll << endl;
    };
    void MathMarks();
    void SciMarks();
    void EngMarks();
    void SscMarks();
    void isPass();
    void Grade();
    int Percentage();
};
void Student::MathMarks()
{
    int m;
    cout << "Math Marks " << endl;
    cin >> m;
    if (m <= 100)
    {
        Math = m;
    }
    else
        cout << "Invalid ";
}
void Student::SciMarks()
{
    int m;
    cout << "Science Marks " << endl;
    cin >> m;
    if (m <= 100)
    {
        Sci = m;
    }
    else
        cout << "Invalid ";
}
void Student::EngMarks()
{
    int m;
    cout << "Eng Marks " << endl;
    cin >> m;
    if (m <= 100)
    {
        Eng = m;
    }
    else
        cout << "Invalid ";
}
void Student::SscMarks()
{
    int m;
    cout << "Ssc Marks " << endl;
    cin >> m;
    if (m <= 100)
    {
        Ssc = m;
    }
    else
        cout << "Invalid ";
}
void Student::isPass()
{
    int total = (Math + Sci + Eng + Ssc);
    if (total / 4 > 33.33)
        cout << "Pass " << endl;
    else
        cout << "Fail " << endl;
}
void Student::Grade()
{
    int per = (Math + Sci + Eng + Ssc) / 4;
    if (per > 33.33 && per <= 45)
        cout << "Grade D" << endl;
    else if (per > 45 && per <= 60)
        cout << "Grade C " << endl;
    else if (per > 60 && per <= 80)
        cout << " Grade B " << endl;
    else if (per > 80 && per < 90)
        cout << " Grade A " << endl;
    else if (per >= 90)
        cout << "Hats Off ";
    else
        cout << "FAIL" << endl;
}
int main()
{
    // Student S1;
    Student S1;
    S1.isPass();
    S1.Grade();
}