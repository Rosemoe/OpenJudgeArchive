#include<cstdio>
int n,data[21],pre[10];
void search(int k, long long prs, long long sum) {
    if (k == n + 1) {
        if (prs == sum) {
            printf("%lld\n", prs);
        }
        return;
    }
    for (int i = k == 1 ? 1 : 0;i <= 9;i++) {
        search(k + 1, prs * 10 + i, sum + pre[i]);
    }
}
int main() {
    scanf("%d", &n);
    for (int i = 1;i <= 9;i++) {
        pre[i] = 1;
        for (int j = 0;j < n;j++) {
            pre[i] *= i;
        }
    }
    search(1,0,0);
    return 0;
}
