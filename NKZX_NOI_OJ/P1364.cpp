#include<cstdio>
int main(){
    int n,a=0;
    scanf("%d",&n);
    while(n){
        a+=n%10;
        n/=10;
    }
    printf("%d",a);
    return 0;
}
