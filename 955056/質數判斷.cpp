#include <iostream>
using namespace std;
int main() {
	int num, divisor = 2, flag = 1;
	cout << "Enter a number: ";
	cin >> num;
	
	while ((2 <= num/2) && (flag == 1)) {
		if (num % divisor == 0) {
			flag = 0;
		}
		divisor = divisor + 1;
	}
	
	if (flag == 1) {
		cout << num << " is a prime number.";
	}else {
		cout << num << " is not a prime number.";
	}
}
