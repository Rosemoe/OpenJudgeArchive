#include<cstdio>
int main(){
    int a,b,c,n=0;
    scanf("%d%d%d",&a,&b,&c);
    double d=b,e=a/100.0+1;
    while(d<c){
        d*=e;
        n++;
    }
    printf("%d",n);
    return 0;
}
