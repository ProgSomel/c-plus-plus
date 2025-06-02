# String Stream --- It's great for splitting a string into words

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    cout << s << endl;
    stringstream ss(s); //? Here stringatream is a class and ss is object
    string word;
    ss >> word;
    cout << word << endl;
    ss >> word;
    cout << word << endl;
    return 0;
}
```
```bash
//input
Hello I am Somel Ahmed
//output
Hello I am Somel Ahmed
Hello
I
```

------------------------------------------------------------------------------------------------------------------------------------

```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    cout << s << endl;
    stringstream ss(s); //? Here stringatream is a class and ss is object
    string word;
    while(ss >> word){
        cout << word << endl;
    }
    return 0;
}
```
```bash
//input
Hello I am Somel Ahmed
//output
Hello I am Somel Ahmed
Hello
I
am
Somel
Ahmed
```

