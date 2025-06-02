# String input with Space

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    cout << s << endl;
    return 0;
}
```
```bash
//input
Hello World
//output
Hello
```

-------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    // cin.getline(s, 100) //? char s[100]
    getline(cin, s); //? but it has some problen. It will take enter also

    cout << s << endl;
    return 0;
}
```
```bash
//input
Hello World
//output
Hello World
```

-------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    string s;
    // cin.getline(s, 100) //? char s[100]
    getline(cin, s); //? it will also take enter(which is after cin>>x)

    cout << x << endl;
    cout << s << endl;
    return 0;
}
```
```bash
//input
10
Hello World
//output
10
```

---------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    string s;
    // cin.getline(s, 100) //? char s[100]
    cin >> s;

    cout << x << endl;
    cout << s << endl;
    return 0;
}
```
```bash
//input
10
Hello World
//output
10
Hello
```

-------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    string s;
    // cin.getline(s, 100) //? char s[100]
    cin.ignore();
    getline(cin, s);

    cout << x << endl;
    cout << s << endl;
    return 0;
}
```
```bash
//input
10
Hello World
//output
10
Hello World
```