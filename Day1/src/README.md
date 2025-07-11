## TODO: Update



### Pointers vs References

| Feature            | Pointer Example        | Reference Example  |
| ------------------ | ---------------------- | ------------------ |
| Reassignment       | `ptr = &b;`            | Not allowed        |
| Nullability        | `int* ptr = nullptr;`  | Not possible       |
| Dereferencing      | `*ptr`                 | `ref`              |
| Arithmetic         | `ptr++`                | Not possible       |
| Dynamic Allocation | `int* p = new int(5);` | Not possible       |
| Function Arg       | `void foo(int* p)`     | `void foo(int& r)` |


#### Examples

```cpp
int a = 5, b = 10;

// Pointer can point to different variables
int* ptr = &a;
ptr = &b;  // OK: ptr now points to b

// Reference must be initialized and cannot change reference
int& ref = a;
// ref = b; // This assigns value of b to a, does NOT change reference!

```


```cpp
// Pointer Can be null 
// Reference Cannot be null

int* ptr = nullptr; // OK
// int& ref; // ERROR: reference must be initialized at declaration
```


```cpp
//Explicit dereferencing (*) (Pointer) 
//Implicit dereferencing (Reference)

int x = 42;
int* ptr = &x;
int& ref = x;

// Pointer: need * to access value
std::cout << *ptr << std::endl; // prints 42

// Reference: use like normal variable
std::cout << ref << std::endl; // prints 42
```

```cpp
//Pointer arithmetic
//No arithmetic on reference

int arr[3] = {1, 2, 3};
int* ptr = arr;
ptr++; // Now points to arr[1], allowed

// int& ref = arr[0];
// ref++; // This increments value at arr[0], NOT reference (no reference arithmetic)
```

```cpp
// Use case: Dynamic memory/allocation with pointer

int* dynamicInt = new int(100); // Allocated on heap
std::cout << *dynamicInt << std::endl; // prints 100
delete dynamicInt;

// Reference cannot bind to dynamically allocated memory without an existing variable
// int& ref = new int(100); // Error: cannot bind non-const lvalue reference to temporary
```

```cpp
//  Function argument passing
void incrementPointer(int* n) {
    (*n)++;
}

int x = 1;
incrementPointer(&x);
std::cout << x << std::endl; // prints 2

/* with reference */
void incrementReference(int& n) {
    n++;
}

int y = 1;
incrementReference(y);
std::cout << y << std::endl; // prints 2
```