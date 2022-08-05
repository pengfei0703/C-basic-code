//给电影打分例子。 10-9：A；8-7：B 。6-5： c。 其他 bad
#include<iostream>
using namespace std;

int main(){

    cout << "Please value this film(the value should be integer between 1 and 10)" << endl;

    int score =0;
    cin >> score;
    cout << "you value this film: " << score << endl;

    switch(score)
    {
    case 10:
       cout << "you value this film as A. " << endl;
       break; //如果不添加break，会继续执行下面语句。这是为什么呢？
    case 9:
       cout << "you value this film as A. " << endl;
       break;
    case 8:
       cout << "you value this film as B. " << endl;
       break;
    case 7:
       cout << "you value this film as A. " << endl;
       break;
    case 6:
       cout << "you value this film as C. " << endl;
       break;
    case 5:
       cout << "you value this film as C. " << endl;
       break;
    default:
       cout << "you don't like this film." << endl;
       break;

    }

    return 0;
}
//if and switch 对比：
//switch 缺点：判断时候只能是整型或者字符型，不可以是区间。 优点：结构清晰，执行效率高。