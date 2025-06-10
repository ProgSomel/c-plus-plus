## Array of objects

```c++
#include<bits/stdc++.h>
using namespace std;

class Student{      

    public:
    string name;
    int roll;
    int marks;
};

int main()
{
    Student students[5]; //? Array of Objects
    return 0;
}
```

---------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;

class Student{      

    public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    Student students[n]; //? Array of Objects

    for(int i = 0; i < n; i++){

        cin >> students[i].name >> students[i].roll >> students[i].marks;
    }

    for(int i = 0; i < n; i++){
        cout << students[i].name << " " << students[i].roll << " "  <<  students[i].marks << endl;
    }
    return 0;
}
```
```bash
//input
3
sakib 15 89
rakib 18 65
akib 28 75

//output
sakib 15 89
rakib 18 65
akib 28 75
```

--------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;

class Student{      

    public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    Student students[n]; //? Array of Objects

    for(int i = 0; i < n; i++){
        getline(cin, students[i].name);
        cin >> students[i].roll >> students[i].marks;
    }

    for(int i = 0; i < n; i++){
        cout << students[i].name << " " << students[i].roll << " "  <<  students[i].marks << endl;
    }
    return 0;
}
```
```bash
//input
3
sakib ahmed
15 89
rakib ahmed
18 65
akib ahmed
28 75

//output
sakib ahmed 15 89
 0 32579
 -650610128 32766
```

--------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;

class Student{      

    public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    
    Student students[n]; //? Array of Objects

    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, students[i].name);
        cin >> students[i].roll >> students[i].marks;
    }

    for(int i = 0; i < n; i++){
        cout << students[i].name << " " << students[i].roll << " "  <<  students[i].marks << endl;
    }
    return 0;
}
```
```bash
//input
3
sakib ahmed
15 89
rakib ahmed
18 65
akib ahmed
28 75

//output
sakib ahmed 15 89
rakib ahmed 18 65
akib ahmed 28 75
```


