#include<cstdio> 
#include<algorithm>
struct Edge{
	int u,v,w;
} edges[40000];
int f[110];
int cmp(Edge a, Edge b) {
	return a.w < b.w;
}
int find(int x) {
	return f[x] = (f[x] == x ? x : find(f[x]));
}
int main() {
	int n,k;
	long long all = 0, ans = 0;
	scanf("%d%d", &n, &k);
	for (int i = 0;i < k;i++) {
		scanf("%d%d%d", &edges[i].u, &edges[i].v, &edges[i].w);
		all += edges[i].w;
	}
	for (int i = 1;i <= n;i++) {
		f[i] = i;
	}
	std::sort(edges, edges + k, cmp);
	int count = n;
	int i = 0;
	while (count > 1 && i < k) {
		int a = find(edges[i].u);
		int b = find(edges[i].v);
		if (a != b) {
			ans += edges[i].w;
			f[a] = b;
			count--;
		}
		i++;
	}
	printf("%lld", all - ans);
	return 0;
}
