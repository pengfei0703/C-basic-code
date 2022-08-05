//goto 标记；  如果标记存在，跳转到标记的位置。

#include<iostream>
using namespace std;

int main(){

    cout << "1" << endl;
    cout << "2" << endl;

    goto FLAG; //一般用大写字母作标记。

    cout << "3" << endl;
    cout << "4" << endl;

    FLAG:  //后面是冒号。

    cout << "5" << endl;

    return 0;
}