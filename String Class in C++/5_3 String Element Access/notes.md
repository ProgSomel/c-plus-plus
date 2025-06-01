# String Element Access

## using --- s[]
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";

    cout << s[0] << endl;
    return 0;
}
```
```bash
H
```

**----------------------------------------------------------------------------------------------------------------------------------**

## using s.at()
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";

    cout << s.at(0) << endl;
    return 0;
}
```
```bash
H
```

**------------------------------------------------------------------------------------------------------------------------------------**

## s.back() --- access the last Element of the string
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";

    cout << s.back() << endl;
    return 0;
}
```
```bash
d
```

---------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";

    cout << s[s.size()-1] << endl;
    return 0;
}
```
```bash
d
```

**--------------------------------------------------------------------------------------------------------------------------------------**

## s.front --- access the first Element of the string
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";

    cout << s.front() << endl;
    return 0;
}
```
```bash
H
```

----------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";

    cout << s[0] << endl;
    return 0;
}
```
```bash
H
```