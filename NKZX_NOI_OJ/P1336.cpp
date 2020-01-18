#include<cstdio>
int v[101][101];
int main(){
    int n,i=2,x=1,y=0;
    scanf("%d",&n);
    v[0][0]=1;
    while(i<n*n){
        while(x>=0&&y<n) v[y++][x--]=i++;x++;
        if(y==n){
            y--;x++;
        }
        while(x<n&&y>=0) v[y--][x++]=i++;y++;
        if(x==n){
            x--;y++;
        }
    }
    for(int v1=0;v1<n;v1++){
        for(int v2=0;v2<n;v2++)
            printf("%5d",v[v1][v2]);
        putchar('\n');
    }
    return 0;
}
