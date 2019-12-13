#include<cstdio>
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",gcd(m,n));
    return 0;
}
