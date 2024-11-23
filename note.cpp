
//定义常量 1 #define 宏常量（全局）  2 const修饰的变量(main里面)
//sizeof求数据类型占用内存的大小

// 字符型变量创建char ch='a'；（单引号） 内存1 （sizeof） 引号里面只能有一个字符
// 字符串变量 创建2种方式  1 c风格  2 c++ include<string> string str="hello";
// bool数据类型 1个字节 bool flag=true；输出0或1

// 输出cout<< <<; 输入cin >>变量名;

// 运算符  a++先运算后+   ++a先加后运算
//   &&与   ||或
// 三目运算符  表达式a ? 表达式b :表达式c   若a真则返回b，否则返回c 返回值还可以赋值

//选择结构 switch（） case:   break；  default其他的选项情况
//do while 先执行一次在判断循环条件
//在嵌套循环语句中break退出内循环
//continue执行到本行就不执行后面代码，直接到下一次循环
//goto无条件跳转语句

//随机数 rand（）%100  （生成1~99）
//   随机数种子srand((unsigned int)time(NULL))随机数种子 #include<ctime>

//函数 返回什么就写什么  空值函数--void （）  返回数--int （）返回地址--int *（）

//函数的分文件编写 1创建 .h后缀名的头文件 2 创建 .cpp后缀名的源文件 3在头文件中写函数的声明，在前面还要写框架#include<iostream> using.... 4 在源文件中先写函数的定义 #include “头文件”

//指针字节 8字节（64） 4字节（32）
//空指针 int * p=null 为指针初始化 但不能访问（0~255）内存编号是系统占用的，不可访问
//野指针 指针指向非法的内存空间（自己也不知道里面是什么，不是我们自己申请的）
//const修饰指针（常量指针）：const int *p=&a 指针指向可以改，但是指向的值不可以改
//             （指针常量）：int* const p=&a 指针的指向不可以改，指针指向的只以改
//                  const int*p const p=&a  指针的指向和指向的值都不可以改
//可以通过指针来遍历数组
//数组名就是数组的地址 

//结构体
//结构体数组 stuct 结构体名称 arr[5] 所含此结构体数量
//结构体指针 创建指针变量后通过->来访问结构体成员
//结构体嵌套
//结构体中const  将子函数的形参改为指针，可以减少内存空间（不会复制新的副本）但子函数可能会更改信息，所以用const

//c++中在程序运行前分为全局区和代码区
//代码区  存放函数体的二进制代码  代码区是共享的，只读的（不会被程序修改）
//全局区  全局变量（函数体外的变量） 静态变量（static) 常量（字符串常量属于，const修饰的全局常量属于，const修饰的局部变量不属于） 程序结束后由操作系统释放
//栈区    栈区的数据由编译器开辟和释放  注意不要返回局部变量的地址（局部变量存放在栈区，形参数据也放在栈区，栈区的数据在执行完就自动释放，第一次可以正确显示是因为编译器做了保留，第二次就不会保留）
//堆区    由程序员分配释放，若程序员不释放，在程序结束后系统回收
//        利用new关键字可以将数据开辟（开辟了位置）到堆区    
//        new的语法 int *p=new int（a） new返回的是该数据类型的指针 如果想释放堆区的数据利用关键字 delete，  delete p释放地址（内存）
//        开辟数组 int *arr=new int[10]创建数组，有十个元素--数组名就是数组的地址，所以赋值时，for循环 arr[i]赋值即可  delete[] arr释放数组

//引用（给变量起别名）
// 数据类型 &别名=原名（操作的是同一块地址）
//注意事项：引用必须初始化（必须告诉是谁的别名）   引用一旦初始化后就不可以更改（若b是a的别名，不能在修改b为c的别名
//引用做函数参数（和地址传递一样，但效果更清楚）  void （int &a）则a是main中a的别名，只是名字起的一样
//引用做函数返回值 注意：不要返回局部变量的引用  如果函数的返回值是引用，则函数可以作为左值
//引用的本质是指针常量 int a=0   int&ref=a->（int *const ref=&a，即ref指向的是a的地址）当ref=20->(内部发现ref是引用时，自动帮我们转换为 *ref=20)
//常量引用（用来修饰形参，防止误操作）int& ref=10（错误，引用必须引一块合法的空间）但是 const int& p=10 可以相当于int temp=10 int& ref=temp 
//        当形参void （const int& ref）只会使用这个变量，但是不能修改，避免主函数的值被修改

//函数默认参数   int（int a，int b=20，int c=30）但是当函数被调用时可修改（如果我们传入自己数据，就用自己的，没传就用默认的）若某个位置已经有了默认值，从这个数据之后都必须有默认值
//              如果函数声明有默认参数，在函数定义的时候不能有默认参数（编译器会不知道运行那个）两个不能同时有默认参数
//函数占位参数 返回值类型 函数名 （数据类型） void（int a，int）调用参数时需要多传一个int类型，占位参数也可以有默认参数
//函数重载（函数名可以相同，提高复用性） 满足条件：1必须在同一个作用域下 2函数名称相同 3函数参数的类型不同，或者个数不同，或顺序不同  
//          注意：函数的返回值（void，int）不能作为函数重载的条件；引用作为重载的条件 （int& a）-（a） （const int&a）-（10）；碰到默认参数，看是否函数调用会符合多个二义性

//********重要 c++面向对象的三大特征：封装，继承，多态
//  cpp认为万事万物都皆为对象，对象有属性和行为
// 封装（将属性和行为作为一个整体，表现为生活中的事物，将属性和行为加以权限控制）
//      class 类名 {权限，属性，行为}，类中属性和行为统称为成员。属性（成员属性，成员变量）行为（成员函数，成员方法）study中的1-圆类  通过行为也可以为属性赋值
//      访问权限 1公共权限 public 成员类内可以访问，类外可以访问  
//              2保护权限protected 成员类内可以访问，类外不可以访问（子类也可以访问父类的保护内容）
//              3私有权限 private 成员类内可以访问，类外不可以访问（子类不可以访问父类的私有内容）
//      sturct（公共）和class（私有）的区别是默认权限不同
//      成员属性设置为私有 1可以自己控制写权限 2对于写可以检测数据有效性
//             对1-使用公共的行为（函数）修改属性，不能直接对属性赋值，修改   对属性通过函数设置 可读可写，只读，只写
//             对2-因为不看以直接对属性修改，在函数中修改时因为可以if进行判断，使得写入的属性有效，符合条件
//       study2-设计立方体求出体积，面积，用全局函数和成员函数判断两个立方体是否相同