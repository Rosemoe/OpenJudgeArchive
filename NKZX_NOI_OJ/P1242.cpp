#include<cstdio>
int c=0;
void f(int a,int b){
    if((a-b)%2==0 && a-b>0){
        f((a-b)/2,b);
        f((a-b)/2+b,b);
    }else{
        c++;
    }
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    f(a,b);
    printf("%d",c);
    return 0;
}
