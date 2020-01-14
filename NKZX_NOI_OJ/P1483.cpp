#include<cstdio>
int main(){
    int n=5;double a=0,b;
    while(n--){
        scanf("%lf",&b);
        a=a+b;
    }
    printf("%.2f",a);
    return 0;
}
