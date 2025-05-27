```c++
#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    Student a;
    a.roll = 10;
    a.gpa = 4.5;
    a.name = "Somel Ahmed"; //Error ---> expression must be a modifiable lvalue
    return 0;
}
```
```bash
expression must be a modifiable lvalue
Student a
```

-----------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    Student a;
    a.roll = 10;
    a.gpa = 4.5;
    char temp[100] = "Somel Ahmed";
    strcpy(a.name, temp);

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    return 0;
}
```
```bash
Somel Ahmed 10 4.5
```

-----------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    Student a, b;
    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;
    cin.ignore();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;
    return 0;
}
```
```bash
/input
Sakib Ahmed
10  4.56
Somel Ahmed
50 5
```
```bash
Sakib Ahmed 10 4.56
Somel Ahmed 50 5
```