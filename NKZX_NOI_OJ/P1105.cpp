#include<cstdio>
int c[1001];
int f(int v1){
	int v2=v1/2,r;
	if(c[v1]!=0)
		return c[v1];
	r=v2;
	for(int i=1;i<=v2;i++)
		r+=f(i);
	c[v1]=r;
	return r;
}
int main(){
	int v0;
	scanf("%d",&v0);
	printf("%d",f(v0)+1);
	return 0;
}
