#include<cstdio>
int main(){
	int n;scanf("%d",&n);
	for(int i=n;i>=1;i--){
		for(int j=n-i;j>=1;j--)
			putchar(' ');
		for(int j=i*2-1;j>=1;j--)
			printf("%d",i);
		putchar('\n');
	}
    return 0;
}
