#include<cstdio>
short queue[120],map[101][101],n,i,j,head,tail,visit[101],first;
int main(){
    scanf("%hd",&n);
    for(i = 1;i <= n;i++)
        for(j = 1;j <= n;j++)
            scanf("%hd",&map[i][j]);
    for(i = 0;i < 101;i++)
        visit[i] = 0;
    head = 0;tail = 0;first = 1;
    queue[tail++] = 1;
    visit[1] = 1;
    while(head < tail){
        if(head == tail) break;
        int node = queue[head];
         
        if(first) first = 0;
        else putchar('-');
        printf("%d",node);
         
        head++;
        for(i = 1;i <= n;i++){
            if(map[node][i] && !visit[i]){
                queue[tail++] = i;
                visit[i] = 1;
            }
        }
    }
    return 0;
} 
