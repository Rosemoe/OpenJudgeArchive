#include<cstdio>
#define INF 99999999
#define min(a,b) (a<b?a:b)
int a[10005][3],n;
int main() {
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        scanf("%d",&a[i][0]);
    }
    a[1][1] = 0;
    a[1][2] = a[1][0];
    for(int i = 2;i <= n;i++){
        a[i][1] = min(a[i-1][2],a[i-2][2]);
        a[i][2] = min(a[i-1][1] + a[i][0],a[i-2][1] + a[i-1][0] + a[i][0]);
    }
    printf("%d",min(a[n][1],a[n][2]));
    return 0;
}
