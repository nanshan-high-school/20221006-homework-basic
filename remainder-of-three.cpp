#include <iostream>
using namespace std;

int main() {
    cout << "請輸入一個數字: ";
    int num0;
    cin >> num0;
    if ( num0 % 3 == 0) {
        cout << num0 << "是三的倍數";
    } else if (num0 % 3 == 1) {
        cout << num0 << "除以三餘一";
    } else {
        cout << num0 << "除以三餘二";
    }
}
