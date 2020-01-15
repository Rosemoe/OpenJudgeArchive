#include<cstdio>
int main(){
	for(int i=1;i<=9;i++){
		for(int j=i;j>=1;j--)
			printf("  %d*%d=%2d",i,j,i*j);
		putchar('\n');
	}
    return 0;
}
