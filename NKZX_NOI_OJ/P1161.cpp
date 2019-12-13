#include<cstdio>
int w,h,ans = 0;
char p[52][52];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
void dfs(int i,int j){
    if(i < 0 || j < 0 || j >= w || i >= h || p[i][j] != '.'){
        return;
    }
    ans++;
    p[i][j] = '#';
    for(int x = 0;x < 4;x++){
        dfs(i + dx[x],j + dy[x]);
    }
}
int main(){
    scanf("%d%d",&w,&h);
    for(int i = 0;i < h;i++){
        scanf("%s",p[i]);
    }
    int x,y;
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            if(p[i][j] == '@'){
                x = i;
                y = j;
                p[x][y] = '.';
                break;
            }
        } 
    }
    dfs(x,y);
    printf("%d",ans);
    return 0;
}
