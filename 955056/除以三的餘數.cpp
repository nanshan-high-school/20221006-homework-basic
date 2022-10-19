#include <iostream>
using namespace std;
int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	
	if (num % 3 == 0) {
		cout << "三的倍數";
	}else if (num % 3 == 1) {
		cout << "除以三餘一";
	}else {
		cout << "除以三餘二";
	}
} 
