 #include<cstdio>
#define isdigit(x) (ch >= '0' && ch <= '9')
int read() {
	int x=0,f=1;char ch=getchar();
	while (!isdigit(ch)){if (ch=='-') f=-1;ch=getchar();}
	while (isdigit(ch)){x=(x<<3)+(x<<1)+(ch^48);ch=getchar();}
	return x*f;
}
int a[101000];
int log2[101000];
int f[101000][32];
int n, m;
void makeLogTable() {
	int res = 0;
	int nextTarget = 2;
	for (int i = 1;i <= n;i++) {
		if (i == nextTarget) {
			res ++;
			nextTarget <<= 1;
		}
		log2[i] = res;
	}
}
inline int max(int x, int y) {
	return x > y ? x : y;
}
void makeStTable() {
	for (int i = 1;i <= n;i++) {
		f[i][0] = a[i];
	}
	int t = log2[n] + 1;
	for (int i = 1;i < t;i++) {
		for (int j = 1;j <= n - (1 << i) + 1;j++) {
			f[j][i] = max(f[j][i - 1], f[j + (1 << (i - 1))][i - 1]);
		}
	}
}
int main() {
	n = read(),m = read();
	for (int i = 1;i <= n;i++) {
		a[i] = read();
	}
	makeLogTable();
	makeStTable();
	int l, r;
	for (int i = 0;i < m;i++) {
		l = read(), r = read();
		int k = log2[r - l + 1];
		printf("%d\n", max(f[l][k], f[r - (1 << k) + 1][k]));
	}
	return 0;
} 
