// firstcpp.cpp 

/////////////////////////////////////////////////////////////////////////////
//// 第二章 变量就是内存-它的一生是怎样的
/////////////////////////////////////////////////////////////////////////////

/*
此代码用于测试cout，尽量简洁
*/
#include <iostream>
//命名空间输入简化
using namespace std;

int main()
{
    //输出测试cout的代码

    //std::cout << "Hello World!\n";
    //std::endl 换行并刷新缓冲
    //cout << "Hello Count" << endl;
    //cout 输出多个内容
    cout << "字符串一" << 200 << endl;;


    //定义一个int类型的变量x
    //如果不给他初始化值，那这个值不确定
    int y;
    //cout << "y = " << y << endl;
    int x{ 100 };
    cout << "变量x的值为" << x << endl;
    //通过变量前面加&符号获取变量的内存地址
    //简单的强制转换：(类型)
    cout<< "变量x的内存地址"
        << (long long) &x 
        << endl;

    int z{ 200 };
    cout << "变量z的内存地址"
        << (long long)&z << endl;
    //sizeof() 获取变量所占用内存大小
    cout<< "int x 内存大小" 
        << sizeof(x) <<"字节"
        << endl; 
    long long bigint{ 0 };
    cout << "long long bigint 内存大小"
        << sizeof(bigint)<<"字节"
        << endl;

}
