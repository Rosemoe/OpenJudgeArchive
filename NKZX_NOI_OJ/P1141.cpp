#include<cstdio>
int main(){
	int n;
	scanf("%d",&n);
	long long s = 0;
	for(int a = 1;a <= n;a++)
		for(int b = a;b <= n - a;b++){
			int c = n - a - b;
			if(c < b || c < a) break;
			if(a + b > c && b + c > a && c + a > b)
				s++;
		}
	printf("%lld",s);
    return 0;
}
