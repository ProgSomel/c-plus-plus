#include<bits/stdc++.h>
using namespace std;

int *p;

void fun(){
    int* x = new int; //? after return variable will be deleted
    *x = 10;
    p = x;
    cout << "Func -> " << *p << endl;
    return;
}

int main()
{
    fun();
    cout << "Main -> " << *p << endl;
    return 0;
}