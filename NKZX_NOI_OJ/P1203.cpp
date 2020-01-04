#include<iostream>
#include<string>
using namespace std;
int n,ans;
string v[21];
bool st[21];
void dfs(int d) {
	if(d == n) {
		ans++;
		return;
	}
	for(int i = 0;i < n;i++) {
		if(v[d][i] == '1' && !st[i]) {
			st[i] = 1;
			dfs(d + 1);
			st[i] = 0;
		}
	}
}
int main(){
	cin >> n;
	for(int i = 0;i < n;i++)
		cin >> v[i];
	dfs(0);
	printf("%d",ans);
	return 0;
}
