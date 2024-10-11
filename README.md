# Constructors and Destructors 

## Aim

To study and implement constructors and destructors in C++.

## Theory

**Constructors** and **destructors** are special member functions of a class in C++ that are used to initialize and clean up objects, respectively.

### Constructors

- **Definition**: A constructor is a special member function that is automatically called when an object of the class is created. It has the same name as the class and does not have a return type.
- **Purpose**: To initialize the object's data members.
- **Types**:
  - **Default Constructor**: Takes no arguments.
  - **Parameterized Constructor**: Takes one or more arguments.
  - **Copy Constructor**: Initializes an object using another object of the same class.
  - **Move Constructor**: Transfers resources from a temporary object to a new object (introduced in C++11).

**Syntax**:
```cpp
class ClassName {
public:
    ClassName(); // Default constructor
    ClassName(int arg); // Parameterized constructor
    ClassName(const ClassName &obj); // Copy constructor
    ClassName(ClassName &&obj); // Move constructor
};
```
### Destructors

- **Definition**: A destructor is a special member function that is automatically called when an object goes out of scope or is explicitly deleted. It has the same name as the class, preceded by a tilde (~), and does not take any arguments or return a value.
- **Purpose**: To release resources allocated to the object.
- **Characteristics**:
  - There can only be one destructor in a class.
  - It cannot be overloaded.
  - It is called in the reverse order of the constructor calls.

**Syntax**:
```cpp
class ClassName {
public:
    ~ClassName(); // Destructor
};
```

# Algorithms:
### Constructor inside class
1) Start

2) Define Class `date`:   
    -  Create a class named `date` with three private data members: `d` (for day), `m`(for month), and `y` (for year).

3) Define Constructor `date()`:   
    - Inside the class, define a public constructor `date()` that:
    - Prompts the user to enter the day `(d)`, month `(m)`, and year `(y)`.
    - Stores the entered values in the respective member variables.
    - Displays the date in the format `d/m/y`.

4) Inside the `main()` Function:   
    - Declare an object `today` of class date.
    - This triggers the automatic call of the constructor.
    - The constructor will then execute, prompting the user to input values and displaying the date in the format `d/m/y`.
5) End

### Destructor
1) Start

2) Define Global Variable:
    - Declare a global variable `count` and initialize it to `0`. This variable will track the number of `Student` objects created and destroyed.

3) Define Class `Student`:
    - Inside the class `Student`, define two public member functions: a constructor and a destructor.

4) Constructor `Student()`:
    - Increment `count` by `1` whenever a `Student` object is created.
    - Display the current count of created objects using the message:
`"Number of objects created: count".`

5) Destructor ~Student():
    - Decrement `count` by `1`whenever a `Student` object is destroyed.
    - Display the current count of destroyed objects (before decrement) using the message:
      `"No. of objects destroyed: count + 1"`.

6) Inside the `main()` Function:
    - Create three `Student` objects: `aa`, `bb`, and `cc`.
      - This will call the constructor for each object, incrementing `count` three times and displaying the number of objects created after each increment.

7) Create Nested Scope:
    - Inside the nested block (`{}`), create a fourth `Student` object `dd`.
      - This will call the constructor, incrementing `count` by 1 and displaying the number of objects created.
    - When the block ends, object `dd` goes out of scope and is destroyed, invoking the destructor and decreasing `count` by 1.

8) End of `main()`:
    - As `main()` ends, objects `aa`, `bb`, and `cc` go out of scope, one by one, invoking their destructors and decrementing `count` by 1 after each destruction.
9) End
