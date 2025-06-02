# String Modifiers Part I

### s1+=s2
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello";
    string s2 = "World";

    s1+=s2; //? s1 = s1 + s2 // strcat(s1, s2)
    cout << s1 << endl;
    return 0;
}
```
```bash
HelloWorld
```

**-------------------------------------------------------------------------------------------------------------------------------------**

### s.append(s2)
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello";
    string s2 = "World";

    s1.append(s2);
    cout << s1 << endl;
    return 0;
}
```
```bash
HelloWorld
```

**-------------------------------------------------------------------------------------------------------------------------------**

### s.push_back() --- add character to the last of the string
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello";

    s1.push_back('A'); //? only a single character
    cout << s1 << endl;
    return 0;
}
```
```bash
HelloA
```

-------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello";

    // s1.push_back('A');
    s1 += 'A';
    cout << s1 << endl;
    return 0;
}
```
```bash
HelloA
```

------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello";

    // s1.push_back('A'); //? only a single character
    // s1 += 'A';
    s1[s1.size()-1] = 'A';
    cout << s1 << endl;
    return 0;
}
```
```bash
HellA
```

--------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello";

    // s1.push_back('A'); //? only a single character
    // s1 += 'A';
    s1[s1.size()] = 'A';
    cout << s1 << endl;
    return 0;
}
```
```bash
Hello
```

**---------------------------------------------------------------------------------------------------------------------------------------**

### s.pop_back() --- remove the last character of the string
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello";

    s1.pop_back();
    cout << s1 << endl;
    return 0;
}
```
```bash
Hell
```

------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello";

    s1.pop_back();
    s1.pop_back();
    cout << s1 << endl;
    return 0;
}
```
```bash
Hel
```

**------------------------------------------------------------------------------------------------------------------------------------------**

### s= --- assign string
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello";

    s1 = "Gello";

    cout << s1 << endl;
    return 0;
}
```
```bash
Gello
```

-------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello";

    string s2 = "Gello";

    s1 = s2;

    cout << s1 << endl;
    return 0;
}
```
```bash
Gello
```

-----------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello";

    string s2 = "Gello";

    s1.assign(s2);

    cout << s1 << endl;
    return 0;
}
```
```bash
Gello
```

**-----------------------------------------------------------------------------------------------------------------------------------------**

### s.erase() --- erase characters from the string
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello World";

    s1.erase(5); //? after 5 will characters will be deleted

    cout << s1 << endl;
    return 0;
}
```
```bash
Hello
```



--------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello World";

    s1.erase(5, 1); //? from index 5, 1 element will be deleted

    cout << s1 << endl;
    return 0;
}
```
```bash
HelloWorld
```

--------------------------------------------------------------------------------------------------------------------------------------

### s.replace() --- replace a portion of the string
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello World";

    s1.replace(6, 5, "Bangladesh"); //? from index 6, 5 element will be replaced by Bangladesh

    cout << s1 << endl;
    return 0;
}
```
```bash
Hello Bangladesh
```

-------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello World";

    s1.replace(6, 0, "Bangladesh"); //? from index 6, new value Bangladesh will be added

    cout << s1 << endl;
    return 0;
}
```
```bash
Hello BangladeshWorld
```

**--------------------------------------------------------------------------------------------------------------------------------------**

### s.insert() --- insert a portion to a specific position
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Hello World";

    s1.insert(5, "Somel"); //? at index 5, Somel will be insterted
    cout << s1 << endl;
    return 0;
}
```
```bash
HelloSomel World
```