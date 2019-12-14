#include<cstdio>
int n,k;
int dfs(int rest,int idx,int pre){
    if(idx == k - 1) return (rest >= pre ? 1 : 0);
    int count = 0;
    for(int i = 1;i < rest;i++){
        if(i >= pre){
            count += dfs(rest - i,idx + 1,i);
        }
    }
    return count;
} 
int main() {
    scanf("%d%d",&n,&k);
    printf("%d",dfs(n,0,0));
    return 0;
}
