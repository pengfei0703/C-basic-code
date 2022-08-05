//while(循环条件){循环语句}
//输出0-9到屏幕

#include<iostream>
using namespace std;

int main(){
    
    int num = 0;
    while(num < 10) //需要有一个跳出循环的条件。不能出现死循环，比如1
    {
        cout << num << endl;
        num++;
        
    }
    return 0;
}
 