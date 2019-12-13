#include<cstdio>
int main(){
    int n;
    scanf("%d",&n);
    printf((n%3==0&&n%5==0) ? "YES" : "NO");
    return 0;
}
