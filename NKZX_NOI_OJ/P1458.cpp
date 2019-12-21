#include<cstdio>
int main(){
    double r;
    scanf("%lf",&r);
    if(r < 0)
        puts("wrong data!");
    else
        printf("%.2f",3.14 * r * r);
    return 0;
}
