#include<cstdio>
int v[30],n,ans;
bool u[1001];
void dfs(int d,int s){
	if(d == n + 1){
		u[s] = 1;
		return;
	}
	dfs(d + 1,s + v[d]);
	dfs(d + 1,s);
} 
int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++)
		scanf("%d",&v[i]);
	dfs(0,0);
	for(int i = 1;i <= 1000;i++)
		if(u[i])
			ans++;
	printf("%d",ans);
	return 0;
}
