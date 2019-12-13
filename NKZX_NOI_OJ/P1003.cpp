#include<cstdio>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    printf("%d.",n/m);
    long long rest=n % m;
    for(int i = 0;i < 100;i++){
        rest *= 10;
        printf("%d",rest/m);
        rest %= m;
    }
    return 0;
}
