//三个小猪称体重，需要输入体重，然后输出最重的。

#include<iostream>
using namespace std;
//思路：1，初始变量赋值，2 屏幕输入变量具体数值，3，利用多重if进行判断（可以找出极值）。先对比两个数值后，与第三个对较。
int main(){
    int pig_1 =0, pig_2 = 0,pig_3 = 0;
    cout << "give the weight to first pig: " << endl;
    cin >> pig_1;
    
    cout << "give the weight to second pig: " <<endl;
    cin >> pig_2;
    
    cout << "give the weight to third pig: " <<endl;
    cin >> pig_3;
    cout << "the first pig weighs: " <<pig_1 << endl;
    cout << "the second pig weighs: " <<pig_2 << endl;
    cout << "the third pig weighs: " <<pig_3 << endl;

    if(pig_1 >= pig_2)
    {
        if(pig_1 >=pig_3){
            cout << "first pig wins" << endl;
        }
        else{
            cout << "third pig wins" << endl;
        }
    }
    else{
        if(pig_2 >= pig_3)
        {
            cout << "second pig wins" << endl;
        }
        else
        {
            cout << "third pig wins" << endl;
        }
    }


    return 0;

}