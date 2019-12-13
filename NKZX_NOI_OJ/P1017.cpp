#include<cstdio>
int main(){
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("%0.5f\n%d %d\n%d %d\n%d %d",(a+b+c)/3.0,d/a,d%a,d/b,d%b,d/c,d%c);
	return 0;
}
