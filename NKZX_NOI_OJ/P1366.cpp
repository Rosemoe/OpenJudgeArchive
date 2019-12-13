#include<cstdio>
int main(){
    double c;int n;
    scanf("%lf %d",&c,&n);
    for(int i=0;i<n;i++) c*=1.001;
    printf("%.4f",c);
    return 0;
}
