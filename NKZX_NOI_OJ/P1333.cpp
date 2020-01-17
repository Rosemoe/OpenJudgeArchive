#include<cstdio>
#include<cstring>
#define ll long long
char v[1100];
int main(){
    ll n,r=0;
    scanf("%lld %s",&n,v);
    for(int i = 0;i < strlen(v);i++){
        r = r * 10 + (v[i] - '0');
        r = r % n;
    }
    printf("%lld",r!=0?r:n);
    return 0;
}
