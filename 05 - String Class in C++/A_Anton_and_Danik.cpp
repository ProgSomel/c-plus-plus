#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int anton = 0;
    int danik = 0;

    while(n--){
        char c;
        cin >> c;
        if(c=='A'){
            anton++;
        }else{
            danik++;
        }
    }
    if(anton > danik){
        cout << "Anton";
    }else if(anton < danik){
        cout << "Danik";
    }else{
        cout << "Friendship";
    }


    return 0;
}