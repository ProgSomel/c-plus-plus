# String Iterator

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello";
    for(int i = 0; i < s.size(); i++){
        cout << s[i] << endl;
    }
    return 0;
}
```
```bash
H
e
l
l
o
```

------------------------------------------------------------------------------------------------------------------------------------

- ## s.begin() -- pointer to the first element
- ## s.end() -- pointer to the next element after the last element of the string
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello";
    
    cout << *s.begin() << endl; //? Here s.begin() is a pointer
    return 0;
}
```
```bash
H
```

-----------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello";
    
    cout << *s.begin() << endl; //? Here s.begin() is a pointer
    cout << *s.end() << endl; //? Here s.end() will print next value of last Index value which is null
    return 0;
}
```
```bash
Hnull
```

------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello";
    
    cout << *s.begin() << endl; //? Here s.begin() is a pointer
    cout << *(s.end()-1) << endl; //? Now *(s.end()-1) will print last index value
    return 0;
}
```
```bash
H
o
```

------------------------------------------------------------------------------------------------------------------------------------

**Using Iterator**
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello";
    
    for(string:: iterator it = s.begin(); it < s.end(); it++){
        cout << *it << endl; //? Here it(iterator) is a pointer
    }
    return 0;
}
```
```bash
H
e
l
l
o
```

-------------------------------------------------------------------------------------------------------------------------------------

**Using short-hand method(auto) for iterator**
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello";
    
    for(auto it = s.begin(); it < s.end(); it++){
        cout << *it << endl; //? Here it(iterator) is a pointer
    }
    return 0;
}
```
```bash
H
e
l
l
o
```