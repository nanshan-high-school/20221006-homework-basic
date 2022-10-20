#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout<< "what is num1\n";
    cin>> num1;
    if (num1％3==0){
    cout << "為三的倍數";
    } else if (num1％3==1){
    cout << "除以三餘一";
    } else if (num1％3==2){
    cout << "除以三餘二";
    }
}
