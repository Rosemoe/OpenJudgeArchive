#include<cstdio>
#include<iostream>
using namespace std;
#define ull unsigned long long
ull read() {
	ull v = 0;
	char ch = getchar();
	while (ch < '0' || ch > '9') {
		ch = getchar(); 
	} 
	while (ch >= '0' && ch <= '9') {
		v = (v << 3) + (v << 1) + (ch ^ 48);
		ch = getchar();
	}
	return v;
}
bool rst[100];
int main() {
	int n = read(),m = read(),c = read(),k = read();
	int bad = 0;
	ull usedBits = 0;
	const ull ONE = 1;
	for (int i = 0;i < n;i++) {
		usedBits |= read();
	}
	int p,q;
	for (int i = 0;i < m;i++) {
		p = read();q = read();
		if (p >= 0 && p < k && (usedBits & (ONE << p)) == 0) {
			if (rst[p] == 0) {
				rst[p] = 1;
				bad ++;
			}
		}
	}
	int shift = k - bad;
	if (shift == 64 && n == 0) {
		cout << "18446744073709551616" << endl;
		return 0;
	}
	if (shift == 0) {
		cout << 0 << endl;
	} else {
		ull x = ONE << (shift - 1);
		cout << (x - n + x) << endl;
	}
	return 0;
}
