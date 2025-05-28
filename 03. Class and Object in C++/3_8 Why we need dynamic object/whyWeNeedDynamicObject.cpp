#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int cls, int roll, int gpa){
        //? Here this is pointer
        (*this).roll = roll;
        (*this).cls = cls;
        (*this).gpa = gpa;
    };
};

Student* fun(){
    Student karim(2, 5, 5.00);
    Student* p = &karim;
    return p;
}

int main()
{
    Student rahim(5, 55, 2.5);

    Student* p = fun();

    cout << rahim.cls << " " << rahim.roll << " " << rahim.gpa << endl;
    cout << p->cls << " " << p->roll << " " << p->gpa << endl;
    return 0;
}