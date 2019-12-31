#include<cstdio>
int b,p,k;
int rr(int t) {
	if(t == 1) return b;
	int sub = rr(t / 2);
	int r = (sub * sub) % k;
	if(t % 2 == 1) {
		r = (r * b) % k;
	}
	return r;
}
int main(){
	scanf("%d%d%d",&b,&p,&k);
	b = b % k;
	printf("%d",rr(p) % k);
    return 0;
}
