//对于数组，初始化长度n， a[n]. 寻找时候是a[0]a[1]...a[n-1].

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10}; //通过数组名获取占用内存大小
    cout << arr << endl; //arr是一个地址。
    //cout << &arr << endl;
    cout << "This array occupies space of " <<  sizeof(arr) <<endl;
    cout << "Each letter of this array occupies space of " <<  sizeof(arr[0]) <<endl;
    cout << "Number of this array is: " << sizeof(arr) /sizeof (arr[0]) << endl;
    

    // 获取数组位置。
    cout << "Address of this array is: " << &arr << endl;
    cout << "Address of first letter of this array is: " << &arr[0] << endl; //添加&获取某个元素地址。
    cout << "Address of second letter of this array is: " << &arr[1] << endl;

    return 0;
}

//44--46未阅读。  