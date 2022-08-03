#include<iostream>
using namespace std;

int main(){
    //用于switch。
    cout << "Enter your game level: ";
    cout << "1, easy; 2, medium; 3, hard" << endl;

    int value = 0;
    
    while(1){
           cin >> value;
    
    switch (value)
    {
    case 1:
        cout << "you  are in the easy level." << endl;
        break; //退出内循环，switch 看作是某种循环。
        
    case 2:
        cout << "you  are in the medium level." << endl;
        break;
        
     case 3:
        cout << "you  are in the hard  level." << endl;
        break;
    
    default:
        cout << "Only numbers 1,2,3 are avaliable. Please enter again. " << endl;
        
    }
    

    // if (value == 1){
    //     cout << "you  are in the easy level." << endl;
    //     break;
    // }
    // else if (value == 2){
    //     cout << "you  are in the easy level." << endl;
    //     break;
    // }
    // else if (value == 3){
    //     cout << "you  are in the easy level." << endl;
    //     break;
    // }
    // else {
    //     cout << "Only numbers 1,2,3 are avaliable. Please enter again. " << endl;
    // }
    // }
    }
    return 0;
}