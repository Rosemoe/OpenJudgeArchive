#include<cstdio>
int a[20][20];
int main(){
    int n,num=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        a[i][0] = a[i][i] = 1;
        for(int v=1;v<i;v++){
            a[i][v] = a[i-1][v-1] + a[i-1][v];
        }
    }
    for(int i=0;i<n;i++){
        for(int v=0;v<=i;v++)
            printf("%d ",a[i][v]);
        putchar('\n');
    }
    return 0;
}
