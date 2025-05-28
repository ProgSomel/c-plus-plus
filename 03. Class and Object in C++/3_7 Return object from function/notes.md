# Return object from function

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

Student fun(){
    Student karim(2, 5, 5.00);
    return karim;
}

int main()
{
    Student rahim(5, 55, 2.5);

    Student obj = fun();

    cout << rahim.cls << " " << rahim.roll << " " << rahim.gpa << endl;
    cout << obj.cls << " " << obj.roll << " " << obj.gpa << endl;
    return 0;
}
```
```bash
5 55 2
2 5 5
```