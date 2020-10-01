#include<iostream>
using std::cin;
using std::cout;
int main() {
	unsigned long long n;
	cin >> n;
	if(n < 4) {
		cout << 0;
	} else {
		n = n * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4;
		cout << n;
	}
	return 0;
}
