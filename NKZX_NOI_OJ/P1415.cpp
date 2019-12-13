#include<cstdio>
int main(){
    int c = 0,n;
    scanf("%d",&n);
    while(n){
        c = c * 10 + n % 10;
        n /= 10;
    }
    printf("%d",c);
    return 0;
}
