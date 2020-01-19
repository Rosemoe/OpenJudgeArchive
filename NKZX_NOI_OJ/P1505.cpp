#include<cstdio>
#include<cctype>
int main() {
	int n,m,t;
	char c;
	scanf("%d %d %c %d",&n,&m,&c,&t);
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++)
			if(t) putchar(c);
			else if(i == 0 || i + 1 == n) putchar(c);
			else if(j == 0 || j + 1 == m) putchar(c);
			else putchar(' ');
		putchar('\n');
	}
    return 0;
}
