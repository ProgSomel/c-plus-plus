#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    char c;
    int b;

    cin >>a>>c>>b;

    if(c == '>'){
        if(a>b){
            cout << "Right";
        }else{
            cout << "Wrong";
        }
    }else if(c == '<'){
        if(a<b){
            cout << "Right";
        }else{
            cout << "Wrong";
        }
    }else{
         if(a==b){
            cout << "Right";
        }else{
            cout << "Wrong";
        }
    }
    return 0;
}