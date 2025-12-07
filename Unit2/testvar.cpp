// testvar.cpp 

/////////////////////////////////////////////////////////////////////////////
//// 第二章 变量就是内存-它的一生是怎样的
/////////////////////////////////////////////////////////////////////////////


#include <iostream>
using namespace std;
//全局变量
//作用域 ，在不做声明的情况下
//在本文都可访问
//生命周期 在进入main函数前申请空间
//main函数执行结束后释放空间
int gx{ 0 };

int main()
{
    //类型 变量名{初始化值};
    //整数int 字面量
    cout << 123 << -123 << endl;
    //long long 类型字面量
    cout << 123LL << endl;
    cout <<"sizeof(123LL)="
        << sizeof(123LL) << endl;
    cout << "sizeof(123)=" 
        << sizeof(123) << endl;

    //浮点类型的字面量
    float f1{ 1.3f };
    cout << "f1 = " << f1 << endl;
    f1 = 1.f;
    f1 = 2.0f;
    f1 = 3.3; //将doube类型的字面量赋值
              //给float，会损失精度
    double d1{ 1.4 };
    1.5;

    //运算符支持字面量
    int x{ 1 + 2 };
    cout << "x = " << x << endl;
    int y{ 3 };
    int z{ x + y };
    z = x + y + 1;
    z = x * y + 10;
    cout << "z = " << z << endl;

    //自增 自减
    z += 10; // z = z + 10;
    z -= 5;
    z *= 4;
    z /= 2;
    z++; // z = z + 1
    z--;
    ++z;
    --z;
    cout << "z = " << z << endl;

    //除法运算的特殊性
    int u{ 0 };
    u = 10 / 2;
    cout << "u = " << u << endl;
    //u = 10 / 0; //一些编译器直接报错
    int t{ 0 };
    //u = 10 / t;//运行程序出错
    //浮点数转整数小数位被直接扔掉
    //不会四舍五入
    u = 1.1;
    cout << "1.1 u = " << u << endl;
    u = 1.9;
    cout << "1.9 u = " << u << endl;
    u = 2 / 3;
    cout << "2 / 3 u =" << u << endl;
    int x1{ 1 };
    int x2{ 2 };
    float f2{ 0 };
    //整数向除会丢弃小数位
    //想要保留，要保证其中一个数是浮点
    f2 = x1 / x2;
    cout << "f2 = " << f2 << endl;
    cout << "1/2 = " << 1 / 2 << endl;
    cout << "1/2. = " << 1 / 2. << endl;
    f2 = x1 / (float)x2;
    cout << "f2 = " << f2 << endl;
    f2 = (float)(x1 / x2); //无效
    cout << "f2 = " << f2 << endl;
    std::cout << "Test Ver!\n";

    //访问全局变量
    cout << "gx = " << gx << endl;
    //局部变量
    //作用域 在变量定义所属的{}内部
    //从变量定义开始到}结束
    int px{ 0 };
    //int x{ 0 };
    {
        //一段代码块，一个作用域
        //可以访问父作用域变量
        int py{ 0 };
        int x{ 0 };
        cout << "py = " << py << endl;
        cout << "px = " << px << endl;
        cout << "gx = " << gx << endl;
        cout << "x = " << x << endl;
    }
    //cout << "py = " << py << endl;

    //运行时常量
    const int cx{ 100 };
    //cx = 200; //修改编译报错
    cout << "cx = " << cx << endl;
    int t1 = 10;
    const int cx2{ t1 + 10 };
    cout << "cx2 = " << cx2 << endl;


    //编译时常量
    constexpr int cex{ 300 };
    cout << "cex = " << cex << endl;
    
    //无法用变量初始化编译时常量
    //constexpr int cex2{ t1 * 10 };
    {
        auto a1 = 10;
        auto d1 = 9.;
        auto f1 = 8.f;
        auto acex = cex; //auto 推导常量是会变为普通变量
        constexpr auto c1 = cex;
        const auto c2 = a1;
        auto a3{ 11.3 };
        auto a4 = 14LL;
        auto a5 = (int)d1;
    }
    

}
