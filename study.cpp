#include<iostream>
#include<string>
using namespace std;

//封装
// 1 圆类
// const double pi = 3.14;
// class circle
// {
// public: // 访问权限
//     // 属性
//     int m_r; // 半径
//     // 行为（一般以函数实现）
//     // 获取圆的周长
//     double calculatezc()
//     {
//         return 2 * pi * m_r;
//     }
// };

// int main()
// {
//     circle c1;//通过圆类 创建具体的圆（对象）   进行实列化
//     c1.m_r= 10;//给圆的对象赋值
//     cout << "圆的周长为: " << c1.calculatezc() << endl;
//     return 0;
// }



//2立方体
//创建立方体类
//设计属性
//设计行为，获取立方体的体积和面积
//分别利用全局函数和成员函数判断两个立方体是否相同
// class cube
// {
// public:
//     void setl(int l)
//     {
//         m_l = l;
//     }
//     int getl()
//     {
//         return m_l;
//     }
//     void setw(int w)
//     {
//         m_w = w;
//     }
//     int getw()
//     {
//         return m_l;
//     }
//     void seth(int h)
//     {
//         m_h = h;
//     }
//     int geth()
//     {
//         return m_l;
//     }
//     int mianji()//面积
//     {
//         return 2 * m_h+2 * m_l +2* m_w;
//     }
//     int tiji()//体积
//     {
//         return  m_h * m_l * m_w;
//     }
//     bool issamebyclass(cube &c)
//     {
//         if (m_l == c.geth())//类内可以访问属性
//             return true;
//         return false;
//     }

// private:
//     int m_l;//长
//     int m_w;//宽
//     int m_h;//高
// };

// bool issame(cube &c1,cube &c2)//引用函数传递
// {
//     if(c1.geth()==c2.geth())
//         return true;
//     return false;
// }


// int main()
// {
//     cube c1;
//     c1.seth(10);
//     c1.setl(10);
//     c1.setw(10);
//     cube c2;
//     c2.seth(10);
//     c2.setl(10);
//     c2.setw(10);
//     cout << "c1的面积" << c1.mianji() << endl;
//     cout << "c1的体积" << c1.tiji() << endl;
//     bool ret = issame(c1,c2);
//     if(ret)
//     {
//         cout << "相等" << endl;
//     }
//     else
//         cout << "不等" << endl;
    
//     bool ret1 = c1.issamebyclass(c2);
//     if (ret1)
//     {
//         cout << "相等" << endl;
//     }
//     else
//         cout << "不等" << endl;
// }