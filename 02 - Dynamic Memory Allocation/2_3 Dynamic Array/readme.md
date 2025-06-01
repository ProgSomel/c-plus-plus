# Dynamic Array
A dynamic array is an array whose size is not fixed at compile time — you decide the size during program execution (runtime).

## Static Array

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];

    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    for(int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }
    return 0;
}
```

```bash
//input
1 2 3 4 5
```

```bash
1 2 3 4 5
```

**------------------------------------------------------------------------------------------------------------------------------------------**

## Dynamic Array
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int a[5]; //? static array
    int *a = new int[5]; //? Dynamic Array | *a will store first address of array

    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    for(int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }
    return 0;
}
```
```bash
//input
1 2 3 4 10
```
```bash
1 2 3 4 10
```
