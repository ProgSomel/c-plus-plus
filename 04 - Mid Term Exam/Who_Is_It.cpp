#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int id;
    string name;
    char section;
    int totalMarks;

    Student(int id, string name, char section, int totalMarks){
        this->id = id;
        this->name = name;
        this->section = section;
        this->totalMarks = totalMarks;
    }

};

int main()
{
    int t;
    cin >> t;

    while(t--){

        Student maxOne = {101, "Amena", 'A', INT_MIN};


        for(int i = 0; i < 3; i++){
            int id;
            string name;
            char section;
            int totalMarks;

            cin>> id>>name>>section>>totalMarks;

            Student student(id, name, section, totalMarks);

            if(student.totalMarks == maxOne.totalMarks){
                if(student.id < maxOne.id){
                    maxOne = student;
                }
            }else{
                if(student.totalMarks > maxOne.totalMarks){
                    maxOne = student;
                }
            }
        }

        cout << maxOne.id << " " << maxOne.name << " " << maxOne.section << " " << maxOne.totalMarks << endl;

    }
    return 0;
}