# object
C++ Helper Function to Instantiate Classes like Tuples: the values of members as params, respectively

## Usage:

### Define a type (CLASS *or* STRUCT)
```cpp
class A {
public:
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
  
### Check with an assert (Hint: It Works!)
```cpp
#include <assert.h>  

assert(o->i == 1);
assert(o->j == -1);
```
