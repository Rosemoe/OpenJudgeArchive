#include<cstdio>
int main(){
    int a,b;
    scanf("%d",&a);
    a = a*10;
    b = (int)(a/0.45);
    double left = a - 0.45*b;
    printf("buy=%d left=%0.2f",b,left); 
    return 0;
}
