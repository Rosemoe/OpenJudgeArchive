#include<cstdio>
#include<vector>
using namespace std;
struct Node{
    vector<int> edge;
    int c;
}nodes[1001];
bool vis[1001];
void dfs(int k,int f){
    vis[k] = 1;
    Node *n = &nodes[k];
    for(int i = 0;i < n->edge.size();i++){
        int e = n->edge.at(i);
        if(e != f && !vis[e]) {
            dfs(e,k);
            n->c++;
        }
    }
}
int main(){
    int n,x,y;
    scanf("%d",&n);
    for(int i = 1;i < n;i++){
        scanf("%d%d",&x,&y);
        nodes[x].edge.push_back(y);
        nodes[y].edge.push_back(x);
    }
    dfs(1,0);
    for(int i = 1;i <= n;i++){
        printf("%d ",nodes[i].c);
    }
    return 0;
}
