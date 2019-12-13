#include<cstdio>
short v[30][30];
int main(){
    int n;
    scanf("%d",&n);
    v[0][0]=1;
    for(int v1=0;v1<n;v1++){
        for(int v2=1;v2<n-v1;v2++){
            v[v1][v2]=v[v1][v2-1]+v1+v2;
        }
        v[v1+1][0]=v[v1][0]+v1+2;
    }
    for(int i=0;i<n;i++){
        for(int v1=0;v1<n-i;v1++)
            printf("%5d",v[i][v1]);
        putchar('\n');
    }
    return 0;
}
