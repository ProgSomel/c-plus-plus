# String --- String is a class, so we can create a object of the string class

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s("Hello"); //? this is object with constructor, here string is class and s is object
    cout << s << endl;
    return 0;
}
```
```bash
Hello
```

----------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s("Hello"); //? this is object with constructor, here string is class and s is object
    string s("Hello World", 3); //? it will only give first 3 letters
    cout << s << endl;
    return 0;
}
```
```bash
Hel
```

----------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s("Hello"); //? this is object with constructor, here string is class and s is object
    // string s("Hello World", 3); //? it will only give first 3 letters

    string t = "Hello World";
    string s(t);
    cout << s << endl;
    return 0;
}
```
```bash
Hello World
```

----------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s("Hello"); //? this is object with constructor, here string is class and s is object
    // string s("Hello World", 3); //? it will only give first 3 letters

    string t = "Hello World";
    string s(t, 5);
    cout << s << endl;
    return 0;
}
```
```bash
World
```

----------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s("Hello"); //? this is object with constructor, here string is class and s is object
    // string s("Hello World", 3); //? it will only give first 3 letters

    // string t = "Hello World";
    // string s(t, 5);

    string s(5, 'A');
    cout << s << endl;
    return 0;
}
```
```bash
AAAAA
```