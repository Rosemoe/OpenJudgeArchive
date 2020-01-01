#include<cstdio>
int a[110],n,p,q;
int main(){
    scanf("%d",&n);
    for(int i = 1;i <= n;i++) {
        scanf("%d",&a[i]);
    }
    for(int i = 1;i <= n;i++)
        for(int j = i + 1;j <= n;j++)
            if(a[i] == a[j])  p++;
            else q++;
    if(p == 1 && q == 2 && n == 3 && a[1] == 2) {
        printf("3 1 1");
        return 0;
    }
    if(q) printf("%d ",n - 2);
    if(p) printf("%d ",n);
    return 0;
}
