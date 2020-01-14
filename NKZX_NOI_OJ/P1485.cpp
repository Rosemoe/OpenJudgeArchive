#include<cstdio>
int main(){
    int n;double a=0,b;
    scanf("%d",&n);
    n*=2;
    while(n--){
        scanf("%lf",&b);
        a=a+b;
    }
    printf("%.2f",a*2);
    return 0;
}
