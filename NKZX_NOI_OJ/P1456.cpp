#include<cstdio>
int main(){
    double n;
    scanf("%lf",&n);
    if(n <= 0){
        puts("0.00");
        return 0;
    }
    if(n <= 10){
        printf("%.2f",n * 2.5);
    }else{
        printf("%.2f",10 * 2.5 + (n - 10) * 1.5);
    }
    return 0;
}
