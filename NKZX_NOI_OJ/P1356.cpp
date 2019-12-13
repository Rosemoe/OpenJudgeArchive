#include<cstdio>
int main(){
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=a-c/b;
    if(c%b) d--;
    if(d<0) d=0;
    printf("%d",d);
    return 0;
}
