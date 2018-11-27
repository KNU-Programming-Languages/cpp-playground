# Chapter 12

### Exercise 12.1

**Answer:**

```cpp
class Person {
private:
  std::string name;
  std::string address;
};
```

### Exercise 12.2

**Answer:**

```cpp
class Person {
public:
  Person(const std::string &nm, const std::string &addr) :
    name(nm), address(addr) {
  }
private:
  std::string name;
  std::string address;
};
```

### Exercise 12.3

**Answer:**

成员函数 getName() 和 getAddress() 不应该修改数据成员的值，因此应设计为 const 以保证这一点。

```cpp
class Person {
public:
  Person(const std::string &nm, const std::string &addr) :
    name(nm), address(addr) {
  }

  std::string getName() const {
    return name;
  }

  std::string getAddress() const {
    return address;
  }

private:
  std::string name;
  std::string address;
};
```

### Exercise 12.4

**Answer:**

数据成员 name, address 声明为 private 以实现信息隐藏；
成员函数 getName, getAddress 声明为 public 以提供为接口供外界使用，外界可通过该接口访问类中的数据成员；
构造函数通常声明为 public 以便创建 Person 类的对象。

### Exercise 12.5

C++类支持哪些访问标号？在每个访问标号之后应定义哪种成员？如果有的话，在类的定义中，一个访问标号可以出现在何处以及出现多少次？约束条件是什么？

**Answer:**

C++类支持的访问标号包括 public, private 和 protected 。

在 public 之后定义的是公有成员，程序的所有部分均可访问；
在 private 之后定义的是私有成员，只能由本类（的成员函数）访问；
在 protected 之后定义的是受保护成员，只能有本类和本类的派生类访问。

在类的定义中，一个访问标号可以出现在任意成员定义之前，且出现次数没有限制。

约束条件是：每个访问标号指定了随后的成员的访问级别，这个指定的访问级别连续有效，直至遇到下一个访问标号或类定义体的右花括号为止。


### Exercise 12.11

定义两个类X和Y，X 中有一个指向Y的指针，Y中有一个X类型的对象。

**Answer:**

类的前向声明（forward declaration）一般用来编写互相依赖的类。

```cpp
class Y;

class X {
  // ... other members
private:
  Y * y;
};

class Y {
  // ... other members
  X obj;
}
```
