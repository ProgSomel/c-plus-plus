```c++
#include<iostream>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    cout << s << endl;
    
    return 0;
}
```
```bash
Hello
```
```bash
Hello
```
```bash
Hello World
```
```bash
Hello
```

------------------------------------------------------------------------------------------------------------------------------
```c++
#include<iostream>
using namespace std;
int main()
{
    char s[100];
    // cin>>s; //? it will take input for space
    cin.getline(s, 100);
    cout << s << endl;

    return 0;
}
```
```bash
Hello World
```
```bash
Hello World
```

-------------------------------------------------------------------------------------------------------------------------------
```c++
#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    char s[100];
    // cin>>s; //? it will take input for space
    cin.getline(s, 100);
    cout << x << " "<< s << endl;

    return 0;
}
```
```bash
15
Hello World
```
```bash
15
```

------------------------------------------------------------------------------------------------------------------------------

```c++
#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cin.ignore();
    char s[100];
    // cin>>s; //? it will take input for space
    cin.getline(s, 100);
    cout << x << " "<< s << endl;

    return 0;
}
```
```bash
15
Hello World
```
```bash
15 Hello World
```

-------------------------------------------------------------------------------------------------------------------------------

```c++
#include<iostream>
using namespace std;
int main()
{
    int x;
    string s;
    cin >> s;
    cout << s << endl;

    return 0;
}
```
```bash
Hello
```
```bash
Hello
```
```bash
Hello World
```
```bash
Hello
```

------------------------------------------------------------------------------------------------------------------------------

```c++
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x;
    string s;
    getline(cin, s);
    cout << s << endl;

    return 0;
}
```
```bash
Hello World
```
```bash
Hello World
```

## 🔧 Common String Operations

| Operation           | Example               | Description                     |
|---------------------|------------------------|---------------------------------|
| Declare a string    | `string s = "hello";`  | Create a string                 |
| Input a string      | `cin >> s;`            | Reads one word only             |
| Multi-word input    | `getline(cin, s);`     | Reads full line                 |
| Concatenate         | `s1 + s2`              | Joins two strings               |
| Length of string    | `s.length()` or `s.size()` | Returns number of characters |
| Access character    | `s[i]`                 | Get character at index i        |
| Modify character    | `s[0] = 'H';`          | Change character at position    |
| Append              | `s += " world";`       | Add text to the end             |
| Compare strings     | `s1 == s2` or `s1 < s2`| Compare alphabetically          |
