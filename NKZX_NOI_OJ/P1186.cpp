#include<cstdio>
int f(int n,int m){
    return (n%m==0)?m:f(m,n%m);
}
int main(){
    int n,m,r;
    scanf("%d%d",&n,&m);
    printf("%d",f(n,m));
    return 0;
}
