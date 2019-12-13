#include <cstdio>
int main() {
    double d;
    int t;
    scanf("%lf %d",&d,&t);
    if(t == 1){
        printf("%g(t)=%.2f(kg)",d,d*1000);
    }else{
        printf("%g(t)=%.2f(g)",d,d*1000000);
    }
    return 0;
}
