## 写在前面
```
今天学一个修饰的关键字 extern "C"，都说C++是C的一个特别实现，所以完全兼容C语法，
被extern "C"修饰的代码会按照C语言的方式去编译
```
## 名词解释
```
如果函数同时有声明和实现，要让函数声明被extern "C"修饰，函数实现可以不修饰
由于C、C++编译规则的不同，在C、C++混合开发时，
可能会经常出现以下操作 C++在调用C语言API时，需要使用extern "C"修饰C语言的函数声明
有时也会在编写C语言代码中直接使用extern “C” ，这样就可以直接被C++调用
```
## 码上封口
```
#include <iostream>
using namespace std;

// C语言库
extern "C" void func() {
    std::cout << "func()" << std::endl;
}

int main() {
    func();
}
//打印结果  func()
```
## 进阶一下
```
新建一个C++ 文件，会生成一个.cpp和.hpp的文件，和OC有点类似，
用法也和OC类似，在.hpp声明要暴露外面的方法，在.cpp是该方法的实现。
写一个简单的加法函数sum。
"在.hpp中"
#ifndef sum_hpp
#define sum_hpp

#include <stdio.h>
//函数声明
int sum(int a, int b);

#endif /* sum_hpp */
'在.cpp中'
#include "sum.hpp"
// _sum
int sum(int a, int b) {
    return a + b;
}

'在main.mm中'
#include <iostream>
#import "sum.hpp"
using namespace std;

// C语言库
extern "C" void func() {
    std::cout << "func()" << std::endl;
}

int main() {
    func();
    cout << "sum的和是：" << sum(2, 4) << endl;
}
运行一下结果是：
func()
sum的和是：6
卧槽：不知不觉把.mm中如何调用C++给泄露了。
哎，不对啊，没有C++ 文件代用C文件，好，我补上。
为了区别，创建一个C文件，文件名为minus
```
## 码上封喉
```
'在minus.h中'

#ifndef minus_h
#define minus_h
//通过使用宏__cplusplus来区分C、C++环境 现在表明是C++环境
#ifdef __cplusplus
extern "C" {
#endif // __cplusplus
   int minus(int a, int b);
#ifdef __cplusplus
}
#endif // __cplusplus

#endif // !__SUM_H

'在minus.c中'

#include "minus.h"
int minus(int a, int b) {
    return a - b;
}

'在sum.hpp中'
添加测试函数声明 int testMinus(int a, int b);
#ifndef sum_hpp
#define sum_hpp

#include <stdio.h>
//函数声明
int sum(int a, int b);
int testMinus(int a, int b);
#endif /* sum_hpp */

'在sum.cpp中' 
添加函数实现
#include "sum.hpp"
#include "minus.h"
// _sum
int sum(int a, int b) {
    return a + b;
}

int testMinus(int a, int b) {
    return  minus(a, b);
}

'在main.mm中'
添加函数调用
#include <iostream>
#import "sum.hpp"
using namespace std;
// C语言库
extern "C" void func() {
    std::cout << "func()" << std::endl;
}

int main() {
    func();
    cout << "sum的和是：" << sum(2, 4) << endl;
    cout << "minus的结果是：" << testMinus(8, 4) << endl;
}
看下打印结果：
func()
sum的和是：6
minus的结果是：4
今天的课程算是结束了，希望你也能有所收获。
```