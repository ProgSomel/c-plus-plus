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
