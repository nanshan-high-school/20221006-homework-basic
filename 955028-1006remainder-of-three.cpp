#include <iostream>
using namespace std;

int main() {
  int num,remainder;
  cin >>num;
  remainder=num%3;   
  if(remainder==0){
    cout << num << "是三的倍數";
    }else if (remainder==1){
      cout << num << "除以三餘一";
    }else if (remainder==2){
      cout << num << "除以三餘二";
      }
  }