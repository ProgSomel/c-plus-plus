# Ranged based for loop

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    for(char c:s){
        cout << c << endl;
    }
    
    return 0;
}
```
```bash
//input
Helloworld
//output
H
e
l
l
o
w
o
r
l
d
```