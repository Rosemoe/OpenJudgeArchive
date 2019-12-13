#include<cstdio>
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},a[21][21];
int main(){
    int n,i,j,k,ni,nj;
    scanf("%d",&n);
    i=1;j=n/2+1;a[i][j]=1;
    for(k=2;k<=n*n;k++){
        if(k%n==1)i++;
        else{
            i--;j++;
            if(i==0)i=n;
            if(j==n+1)j=1;
        }
        a[i][j]=k;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            printf("%5d",a[i][j]);
        putchar('\n');
    }
    return 0;
}
