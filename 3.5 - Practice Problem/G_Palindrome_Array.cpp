#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bool flag = true;

    for(int i = 0, j = n-1; i < j; i++, j--){
        if(arr[i]!=arr[j]){
            flag = false;
        }
    }

    if(flag == true){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}