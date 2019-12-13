#include<cstdio>
int v[20][20];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        for(int v1=i;v1<n;v1++)
            v[i][v1]=v[v1][i]=i+1;
    for(int i=0;i<n;i++){
        for(int v1=0;v1<n;v1++)
            printf("%5d",v[i][v1]);
        putchar('\n');
    }
    return 0;
}
