# #include <bits/stdc++.h>

## 📦 What is #include <bits/stdc++.h>?
- It's a non-standard header file that includes almost all standard C++ libraries in one go.
- Commonly used in competitive programming to save time typing multiple #includes.
```c++
#include<bits/stdc++.h>
using namespace std;
int main()
{

    return 0;
}
```

## 📚 What it includes (examples):
Instead of writing:

```c++
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <climits>
#include <queue>
#include <stack>
// ... and many more
```
You just write:
```c++
#include <bits/stdc++.h>
```


## 🛠 Origin
- Found in GCC (GNU Compiler Collection) only.
- Located at: bits/stdc++.h in the system include path.
- Not a part of the C++ Standard, so won’t work in non-GCC compilers (like MSVC or Clang without tweaks).

## ✅ When to Use
| Situation                  | Use `<bits/stdc++.h>`?                            |
|---------------------------|---------------------------------------------------|
| Competitive coding        | ✅ Yes, go for speed                              |
| Personal practice         | ✅ Sure, convenient                               |
| Production code / projects| ❌ No, not portable                               |
| Interviews                | ❌ Avoid (use standard includes)                  |
