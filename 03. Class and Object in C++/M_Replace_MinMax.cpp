#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if(n >= 2){
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int maxNumber = INT_MIN;
        int minNumber = INT_MAX;

        for(int i = 0; i < n; i++){
            maxNumber = max(arr[i], maxNumber);
            minNumber = min(arr[i], minNumber);
        }

        for(int i = 0; i < n; i++){
            if(arr[i] == minNumber){
                arr[i] = maxNumber;
            }else if(arr[i] == maxNumber){
                arr[i] = minNumber;
            }
        }

        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        
    }
    return 0;
}