# Switch in C++

The switch statement lets you run different blocks of code based on the value of a variable (usually an int or char).

```c++
#include<iostream>
using namespace std;
int main()
{
    int day;
    cin>>day;

    switch (day)
    {
    case 1:
        /* code */
        cout << "saturday" << endl;
        break;

    case 2:
        
        cout << "sunday" << endl;
        break;
    
    default:
        cout << "monday";
        break;
    }
    return 0;
}
```
```bash
1
```
```bash
saturday
```
```bash
5
```
```bash
monday
```

------------------------------------------------------------------------------------------------------------------------------

```c++
#include<iostream>
using namespace std;
int main()
{
    // int day;
    // cin>>day;

    // switch (day)
    // {
    // case 1:
    //     /* code */
    //     cout << "saturday" << endl;
    //     break;
    // case 2:
        
    //     cout << "sunday" << endl;
    //     break;
    
    // default:
    //     cout << "monday";
    //     break;
    // }
    // return 0;

    int x;
    cin>>x;

    switch (x%2)
    {
    case 0:
        /* code */
        cout << "Even";
        break;
    
    default:
        cout << "Odd";
        break;
    }
}
```
```bash
5
```
```bash
Odd
```
```bash
6
```
```bash
Even
```

**🧠 Notes:**
- **break;** ends a case block — without it, fall-through happens (it runs into the next case).

- **default:** runs if none of the case values match — like an else in if-else.

- **Works best** with int, char, or enum. Not allowed for float, string, or bool directly.

