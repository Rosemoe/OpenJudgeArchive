#include<cstdio>
int main() {
	int n,k;
	long long s = 0;
	scanf("%d%d",&n,&k);
	s = n;
	while(n >= k) {
		s = s + n / k;
		n = n % k + n / k;
	}
	printf("%lld",s);
	return 0;
}
