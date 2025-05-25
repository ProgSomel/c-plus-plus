# EOF and Setprecision in C++

## EOF - End of File
**EOF** stands for **End of File**. In C++, it's used to detect when input has ended, especially when reading from a file or user input until nothing more is given.

```c++
#include<iostream>
using namespace std;
int main()
{
    int x;
    while (cin>>x)
    {
        /* code */
        cout << x << endl;
    }
    
    return 0;
}
```

**---------------------------------------------------------------------------------------------------------------------------------**

## Setprecision
setprecision(n) controls how many digits are displayed for floating-point numbers.

To use it, you need to include the <iomanip> header.

```c++
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double d = 23.4566;
    cout << fixed << setprecision(3) << d <<endl;
    return 0;
}
```
```bash
23.457
```
> 🧠 Note: **Without fixed**, setprecision(n) controls total significant digits. **With fixed**, it controls digits after the decimal.<br>

- By default (no fixed), setprecision(n) sets the total number of significant digits — digits that matter in the number, regardless of their position.

- When you use fixed, setprecision(n) sets the number of digits after the decimal point.

**🧪 Example 1: Without fixed**
```c++
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double num = 123.456789;

    cout << setprecision(4) << num << endl;
    return 0;
}
```
```bash
123.5
```
> ➡️ Only 4 significant digits are shown: **1, 2, 3, and 5 (rounded)**.<br>

**🧪 Example 2: With fixed**
```c++
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double num = 123.456789;

    cout << fixed << setprecision(4) << num << endl;
    return 0;
}
```
```bash
123.4568
```
> ➡️ This shows exactly 4 digits after the decimal point, because fixed was used.<br>

**🔁 Summary Table**

| Code                        | Output     | What it Means                        |
|-----------------------------|------------|--------------------------------------|
| `setprecision(4)`           | `123.5`    | 4 total significant digits           |
| `fixed + setprecision(4)`   | `123.4568` | 4 digits after the decimal point     |
