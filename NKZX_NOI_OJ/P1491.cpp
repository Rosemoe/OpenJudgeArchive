#include<cstdio>
long long rest(long long v,const int k,int time) {
    if(time == 0) return 1;
    if(time == 1) return v%k;
    long long r = rest(v,k,time>>1);
    r = r * r % k;
    if(time&1) r = (r * (v%k))%k;
    return r;
}
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%lld",rest(a,c,b));
    return 0;
}
