#include<cstdio>
long long p(int x){
    long long v=1;for(int i=1;i<=x;i++) v*=i;
    return v;
}
int main(){
    int v0,v1;
    scanf("%d%d",&v0,&v1);
    long long r=p(v0)/(p(v1)*p(v0-v1));
    printf("%lld",r);
    return 0;
}
