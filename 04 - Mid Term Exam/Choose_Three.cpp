#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--){
        int n, s;
        cin>>n>>s;

        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        bool flag = false;
        

        for(int i = 0; i < n-2; i++){
            
            for(int j = i + 1; j < n-1; j++){
                for(int k = j + 1; k < n; k++){
                    int sum = arr[i]+arr[j]+arr[k];
                    if(sum == s){
                    flag = true;
                    break;
               }
                }
                
               
            }
        }

        if(flag == true){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
    return 0;
}