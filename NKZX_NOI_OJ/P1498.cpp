#include<cstdio>
int main(){
	int n,c=0;scanf("%d",&n);
	while(n){c=c*10+n%10;n=n/10;}
	printf("%d",c);
    return 0;
}
