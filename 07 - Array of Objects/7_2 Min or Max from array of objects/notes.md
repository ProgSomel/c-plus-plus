## Min or Max from array of objects

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

    Student students[n];

    for(int i = 0; i < n; i++){
        cin >> students[i].name >> students[i].roll >> students[i].marks; 
    }

    int mn = INT_MAX;

    for(int i = 0; i < n; i++){
        mn = min(students[i].marks, mn);
    }

    cout << mn << endl;
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
65
```

-----------------------------------------------------------------------------------------------------------------------------------

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

    Student students[n];

    for(int i = 0; i < n; i++){
        cin >> students[i].name >> students[i].roll >> students[i].marks; 
    }


    Student minimum;
    minimum.marks = INT_MAX;

    for(int i = 0; i < n; i++){
       if(students[i].marks < minimum.marks){
        minimum = students[i];
       }
    }

    cout << minimum.name << " " << minimum.roll << " " << minimum.marks <<endl;
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
rakib 18 65
```

---------------------------------------------------------------------------------------------------------------------------------------

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

    Student students[n];

    for(int i = 0; i < n; i++){
        cin >> students[i].name >> students[i].roll >> students[i].marks; 
    }


    Student mx;
    mx.marks = INT_MIN;

    for(int i = 0; i < n; i++){
       if(students[i].marks > mx.marks){
        mx = students[i];
       }
    }

    cout << mx.name << " " << mx.roll << " " << mx.marks <<endl;
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
```
