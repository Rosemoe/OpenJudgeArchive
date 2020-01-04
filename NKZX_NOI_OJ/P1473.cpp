#include<cstdio>
int main(){
    int n;double s = 0,a,b;
    scanf("%d",&n);
    while(n--) {
        scanf("%lf%lf",&a,&b);
        s = s + a * b;
    }
    printf("%.2f",s);
    return 0;
}
