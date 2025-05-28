# This keyword and Arrow sign

```c++
#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int cls, int roll, int gpa){
        roll = roll;
        cls = cls;
        gpa = gpa;
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
//Garbage value
779647075 1651076199 2.11653e+214
32764 350442768 6.91666e-310
```

---

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
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
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

---

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
