#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int c, int r, int g){
        roll = r;
        cls = c;
        gpa = g;
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