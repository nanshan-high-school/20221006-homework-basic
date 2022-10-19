#include <iostream>
using namespace std;

int main() {
    cout << "給我一個數字";
    int num;
    cin >> num;
    
    if (num%3 == 0) {
        cout << "這是三的倍數";
    } else if (num%3 == 1) {
        cout << "除以三餘一";
    } else {
        cout << "除以三餘二";
    }
    
}