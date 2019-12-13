#include<cstdio>
int main(){
    long long pre = 1,sum = 0;
    int n;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        pre *= i;
        sum += pre;
    }
    printf("%lld",sum);
    return 0;
}
