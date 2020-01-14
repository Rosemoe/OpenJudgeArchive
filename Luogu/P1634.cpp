#include<cstdio>
int main(){
	int x,n;
	long long count = 1;
	scanf("%d %d",&x,&n);
	for(int i=0;i<n;i++)
		count += count * x;
	printf("%lld",count);
	return 0;
}
