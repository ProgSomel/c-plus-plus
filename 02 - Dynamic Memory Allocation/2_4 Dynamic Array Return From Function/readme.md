# Dynamic Array Return From Function
```c++
#include<bits/stdc++.h>
using namespace std;

int* fun(){
    int a[5];
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    return a;
}

int main()
{
    int *p = fun();
    return 0;
}
```
```bash
warning: address of stack memory associated with local variable 'a' returned [-Wreturn-stack-address]
    9 |     return a;
      |            ^
```
> Error --> for static array --> after returning from array it will be deleted<br>

--------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;

int* fun(){
    int *a = new int[5];
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    return a;
}

int main()
{
    int *p = fun();
    for(int i = 0; i < 5; i++){
        cout << p[i] << " ";
    }
    return 0;
}
```
```bash
/input
1 2 3 4 10 
```
```bash
1 2 3 4 10 
```