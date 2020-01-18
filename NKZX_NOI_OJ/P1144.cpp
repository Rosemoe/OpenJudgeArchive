#include<cstdio>
int v[50],m[50],ans,r,n;
void dfs(int i,int s,int l) {
    if(l>r) return;
    if(i==n){
        if(s>ans){
            ans=s;
        }
        return;
    }
    dfs(i+1,s,l);
    dfs(i+1,s+v[i],l+m[i]);
}
int main(){
    scanf("%d%d",&n,&r);
    for(int i=0;i<n;i++) scanf("%d",&m[i]);
    for(int i=0;i<n;i++) scanf("%d",&v[i]);
    dfs(0,0,0);
    printf("%d",ans);
    return 0;
}
