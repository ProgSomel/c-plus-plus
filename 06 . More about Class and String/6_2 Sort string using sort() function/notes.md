# String sort using sort() --- sort(s.begin(), s.end())

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    cout << s << endl;
    return 0;
}
```
```bash
//input
Helloworld
//output
Helloworld
```