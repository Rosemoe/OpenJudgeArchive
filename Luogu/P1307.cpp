#include<iostream>
using namespace std;
int main() {
	int n,v = 0,neg;
	cin >> n;
	neg = n < 0;
	if(neg) {
		n = - n;
	}
	while(n > 0) {
		v  = v * 10 + n % 10;
		n /= 10;
	}
	cout << (neg ? -v : v);
	return 0;
}
