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

int main()
{
    Student rahim(5, 55, 2.5);

    Student karim(10, 1, 5);

    cout << rahim.cls << " " << rahim.roll << " " << rahim.gpa << endl;
    cout << karim.cls << " " << karim.roll << " " << karim.gpa << endl;
    return 0;
}