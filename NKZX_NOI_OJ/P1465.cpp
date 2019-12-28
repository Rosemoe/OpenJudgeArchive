#include<cstdio>
#include<vector>
using namespace std;
struct Node{
    vector<int> edge;
    int depth;
    int size;
}nodes[1001];
int dfs0(int k,int f,int depth){
    Node *n = &nodes[k];
    n->depth = depth;
    int size = 1;
    for(int i = 0;i < n->edge.size();i++) {
        int e = n->edge.at(i);
        if(e != f){
            size += dfs0(e,k,depth + 1);
        }
    }
    n->size = size;
    return size;
}
int main(){
    int n,x,y;
    scanf("%d",&n);
    for(int i = 1;i < n;i++){
        scanf("%d%d",&x,&y);
        nodes[x].edge.push_back(y);
        nodes[y].edge.push_back(x);
    }
    nodes[1].size = dfs0(1,0,1);
    for(int i = 1;i <= n;i++){
        printf("%d %d\n",nodes[i].depth,nodes[i].size);
    }
    return 0;
}
