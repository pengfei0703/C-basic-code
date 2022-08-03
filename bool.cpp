#include<iostream>
using namespace std;

int main (){
    bool flag = true;
    cout << flag << endl;//定义bool函数，true = 1；false = 0.

    flag = false;
    cout << flag << endl;

    cout << "the size of the bool function is: " << sizeof(flag) << endl;

    return 0;
}