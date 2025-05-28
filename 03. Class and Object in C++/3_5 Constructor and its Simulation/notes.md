# Constructor
A constructor is a special function that is automatically called when an object is created. Its main purpose is to initialize the object.

**✅ Key Points:**
- It has the same name as the class.
- It has no return type.
- It can be overloaded (multiple constructors with different parameters).

**🔹 Types of Constructors:**
- Default Constructor (no parameters)
- Parameterized Constructor (takes arguments)
- Copy Constructor (copies data from another object)



```c++
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
```
```bash
5 55 2
10 1 5
```