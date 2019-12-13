#include<cstdio>
int main(){
    int a,b,c,d;
    scanf("%d",&a);
    b = a/1000 + a%1000/100*10 + a%100/10*100 + a%10*1000;
    c = a%100*100 + a/100;
    d = a/1000 + a%1000/100 + a%100/10 + a%10;
    printf("%d %d %d",b,c,d); 
    return 0;
}
