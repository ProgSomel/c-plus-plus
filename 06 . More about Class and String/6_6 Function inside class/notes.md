# Function inside class

```c++
#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;

    Student(string name, int roll){
        this->name = name;
        this->roll = roll;
    };

    void hello(){
        cout << "Hello from " << name;
    }
};
int main()
{
    Student sakib("Sakib Ahmed", 23);
    cout << sakib.name << endl;
    cout << sakib.roll << endl;
    sakib.hello();
    return 0;
}
```
```bash
Sakib Ahmed
23
Hello from Sakib Ahmed
```

---------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;

    Student(string name, int roll){
        this->name = name;
        this->roll = roll;
    };

    void hello(){
        cout << "Hello from " << name << endl;
    }
};
int main()
{
    Student sakib("Sakib Ahmed", 23);
    cout << sakib.name << endl;
    cout << sakib.roll << endl;
    sakib.hello();
    Student rakib("Rakib Ahmed", 23);
    rakib.hello();
    return 0;
}
```
```bash
Sakib Ahmed
23
Hello from Sakib Ahmed
Hello from Rakib Ahmed
```

---------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int math;
    int english;

    Student(string name, int roll, int math, int english){
        this->name = name;
        this->roll = roll;
    };

    void hello(){
        cout << "Hello from " << name << endl;
    }

    void total(){
        cout << "Total marks of " << name << "=" << math + english << endl;
    }
};
int main()
{
    Student sakib("Sakib Ahmed", 23, 55, 95);
    cout << sakib.name << endl;
    cout << sakib.roll << endl;
    sakib.hello();
    sakib.total();
    Student rakib("Rakib Ahmed", 23, 76, 100);
    rakib.hello();
    rakib.total();
    return 0;
}
```
```bash
