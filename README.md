# object
C++ Helper Function to Instantiate Classes like Tuples: the values of members as params, respectively

## Usage:

### Define a type (CLASS *or* STRUCT)
```cpp
class A {
  int i;
  int j;
};
```
  
### Reference object.h
```cpp
#include "object.h"
```
  

### Create instance of struct A 
* Init struct A 
```cpp
int a = -1;
int b = 1;

A* o = I<A>(b, a);
```

### It works!
#### Now, o->i == 1 && o->j == -1!
