//c++从三种结构：顺序结构（按顺序结构，不跳转），选择结构（若满足某个条件，有选择的执行），循环结构（若满足某条件，循环执行某段代码）。
//假设一个场景，输入分数大于600，学生考上一本,并且在屏幕上打印。

#include<iostream>
using namespace std;

int main(){
    
    int score = 0;
    cout << "please enter your score: " << endl;
    cin >> score;
    cout << "your score is: " << score  << ". ";
    // 不可以 if(score > 600)； 否则if语句会失效。


    // if(score > 600){
    //     cout << "Congras! you got good score!" << endl;
    // }
    // //可以没有else，如果if不满足，则执行else{}里面内容
    // else{
    //     cout << "your score is not good!" << endl;
    // }
    // 
    
    //多重if，if(){}--else if(){}...--else{}.
    if(score >=600)
    {  //可使用嵌套if语句，达到更加精细的分类。
        
        if(score >= 700)
        {
            cout<< "you got S" << endl;
        }
        else if(score >= 650)
        {
            cout << "you got A+" << endl;
        }
        else
        {
            cout << "Congras! you got A" << endl;
        }
    }
    else if (score >= 500)
    { //如果不添加else，会出现与上述重合的情况。
        cout << "Congras! you got B" << endl;
    }
    else if (score >= 400)
    {
        cout << "Congras! you got c" << endl;
    }
    else 
    {
        cout << "you failed" << endl;
    }
    return 0;

}

//cin doesn't work . how to solve? 
// Make sure you have code runner installed on your VS code.

// From top select: File > Preferences > Settings

// Search for code runner in settings and check the box:

// code runner: Run in Terminal : whether to run code in integrated terminal.(enable)