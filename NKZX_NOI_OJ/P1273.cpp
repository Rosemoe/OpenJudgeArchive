#include<cstdio>
short queue[120],map[101][101],n,i,j,head,tail,visit[101],layer[101],x,y;
int main(){
    scanf("%hd%hd%hd",&n,&x,&y);
    for(i = 1;i <= n;i++)
        for(j = 1;j <= n;j++)
            scanf("%hd",&map[i][j]);
    for(i = 0;i < 101;i++)
        visit[i] = 0,layer[i] = 0;
    head = 0;tail = 0;
    queue[tail++] = x;
    visit[x] = 1;
    layer[0] = 1;
    int curr = 0;
    while(head < tail){
        int node = queue[head];
        head++;
        for(i = 1;i <= n;i++){
            if(map[node][i] && !visit[i]){
                queue[tail++] = i;
                visit[i] = 1;
                if(layer[curr+1]==0){
                    layer[curr+1]=layer[curr];
                }
                layer[curr + 1]++;
                if(i == y){
                    printf("%d",curr);
                    return 0;
                }
            }
        }
        if(layer[curr] == head){
            curr++;
        }
    }
    return 0;
} 
