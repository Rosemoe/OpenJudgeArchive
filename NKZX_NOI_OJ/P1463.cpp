#include<cstdio>
int m[1001],n;
int main(){
    scanf("%d",&n);
    for(int i = 1;i < n;i++){
        scanf("%d%*d",&m[0]);
        m[m[0]]++;
    }
    for(int i = 1;i <= n;i++)
        printf("%d ",m[i]);
    return 0;
}
