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

        
        int freq[200001] = {0};
        for(int i = 0; i < n; i++){
            freq[arr[i] + 100000]++;
        }

        int minElement = INT_MAX;

        for(int i = 0; i < n; i++){
            minElement = min(arr[i], minElement);
        }

        if(freq[minElement + 100000] % 2 == 0){
            cout << "Unlucky";
        }else{
            cout << "Lucky";
        }

    }
    return 0;
}