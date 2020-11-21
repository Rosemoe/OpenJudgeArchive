#include<cstdio>
#include<algorithm>
int read() {
	char c = getchar();
	while (c < '0' || c > '9') c= getchar();
	int value = 0;
	while (c >= '0' && c <= '9') value = (value << 3) + (value << 1) + (c - '0'), c = getchar();
	return value;
}
struct Edge{
	int w,x,y;
} e[10100];
int fa[1200];
int cmp(Edge a, Edge b) {
	return a.w < b.w;
}
int find(int x) {
	return fa[x] = fa[x] == x ? x : find(fa[x]);
}
int main() {
	int n = read(),m = read(), k = read();
	for (int i = 0;i < m;i++) {
		e[i].x = read(),e[i].y = read(),e[i].w = read();
	}
	for (int i = 1;i <= n;i++) {
		fa[i] = i;
	}
	std::sort(e, e + m, cmp);
	int cnt = n;
	int p = 0;
	long long ans = 0;
	while (cnt >  k && p < m) {
		int a = find(e[p].x),b = find(e[p].y);
		if (a != b) {
			fa[a] = b;
			cnt--;
			ans += e[p].w;
		}
		p++;
	}
	if (cnt == k) {
		printf("%lld\n", ans);
	} else {
		puts("No Answer");
	}
	return 0;
}
