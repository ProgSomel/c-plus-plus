#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin >> n;

    int max = -1;
    while(n--){
        long long int x;
        cin >> x;

        if(x > max){
            max = x;
        }
    }
    cout << max;
    return 0;
}