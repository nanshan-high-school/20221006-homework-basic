#include <iostream>
using namespace std;
int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	
	if (num % 3 == 0) {
		cout << "�T������";
	}else if (num % 3 == 1) {
		cout << "���H�T�l�@";
	}else {
		cout << "���H�T�l�G";
	}
} 
