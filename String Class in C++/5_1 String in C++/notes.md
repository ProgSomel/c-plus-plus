# String
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10] = "Hello";
    s = "Gello"; //! Error -- expression must be a modifiable lvalueC/C++(137)

    cout << s << endl;
    return 0;
}
```

-----------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10] = "Hello";
    strcpy(s, "Gello");

    cout << s << endl;
    return 0;
}
```
```bash
Gello
```

-----------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string s = "Hello";
    s = "Gello";

    cout << s << endl;
    return 0;
}
```
```bash
Gello
```

----------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    
    char s1[10] = "Hello";
    char s2[10] = "Hello";

    if(strcmp(s1, s2) == 0){
        cout << "Same" << endl;
    };
    return 0;
}
```
```bash
Same
```

------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    
    string s1 = "Hello";
    string s2 = "Hello";

    if(s1 == s2){
        cout << "Same" << endl;
    };
    return 0;
}
```
```bash
Same
```