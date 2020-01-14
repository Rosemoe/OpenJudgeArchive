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
    int t,a,b,c,k;
    scanf("%d",&t);
    while(t--) {
        scanf("%d%d%d%d",&a,&b,&c,&k);
        if(c-b==b-a) {
            printf("%lld\n",(a + ((long long)(b-a)%200907 * (k-1)%200907))%200907);
        }else{
            printf("%lld\n",((long long)a%200907*rest(c/b,200907,k-1))%200907);
        }
    }
    return 0;
}
