#include<cstdio>
int a[10][10];
int main(){
    int n,num=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int v=1;v<=i;v++){
            a[i][v] = num++;
        }
    }
    for(int i=1;i<=n;i++){
        for(int v=1;v<=i;v++)
            printf("%5d",a[i][v]);
        putchar('\n');
    }
    return 0;
}
