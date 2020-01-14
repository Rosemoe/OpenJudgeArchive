#include<cstdio>
int main(){
    int n;double a=0,b;
    scanf("%d",&n);
    while(n--){
        scanf("%lf",&b);
        if(b>1) a=a+b;
    }
    printf("%.2f",a);
    return 0;
}
