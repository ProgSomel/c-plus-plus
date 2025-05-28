# Sort function in C++

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
```
```bash
//input
3
10 100  2
```
```bash
2 10 100
```

-----------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    // sort(a, a+n); //? ascending
    sort(a, a+n, greater<int>()); //? Descending 
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
```
```bash
//input
3
10 100  2
```
```bash
100 10 2 
```