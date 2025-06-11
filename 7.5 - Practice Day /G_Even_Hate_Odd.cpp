#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--){

         int n;
        cin >> n;
        
        if(n >= 1){
            int arr[n];

        

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int even = 0;
    int odd = 0;

    if(n % 2 != 0){
        cout << -1 << endl;
    }else{
        for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    if(even == odd){
        cout << 0 << endl;
    }else {
        int number = n / 2;
        cout << abs(odd - number) << endl;
    }
    }

        }
    }
    



    return 0;
}