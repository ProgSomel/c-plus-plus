# Dynamic Variable

A dynamic variable is a variable whose memory is allocated from the **heap** during program execution **(runtime)**, rather than from the **stack** at **compile time**.

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;
    int *p = new int;
    *p = 100;
    cout << p << endl;
    return 0;
}
```
```bash
0x55c97a1cc2b0
```

---------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;
    int *p = new int;
    *p = 100;
    cout << p << endl;
    cout << *p << endl;
    return 0;
}
```
```bash
0x55b47c7de2b0
100
```

---------------------------------------------------------------------------------------------------------------------------------

## For **Stack Memory** after returning from function the value of all variables will be deleted
```c++
#include<bits/stdc++.h>
using namespace std;

int *p;

void fun(){
    int x = 10; //? after return variable will be deleted
    p = &x;
    cout << "Func -> " << *p << endl;
    return;
}

int main()
{
    fun();
    cout << "Main -> " << *p << endl;
    return 0;
}
```
```bash
Func -> 10
Main -> 32764
```

## To solve this error we can use dynamic Memory
```c++
#include<bits/stdc++.h>
using namespace std;

int *p;

void fun(){
    int* x = new int; //? after return variable will be deleted
    *x = 10;
    p = x;
    cout << "Func -> " << *p << endl;
    return;
}

int main()
{
    fun();
    cout << "Main -> " << *p << endl;
    return 0;
}
```
```bash
Func -> 10
Main -> 10
```