# Chapter 1

## 1. Context

### Issue in Page 4

A program to be ran in command line can be compiled as below,

```
$ cc prog1.cc
```

For the following program main.cpp, it cannot be compile successfully simply
by `cc main.cpp`, because cc command doesn't automatically link the program to
the c++ standard template library, here namely 'iostream' library.

```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Hello world!" << endl;
  return 0;
}
```

A solution is addint an explicit command to link std library, as follows,

```
cc main.cpp -lstdc++
```

### Example 1.4.4

```cpp
/**
 * Source: Example 1.4.4
 *
 * Take-away:
 *    - Under windows, the end-of-file command is Ctrl+Z;
 *    - Under Unix, the command is Ctrl+D.
 */

#include <iostream>

int main() {
    int sum = 0, value;
    // read till end-of-file, calculating a running total of all values read
    while(std::cin >> value) {
        sum += value; // equevalent to sum = sum + value
    }
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}
```

## 2. Exercise answers

### Exercise 1.1

**Answer:**

head files: .h, .hpp
source files: .cc, .cpp

### Exercise 1.2

**Answer:**

GNU: Nothing would be reported.

### Exercise 1.3

**Answer:**

```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Hello world!" << endl;
  return 0;
}
```

### Exercise 1.4

**Answer:**

```cpp
#include <iostream>

int main() {
    std::cout << "Enter two numbers:" <<  std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 * v2 << std::endl;
    return 0;
}
```

### Exercise 1.5

**Answer:**

PASS

### Exercise 1.6

**Answer:**

不合法。

分号代表表达式结束，故第1,2行的分号可以删去。

### Exercise 1.7

**Answer:**

Comments cannot be nested.

Compiling the following program,

```cpp
#include <iostream>

/*
 * coment pairs /* */ cannot nest.
 * "cannot nest" is considered source code
 * as is the rest of the program.
 */

int main() {

    return 0;
}
```

got a warning and some unpredicted errors,

```
warning: "/*" within comment [-Wcomment]
```

### Exercise 1.8

**Answer:**

PASS

### Exercise 1.9

**Answer:**

PASS

### Exercise 1.10

**Answer:**

PASS

### Exercise 1.11

**Answer:**

PASS

### Exercise 1.12

**Answer:**

PASS

### Exercise 1.13

**Answer:**

PASS
