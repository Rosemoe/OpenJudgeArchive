#include<cstdio>
int main(){
	int a[101],n=0;
	for(;n==0||a[n-1]!=0;n++)
		scanf("%d",&a[n]);
	for(int i=n-2;i>-1;i--)
		printf("%d ",a[i]);
	return 0;
} 
