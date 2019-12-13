#include<cstdio>
short rect[21][21]; 
bool visit[21],first=1;
int n;
void func(int j){
    if(visit[j]){
        return;
    }
    visit[j] = 1;
    if(!first)
        putchar('-');
    first = 0;
    printf("%d",j);
    bool has = false;
    for(int i = 1;i <= n;i++)
        if(rect[j][i]||rect[i][j]){
            func(i);
            has = true;
        }
}
int main(){
    scanf("%d",&n);
    for(int i = 1;i <= n;i++) visit[i] = 0;
    for(int i = 1;i <= n;i++)
        for(int j = 1;j <= n;j++)
            scanf("%hd",&rect[i][j]);
    for(int i = 1;i <= n;i++)
        if(!visit[i])
            func(i);
    return 0;
}
