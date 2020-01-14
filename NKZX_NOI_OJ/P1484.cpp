#include<cstdio>
int main(){
    int n=8;double a=0,b;
    while(n--){
        scanf("%lf",&b);
        a=a+b;
    }
    printf("%.2f",a/8);
    return 0;
}
