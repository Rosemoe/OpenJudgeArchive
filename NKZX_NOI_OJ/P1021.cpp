#include<cstdio>
int main(){
    int a,b,c;
    scanf("%d",&a);
    b = a/1000 + a%1000/100*10 + a%100/10*100 + a%10*1000;
    c = a-b;
    printf("%d",c); 
    return 0;
}
