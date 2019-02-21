## 写在前面
```
static可以修饰的成员变量\函数 ，被修饰的变量\函数被称为静态变量\函数
```

## 码上建功 
```
具体怎么初始化，代码中已经注释很清楚
class Person {
//默认是privat修饰
public:
    static int ms_count;
};

class Student : public Person {
    static int getCount() {
        return Person::ms_count;
    }
};
//初始化类静态变量
int Person::ms_count = 0;
//全局静态变量
static int age = 10;
int main() {

    Person::ms_count = 20;
    Student::ms_count = 10;

    cout << Person::ms_count << endl;
    cout << age << endl;
    age = 20;
    cout << age << endl;
    getchar();
    return 0;
}
看下打印结果：
10
10
20


class Car {
private:
    static int m_count;
public:
    Car() {
        m_count = 10;
    }
    ~Car() {
        m_count = 0;
    }
    static int getCount() {
        return m_count;
    }
};
//
int Car::m_count = 0;

int main() {
    Car car1;
    cout << car1.getCount() << endl;
    Car car2;
    Car *p = new Car();
    //销毁p，调用析构函数
    delete p;
    cout << Car::getCount() << endl;

    /*Car car1;
    car1.m_count = 10;
    car1.getCount();
   //可以通过指针访问
    p->m_count = 10;
    p->getCount();

    Car::m_count = 20;
    Car::getCount();*/

    getchar();
    return 0;
}
看下打印结果
10
0
可见：static修饰的
```
##  装逼一下
```
◼ 静态成员:被static修饰的成员变量\函数 
可以通过对象(对象.静态成员)、对象指针(对象指针->静态成员)、类访问(类名::静态成员)
◼ 静态成员变量
存储在数据段(全局区，类似于全局变量)，整个程序运行过程中只有一份内存 对比全局变量，它可以设定访问权限(public、protected、private)，达到局部共享的目的 
必须初始化，必须在类外面初始化，初始化时不能带static，如果类的声明和实现分离(在实现.cpp中初始化) 
◼ 静态成员函数
内部不能使用this指针(this指针只能用在非静态成员函数内部) 
不能是虚函数(虚函数只能是非静态成员函数) 
内部不能访问非静态成员变量\函数，只能访问静态成员变量\函数 
非静态成员函数内部可以访问静态成员变量\函数
构造函数、析构函数不能是静态
当声明和实现分离时，实现部分不能带static
 
```
完整代码demo，请移步GitHub：[DDGLearningCpp](https://github.com/dudongge/DDGLearningCpp)

