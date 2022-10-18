#include <iostream>
using namespace std;
int main() {
    cout << "請輸入一個數字:";
    int num;
    
    cin >> num;
    
    if (num % 3 == 0){
        cout << num << "除以三餘數為0";
    } else if (num % 3 == 1){
        cout << num << "除以三餘數為1";
    } else{
        cout << num << "除以三餘數為2";
    } 
}
