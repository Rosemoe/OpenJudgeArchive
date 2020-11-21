#include<cstdio>
#include<algorithm>
using namespace std;
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
struct Edge {
    int x,y,w;
} e[6500];
int fa[6500],wei[6500];
int cmp(Edge a, Edge b) {
    return a.w < b.w;
}
int find(int x) {
    return fa[x] = (fa[x] == x ? x : find(fa[x]));
}
int main() {
    int t = read();
    while (t--) {
        int n = read();
        for (int i = 1;i < n;i++) {
            fa[i] = i;
            e[i].x = read(), e[i].y = read(), e[i].w = read();
            wei[i] = 1;
        }
        fa[n] = n;
        wei[n] = 1;
        sort(e + 1, e + n, cmp);
        int cnt = 1;
        #define ll long long
        ll sum = 0;
        for (int i = 1;i < n && cnt < n;i++) {
            int x = find(e[i].x), y = find(e[i].y);
            if (x != y) {
                fa[x] = y;
                sum += (wei[x] * wei[y] - 1) * (e[i].w + 1);
                wei[y] += wei[x];
                cnt++;
            }
        }
        printf("%lld\n", sum);
    }
    return 0;
}
