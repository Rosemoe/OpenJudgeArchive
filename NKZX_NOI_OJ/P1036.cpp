#include <cstdio>
long long n,k,a,ans;
int main() {
    scanf("%lld %lld",&n,&k);
    for(int i=1;i<=n;i++) {
        scanf("%lld",&a);
        ans+=a;
    }
    printf("%lld",ans+1);
    return 0;
}
