#include<cstdio>
int main(){
	int n,mark1,mark2,product=0,pp=0;
	scanf("%d",&n);
	for(int i =0;i < n;i++){
		scanf("%d %d",&mark1,&mark2);
		product += mark1 + mark2 - 8;
		pp+=product;
	}
	printf("%d",pp);
	return 0;
}
