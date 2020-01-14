#include<cstdio>
int main(){
	int a[10] = {},m,n;
	scanf("%d %d",&m,&n);
	for(int i = m;i <= n;i++){
		int c = i;
		while(c){
			int u = c%10;
			c /= 10;
			a[u] ++;
		}
	}
	for(int i = 0;i < 10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
