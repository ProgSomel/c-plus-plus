# Incrase Size of Dynamic Array
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];

    for(int i = 0; i < 3; i++){
        cin >> a[i];
    }
    int b[5];
    for(int i = 0; i < 3; i++){
        b[i] = a[i];
    }
    b[3] = 100;
    b[4] = 200;
    for(int i = 0; i < 5; i++){
        cout << b[i] << " ";
    }
    return 0;
}
```
```bash
/input
1 2 3
```
```bash
1 2 3 100 200 
```

-------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[3];

    for(int i = 0; i < 3; i++){
        cin >> a[i];
    }
    int *b = new int[5];
    for(int i = 0; i < 3; i++){
        b[i] = a[i];
    }
    b[3] = 100;
    b[4] = 200;

    delete[] a; //? deleted ...because do not need it now
    for(int i = 0; i < 5; i++){
        cout << b[i] << " ";
    }
    return 0;
}
```
```bash
/input
1 2 3
```
```bash
1 2 3 100 200
```