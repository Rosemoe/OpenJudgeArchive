#include<cstdio>
#include<cstring>
int g[120][120], d[120];
bool v[120];
inline int min(int a, int b) {
    return a > b ? b : a;
}
int read() {
    int v = 0;
    char ch = getchar();
    while (ch < '0' || ch > '9') ch = getchar();
    while (ch >= '0' && ch <= '9') v = v * 10 + (ch - '0'), ch = getchar();
    return v;
}
int main() {
    int n, m, x, y, w;
    while (scanf("%d%d", &n, &m) == 2 && n != 0) {
        memset(g, 0x3f, sizeof g);
        memset(d, 0x3f, sizeof d);
        memset(v, 0, sizeof v);
        for (int i = 0;i <= n;i++) {
            g[i][i] = 0;
        }
        for (int i = 0; i < m; i++) {
            x = read(), y = read(), w = read();
            g[x][y] = g[y][x] = min(g[x][y], w);
        }
        d[1] = 0;
        for (int i = 1; i < n; i++) {
            int x = 0;
            for (int j = 1; j <= n; j++) {
                if (!v[j] && (x == 0 || d[j] < d[x])) {
                    x = j;
                }
            }
            v[x] = 1;
            for (int j = 1; j <= n; j++) {
                d[j] = min(d[j], d[x] + g[x][j]);
            }
        }
        printf("%d\n", d[n]);
    }
    return 0;
}
