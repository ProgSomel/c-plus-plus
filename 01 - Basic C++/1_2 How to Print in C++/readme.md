## Basic Input / Output in C++

In C++, input and output are performed in the form of a sequence of bytes or more commonly known as **streams**.

- **Input Stream:** If the direction of flow of bytes is from the device (for example, Keyboard) to the main memory then this process is called input.

- **Output Stream:** If the direction of flow of bytes is opposite, i.e. from main memory to device (display screen) then this process is called output.

- All of these streams are defined inside the **<iostream>** header file which contains all the standard input and output tools of C++. The two instances cout and cin of iostream class are used very often for printing outputs and taking inputs respectively. These two are the most basic methods of taking input and printing output in C++.


## Standard Output Stream - cout
The C++ cout is the instance of the ostream class used to produce output on the standard output device which is usually the display screen. The data needed to be displayed on the screen is inserted in the standard output stream (cout) using the insertion operator(<<).

**Syntax**
```c++
cout << value/variable;
```
For example, if we want to print text "GeeksforGeeks" on the display, we can use the cout as shown:
```c++
#include <iostream>
using namespace std;

int main() {

  	// Printing the given text using cout
    cout << "GeeksforGeeks";
    return 0;
}
```
```bash
GeeksforGeeks
```
> **Explanation:** In the above program, cout is used to output the text "GeeksforGeeks" to the standard output stream. It works in conjunction with the insertion operator (<<) to send the specified data to the output stream.

We can also print the variable values using cout.
```c++
#include <iostream>
using namespace std;

int main() {
	int a = 22;
  
  	// Printing variable 'a' using cout
    cout << a;
    return 0;
}
```
```bash
22
```

**---------------------------------------------------------------------------------------------------------------------**

## Simple output

```c++
#include<iostream> //? input output stream
int main()
{
    std :: cout<<"Hello World";
    return 0;
}
```

## output with variables

```c++
#include<iostream> //? input output stream
int main()
{
    
    int x = 10;
    std :: cout<< x;
    return 0;
}
```
```bash
10
```

```c++
#include<iostream> //? input output stream
int main()
{
    
    int x = 100;
    char c = 'A';
    double d = 34.36;
    std :: cout<< x << c << d << "\n";
    return 0;
}
```
```bash
100A34.36
```

```c++
#include<iostream> //? input output stream
int main()
{
    
    int x = 100;
    char c = 'A';
    double d = 34.36;
    std :: cout<< x << " " << c << " " << d << std::endl;
    return 0;
}
```
```bash
100 A 34.36
```

```c++
#include<iostream> //? input output stream
int main()
{
    
    int x = 100;
    char c = 'A';
    double d = 34.36;
    std :: cout<< x << " " << c << " " << d << std::endl;
    std :: cout << "My favourite number is " << x << std::endl;
    return 0;
}
```
```bash
100 A 34.36
My favourite number is 100
```