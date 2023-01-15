#include<cstdio>
#include<cstring>
int n;
bool u[10];
int p[10];
void dfs(int depth) {
    if (depth == n) {
        for (int i = 0;i < n;i++) {
            printf("%5d", p[i]);
        }
        putchar('\n');
        return;
    }
    for (int i = 1;i <= n;i++) {
        if (u[i]) {
            continue;
        }
        u[i] = 1;
        p[depth] = i;
        dfs(depth + 1);
        u[i] = 0;
    }
}
int main(){
    scanf("%d", &n);
    dfs(0);
    return 0;
}
