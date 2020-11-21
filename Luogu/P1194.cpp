#include<cstdio>
#include<algorithm>
struct Edge{
	int u,v,w;
} e[500 * 500 / 2];
int fa[600];
int find(int x) {
	return fa[x] = (fa[x] == x ? x : find(fa[x]));
}
int cmp(Edge a, Edge b) {
	return a.w < b.w;
}
int read() {
	char ch = getchar();
	int v = 0;
	while (ch < '0' || ch > '9') {
		ch = getchar();
	}
	while (ch >= '0' && ch <= '9') {
		v = (v << 3) + (v << 1) + (ch ^ 48);
		ch = getchar();
	}
	return v;
}
int main() {
	int a = read(), n = read(), c, ecnt = 0;
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= n;j++) {
			c = read();
			if (j > i && c != 0) {
				e[ecnt].u = i;
				e[ecnt].v = j;
				e[ecnt].w = c;
				ecnt++;
			}
		}
	}
	std::sort(e, e + ecnt, cmp);
	for (int i = 1;i <= n;i++) {
		fa[i] = i;
	}
	int cnt = n, cost = 0;
	for (int i = 0;i < ecnt;i++) {
		int x = find(e[i].u), y = find(e[i].v);
		if (x != y && e[i].w < a) {
			fa[x] = y;
			cnt--;
			cost += e[i].w;
		}
	}
	printf("%d\n", cnt * a + cost);
	return 0;
}
