#include<cstdio>
using namespace std;
struct Node{
    int l,r;
}nodes[1001000];
int max(int a,int b) {
	return a > b ? a : b;
}
int dfs(int x) {
	if (x == 0) {
		return 0;
	}
	return max(dfs(nodes[x].l), dfs(nodes[x].r)) + 1;
}
int main(){
    int n,x,y;
    scanf("%d",&n);
    for(int i = 1;i <= n;i++){
        scanf("%d%d",&nodes[i].l,&nodes[i].r);
    }
    printf("%d", dfs(1));
    return 0;
}
