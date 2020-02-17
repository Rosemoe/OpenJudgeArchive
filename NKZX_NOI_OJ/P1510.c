#include<stdio.h>
int main() {
	int n,m,i,j,s,k,c,f;
	while(scanf("%d%d",&n,&m)==2) {
	f = 1;
	for(i = n;i <= m;i++) {
		c = i,s = 0;
		for(j = 0;j < 3;j++) {
			k = c % 10;
			c = c / 10;
			s = s + k * k * k;
		}
		if(s == i) {
			printf("%d ",i);
			f = 0;
		}
	}
	if(f) {
		printf("no");
	}
	putchar('\n');
	}
	return 0;
}
