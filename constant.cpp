//不可以用C++ 关键词作变量

#include <iostream>
using namespace std;

#define day 7   //定义宏常量 #define ,定义在main函数前面，用于整个函数。

// int main()
// {
//     // cout << "hello world!" << endl;
//    cout << "one week has " << day << " days" << endl;
//    const int month = 12; //const修饰常量  = 定义常量   
//    cout << "one year has " << month << " months" << endl;//enl可以用什么代替？（看"转义字符.cpp" \n）
//   // int 1abc = 20; leteral operator 文字运算符（标识符）不正确，由数字，下划线，字母组成，但首字母不能是数字。且区分大小写。
//   //cout << 1abc << endl;
//    short num = 32770;  //short型能存储from -32768 to +32767 。超过部分按照减法运算。如何运算？
//    cout << "num = " << num << endl;
//    return 0;
// }
 
//  //字节的具体含义是什么？

//sizeof() 用于知道变量占用空间大小
int main(){
       short num1 = 10;
       cout << "short 占用内存空间为： " << sizeof(num1) << endl;
       return 0;
}