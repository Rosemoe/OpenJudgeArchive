#include<cstdio>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    a = a > b ? a : b;
    a = a > c ? a : c;
    printf("%d",a);
    return 0;
}
