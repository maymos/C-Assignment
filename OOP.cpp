
C++ What is OOP?
====================
OOP stands for Object-Oriented Programming.

Procedural programming is about writing procedures or functions that perform operations on the data,
while object-oriented programming is about creating objects that contain both data and functions.

Object-oriented programming has several advantages over procedural programming:

OOP is faster and easier to execute
OOP provides a clear structure for the programs
OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
OOP makes it possible to create full reusable applications with less code and shorter development time
Tip: The "Don't Repeat Yourself" (DRY) principle is about reducing the repetition of code.
You should extract out the codes that are common for the application, and place them at a single place
 and reuse them instead of repeating it.

C++ What are Classes and Objects?
==================================
Classes and objects are the two main aspects of object-oriented programming.

Look at the following illustration to see the difference between class and objects:


CLASS -----> Car
OBJECTS -----> Volvo, Toyota, BMW


So, a class is a template for objects, and an object is an instance of a class.

When the individual objects are created, they inherit all the variables and functions from the class.

You will learn much more about classes and objects in the next chapter.


C++ Classes/Objects
================================
C++ is an object-oriented programming language.

Everything in C++ is associated with classes and objects, along with its attributes and methods.
For example: in real life, a car is an object. The car has attributes, such as weight and color,
and methods, such as drive and brake.

Attributes and methods are basically variables and functions that belongs to the class.
These are often referred to as "class members".

A class is a user-defined data type that we can use in our program, and it works as an object constructor,
or a "blueprint" for creating objects.


Create a Class
==================
To create a class, use the class keyword:

Example
--------------
Create a class called "MyClass":

class MyClass         // The class
{
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};


Example explained
-------------------
The class keyword is used to create a class called MyClass.
The public keyword is an access specifier, which specifies that members
(attributes and methods) of the class are accessible from outside the class.
You will learn more about access specifiers later.
Inside the class, there is an integer variable myNum and a string variable myString.
When variables are declared within a class, they are called attributes.
At last, end the class definition with a semicolon ;.


Example
------------
Create an object called "myObj" and access the attributes:

class MyClass         // The class
{
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main()
{
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15;
  myObj.myString = "Some text";

  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;
  return 0;
}
