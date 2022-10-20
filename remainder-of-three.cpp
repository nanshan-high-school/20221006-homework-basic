#include <iostream>
using namespace std;

int main () {
    int a;
    cout << "打出你想被3除得數字";
    cin >> a;
    if (a%3==1)
        cout << "這個數字被3除於1";
    else if (a%3==2)
        cout << "這個數字被3除於2";
    else if (a%3==0)
        cout << "這個數字可以被3整除";    
}
