#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    cout << s << endl;
    stringstream ss(s); //? Here stringatream is a class and ss is object
    string word;
    while(ss >> word){
        cout << word << endl;
    }
    return 0;
}