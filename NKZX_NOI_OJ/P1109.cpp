#include<cstdio>
int a[10][10];
int main(){
    int n;
    scanf("%d",&n);
    int t=1,b=n,u=1;
    for(int i=0;i<n/2.0;i++){
        for(int ix=t;ix<=b;ix++){
            a[ix][t]=a[ix][b]=a[t][ix]=a[b][ix]=u;
        }
        u++;t++;b--;
    }
    for(int i=1;i<=n;i++){
        for(int v=1;v<=n;v++)
            printf("%d ",a[i][v]);
        putchar('\n');
    }
    return 0;
}
