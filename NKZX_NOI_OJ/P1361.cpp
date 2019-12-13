#include<cstdio>
int main(){
    long long s=0;
    int c;
    scanf("%d",&c);
    for(int i=1;i<=c;i++){
        s = s + i;
    }
    printf("%lld",s);
    return 0;
}
