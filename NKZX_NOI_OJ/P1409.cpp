#include<cstdio>
int k[202],n,a,b;
bool visit[202];
int node[202][2];
int main(){
    scanf("%d%d%d",&n,&a,&b);
    for(int i = 1;i <= n;i++){
        scanf("%d",&k[i]);
    }
    int head = 0,len = 1;
    node[0][0] = a;
    node[0][1] = 0;
    visit[a] = 1;
    while(head < len){
        if(node[head][0] == b){
            printf("%d",node[head][1]);
            return 0;
        }
        for(int i = 0;i < 2;i++){
            int target = node[head][0] + (i == 1 ? 1 : -1) * k[node[head][0]];
            if(!visit[target] && target >= 1 && target <= n){
                node[len][0] = target;
                node[len][1] = node[head][1] + 1;
                visit[target] = 1;
                len ++;
            } 
        }
        head++;
    }
    puts("-1");
    return 0;
} 
