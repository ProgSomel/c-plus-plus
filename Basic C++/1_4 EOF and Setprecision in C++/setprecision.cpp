#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double d = 23.4566;
    cout << fixed << setprecision(3) << d <<endl;
    return 0;
}