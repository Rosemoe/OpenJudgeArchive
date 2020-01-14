#include<cstdio>
int main(){
    int n;double s=0,b;
    scanf("%d",&n);
    for(int i = 0;i < n;i++) {
        scanf("%lf",&b);
        s=s+b;
    }
    printf("%.2f",n==0?0:s/n);
    return 0;
}
