#include<cstdio>
#include<cmath>
bool isPrime(const int v) {
	if(v == 1) return 0;
	if(v == 2) return 1;
	const int max = sqrt(v);
	for(int i = 2;i <= max;i++) {
		if(v % i == 0) {
			return 0;
		}
		if(i >= 3) {
			i++;
		}
	}
	return 1;
}
int max,value[20010];
bool isprime[20010];
int main() {
	int n;
	scanf("%d",&n);
	for(int i = 2;i <= n;i++) {
		if(isPrime(i)) {
			value[max++] = i;
			isprime[i] = 1;
		}
	}
	for(int i = 0;i < max;i++) {
		for(int j = i;j < max;j++) {
			if(n - value[i] - value[j] > 0 && isprime[n - value[i] - value[j]]) {
				printf("%d %d %d",value[i],value[j],n - value[i] - value[j]);
				return 0;
			}
		}
	}
	return 0;
}
