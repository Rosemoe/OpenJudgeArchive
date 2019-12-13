#include<cstdio>
int main(){
    int a,b,c;
    scanf("%d%d",&a,&b);
    if(a>b){
        c=a;a=b;b=c;
    }
    printf("%d %d",a,b);
    return 0;
}
