## 写在前面
```
接下来一段时间，我会重温一下C++ ，都说学习Java 需要十年功力，学好C++ 需要一辈子，当然，程序员的鄙视链（汇编 -> C/C++ -> java -> python/js/php/OC），
这也让C++开发凌驾于其他程序员（C++的程序员自带的傲气--呵呵），C++也是其他许多语言的底层语言，了解了C++，
也可以帮助我们更好的了解底层原理。当然，和其他程序员砍（侃）起来，逼格也会提高一大截--奸笑！
```
## 学前准备
```
由于本人是iOS开发入坑，所以将会以Xcode命名行项目，
进行讲解，即在理解C++大法好，不必拘泥于开发工具
```
## 开始课程--hello world
```
1,创建命令行项目 ，打开Xcode -> File ->new ->project ->macOS ->Command Line Tool ->Next.一路next ，够详细了吧
2，需要改一些东西，由于Xcode 的.mm后缀名的文件支持C++，所以将mian.m文件的后缀改为.mm,即改为main.mm
3,删除.mm里面所有文件添加如下代码
#include <iostream>
using namespace std;


int main() {
    cout << "Hello World!" << endl;
}
然后运行，成功打印 hello world
```
## 代码注解
```
/***
 iostream是指iostream库。iostream的意思是输入输出流，直接点说就是in（输入） out（输出） stream（流），取in、out的首字母与stream合成 因为下面用到了打印信息
 */
#include <iostream>

/*
 命名空间，以后会用到--这里先提一下
 */
using namespace std;


int main() {
    //打印控制流，看着这么陌生，😀
    //cin用的右移运算符>> ，cout用的是左移运算符<<
    cout << "Hello World!" << endl;
}

```
## 最后
```
本节就算结束了，是不是helloworl打印太简单了，接下来会聊聊基础语法，一些新名词也会慢慢出现，是不是很期待--😀
```