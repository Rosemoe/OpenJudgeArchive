#include<cstdio>
int main(){
    double a,b;
    scanf("%lf%lf",&a,&b);
    if(a <= 0 || b <= 0 || a+b == 0 || a*b==0) return 0;
    printf("%.2f %.2f",(a+b)*2,a*b);
    return 0;
}
