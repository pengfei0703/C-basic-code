//寻找五个数中间的最大值。

#include<iostream>
using namespace std;

int main(){

    int arr[5] = {20,10,50,50,20}; //给出数组

    //寻找最大值
    int max = 0;
    int num = 0;
    for(int i = 0; i < 5; i++)
    {
        if (arr[i] >= max){
            max = arr[i];
            num++;
        }

    }


    //打印最大值
    cout <<"the max from the array is " << max  <<endl;
    cout <<"It is in the position of: " << num  << endl;
    return 0;
}