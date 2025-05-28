#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        if(n >=2){
            int arr[n];

        for(int i = 0; i < n; i ++){
            cin >> arr[i];
        }
        int smallestNumber = INT_MAX;
        for(int i = 0; i <n-1; i++){
            for(int j = i+1; j <n; j++){
                int num = arr[i] + arr[j]+j-i;
                if(num < smallestNumber){
                    smallestNumber = num;
                }
            }
        }
        cout << smallestNumber << endl;
        }
    }

    return 0;
}