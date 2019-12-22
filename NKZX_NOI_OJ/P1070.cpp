#include<cstdio>
int main(){
    int f[1001] = {1,1},n;
    scanf("%d",&n);
    for(int i = 2;i <= n;i++){
        f[i] = f[i - 1] + 2 * f[i - 2];
        f[i] %= 12345;
    }
    printf("%d",f[n]);
    return 0;
}
