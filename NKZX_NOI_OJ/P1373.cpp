#include<cstdio>
int main(){
    int n,a,b,c,d,e,f;d=e=f=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&a,&b,&c);
        d+=a,e+=b,f+=c;
    }
    printf("%d %d %d %d",d,e,f,d+e+f);
    return 0;
}
