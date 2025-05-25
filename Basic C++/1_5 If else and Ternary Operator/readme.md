# If else and Ternary Operator

## if - else

**✅ Syntax:**
```c++
if (condition) {
    // Code runs if condition is true
} else {
    // Code runs if condition is false
}
```
1. if-else Statement

**🔧 Example:**
```c++
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are an adult." << endl;
    } else {
        cout << "You are a minor." << endl;
    }

    return 0;
}
```

---------------------------------------------------------------------------------------------------------------------------


2. if-else if Chain
Useful when checking multiple conditions:
```c++
if (score >= 90) {
    cout << "Grade: A";
} else if (score >= 80) {
    cout << "Grade: B";
} else {
    cout << "Grade: C or below";
}
```

**-------------------------------------------------------------------------------------------------------------------------**

## Ternary Operator (Short if-else)
**✅ Syntax:**
```c++
condition ? value_if_true : value_if_false;
```

**🔧 Example:**
```c++
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    string result = (number % 2 == 0) ? "Even" : "Odd";
    cout << "The number is " << result << endl;

    return 0;
}
```

## 🔁 Quick Comparison
## 🧠 if-else vs Ternary Operator

| Task                  | if-else                  | Ternary Operator             |
|-----------------------|---------------------------|-------------------------------|
| Long, multiple actions| ✅ Better choice           | ❌ Not suitable                |
| Quick one-liners      | 👌 Works, but longer       | ✅ Cleaner and shorter         |
| Readability           | ✅ Clear for beginners     | ❗ Can get messy if overused   |
