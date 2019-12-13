#include <cstdio>
bool state[101][101];
int n,m,ans=0;
int queue[10010][2];
const int dx[4] = {0,0,1,-1},dy[4] = {1,-1,0,0};
inline bool checkIndex(const int i,const int j){
    return (i > 0 && j > 0 && i <= n && j <= m);
}
void clean(int i,int j){
    int head = 0;
    int tail = 1;
    queue[0][0] = i;
    queue[0][1] = j;
    state[i][j] = 0;
    while(head < tail){
        int x = queue[head][0];
        int y = queue[head][1];
        for(int k = 0;k < 4;k++){
            int nx = x + dx[k];
            int ny = y + dy[k];
            if(checkIndex(nx,ny) && state[nx][ny]){
                queue[tail][0] = nx;
                queue[tail][1] = ny;
                state[nx][ny] = 0;
                tail++;
            }
        }
        head++;
    }
}
int main(){
    scanf("%d%d",&n,&m);
    int c;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            scanf("%d",&c);
            state[i][j] = c;
        }
    } 
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            if(state[i][j]){
                clean(i,j);
                ans++;
            }
        }
    }
    printf("%d",ans);
    return 0;
} 
