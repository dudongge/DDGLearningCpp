## 写在前面
```
const修饰的成员变量、非静态成员函数 
这个在前面已经介绍过，这里只是简单的看几个例子，加深一下印象
```

## 码上建功 
```
#include <iostream>
using namespace std;

class Car {
public:
    int m_price;
    static const int msc_wheelsCount = 4;
    //初始化的时候直接复制
    Car() :m_price(0) {
    }
    //内部不能应用this
    static void test3() {
        cout << "test3()" << endl;
    }
    
    void test4() {
        test1();
    }
    
    void test2() const {
        // this->m_price = 20;
    }
    
    // 不能在这个函数内部修改当前对象的成员变量
    void test1() const {
        // this->m_price = 10;
        
        test2();
        test3();
    }
    
    void test() {
        cout << "test()" << endl;
    }
    //被const修饰的函数只能被const修饰的类调用
    void test() const {
        cout << "test() const" << endl;
    }
};

int main() {
    Car car;
    car.test();
    //通过指针调用
    Car *p = new Car();
    p->test();
    
    const Car car2;
    car2.test();
    //通过指针调用
    const Car *p2 = new Car();
    p2->test();
    
    Car car1;
    car1.m_price = 100;
    cout << sizeof(Car) << endl;
    
    getchar();
    return 0;
}

```
#include <iostream>
using namespace std;

class Car {
public:
    int m_price;
    static const int msc_wheelsCount = 4;
    //初始化的时候直接复制
    Car() :m_price(0) {
    }
    //内部不能应用this
    static void test3() {
        cout << "test3()" << endl;
    }
    
    void test4() {
        test1();
    }
    
    void test2() const {
        // this->m_price = 20;
    }
    
    // 不能在这个函数内部修改当前对象的成员变量
    void test1() const {
        // this->m_price = 10;
        
        test2();
        test3();
    }
    
    void test() {
        cout << "test()" << endl;
    }
    //被const修饰的函数只能被const修饰的类调用
    void test() const {
        cout << "test() const" << endl;
    }
};

int main() {
    Car car;
    car.test();
    //通过指针调用
    Car *p = new Car();
    p->test();
    
    const Car car2;
    car2.test();
    //通过指针调用
    const Car *p2 = new Car();
    p2->test();
    
    Car car1;
    car1.m_price = 100;
    cout << sizeof(Car) << endl;
    
    getchar();
    return 0;
}

##  装逼一下
```
◼ const成员变量 
必须初始化(类内部初始化)，可以在声明的时候直接初始化赋值 
非static的const成员变量还可以在初始化列表中初始化
◼ const成员函数(非静态) 
const关键字写在参数列表后面，函数的声明和实现都必须带const 
内部不能修改非static成员变量 
内部只能调用const成员函数、static成员函数 
非const成员函数可以调用const成员函数 
const成员函数和非const成员函数构成重载 
非const对象(指针)优先调用非const成员函数 
const对象(指针)只能调用const成员函数、static成员函数
 
```
完整代码demo，请移步GitHub：[DDGLearningCpp](https://github.com/dudongge/DDGLearningCpp)

