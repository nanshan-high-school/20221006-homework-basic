#include <iostream>
using namespace std;
int main() {
	float money, people;
	cout << "Enter the total amount: ";
	cin >> money;
	cout << "Enter the number of people: ";
	cin >> people;
	
	cout << "Each person must pay " << money/people << " dollars.";
}
