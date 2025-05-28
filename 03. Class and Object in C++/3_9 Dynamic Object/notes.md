# Dynamic Object

```c++
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

    Student* karim = new Student(10, 45, 35);
    
    cout << rahim.cls << " " << rahim.roll << " " << rahim.gpa << endl;
    cout << karim->cls << " " << karim->roll << " " << karim->gpa << endl;
    return 0;
}
```
```bash
5 55 2
10 45 35
```

------------------------------------------------------------------------------------------------------------------------------------------

```c++
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

Student* func(){
    Student* karim = new Student(100, 200, 4);
    return karim;
}


int main()
{
    Student rahim(5, 55, 2.5);

    Student* karim = func();
    
    cout << rahim.cls << " " << rahim.roll << " " << rahim.gpa << endl;
    cout << karim->cls << " " << karim->roll << " " << karim->gpa << endl;
    return 0;
}
```
```bash
5 55 2
100 200 4
```