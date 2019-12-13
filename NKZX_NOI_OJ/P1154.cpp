#include<cstdio>
int pow(int ori,int t){
    int v=1;for(int i=0;i<t;i++) v*=ori;
    return v;
}
int main(){
    int n,x,a[11];
    scanf("%d%d",&n,&x);
    for(int i=0;i<n+1;i++) scanf("%d",&a[i]);
    int v=0;
    for(int i=0;i<=n;i++) v += a[n-i] * pow(x,n-i);
    printf("%d",v);
    return 0;
}
