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
int n,k;
long long ans;
int value[30];
void search(int layer,int rest,int sum) {
	if(rest == 0) {
		if(isPrime(sum)) {
			ans++;
		}
		return;
	}
	if(layer == n) {
		return;
	}
	search(layer + 1,rest,sum);
	search(layer + 1,rest - 1,sum + value[layer]);
}
int main() {
	scanf("%d%d",&n,&k);
	for(int i = 0;i < n;i++) {
		scanf("%d",&value[i]);
	}
	search(0,k,0);
	printf("%lld",ans);
	return 0;
}
