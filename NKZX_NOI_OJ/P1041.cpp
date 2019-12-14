#include<cstdio>
int main(){
    int k,n;
    long long p = 1,s = 0;
    scanf("%d%d",&k,&n);
    while(n){
    	if(n >> 1 << 1 != n){
    		s = s + p;
		}
		n >>= 1;
    	p = p * k;
	}
	printf("%lld",s);
    return 0;
}
