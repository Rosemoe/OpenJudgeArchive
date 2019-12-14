#include<cstdio>
int cache[1001];
int dfs(int target){
	if(cache[target] != 0){
		return cache[target];
	}
	int count = 1;
	for(int i = 1;i <= target / 2;i++){
		count += dfs(i);
	}
	cache[target] = count;
	return count;
} 
int main() {
	int v0;
	scanf("%d",&v0);
	printf("%d",dfs(v0));
	return 0;
}
