#include<cstdio> 
int f[1100];
int find(int x) {
	return f[x] = (f[x] == x ? x : find(f[x]));
}
int main() {
	int n,m,a,b,p,q;
	while (scanf("%d%d", &n, &m) == 2) {
		for (int i = 1;i <= n;i++) {
			f[i] = i;
		}
		int cnt = n;
		for (int i = 0;i < m;i++) {
			scanf("%d%d", &a, &b);
			p = find(a),q = find(b);
			if (p != q) {
				cnt--;
				f[p] = q;
			}
		}
		printf("%d\n", cnt - 1);
	}
	return 0;
}
