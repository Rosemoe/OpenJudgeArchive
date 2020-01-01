#include<cstdio>
#define ll long long
ll g(ll t) {
    ll r = 1;
    while(t--) r = r * 10;
    return r;
}
ll modify(ll o,ll i,ll t) {
    ll u = g(i);
    ll left = o / u;
    ll right = o % (u/10);
    return left * u + t * u/10 + right;
} 
ll gen(ll i,ll j) {
    ll r = 0;
    for(int k = 0;k < i;k++) {
        r = r + j;
        j *= 10;
    }
    return r;
}
int main(){
    ll left,right,r=0;
    int max = 0;
    scanf("%lld%lld",&left,&right);
    ll copy = right;
    while(copy) {
        max++;
        copy /= 10;
    }
    for(int i = 3;i <= max;i++) {
        for(int j = 0;j <= 9;j++) {
            ll ge = gen(i,j);
            ll min = g(i - 1);
            for(int k = 0;k <= 9;k++) {
                if(k == j)
                    continue;
                for(int l = 1;l <= i;l++) {
                    if(k == 0 && l == i)
                        continue;
                    ll mo = modify(ge,l,k);
                    if(mo < min) continue;
                    if(mo >= left && mo <= right) {
                        r++;
                    }
                }
            }
        }
    }
    printf("%lld",r);
    return 0;
}
