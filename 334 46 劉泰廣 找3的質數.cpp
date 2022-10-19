#include <iostream>
using namespace std;

int main () {
    int a;
    cout << "Enter which number you want to divide";
    cin >> a;
    if (a%3 == 1)
        cout << a << "is not divisible by 3 and will left 1";
    else if (a%3 == 2)
        cout << a << "is not divisible by 3 and will left 2";
    else
        cout << a << "is divisible by 3";
}
