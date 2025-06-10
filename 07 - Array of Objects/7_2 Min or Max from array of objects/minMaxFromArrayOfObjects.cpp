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