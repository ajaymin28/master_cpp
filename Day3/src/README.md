
## General Notes D3


### GDB

- Debugger used to debug the program.

#### steps
- first compile the binary, then use gdb ./binary to enter into debug mode.
- start ( to start the debugging, will go to int main())
- from there you can enter 'list' to see next lines (break points)
- ctl+x+1 will enter into UI mode
- ctl+x+2 will enter into UI mode with Assembly code
    - ctl+x+2 again will show registers as well.
- from here we can do next, next to go through each lines.


- layout src will show code UI
- layout asm will show assemgly UI
- layout reg will show registers UI


## 1.Memoization.cpp

I think its similar or the same as dynamic programing. Cache the results and return when needed instead of computing again.

## headergaurds.h

Very useful for including header once.

```cpp
#ifndefined MY_HEADER
#define MY_HEADER
// your header content
#endif
```

### alternatives when files are compiled seperately headergaurds will not help

#### inline functions

```cpp
// using inline functions, this puts func def where its called
inline int myfunc(){
    return 0;
}
```

#### static functions
```cpp
// using static functions, init/defined only once
static int myfunc(){
    return 0;
}
```

#### One definition rule
```cpp
//keep all functions in single file, and use a header file for function declaration only.
int myfunc(int arg); // in .h file


// define in cpp file, then link this cpp with main(use .h in main).
int myfunc(int arg){
    return arg*2;
}
```
