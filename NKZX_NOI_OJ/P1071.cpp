#include<cstdio>
int main(){
    long long f[1001] = {0,2,2},n;
    scanf("%d",&n);
    for(int i = 3;i <= n;i++){
        f[i] = f[i - 1] + f[i - 2];
    }
    printf("%lld",f[n]);
    return 0;
}
