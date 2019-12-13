#include<cstdio>
#include<algorithm>
int v[500000];
inline int p(const char c){
    return (c>='0'&&c<='9')?(c-'0'):(c-'A'+10);
}
int main(){
    int n=0,u;
    char str[8];
    while(scanf("%s",str)==1){
        u=1;for(int i=6;i>1;i--) v[n]=v[n]+p(str[i])*u,u=u*36;n++;
    }
    std::sort(v,v+n);
    int m=200000000;
    for(int i=1;i<n;i++){
        int nv=v[i]-v[i-1];
        m=(nv<m)?nv:m;
    }
    printf("%d",m);
    return 0;
}
