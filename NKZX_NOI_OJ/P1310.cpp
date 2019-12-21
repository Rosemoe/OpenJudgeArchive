#include<cstdio>
int main(){
	int n,m,t=0,y;
	scanf("%d%d",&n,&m);
	while(n>=m){
		y=n%m;
		t+=n-y;
		n=n/m+y;
	}
	t+=n; 
	if(m-n==1) t++;
	printf("%d",t);
	return 0;
}
