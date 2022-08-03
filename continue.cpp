//输出100以内的奇数。

#include<iostream>
using namespace std;

int main(){

    for(int i = 0; i <101 ; i++)
    {

        
        if(i % 2 == 0)
        {
          continue;
          
        }
        cout << i << endl;
        //continue用来筛选条件，执行到此行不再执行（后续所有循环内代码不再执行），执行下一个循环。 break用来退出循环。
        
    }


    return 0;
}