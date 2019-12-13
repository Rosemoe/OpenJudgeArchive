#include<cstdio>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    a = (int)(a*0.2 + b*0.3 + c*0.5); 
    printf("%d",a); 
    return 0;
}
