#include<cstdio>
#include<algorithm>
int a[10001];
int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++) 
        scanf("%d",&a[i]);
    std::sort(a+1,a+n+1);
    printf("%d",a[n/2+1]);
    return 0;
}
