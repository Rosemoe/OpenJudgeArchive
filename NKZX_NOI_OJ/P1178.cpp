#include<cstdio>
#include<cmath>
double length(int x1,int y1,int x2,int y2){
    double p=pow(x2-x1,2)+pow(y2-y1,2);
    return sqrt(p);
}
int main(){
    int a,b,c,d,e,f;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    double l1=length(a,b,c,d),l2=length(a,b,e,f),l3=length(c,d,e,f);
    double p=(l1+l2+l3)/2;
    double r=sqrt(p*(p-l1)*(p-l2)*(p-l3));
    printf("%0.2f",r);
    return 0;
}
