#include<cstdio>
int main() {
	int n,p,k;
	scanf("%d%d%d",&n,&p,&k);
	printf("%d",(int)(((unsigned long long)p*k)%n));
	return 0;
}
