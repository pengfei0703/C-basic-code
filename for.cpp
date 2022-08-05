//for(起始表达式；条件表达所；末尾循环句)
//数字打印到屏幕 0-9.
#include<iostream>
using namespace std;

int main(){

    // for(int i = 0; i< 10; i++)
    // {

    //     cout << i << endl;
    // }

    int i = 0;

    for(;;)
    {

        if ( i >= 10){
            break;
        }
     
        i++;
        cout << i << endl;
    }

    return 0;
}