#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <queue>
#define maxx 1000
using namespace std;
struct node {
    int from, to, w;
} e[maxx * 100];
int n, m, u, v, c, fa[maxx * 100];
int ans = 0, tot = 0, res = -1000;
inline long long read() {
    long long x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') {
        x = (x << 1) + (x << 3) + (ch ^ 48);
        ch = getchar();
    }
    return x * f;
}
bool cmp(node a, node b) { return a.w < b.w; }
int get(int x) {
    if (fa[x] == x)
        return x;
    return fa[x] = get(fa[x]);
}
void kruskal() {
    for (register int i = 1; i <= m; i++) {
        int u = get(e[i].from);
        int v = get(e[i].to);
        if (u == v)
            continue;
        ans += 1;
        fa[u] = v;
        tot++;
        res = max(res, e[i].w);
        if (tot == n - 1)
            break;
    }
}
int main() {
    n = read(), m = read();
    for (register int i = 1; i <= n; i++) {
        fa[i] = i;
    }
    for (register int i = 1; i <= m; i++) {
        e[i].from = read();
        e[i].to = read();
        e[i].w = read();
    }
    sort(e + 1, e + 1 + m, cmp);
    kruskal();
    cout << ans << " " << res << endl;
    return 0;
}
