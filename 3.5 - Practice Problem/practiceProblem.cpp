#include<bits/stdc++.h>
using namespace std;

class Student{
        public:
        string name;
        int roll;
        int section;
        int math_marks;
        int cls;

        Student(string name, int roll, int section, int math_marks, int cls){
            this->name = name;
            this->roll = roll;
            this->section = section;
            this->math_marks = math_marks;
            this->cls = cls;
        };
};

int main()
{
    Student obj1("Obj1", 12, 2, 56, 3);
    Student obj2("Obj2", 12, 2, 66, 3);
    Student obj3("Obj3", 12, 2, 76, 3);

    int maxValue = max({obj1.math_marks, obj2.math_marks, obj3.math_marks});
    cout << maxValue;
    return 0;
}