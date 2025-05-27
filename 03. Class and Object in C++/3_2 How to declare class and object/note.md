# How to declare class and object

## Class
### Create a Class
To create a class, use the **class** keyword:

**Example**
Create a class called **"MyClass"**:
```c++
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};
```
> Example explained<br>
- The class keyword is used to create a class called MyClass.
- The public keyword is an access specifier, which specifies that members (attributes and methods) of the class are accessible from outside the class. You will learn more about access specifiers later.
- Inside the class, there is an integer variable myNum and a string variable myString. When variables are declared within a class, they are called attributes.
- At last, end the class definition with a semicolon ;.

## Object
In C++, an object is created from a class. We have already created the class named **MyClass**, so now we can use this to create objects.

To create an object of **MyClass**, specify the class name, followed by the object name.

To access the class attributes (**myNum** and **myString**), use the dot syntax (.) on the object:

**Example**
Create an object called **"myObj"** and access the attributes:
```c++
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Some text";

  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;
  return 0;
}
```