# String Capacity

## s.size() --- return the size of the string
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World"; //? Here, s is the object of class string 
    cout << s.size() << endl;
    return 0;
}
```
```bash
11
```

**----------------------------------------------------------------------------------------------------------------------------------**

## s.max_size() --- How much size can contains the compiler(local machine compiler)
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World"; //? Here, s is the object of class string 
    cout << s.max_size() << endl;
    return 0;
}
```
```bash
4611686018427387903
```

**----------------------------------------------------------------------------------------------------------------------------------**

## s.capacity() --- return the current available Capacity of the string
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World"; //? Here, s is the object of class string 
    cout << s.capacity() << endl;
    return 0;
}
```
```bash
15
```

----------------------------------------------------------------------------------------------------------------------------------

- Dynamically increased capacity
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello Worlddjflkgdfjgldfkgjfldkg ifrj,cvls'f;'ksdfsdqsgfj"; //? Here, s is the object of class string 
    cout << s.capacity() << endl;
    return 0;
}
```
```bash
57
```

**---------------------------------------------------------------------------------------------------------------------------------**

## s.clear() --- clear the string
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World"; //? Here, s is the object of class string 
    s.clear();
    cout << s << endl;
    return 0;
}
```
```bash
```

--------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World"; //? Here, s is the object of class string 
    s.clear();
    cout << s.size() << endl;
    return 0;
}
```
```bash
0
```

**----------------------------------------------------------------------------------------------------------------------------------**

## s.empty() --- return true/false if string is empty
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World"; //? Here, s is the object of class string 
    s.clear();

    if(s.empty()){
        cout << "Faka" << endl;
    }else{
        cout << "Not Faka" << endl;
    }
    return 0;
}
```
```bash
Faka
```

**---------------------------------------------------------------------------------------------------------------------------------**

## s.resize() --- change the size of the string
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World"; //? Here, s is the object of class string 
    s.resize(5);
    cout << s << endl;
    return 0;
}
```
```bash
Hello
```

-------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World"; //? Here, s is the object of class string 
    s.resize(15, 'x');
    cout << s << endl;
    return 0;
}
```
```bash
Hello Worldxxxx
```