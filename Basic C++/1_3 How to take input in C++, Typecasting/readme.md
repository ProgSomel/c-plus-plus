# Standard Input Stream - cin

The C++ cin statement is the instance of the class istream and is used to read input from the standard input device which is usually a keyboard. The extraction operator (>>) is used along with the object cin for extracting the data from the input stream and store it in some variable in the program.

**Syntax**

```c++
cin >> variable;
```

For example, if we want to ask user for his/her age, then we can use cin as shown:

```c++
#include <iostream>
using namespace std;

int main() {
    int age;

  	// Taking input from user and store
  	// it in variable
    cin >> age;

  	// Output the entered age
    cout << "Age entered: " << age;
    return 0;
}
```

```bash
18 (Enter by user)
Your age is: 18
```

> **Explanation:** The above program asks the user to input the age. The object cin is connected to the input device (keyboard). The age entered by the user is extracted from cin using the extraction operator(>>) and the extracted data is then stored in the variable age present on the right side of the extraction operator.<br>

> The type of input provided should be same as that of the variable being used to store it. Otherwise, it may lead to undefined error or input failure.<br>

Also, while taking text as input using cin, we need to remember that cin stops reading input as soon as it encounters a whitespace (space, tab, or newline). This means it only captures the first word or characters until the first whitespace. It is shown in the below example:

```c++
#include <iostream>
using namespace std;

int main() {
    string name;

  	// Taking input from user and store
  	// it in variable
    cin >> name;

  	// Output the entered age
    cout << "Name entered: " << age;
    return 0;
}
```

**---------------------------------------------------------------------------------------------------------------------**

```c++
#include<iostream>
int main()
{
    int x;
    std::cin>>x;
    std::cout<<x;

    return 0;
}
```

```bash
14
```

```bash
14
```

---

```c++
#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    cout<<x;

    return 0;
}
```

```bash
14
```

```bash
14
```

---

```c++
#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    cout<<x<<endl;

    char c = 'A';
    int ascii = c;
    cout << ascii <<endl;

    return 0;
}
```

```bash
14
```

```bash
14
65
```

---

```c++
#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    cout<<x<<endl;

    char c = 'A';
    cout << c <<endl;

    return 0;
}
```

```bash
14
```

```bash
14
A
```

**---------------------------------------------------------------------------------------------------------------------**

# Type Conversion in C++

Type conversion means converting one type of data to another compatible type such that it doesn't lose its meaning. It is essential for managing different data types in C++.

Let's take a look at an example:

```c++
#include <iostream>
using namespace std;

int main() {

  	// Two variables of different type
	int i = 10;
    char c = 'A';

  	// printing c after manually converting it
  	cout << (int)c << endl;

  	// Adding i and c,
  	int sum = i + c;

  	// Printing sum
  	cout << sum;

    return 0;
}
```

```bash
65
75
```

> **Explanation:** The character c = ('A') is manually converted to its ASCII integer value using (int)c. The addition of i = 10 and c involves automatic type conversion, where the character c is automatically converted to its ASCII value (65) before the addition.<br>

---

```c++
#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    cout<<x<<endl;

    char c = 'A';
    cout << (int)c <<endl;

    return 0;
}
```

```bash
14
```

```bash
14
65
```

---

```c++
#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    cout<<x<<endl;

   int y = 65;
    cout << (char)y <<endl;

    return 0;
}
```

```bash
14
```

```bash
14
A
```

---

## Implicit Type Conversion

**Implicit type conversion** (also known as coercion) is the conversion of one type of data to another type automatically by the compiler when needed. It happens automatically when:

- Operations are performed on values of different data types.
- If you pass an argument to a function that expects a different data type.
- Assigning a value of one data type to a variable of another data type.

**Example:**

```c++
#include <iostream>
using namespace std;

int main() {

    int i = 10;
    char c = 'a';

    // c implicitly converted to int. ASCII
    // value of 'a' is 97
    i = i + c;

    // x is implicitly converted to float
    float f = i + 1.0;

    cout << "i = " << i << endl
         << "c = " << c << endl
         << "f = " << f;

    return 0;
}
```

```bash
i = 107
c = a
f = 108
```

> It is possible for implicit conversions to **lose information**, signs can be lost (when signed is implicitly converted to unsigned), and overflow can occur (when long long is implicitly converted to float).<br>

### Cases of Implicit Type Conversion

1. For Numeric Type
   All the data types of the variables are upgraded to the data type of the variable with largest data type. For numeric type,

   > bool -> char -> short int -> int -> unsigned int -> long -> unsigned -> long long -> float -> double -> long double<br>

2. Pointer Conversions
   Pointers to derived classes can be converted to pointers to base classes automatically.

3. Boolean Conversion
   Any scalar type (integer, floating-point, pointer) is implicitly converted to bool in a context that requires a Boolean value (e.g., if, while, for conditions).

---

## Explicit Type Conversion
**Explicit type conversion**, also called **type casting** is the conversion of one type of data to another type manually by a **programmer**. Here the user can typecast the result to make it of a particular data type. In C++, it can be done by two ways:

1. C Style Typecasting
This method is inherited by C++ from C. The conversion is done by explicitly defining the required type in front of the expression in parenthesis. This can be also known as **forceful casting**.
```c++
(type) expression;
```
where **type** indicates the data type to which the final result is converted.
**Example:**
```c++
#include <iostream>
using namespace std;

int main() {
    double x = 1.2;

    // Explicit conversion from double to int
    int sum = (int)x + 1;

    cout << sum;

    return 0;
}
```
```bash
2
```
This typecasting is considered old and unsafe because it performs no checks whatsoever to determine whether the casting is valid or not.

-------------------------------------------------------------------------------------------------------------------------

## C++ Style Typecasting
C++ introduced its own typecasting method using cast operators. **Cast operator** is an unary operator which forces one data type to be converted into another data type. C++ supports four types of casting:

1. **Static Cast:** Used for standard compile time type conversions.
2. **Dynamic Cast:** Used for runtime type conversion in polymorphism and inheritance.
3. **Const Cast:** Removes or adds const or volatile qualifiers.
4. **Reinterpret Cast:** Used for low-level reinterpretation of bits (e.g., converting pointers).

**Example:**
```c++
#include <iostream>
using namespace std;

int main() {
    double x = 1.2;

    // Explicit conversion from double to int
    int sum = static_cast<int>(x + 1);

    cout << sum;
    return 0;
}
```
```bash
2
```

**---------------------------------------------------------------------------------------------------------------------**

# Risks of Type Conversion
Type conversion provides useful functionality to the language but also introduces certain risks:

1. **Data loss** that occurs when converting from a larger type to a smaller type (e.g., int to char).
2. **Undefined behavior** that happens when casting pointers between unrelated types and dereferencing them.
3. **Violation of const correctness** when removing const with const_cast and modifying the variable leads to undefined behavior.
4. **Memory misalignment** casting pointers to types with stricter alignment can cause crashes.