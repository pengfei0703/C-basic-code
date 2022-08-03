#include<iostream>
using namespace std;

int main(){
    int num = 0;
    do{
        cout << num << endl;
        num++;
    }
    while(num < 10); //需要添加 ；
   

    //dowhile and while 的区别：dowhile 先执行循环语句，再执行循环条件。while先执行循环条件，再执行循环语句。
    do{
        cout << num << endl;
        num++;
    }
    while(num); // while(num) ，num>=1为真， num = 0为假。此时会一直循环

    while(num){ //while（0）为假，不执行后续语句。
        cout << num << endl;
        num++;
    }

    return 0;
}