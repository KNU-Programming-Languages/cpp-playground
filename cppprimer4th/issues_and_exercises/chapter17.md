# Chapter 17

### Exercise 17.4

**Answer:**

```cpp
int main() {
  try {
    // use of the C++ standard library
  }
  catch(const exception &e) {
    cerr << e.what() << endl;
    abort();
  }
  return 0;
}
```

### Exercise 17.10

**Answer:**

如果函数有形如 throw() 的异常说明，则该函数不抛出任何异常。

如果函数没有异常说明，则该函数可以抛出任意类型的异常。
