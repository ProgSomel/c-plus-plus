# Reversed Function

```c++
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

    reverse(arr, arr+n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " "; 
    }
    return 0;
}
```
```bash
//input
5
1 2 3 4 5
//output
5 4 3 2 1 
```

--------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Somel";
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}
```
```bash
lemoS
```