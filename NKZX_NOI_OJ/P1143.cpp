#include<cstdio>
#define ll unsigned long long
ll days(ll src) {
    return src * (src + 1) / 2; 
}
ll bf(ll n) {
    ll left = 1,right = n,mid;
    while(left <= right) {
        mid = (left + right) / 2;
        ll r = days(mid);
        if(r == n) 
            return mid;
        else if(r > n)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return right;
}
int main(){
    ll n;
    while(scanf("%lld",&n) == 1 && n != 0) {
        ll x = bf(n);
        ll d = days(x);
        ll base = x * (x + 1) * (2 * x + 1) / 6;
        printf("%lld\n",base + (n - d) * (x + 1));
    }
    return 0;
}
