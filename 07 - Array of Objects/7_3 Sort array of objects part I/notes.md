## Sort array of objects part I

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

    sort(students, students+1);

    for(int i = 0; i < n; i++){
        cout << students[i].name << " " << students[i].roll << " "  <<  students[i].marks << endl;
    }
    return 0;
}
```
```bash
Output:

In file included from /usr/include/c++/13/bits/stl_algobase.h:71,
                 from /usr/include/c++/13/algorithm:60,
                 from /usr/include/x86_64-linux-gnu/c++/13/bits/stdc++.h:51,
                 from Main.cpp:1:
/usr/include/c++/13/bits/predefined_ops.h: In instantiation of ‘constexpr bool __gnu_cxx::__ops::_Iter_less_iter::operator()(_Iterator1, _Iterator2) const [with _Iterator1 = Student*; _Iterator2 = Student*]’:
/usr/include/c++/13/bits/stl_algo.h:1819:14:   required from ‘void std::__insertion_sort(_RandomAccessIterator, _RandomAccessIterator, _Compare) [with _RandomAccessIterator = Student*; _Compare = __gnu_cxx::__ops::_Iter_less_iter]’
/usr/include/c++/13/bits/stl_algo.h:1859:25:   required from ‘void std::__final_insertion_sort(_RandomAccessIterator, _RandomAccessIterator, _Compare) [with _RandomAccessIterator = Student*; _Compare = __gnu_cxx::__ops::_Iter_less_iter]’
/usr/include/c++/13/bits/stl_algo.h:1950:31:   required from ‘void std::__sort(_RandomAccessIterator, _RandomAccessIterator, _Compare) [with _RandomAccessIterator = Student*; _Compare = __gnu_cxx::__ops::_Iter_less_iter]’
/usr/include/c++/13/bits/stl_algo.h:4861:18:   required from ‘void std::sort(_RAIter, _RAIter) [with _RAIter = Student*]’
Main.cpp:25:9:   required from here
/usr/include/c++/13/bits/predefined_ops.h:45:23: error: no match for ‘operator<’ (operand types are ‘Student’ and ‘Student’)
   45 |       { return *__it1 < *__it2; }
      |                ~~~~~~~^~~~~~~~
```

-----------------------------------------------------------------------------------------------------------------------------------

```c++
#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student l, Student r) {
    return l.marks < r.marks;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // ✅ Only once, after reading `n`

    Student students[n]; // ✅ Array of objects

    for (int i = 0; i < n; i++) {
        
        cin >> students[i].name >> students[i].roll >> students[i].marks;
        
    }

    sort(students, students + n, cmp); // ✅ Custom compare function

    for (int i = 0; i < n; i++) {
        cout << students[i].name << " " << students[i].roll << " " << students[i].marks << endl;
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

//Output
rakib 18 65
akib 28 75
sakib 15 89
```

--------------------------------------------------------------------------------------------------------------------------------

```c++
#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student l, Student r) {
    return l.marks > r.marks;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // ✅ Only once, after reading `n`

    Student students[n]; // ✅ Array of objects

    for (int i = 0; i < n; i++) {
        
        cin >> students[i].name >> students[i].roll >> students[i].marks;
        
    }

    sort(students, students + n, cmp); // ✅ Custom compare function

    for (int i = 0; i < n; i++) {
        cout << students[i].name << " " << students[i].roll << " " << students[i].marks << endl;
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

//Output
sakib 15 89
akib 28 75
rakib 18 65
```