#include<bits/stdc++.h>
using namespace std;

void printNTimes(int n, char c){
    if(n == 0){
        return;
    }else{
        cout << c << " ";
        printNTimes(n-1, c);
    }
}

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        char c;
        cin >> n >> c;

        printNTimes(n, c);

        cout << endl;
    }

    return 0;
}