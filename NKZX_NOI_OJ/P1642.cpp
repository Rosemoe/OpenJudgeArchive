#include<cstdio>
#include<vector>
#include<utility>
#include<map>
using namespace std;
int n,m;
vector<pair<int, int> > edge[41000];
map<int, int > anc;
long long parent[41000];
bool vis[41000];
#define ll long long
int fst(ll x) {
    return x >> 32;
}
int sec(ll x) {
    static const long long v = (~(long long)0) >> 32;
    return x & v;
}
ll make(ll a, ll b) {
    return (a << 32) | b;
}
void invoke0(int x) {
    int w = 0;
    anc[x] = 0;
    if (x == 1) {
        anc[x] = -1;
        return;
    }
    int y = x;
    while (1) {
        w += sec(parent[y]);
        anc[fst(parent[y])] = w;
        y = fst(parent[y]);
        if (y == 1) {
            return;
        }
    }
}
int getv(int v) {
    return v == -1 ? 0 : v;
}
int invoke1(int x) {
    int w = 0;
    while (1) {
        if(anc[x] != 0) {
            return getv(anc[x]) + w;
        }
        w += sec(parent[x]);
        x = fst(parent[x]);
        if (x == 1) {
            if (anc[1] != 0) {
                return getv(anc[1]) + w;
            }
            return -114514;
        }
    }
    return -114514;
}
void construct(int node, ll par) {
    if (vis[node]) {
        return;
    }
    vis[node] = 1;
    parent[node] = par;
    for (int i = 0;i < edge[node].size();i++) {
        construct(edge[node][i].first, make(par, edge[node][i].second));
    }
}
int main() {
    int t,a,b,w;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &n, &m);
        for (int i = 1;i <= n;i++) {
            edge[i].clear();
            parent[i] = vis[i] = 0;
        }
        for (int i = 1;i < n;i++) {
            scanf("%d%d%d", &a, &b, &w);
            edge[a].push_back(make_pair(b, w));
            edge[b].push_back(make_pair(a, w));
        }
        construct(1, 1);
        for (int i = 0;i < m;i++) {
            scanf("%d%d", &a, &b);
            anc.clear();
            if (a > b) {
                w = a;
                a = b;
                b = w;
            }
            invoke0(a);
            printf("%d\n", invoke1(b));
        }
    }
    return 0;
}
