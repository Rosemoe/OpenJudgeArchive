#include<cstdio>
void a(int n){
    if(n==1) return;
    if(n%2==0){
        printf("%d/2=%d",n,n/2);
        n/=2;
    }
    else{
        printf("%d*3+1=%d",n,n*3+1);
        n=n*3+1;
    }
    putchar('\n');a(n);
}
int main(){
    int n;scanf("%d",&n);a(n);
    return 0;
}
