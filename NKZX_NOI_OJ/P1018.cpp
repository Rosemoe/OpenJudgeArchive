#include<cstdio>
int main(){
	long a;
	scanf("%ld",&a);
	printf("%ld %ld %ld",a/3600,a/60%60,a%60);
	return 0;
}
