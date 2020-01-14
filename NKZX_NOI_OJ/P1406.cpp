#include<cstdio>
bool state[50],res[50];
double v[50],m[50],ans,r,n;
void dfs(int i,double s,double l) {
    if(l>r) return;
    if(i==n){
        if(s>ans){
            ans=s;
            for(int i=0;i<n;i++) res[i]=state[i];
        }
        return;
    }
    dfs(i+1,s,l);
    state[i] = 1;
    dfs(i+1,s+v[i],l+m[i]);
    state[i] = 0;
}
int main(){
    scanf("%lf%lf",&r,&n);
    for(int i=0;i<n;i++) scanf("%lf%lf",&m[i],&v[i]);
    dfs(0,0,0);
    printf("%lld\n",(long long)ans);
    for(int i=0;i<n;i++)
        if(res[i]) printf("%d ",i+1);
    return 0;
}
