#include<cstdio>
int n;
int count;
int ans[9000][10];
int state[10];
inline void write(const int ch) {
	putchar('0' + ch);
	putchar(' ');
}
void dfs(int layer,int rest) {
	if(layer == 10) {
		if(rest != 0) {
			return;
		}
		for(int i = 0;i < 10;i++) {
			ans[count][i] = state[i];
		}
		count++;
		return;
	}
	for(int i = 1;i <= 3;i++) {
		if(rest - i >= 0) {
			state[layer] = i;
			dfs(layer + 1,rest - i);
		}else{
			break;
		}
	}
}
int main() {
	scanf("%d",&n);
	if(n > 30 || n < 10) {
		puts("0");
		return 0;
	}
	dfs(0,n);
	printf("%d\n",count);
	for(int i = 0;i < count;i++) {
		for(int j = 0;j < 10;j++) {
			write(ans[i][j]);
		}
		putchar('\n');
	}
	return 0;
}
