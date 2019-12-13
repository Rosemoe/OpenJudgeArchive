#include<cstdio>
int v[20][20];
int main(){
    int n,i=0,x=0,y=0;
    scanf("%d",&n);x=0,y=n-1;
    while(i<n*n){
        while(x<n&&v[y][x]==0) v[y][x++]=++i;x--;y++;
        while(y<n&&v[y][x]==0) v[y++][x]=++i;y--;x--;
        while(x>-1&&v[y][x]==0) v[y][x--]=++i;x++;y--;
        while(y>-1&&v[y][x]==0) v[y--][x]=++i;x++;y++;
    }
    for(int v1=0;v1<n;v1++){
        for(int v2=0;v2<n;v2++)
            printf("%5d",v[v1][v2]);
        putchar('\n');
    }
    return 0;
}
