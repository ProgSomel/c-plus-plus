# Min, Max, Swap

## 🔹 min() – Find the Smaller Value

**✅ Syntax:**
```c++
#include <algorithm>

int smaller = min(a, b);
```
**🔧 Example:**
```c++
#include <iostream>
#include <algorithm> // Required for min
using namespace std;

int main() {
    int a = 10, b = 20;
    cout << "Smaller value: " << min(a, b) << endl;
    return 0;
}
```
```bash
Smaller value: 10
```
---------------------------------------------------------------------------------------------------------------------------------

```c++
#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    cout << min({10, 1, 0, -1});
    return 0;
}
```
```bash
-1
```

**-------------------------------------------------------------------------------------------------------------------------**

## 🔹 max() – Find the Larger Value
**✅ Syntax:**
```c++
#include <algorithm>

int bigger = max(a, b);
```

**🔧 Example:**

```c++
int x = 5, y = 9;
cout << "Larger value: " << max(x, y) << endl;
```
```bash
Larger value: 9
```

---------------------------------------------------------------------------------------------------------------------------------

```c++
#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    cout << max({10, 1, 0, -1});
    return 0;
}
```
```bash
10
```

**------------------------------------------------------------------------------------------------------------------------------**

## 🔹 swap() – Swap Values of Two Variables

**✅ Syntax:**
```c++
#include <algorithm>

swap(a, b);
```

```c++
#include <iostream>
#include <algorithm> // Required for swap
using namespace std;

int main() {
    int x = 7, y = 3;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swap(x, y);

    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}

```
```bash
Before swap: x = 7, y = 3
After swap: x = 3, y = 7

```