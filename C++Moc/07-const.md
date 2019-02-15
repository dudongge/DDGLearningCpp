## 写在前面
```
这节比较简单，就是看几个栗子，自己想一想，在ios开发中用到过这字段，没记错的话应该是java里面的final
```

## 常引用const
```
    int age = 10;
    //不能通过指针修改所指向的内容
    int const *pAge1 = &age;
    //不能修改指针的指向，但是可以通过指针修改所指向的内容
    int * const pAge2 = &age;
    cout << pAge1 << endl;
    cout << pAge2 << endl;
    
    打印结果：
    0x7ffeefbff54c
    0x7ffeefbff54c
    
    // *p0是常量，p0不是常量
    const int *p0 = &age;
    // *p1是常量，p1不是常量
    int const *p1 = &age;
    // p2是常量，*p2不是常量
    int * const p2 = &age;
    // *p3是常量，p3是常量
    const int * const p3 = &age;
    // *p4是常量，p4是常量
    int const * const p4 = &age;
```
